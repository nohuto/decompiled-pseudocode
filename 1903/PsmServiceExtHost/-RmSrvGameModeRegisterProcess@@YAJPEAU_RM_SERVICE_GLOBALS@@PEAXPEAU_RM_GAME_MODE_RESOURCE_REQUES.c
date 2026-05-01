/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180067198
 * Callers:
 *     RmGameModeRSrvRegisterProcess @ 0x180067CC0 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeSrvRegisterProcess @ 0x180067DC0 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006BB64 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006C25C (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
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
  unsigned int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  ULONG *p_ReturnLength; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  int *v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  char *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  int *v35; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  int *v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  int *v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  char *v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  int *v43; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  int *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v48; // [rsp+1C0h] [rbp+C0h]
  __int64 v49; // [rsp+1C8h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  LPCWSTR pszPath; // [rsp+1F8h] [rbp+F8h]

  v4 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v23, (struct _CEM_LOCK_TRACKER *)v25);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v9, &unk_180093099, 0LL, 0LL, 2u, &pData);
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
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL) )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v28 = 4LL;
      v27 = &v15;
      ProcessId = GetProcessId(a2);
      v30 = 4LL;
      ReturnLength = ProcessId;
      v32 = 4LL;
      p_ReturnLength = &ReturnLength;
      v17 = *((_DWORD *)a3 + 1);
      v31 = &v17;
      v33 = (char *)a3 + 8;
      v18 = *((_DWORD *)a3 + 4);
      v35 = &v18;
      v19 = *((_DWORD *)a3 + 5);
      v37 = &v19;
      v20 = *((_DWORD *)a3 + 6);
      v39 = &v20;
      v41 = (char *)a3 + 36;
      v21 = *((_DWORD *)a3 + 8);
      v43 = &v21;
      v22 = *((_DWORD *)a3 + 7);
      v45 = &v22;
      v34 = 8LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 1LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateWsz(&pDesc, FileNameW);
      v24 = 0x1000000LL;
      v48 = &v24;
      v49 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009370D, 0LL, 0LL, 0xEu, &v26);
    }
  }
  if ( v23 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v13, 0LL);
    }
  }
  return v15;
}
