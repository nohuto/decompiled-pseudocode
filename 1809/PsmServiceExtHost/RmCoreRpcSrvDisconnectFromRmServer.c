/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x18005AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18005B040 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(struct _RM_ACTIVATOR **a1)
{
  struct _RM_ACTIVATOR *v2; // rbx
  DWORD v3; // ebx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  RmpAcquireGlobalLock();
  v2 = *a1;
  RmpActivatorCleanup(*a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  RmpReleaseGlobalLock();
  *a1 = 0LL;
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, 0LL);
  }
  return 0LL;
}
