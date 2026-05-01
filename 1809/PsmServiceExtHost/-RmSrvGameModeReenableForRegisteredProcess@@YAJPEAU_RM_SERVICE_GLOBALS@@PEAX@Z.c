/*
 * XREFs of ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180059FDC
 * Callers:
 *     RmGameModeRSrvReenableForRegisteredProcess @ 0x18005AE10 (RmGameModeRSrvReenableForRegisteredProcess.c)
 *     RmGameModeSrvReenableForRegisteredProcess @ 0x18005AFF0 (RmGameModeSrvReenableForRegisteredProcess.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18005EFDC (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 */

__int64 __fastcall RmSrvGameModeReenableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  DWORD ProcessId; // eax
  DWORD v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v8; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v9; // [rsp+38h] [rbp-C8h] BYREF
  char v10[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v12; // [rsp+F0h] [rbp-10h]
  int v13; // [rsp+F8h] [rbp-8h]
  int v14; // [rsp+FCh] [rbp-4h]
  DWORD *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v9, (struct _CEM_LOCK_TRACKER *)v10);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800853D8, 0LL, 0LL, 2u, &pData);
  v7 = RmpGameModeReenableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 1456), a2);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v14 = 0;
    v12 = &v7;
    v13 = 4;
    ProcessId = GetProcessId(a2);
    v17 = 0;
    v8 = ProcessId;
    v15 = &v8;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800857C8, 0LL, 0LL, 4u, &pData);
  }
  if ( v9 )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v5, 0LL);
    }
  }
  return v7;
}
