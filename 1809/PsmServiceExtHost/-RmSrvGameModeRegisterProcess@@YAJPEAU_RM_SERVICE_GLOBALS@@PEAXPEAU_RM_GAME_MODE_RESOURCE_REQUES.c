/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x18005A420
 * Callers:
 *     RmGameModeRSrvRegisterProcess @ 0x18005AF10 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeSrvRegisterProcess @ 0x18005B010 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18005EBE0 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18005F2C0 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rdi
  UCHAR v8; // dl
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  const WCHAR *FileNameW; // rdi
  DWORD ProcessId; // eax
  DWORD v13; // ebx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  ULONG *p_ReturnLength; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+128h] [rbp+28h]
  int *v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h]
  char *v32; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+148h] [rbp+48h]
  int *v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+158h] [rbp+58h]
  int *v36; // [rsp+160h] [rbp+60h]
  __int64 v37; // [rsp+168h] [rbp+68h]
  int *v38; // [rsp+170h] [rbp+70h]
  __int64 v39; // [rsp+178h] [rbp+78h]
  char *v40; // [rsp+180h] [rbp+80h]
  __int64 v41; // [rsp+188h] [rbp+88h]
  int *v42; // [rsp+190h] [rbp+90h]
  __int64 v43; // [rsp+198h] [rbp+98h]
  int *v44; // [rsp+1A0h] [rbp+A0h]
  __int64 v45; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  LPCWSTR pszPath; // [rsp+1E8h] [rbp+E8h]

  v4 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(v23, (struct _CEM_LOCK_TRACKER *)v24);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite(v9, &unk_180085219, 0LL, 0LL, 2u, &pData);
  if ( a4 )
  {
    v15 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v4, a3) )
  {
    v10 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1456), a2, a3);
    if ( v10 >= 0 )
      v10 = 0;
    v15 = v10;
  }
  else
  {
    v15 = -1073741584;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v8, 0LL) )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
    {
      v27 = 4LL;
      v26 = &v15;
      ProcessId = GetProcessId(a2);
      v29 = 4LL;
      ReturnLength = ProcessId;
      v31 = 4LL;
      p_ReturnLength = &ReturnLength;
      v17 = *((_DWORD *)a3 + 1);
      v30 = &v17;
      v32 = (char *)a3 + 8;
      v18 = *((_DWORD *)a3 + 4);
      v34 = &v18;
      v19 = *((_DWORD *)a3 + 5);
      v36 = &v19;
      v20 = *((_DWORD *)a3 + 6);
      v38 = &v20;
      v40 = (char *)a3 + 36;
      v21 = *((_DWORD *)a3 + 8);
      v42 = &v21;
      v22 = *((_DWORD *)a3 + 7);
      v44 = &v22;
      v33 = 8LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 1LL;
      v43 = 4LL;
      v45 = 4LL;
      TlgCreateWsz(&pDesc, FileNameW);
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085920, 0LL, 0LL, 0xDu, &v25);
    }
  }
  if ( v23[0] )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return v15;
}
