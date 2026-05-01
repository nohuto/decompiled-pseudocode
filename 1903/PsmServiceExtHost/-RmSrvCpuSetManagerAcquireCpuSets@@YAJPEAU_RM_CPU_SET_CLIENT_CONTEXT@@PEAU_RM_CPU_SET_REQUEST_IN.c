/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180065F90
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180061860 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180068CD4 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006A714 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  UCHAR v8; // dl
  PVOID v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  DWORD v12; // ebx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v17; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  int *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  ULONG *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  ULONG *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  PVOID *p_P; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  RmpUtilCheckStartLockTracking(&v19, (struct _CEM_LOCK_TRACKER *)v21);
  P = 0LL;
  v20 = -1LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v7, &unk_18009306A, 0LL, 0LL, 2u, &pData);
  RtlInitializeBitMap((PRTL_BITMAP)&pData, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 8 && RtlNumberOfSetBits((PRTL_BITMAP)&pData) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v14 = RmpCpuSetManagerAcquireCpuSets(
            a1,
            (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
            0,
            (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v14 < 0 )
    {
      v9 = P;
    }
    else
    {
      v20 = *((_QWORD *)P + 4);
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
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL)
    && hProvider > 4u
    && TlgKeywordOn(v10, 9uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v23 = &v14;
    v26 = &v20;
    v16 = *((_DWORD *)a1 + 14);
    v29 = &v16;
    v17 = a2[42];
    v32 = &v17;
    v18 = a2[43];
    v35 = &v18;
    LODWORD(P) = *a2;
    p_P = &P;
    v24 = 4;
    v27 = 8;
    v30 = 4;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    TlgWrite(v11, &unk_180093A56, 0LL, 0LL, 8u, &v22);
  }
  if ( v19 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v12, 0LL);
    }
  }
  return (unsigned int)v14;
}
