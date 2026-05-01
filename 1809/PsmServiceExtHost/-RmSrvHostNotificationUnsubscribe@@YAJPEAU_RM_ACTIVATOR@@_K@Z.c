/*
 * XREFs of ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003AADC
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x18003AAD0 (RmCoreRpcSrvUnregisterActivityHostCallbacks.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003AC5C (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationUnsubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  int v3; // eax
  DWORD v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v8; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v12; // [rsp+100h] [rbp+0h]
  __int64 v13; // [rsp+108h] [rbp+8h]
  int *v14; // [rsp+110h] [rbp+10h]
  __int64 v15; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v16; // [rsp+120h] [rbp+20h]
  __int64 v17; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v9 = a2;
  RmpUtilCheckStartLockTracking(&v8, (struct _CEM_LOCK_TRACKER *)v10);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008571B, 0LL, 0LL, 2u, &pData);
  RmpAcquireGlobalLock();
  v3 = RmpActivatorUnsubscribeFromNotifications(a1, v9);
  if ( v3 >= 0 )
    v3 = 0;
  v6 = v3;
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v13 = 4LL;
    v12 = &v6;
    v7 = *((_DWORD *)a1 + 14);
    v14 = &v7;
    v16 = &v9;
    v15 = 4LL;
    v17 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085877, 0LL, 0LL, 5u, &v11);
  }
  if ( v8 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v4, 0LL);
    }
  }
  return v6;
}
