/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18005A620
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx
  CThreadContext *Value; // rbx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
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
        v9 = (CThreadContext *)operator new(0x128uLL);
        if ( v9 )
          Value = CThreadContext::CThreadContext(v9);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 15) >= *((_DWORD *)Value + 14) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 8);
        ++*((_DWORD *)Value + 15);
        *((_QWORD *)Value + 8) = this;
      }
    }
  }
  return this;
}
