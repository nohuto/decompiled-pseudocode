/*
 * XREFs of ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003F00
 * Callers:
 *     ?GetExpectedMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x18000165C (-GetExpectedMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180001720 (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000246C (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003A00 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003B00 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterWithServer(ModernResourceManagerProxy *this)
{
  char *v2; // rsi
  int Pointer; // ebx
  int v5; // eax
  int v6; // [rsp+40h] [rbp-28h]

  v2 = (char *)this + 56;
  if ( *((_QWORD *)this + 7) )
    return 0;
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&stru_180013708,
                            0,
                            0LL,
                            *((_QWORD *)this + 2),
                            (char *)this + 40,
                            (char *)this + 48).Pointer;
  if ( Pointer >= 0 )
  {
    v5 = RtlSubscribeWnfStateChangeNotification(
           v2,
           *((_QWORD *)this + 5),
           0LL,
           ModernResourceManagerProxy::CommitMemoryLevelChangeCallback,
           this,
           0LL,
           0,
           0,
           Pointer);
    if ( v5 >= 0 )
    {
      v5 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 64,
             *((_QWORD *)this + 6),
             0LL,
             ModernResourceManagerProxy::CommitMemoryLimitChangeCallback,
             this,
             0LL,
             0,
             0,
             v6);
      if ( v5 >= 0 )
        return 0;
    }
    Pointer = v5 | 0x10000000;
  }
  if ( *((_QWORD *)this + 7) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return (unsigned int)Pointer;
}
