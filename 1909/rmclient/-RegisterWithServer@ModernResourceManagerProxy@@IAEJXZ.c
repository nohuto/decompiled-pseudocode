/*
 * XREFs of ?RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ @ 0x10008F50
 * Callers:
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x10008038 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QAEJPAW4AppMemoryUsageLevel@System@Windows@@@Z.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QAEJP6GXPAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6GX_K2@Z@Z @ 0x10008370 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QAEJP6GXPAU_RM_COMMIT_LEVEL_CHANGE_PAY.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ModernResourceManagerProxy::RegisterWithServer(ModernResourceManagerProxy *this)
{
  char *v2; // edi
  int Simple; // ebx
  int v5; // ebx

  v2 = (char *)this + 36;
  if ( *((_DWORD *)this + 9) )
    return 0;
  Simple = _NdrClientCall4(&stru_100015E8, &byte_10002C02, *((_DWORD *)this + 2), (char *)this + 20, (char *)this + 28).Simple;
  if ( Simple >= 0 )
  {
    v5 = RtlSubscribeWnfStateChangeNotification(
           v2,
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6),
           0,
           ModernResourceManagerProxy::CommitMemoryLevelChangeCallback,
           this,
           0,
           0,
           0);
    if ( v5 >= 0 )
    {
      v5 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 40,
             *((_DWORD *)this + 7),
             *((_DWORD *)this + 8),
             0,
             ModernResourceManagerProxy::CommitMemoryLimitChangeCallback,
             this,
             0,
             0,
             0);
      if ( v5 >= 0 )
        return 0;
    }
    Simple = (unsigned int)&_ImageBase | v5;
    if ( Simple >= 0 )
      return Simple;
  }
  if ( *((_DWORD *)this + 9) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(*((_DWORD *)this + 9));
    *((_DWORD *)this + 9) = 0;
  }
  if ( *((_DWORD *)this + 10) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(*((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
  }
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  return Simple;
}
