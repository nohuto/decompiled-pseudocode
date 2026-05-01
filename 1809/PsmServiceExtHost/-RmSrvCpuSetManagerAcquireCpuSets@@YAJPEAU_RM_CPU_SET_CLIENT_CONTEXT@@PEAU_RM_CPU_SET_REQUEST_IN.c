/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180059260
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180054E30 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005BCD0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D76C (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  UCHAR v8; // dl
  struct _RM_CPU_SET_ALLOCATION *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  DWORD v12; // ebx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_ALLOCATION *v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v17; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  int *v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+138h] [rbp+38h]
  ULONG *v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  ULONG *v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  struct _RM_CPU_SET_ALLOCATION **v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  RmpUtilCheckStartLockTracking(&v19, (struct _CEM_LOCK_TRACKER *)v21);
  v20 = -1LL;
  v15 = 0LL;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite(v7, &unk_1800851EA, 0LL, 0LL, 2u, &pData);
  RtlInitializeBitMap((PRTL_BITMAP)&pData, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 8 && RtlNumberOfSetBits((PRTL_BITMAP)&pData) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v14 = RmpCpuSetManagerAcquireCpuSets(a1, (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2, 0, &v15);
    if ( v14 < 0 )
    {
      v9 = v15;
    }
    else
    {
      v20 = *((_QWORD *)v15 + 4);
      *a3 = v20;
      v9 = 0LL;
      v14 = 0;
    }
    if ( v9 )
      RmpCpuSetManagerReleaseAllocation(v9);
    RmpReleaseGlobalLock();
  }
  else
  {
    v14 = -1073741584;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v8, 0LL)
    && dword_18009B0B0 > 4u
    && TlgKeywordOn(v10, 9uLL) )
  {
    v24 = 4LL;
    v23 = &v14;
    v25 = &v20;
    v16 = *((_DWORD *)a1 + 14);
    v27 = &v16;
    v17 = a2[42];
    v29 = &v17;
    v18 = a2[43];
    v31 = &v18;
    LODWORD(v15) = *a2;
    v33 = &v15;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    TlgWrite(v11, &unk_180085C99, 0LL, 0LL, 8u, &v22);
  }
  if ( v19 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  return (unsigned int)v14;
}
