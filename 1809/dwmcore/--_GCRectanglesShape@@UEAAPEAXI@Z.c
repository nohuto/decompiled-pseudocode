/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180045720
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  _QWORD *Value; // rbx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  CThreadContext *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 16LL);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 != *((void **)this + 3) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v9 = (CThreadContext *)operator new(0x128uLL);
        if ( !v9 || (v11 = CThreadContext::CThreadContext(v9), (Value = v11) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
      }
      if ( *((_DWORD *)Value + 3) >= *((_DWORD *)Value + 2) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = Value[2];
        ++*((_DWORD *)Value + 3);
        Value[2] = this;
      }
    }
  }
  return this;
}
