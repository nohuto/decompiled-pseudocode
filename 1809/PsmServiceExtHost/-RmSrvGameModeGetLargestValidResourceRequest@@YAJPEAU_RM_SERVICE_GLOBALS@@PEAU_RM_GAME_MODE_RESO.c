/*
 * XREFs of ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180059DA8
 * Callers:
 *     RmGameModeSrvGetLargestValidResourceRequest @ 0x18005AFE0 (RmGameModeSrvGetLargestValidResourceRequest.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18005C6FC (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

__int64 __fastcall RmSrvGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  DWORD v7; // ebx
  unsigned int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v14[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v15[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int *v17; // [rsp+108h] [rbp+0h]
  int v18; // [rsp+110h] [rbp+8h]
  int v19; // [rsp+114h] [rbp+Ch]
  int *v20; // [rsp+118h] [rbp+10h]
  int v21; // [rsp+120h] [rbp+18h]
  int v22; // [rsp+124h] [rbp+1Ch]
  char *v23; // [rsp+128h] [rbp+20h]
  int v24; // [rsp+130h] [rbp+28h]
  int v25; // [rsp+134h] [rbp+2Ch]
  int *v26; // [rsp+138h] [rbp+30h]
  int v27; // [rsp+140h] [rbp+38h]
  int v28; // [rsp+144h] [rbp+3Ch]
  int *v29; // [rsp+148h] [rbp+40h]
  int v30; // [rsp+150h] [rbp+48h]
  int v31; // [rsp+154h] [rbp+4Ch]
  int *v32; // [rsp+158h] [rbp+50h]
  int v33; // [rsp+160h] [rbp+58h]
  int v34; // [rsp+164h] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(v14, (struct _CEM_LOCK_TRACKER *)v15);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085C62, 0LL, 0LL, 2u, &pData);
  memset_0(a2, 0, 0x28uLL);
  *(_DWORD *)a2 = 5;
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 50;
  *((_DWORD *)a2 + 6) = 30;
  *((_BYTE *)a2 + 36) = 0;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)v2 + 680),
    0,
    (unsigned int *)a2 + 1,
    (unsigned __int64 *)a2 + 1);
  RmpReleaseGlobalLock();
  v9 = 0;
  *((_DWORD *)a2 + 4) = 10;
  *((_BYTE *)a2 + 36) = 3;
  *((_DWORD *)a2 + 5) = 70;
  *((_DWORD *)a2 + 6) = 30;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v17 = &v9;
    v10 = *((_DWORD *)a2 + 1);
    v20 = &v10;
    v26 = &v11;
    v29 = &v12;
    v32 = &v13;
    v18 = 4;
    v21 = 4;
    v23 = (char *)a2 + 8;
    v24 = v4 - 2;
    v11 = v4;
    v27 = 4;
    v12 = v6;
    v30 = 4;
    v13 = v5;
    v33 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085BB4, 0LL, 0LL, v4 - 2, &v16);
  }
  if ( v14[0] )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return v9;
}
