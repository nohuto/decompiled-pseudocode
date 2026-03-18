/*
 * XREFs of ??_GCDirtyRegion@@MEAAPEAXI@Z @ 0x18005CA50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::`scalar deleting destructor'(CDirtyRegion *this, char a2)
{
  char *v2; // rbx
  char **v4; // rcx
  char **v6; // rax
  _QWORD *v7; // rcx
  CThreadContext *Value; // rbx
  __int64 v10; // rax
  CThreadContext *v11; // rax
  unsigned int v12; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 1280;
  v4 = (char **)*((_QWORD *)this + 161);
  if ( *v4 != v2 || (v6 = (char **)v4[1], *v6 != (char *)v4) )
LABEL_14:
    __fastfail(3u);
  *((_QWORD *)v2 + 1) = v6;
  *v6 = v2;
  while ( 1 )
  {
    v7 = *(_QWORD **)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( (char *)v7[1] != v2 )
      goto LABEL_14;
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_14;
    *(_QWORD *)v2 = v10;
    *(_QWORD *)(v10 + 8) = v2;
    WPF::ProcessHeapImpl::Free(v7);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v11 = (CThreadContext *)operator new(0x128uLL);
        if ( v11 )
          Value = CThreadContext::CThreadContext(v11);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 67) >= *((_DWORD *)Value + 66) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 34);
        ++*((_DWORD *)Value + 67);
        *((_QWORD *)Value + 34) = this;
      }
    }
  }
  return this;
}
