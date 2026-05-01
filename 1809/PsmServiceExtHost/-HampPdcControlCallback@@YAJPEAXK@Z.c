/*
 * XREFs of ?HampPdcControlCallback@@YAJPEAXK@Z @ 0x18006DBA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006DE9C (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampPdcControlCallback(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  DWORD v4; // ebx
  int v6; // [rsp+30h] [rbp-E8h] BYREF
  char v7[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  int *v9; // [rsp+F0h] [rbp-28h]
  int v10; // [rsp+F8h] [rbp-20h]
  int v11; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C022, 0LL, 0LL, 2u, &pData);
  if ( a2 < 0 )
    HampPdcExitPlmPhase(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v11 = 0;
    v9 = &v6;
    v6 = a2;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C0EA, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
