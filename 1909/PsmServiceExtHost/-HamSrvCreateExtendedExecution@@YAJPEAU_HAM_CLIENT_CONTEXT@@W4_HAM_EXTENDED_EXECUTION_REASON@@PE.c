/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18001028C
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x180010280 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180010528 (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180010F70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180011C00 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x180011D34 (-HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18001A69C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001C890 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180025FA0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v5; // r14
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  struct _HAM_ACTIVITY *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned int v10; // r12d
  UCHAR v11; // dl
  const unsigned __int16 *v12; // rdx
  int HostByProcessHandle; // eax
  __int64 v14; // r8
  int v15; // edi
  BOOLEAN v16; // si
  __int128 v17; // xmm0
  int v18; // eax
  DWORD v20; // ebx
  BOOLEAN v22; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+70h] [rbp-90h] BYREF
  char v25[8]; // [rsp+78h] [rbp-88h]
  union _RM_SID *v26; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v27; // [rsp+88h] [rbp-78h]
  _OWORD v28[4]; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[400]; // [rsp+E0h] [rbp-20h] BYREF
  char v31[144]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int16 v32[232]; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int16 v33[64]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v27 = a4;
  v5 = a2;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v31);
  v7 = 0LL;
  *(_QWORD *)v25 = -1LL;
  v26 = 0LL;
  v8 = 0LL;
  v23 = 0LL;
  v9 = -1LL;
  v24 = 0LL;
  v10 = 0;
  v22 = TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1800AB2C0, v11, 0LL);
  if ( v22 )
    memset_0(v32, 0, sizeof(v32));
  HampExtendedExecutionFormatDescription((unsigned int)v5, a3, v33);
  if ( (unsigned int)v5 > 4 )
    v12 = L"BAD_INPUT";
  else
    v12 = (const unsigned __int16 *)(&EeResourcePolicyNames)[v5];
  HampActivityPropertiesInitialize(v33, v12, (struct _HAM_ACTIVITY_PROPERTIES *)v30);
  if ( (unsigned int)v5 > 4 )
  {
    v15 = -1073741584;
  }
  else
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(
                            *(struct _HOST_ACTIVITY_MANAGER **)a1,
                            *(void **)(a1 + 168),
                            &v24);
    v7 = v24;
    v15 = HostByProcessHandle;
    v16 = v22;
    if ( HostByProcessHandle < 0 )
      goto LABEL_16;
    if ( v22 )
    {
      StringCchCopyW(v32, 0xE8uLL, (const unsigned __int16 *)v24 + 12);
      v17 = *(_OWORD *)((char *)v7 + 488);
      *(_QWORD *)v25 = *((_QWORD *)v7 - 4);
      v28[0] = v17;
      v28[1] = *(_OWORD *)((char *)v7 + 504);
      v28[2] = *(_OWORD *)((char *)v7 + 520);
      v28[3] = *(_OWORD *)((char *)v7 + 536);
      v29 = *((_DWORD *)v7 + 138);
      v26 = (union _RM_SID *)v28;
    }
    v10 = *((_DWORD *)v7 + 140);
    if ( v10 != 2 )
    {
      v15 = -1073741790;
      goto LABEL_16;
    }
    v15 = HampExtendedExecutionCheckPolicy(v30, *(_QWORD *)(a1 + 160), v14, (unsigned int)v5);
    if ( v15 < 0 )
      goto LABEL_16;
    v18 = HampActCreate(
            (struct _HAM_CLIENT_CONTEXT *)a1,
            *(struct _HOST_ACTIVITY_MANAGER **)a1,
            v7,
            (struct _HAM_ACTIVITY_PROPERTIES *)v30,
            0,
            &v23);
    v8 = v23;
    v15 = v18;
    if ( v18 >= 0 )
    {
      v15 = 0;
      v9 = *((_QWORD *)v23 + 5);
      *v27 = v9;
    }
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  v16 = v22;
LABEL_16:
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  if ( v16 )
    HampSrvTraceActivityCreateStop(
      v15,
      v9,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v32,
      v10,
      v26,
      v25[0],
      (struct _HAM_ACTIVITY_PROPERTIES *)v30,
      *(_DWORD *)(a1 + 140),
      0,
      0);
  return (unsigned int)v15;
}
