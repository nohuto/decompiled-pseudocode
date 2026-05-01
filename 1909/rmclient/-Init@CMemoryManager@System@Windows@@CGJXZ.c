/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UAGJPAW4AppMemoryUsageLevel@23@@Z @ 0x10008000 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UAGJPAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x100086A0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAUIInspectab.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x10009230 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAVAppMem.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x1000C210 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAUIInspectab.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJ_KPAE@Z @ 0x10011160 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJ_KPAE@Z.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QAEJP6GXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6GX_K2@Z@Z @ 0x10008370 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QAEJP6GXPAU_RM_COMMIT_LEVEL_CHANGE_PAY.c)
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     ??0ModernResourceManagerProxy@@QAE@XZ @ 0x1000B6A0 (--0ModernResourceManagerProxy@@QAE@XZ.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 */

int __stdcall Windows::System::CMemoryManager::Init()
{
  ModernResourceManagerProxy *v0; // esi
  signed int v1; // edi
  ModernResourceManagerProxy *v3; // eax
  void (__stdcall *v4)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // [esp-8h] [ebp-14h]
  void (__stdcall *v5)(unsigned __int64, unsigned __int64); // [esp-4h] [ebp-10h]

  v0 = 0;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v1 = 0;
    goto LABEL_3;
  }
  v3 = (ModernResourceManagerProxy *)operator new(0x50u);
  if ( !v3 )
  {
    v0 = 0;
    goto LABEL_14;
  }
  v0 = ModernResourceManagerProxy::ModernResourceManagerProxy(v3);
  if ( !v0 )
  {
LABEL_14:
    v1 = -2147024882;
    goto LABEL_3;
  }
  v1 = (unsigned int)&_ImageBase | CempRpcBindToServer(dword_10002DE0);
  if ( v1 >= 0 )
  {
    v1 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v0, v4, v5);
    if ( v1 >= 0 )
    {
      if ( Windows::System::CMemoryManager::s_pProxy )
        (*(void (__thiscall **)(_DWORD, ModernResourceManagerProxy *))(*(_DWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                     + 8))(
          *(_DWORD *)(*(_DWORD *)Windows::System::CMemoryManager::s_pProxy + 8),
          Windows::System::CMemoryManager::s_pProxy);
      Windows::System::CMemoryManager::s_pProxy = v0;
      v0 = 0;
      v1 = 0;
    }
  }
LABEL_3:
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v0 )
    (*(void (__thiscall **)(_DWORD, ModernResourceManagerProxy *))(*(_DWORD *)v0 + 8))(
      *(_DWORD *)(*(_DWORD *)v0 + 8),
      v0);
  return v1;
}
