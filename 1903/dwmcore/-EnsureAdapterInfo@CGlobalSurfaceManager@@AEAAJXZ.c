/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CED90
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800E2518 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800CAB3C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800CEE74 (-Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManage.c)
 *     ?ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ @ 0x1800D3CC4 (-ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  CGlobalSurfaceManager::AdapterInfo *v4; // rbx
  __int64 v5; // rsi
  struct CDXGIAdapterLimited *v6; // r14
  int v7; // eax
  __int64 v8; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  CGlobalSurfaceManager::AdapterInfo *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( !LOBYTE(this[13].SpinCount) )
  {
    v11 = 0LL;
    v12 = this + 11;
    EnterCriticalSection(this + 11);
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)&v11, this[12].DebugInfo);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    v4 = v11;
    if ( v11 )
    {
      v5 = 0LL;
      if ( *((_DWORD *)v11 + 22) )
      {
        do
        {
          v6 = *(struct CDXGIAdapterLimited **)(*((_QWORD *)v4 + 8) + 8 * v5);
          v7 = DynArrayImpl<0>::AddMultiple((__int64)&this[12].LockCount, 0x10u, 1, &v11);
          if ( v7 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v7, retaddr, v8);
          CGlobalSurfaceManager::AdapterInfo::Construct(v11, v6, (struct CD3DDeviceManager *)&g_D3DDeviceManager);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *((_DWORD *)v4 + 22) );
      }
      LOBYTE(this[13].SpinCount) = 1;
      (*(void (__fastcall **)(CGlobalSurfaceManager::AdapterInfo *))(*(_QWORD *)v4 + 8LL))(v4);
      return 0;
    }
    else
    {
      v1 = -2003304291;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x8898009D, 0x208u, 0LL);
      CGlobalSurfaceManager::ReleaseAdapterInfo((CGlobalSurfaceManager *)this);
    }
  }
  return v1;
}
