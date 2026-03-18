/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180097AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx
  CThreadContext *Value; // rbx
  CThreadContext *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = *((_QWORD *)this + 17);
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
        v9 = (CThreadContext *)operator new(0x138uLL);
        if ( v9 )
          Value = CThreadContext::CThreadContext(v9);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v11);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 19) >= *((_DWORD *)Value + 18) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 10);
        ++*((_DWORD *)Value + 19);
        *((_QWORD *)Value + 10) = this;
      }
    }
  }
  return this;
}
