/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x1800594B0
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x180054ED0 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800448A0 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18005D810 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  struct _RM_CPU_SET_CLIENT_CONTEXT *v6; // rcx
  DWORD v7; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_CLIENT_CONTEXT *v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  struct _RM_CPU_SET_CLIENT_CONTEXT **v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]

  RmpUtilCheckStartLockTracking(v11, (struct _CEM_LOCK_TRACKER *)v12);
  v10 = 0LL;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800858F6, 0LL, 0LL, 2u, &pData);
  RmpAcquireGlobalLock();
  v9 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680), a2, &v10);
  if ( v9 < 0 )
  {
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
    v9 = 0;
    *a3 = v10;
  }
  if ( v6 )
    RmpCpuSetManagerReleaseClientContext(v6);
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v9;
    v17 = &v10;
    v15 = 4;
    LODWORD(v10) = a2;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008569E, 0LL, 0LL, 4u, &pData);
  }
  if ( v11[0] )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return (unsigned int)v9;
}
