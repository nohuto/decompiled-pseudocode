/*
 * XREFs of ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x18003B520
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostDelayedEnforcementTimerCallback(void *a1, void *a2)
{
  int v3; // r9d
  int v4; // r10d
  DWORD v5; // ebx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v8[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v11; // [rsp+100h] [rbp+0h]
  int v12; // [rsp+108h] [rbp+8h]
  int v13; // [rsp+10Ch] [rbp+Ch]
  __int64 *v14; // [rsp+110h] [rbp+10h]
  int v15; // [rsp+118h] [rbp+18h]
  int v16; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B5FE, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  *((_QWORD *)a2 + 79) |= 0x80000000000000uLL;
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
    v13 = 0;
    v3 = *((_DWORD *)a2 + 140);
    v16 = 0;
    v11 = &v6;
    v7 = *((_QWORD *)a2 - 4);
    v14 = &v7;
    v6 = v3;
    v12 = 4;
    v15 = v4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AF55, 0LL, 0LL, 5u, &v9);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
}
