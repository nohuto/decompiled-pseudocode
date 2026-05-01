/*
 * XREFs of ?HampPdcControlCallback@@YAJPEAXK@Z @ 0x18007B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007BBBC (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
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
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099F18, 0LL, 0LL, 2u, &pData);
  if ( a2 < 0 )
    HampPdcExitPlmPhase(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v4, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v11 = 0;
    v9 = &v6;
    v6 = a2;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009A022, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
