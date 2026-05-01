/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18000D168
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x180009860 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009350 (-HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASO.c)
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010D4C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 *a4)
{
  struct _HAM_ACTIVITY *v6; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  UCHAR v10; // dl
  BOOLEAN v11; // r15
  int HostByProcessHandle; // eax
  __int64 v13; // rdx
  unsigned int v14; // r9d
  char v15; // si
  struct _HOST_ACTIVITY_MANAGER *v16; // rdx
  int v17; // eax
  DWORD v19; // edi
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r11
  __int64 v23; // r11
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh] BYREF
  char v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct _HAM_ACTIVITY *v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  LPCWSTR v32; // [rsp+60h] [rbp-A0h]
  LPCWSTR v33; // [rsp+68h] [rbp-98h]
  unsigned int v34[35]; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+FCh] [rbp-4h] BYREF
  _BYTE v36[144]; // [rsp+200h] [rbp+100h] BYREF
  WCHAR pwsz[232]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR v38; // [rsp+460h] [rbp+360h] BYREF
  int *v39; // [rsp+480h] [rbp+380h]
  __int64 v40; // [rsp+488h] [rbp+388h]
  __int64 *v41; // [rsp+490h] [rbp+390h]
  __int64 v42; // [rsp+498h] [rbp+398h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4A0h] [rbp+3A0h] BYREF
  unsigned int *v44; // [rsp+4B0h] [rbp+3B0h]
  __int64 v45; // [rsp+4B8h] [rbp+3B8h]
  __int64 *v46; // [rsp+4C0h] [rbp+3C0h]
  __int64 v47; // [rsp+4C8h] [rbp+3C8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+4D0h] [rbp+3D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v49; // [rsp+4E0h] [rbp+3E0h]
  __int64 v50; // [rsp+4E8h] [rbp+3E8h]
  struct _HAM_ACTIVITY **v51; // [rsp+4F0h] [rbp+3F0h]
  __int64 v52; // [rsp+4F8h] [rbp+3F8h]
  char *v53; // [rsp+500h] [rbp+400h]
  __int64 v54; // [rsp+508h] [rbp+408h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+510h] [rbp+410h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+520h] [rbp+420h] BYREF

  v33 = a3;
  v26 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A80F, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v36);
  v6 = 0LL;
  v30 = -1LL;
  v32 = 0LL;
  v7 = 0LL;
  v31 = -1LL;
  v29 = 0LL;
  v8 = 0;
  v28 = 0LL;
  v9 = 0;
  v11 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v10, 0LL);
  if ( v11 )
    memset_0(pwsz, 0, sizeof(pwsz));
  if ( v26 > 4 )
  {
    v14 = -1073741584;
    goto LABEL_13;
  }
  HostByProcessHandle = RmHamFindHostByProcessHandle(*(struct _HOST_ACTIVITY_MANAGER **)a1, *(void **)(a1 + 152), &v28);
  v7 = v28;
  v14 = HostByProcessHandle;
  v25 = HostByProcessHandle;
  if ( HostByProcessHandle < 0 )
  {
LABEL_16:
    v15 = v26;
    goto LABEL_17;
  }
  if ( v11 )
  {
    StringCchCopyW(pwsz, 0xE8uLL, (const unsigned __int16 *)v28 + 12);
    v31 = *((_QWORD *)v7 - 4);
  }
  v8 = *((_DWORD *)v7 + 140);
  v15 = v26;
  if ( v8 == 2 )
  {
    v25 = HampExtendedExecutionCheckPolicy(
            *(_QWORD *)(a1 + 144),
            v13,
            v26,
            (const unsigned __int16 * near *)v33,
            (struct _HAM_ACTIVITY_PROPERTIES *)v34);
    v14 = v25;
    if ( v25 < 0 )
      goto LABEL_17;
    v16 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
    v9 = v34[0];
    v32 = (LPCWSTR)&v35;
    v17 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v16, v7, (struct _HAM_ACTIVITY_PROPERTIES *)v34, 0, &v29);
    v6 = v29;
    v14 = v17;
    v25 = v17;
    if ( v17 < 0 )
      goto LABEL_14;
    v14 = 0;
    v30 = *((_QWORD *)v29 + 5);
    *a4 = v30;
LABEL_13:
    v25 = v14;
LABEL_14:
    if ( v6 )
    {
      CemRcObjectDereference(v6);
      v14 = v25;
    }
    goto LABEL_16;
  }
  v14 = -1073741790;
  v25 = -1073741790;
LABEL_17:
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
    v14 = v25;
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v19, 0LL);
    v14 = v25;
  }
  if ( v11 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v42 = v20;
    v39 = &v25;
    v40 = v21;
    v41 = &v30;
    TlgCreateWsz(&pDesc, pwsz);
    v44 = &v26;
    v26 = v8;
    v46 = &v31;
    v45 = v22;
    v47 = 8LL;
    TlgCreateWsz(&v48, v32);
    v49 = &v28;
    LODWORD(v29) = *(_DWORD *)(a1 + 136);
    v51 = &v29;
    v53 = &v27;
    LODWORD(v28) = v9;
    v50 = v23;
    v52 = v23;
    v27 = v15;
    v54 = 1LL;
    TlgCreateWsz(&v55, v33);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A247, 0LL, 0LL, 0xCu, &v38);
    return (unsigned int)v25;
  }
  return v14;
}
