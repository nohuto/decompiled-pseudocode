/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003810
 * Callers:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180001558 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x1800023E0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002430 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002570 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800029A0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000E1C0 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003A00 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180004010 (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180009984 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::System::CMemoryManager::Init(void)
{
  ModernResourceManagerProxy *v0; // rbx
  int v1; // edi
  ModernResourceManagerProxy *v3; // rax
  int v4; // eax
  void (*v5)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v6)(unsigned __int64, unsigned __int64); // r8

  v0 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v1 = 0;
  }
  else
  {
    v3 = (ModernResourceManagerProxy *)operator new(0x70uLL);
    if ( v3 && (v0 = ModernResourceManagerProxy::ModernResourceManagerProxy(v3)) != 0LL )
    {
      v4 = CempRpcBindToServer(&unk_1800134E0);
      v1 = v4 | 0x10000000;
      if ( v4 >= 0 )
      {
        v1 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v0, v5, v6);
        if ( v1 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v0;
          v0 = 0LL;
          v1 = 0;
        }
      }
    }
    else
    {
      v1 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v0 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v0 + 16LL))(v0);
  return (unsigned int)v1;
}
