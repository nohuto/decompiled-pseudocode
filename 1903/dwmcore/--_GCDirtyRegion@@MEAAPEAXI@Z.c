/*
 * XREFs of ??_GCDirtyRegion@@MEAAPEAXI@Z @ 0x1800B97B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
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
  __int64 v12; // rcx
  __int64 v13; // r8
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
    operator delete(v7, 0x610uLL);
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
        v11 = (CThreadContext *)operator new(0x138uLL);
        if ( v11 )
          Value = CThreadContext::CThreadContext(v11);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v13);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 71) >= *((_DWORD *)Value + 70) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 36);
        ++*((_DWORD *)Value + 71);
        *((_QWORD *)Value + 36) = this;
      }
    }
  }
  return this;
}
