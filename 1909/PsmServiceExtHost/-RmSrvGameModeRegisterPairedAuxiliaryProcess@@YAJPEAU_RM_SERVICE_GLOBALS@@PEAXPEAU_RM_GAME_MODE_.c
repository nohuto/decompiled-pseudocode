/*
 * XREFs of ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x180066E90
 * Callers:
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x180067C10 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeSrvRegisterPairedAuxiliaryProcess @ 0x180067DB0 (RmGameModeSrvRegisterPairedAuxiliaryProcess.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006BB64 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006C038 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 */

__int64 __fastcall RmSrvGameModeRegisterPairedAuxiliaryProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4,
        unsigned int a5)
{
  struct _RM_SERVICE_GLOBALS *v5; // rdi
  UCHAR v9; // dl
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r10d
  unsigned int v12; // r10d
  const WCHAR *FileNameW; // r15
  const WCHAR *v14; // rdi
  DWORD ProcessId; // eax
  DWORD v16; // eax
  DWORD v17; // ebx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  char v26[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+E0h] [rbp-20h] BYREF
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  ULONG *p_ReturnLength; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  DWORD *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  char *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v42; // [rsp+180h] [rbp+80h]
  __int64 v43; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  char ProcessInformation[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  LPCWSTR pszPath; // [rsp+1B8h] [rbp+B8h]
  char v47[8]; // [rsp+3E0h] [rbp+2E0h] BYREF
  LPCWSTR v48; // [rsp+3E8h] [rbp+2E8h]

  v5 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v24, (struct _CEM_LOCK_TRACKER *)v26);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v10, &unk_180093899, 0LL, 0LL, 2u, &pData);
  if ( a5 )
  {
    v11 = -1073741583;
LABEL_11:
    v19 = v11;
    goto LABEL_12;
  }
  if ( !RmpGameModeIsResourceRequestValid(v5, a3) || (*((_DWORD *)a3 + 8) & 5) != 1 )
  {
    v11 = -1073741584;
    goto LABEL_11;
  }
  v19 = RmpGameModeRegisterPairedProcess((struct _RM_SERVICE_GLOBALS *)((char *)v5 + 1456), a2, a3, a4);
  if ( v19 >= 0 )
    v19 = 0;
LABEL_12:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v9, 0LL) )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    ReturnLength = 0;
    v14 = 0LL;
    if ( NtQueryInformationProcess(a4, ProcessImageFileNameWin32, v47, 0x228u, &ReturnLength) >= 0 )
      v14 = PathFindFileNameW(v48);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v29 = 4LL;
      v28 = &v19;
      ProcessId = GetProcessId(a2);
      v31 = 4LL;
      ReturnLength = ProcessId;
      p_ReturnLength = &ReturnLength;
      v16 = GetProcessId(a4);
      v33 = 4LL;
      v21 = v16;
      v35 = 1LL;
      v32 = &v21;
      v34 = (char *)a3 + 36;
      v22 = *((_DWORD *)a3 + 8);
      v36 = &v22;
      v23 = *((_DWORD *)a3 + 7);
      v38 = &v23;
      v37 = 4LL;
      v39 = 4LL;
      TlgCreateWsz(&pDesc, FileNameW);
      TlgCreateWsz(&v41, v14);
      v25 = 0x1000000LL;
      v42 = &v25;
      v43 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800933CD, 0LL, 0LL, 0xBu, &v27);
    }
    v12 = v19;
  }
  if ( v24 )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v17, 0LL);
      return (unsigned int)v19;
    }
  }
  return v12;
}
