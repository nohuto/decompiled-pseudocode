/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180018D00
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x180018CA0 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180011DEC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     StringCopyWorkerW @ 0x18001A290 (StringCopyWorkerW.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001A2E4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18001A69C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A75C (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACT.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001C890 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180025FA0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003C084 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  DWORD v13; // ebx
  int v14; // ebx
  bool v15; // cf
  unsigned __int64 v16; // r15
  char v17; // r12
  unsigned int v18; // eax
  size_t *v19; // r8
  int v20; // eax
  struct _HOST_ACTIVITY_MANAGER *v21; // r12
  struct _HOST_ACTIVITY_MANAGER *v22; // rcx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v24; // rsi
  DWORD v25; // edi
  __int64 v26; // r15
  _QWORD *Value; // rbx
  char v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v31; // rdi
  bool v32; // sf
  struct _HAM_ACTIVITY *v33; // rcx
  bool v34; // zf
  HANDLE v35; // rsi
  DWORD v36; // edi
  DWORD ProcessId; // eax
  int v39; // eax
  struct _HAM_CLIENT_CONTEXT *v40; // rcx
  int v41; // eax
  struct _RM_HAM_ACTIVITY_HOST *v42; // rdx
  UINT32 cData[2]; // [rsp+20h] [rbp-E0h]
  char v44; // [rsp+60h] [rbp-A0h]
  struct _RM_HAM_ACTIVITY_HOST *v45; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Process; // [rsp+70h] [rbp-90h]
  struct _RM_HAM_ACTIVITY_HOST *v47; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_ACTIVITY *v48; // [rsp+80h] [rbp-80h] BYREF
  struct _HAM_CLIENT_CONTEXT *v49; // [rsp+88h] [rbp-78h]
  unsigned __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  union _RM_SID *v51; // [rsp+98h] [rbp-68h]
  STRSAFE_PCNZWCH pszSrc; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v53; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[232]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[68]; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v56; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v57; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 v58; // [rsp+2D0h] [rbp+1D0h]
  _BYTE TlsValue[144]; // [rsp+2E0h] [rbp+1E0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+370h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+390h] [rbp+290h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v62; // [rsp+3A0h] [rbp+2A0h]
  __int64 v63; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 *v64; // [rsp+3B0h] [rbp+2B0h]
  __int64 v65; // [rsp+3B8h] [rbp+2B8h]

  Process = a9;
  pszSrc = a2;
  v49 = a1;
  v53 = a10;
  memset_0(TlsValue, 0, 0x88uLL);
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, TlsValue);
  }
  HampSrvTraceActivityCreateStart();
  v14 = 0;
  v15 = *(_DWORD *)a8 < 0x2000000u;
  v48 = 0LL;
  v47 = 0LL;
  v16 = -1LL;
  v45 = 0LL;
  v44 = 0;
  v51 = 0LL;
  if ( !v15
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    *((_WORD *)a8 + 69) = 0;
    *((_WORD *)a8 + 133) = 0;
    v14 = -1073741578;
LABEL_40:
    v17 = a7;
    goto LABEL_41;
  }
  if ( !(unsigned __int8)PsmIsValidKey(a2) )
  {
    v14 = -1073741584;
LABEL_64:
    v17 = a7;
    goto LABEL_18;
  }
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
  {
    v14 = -1073741583;
    goto LABEL_64;
  }
  if ( !a6 || ((a6 - 1) & a6) != 0 )
  {
    v14 = -1073741580;
    goto LABEL_64;
  }
  v17 = a7;
  _BitScanForward(&v18, a6);
  if ( v18 >= 4 )
  {
    v14 = -1073741580;
  }
  else if ( a7 == -1LL )
  {
    v14 = -1073741579;
  }
  else
  {
    memset_0(pszDest, 0, 0x228uLL);
    StringCopyWorkerW(pszDest, 0xE8uLL, v19, pszSrc, *(size_t *)cData);
    RtlCopySid(0x44u, DestinationSid, a3);
    v56 = a5;
    v57 = a6;
    v58 = a7;
  }
LABEL_18:
  if ( v14 < 0 )
  {
LABEL_41:
    v35 = Process;
    goto LABEL_42;
  }
  v51 = (union _RM_SID *)DestinationSid;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)pszDest, a8) )
  {
    v14 = -1073741578;
    goto LABEL_41;
  }
  v20 = *(_DWORD *)a8;
  if ( (*(_DWORD *)a8 & 0x80000) == 0 || (v35 = Process) != 0LL )
  {
    v21 = *(struct _HOST_ACTIVITY_MANAGER **)v49;
    v22 = *(struct _HOST_ACTIVITY_MANAGER **)v49;
    if ( (v20 & 0x200000) != 0 )
    {
      Host = RmHamFindHost(v22, v58, &v47);
      v24 = 0LL;
      if ( Host >= 0 )
        v24 = v47;
    }
    else
    {
      Host = HampHostFindOrCreate(v22, (struct _RM_PSM_HOST_INFO *)pszDest, (v20 & 0x400000) != 0, &v47);
      v24 = v47;
    }
    v14 = Host;
    if ( Host >= 0 )
    {
      v25 = HampLockTrackerId;
      v26 = *(_QWORD *)(*((_QWORD *)v24 + 97) + 88LL);
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
          __int2c();
        *Value |= 0x40uLL;
        ++Value[7];
      }
      RtlAcquireSRWLockShared(v26 + 304);
      v28 = *(_BYTE *)(v26 + 340);
      CempLockTrackerMarkReleased(v30, v29, 6LL);
      RtlReleaseSRWLockShared(v26 + 304);
      if ( (v28 & 1) != 0
        && dword_1800AB2C0 > 4u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
      {
        TlgCreateWsz(&pDesc, (LPCWSTR)v24 + 12);
        v42 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v24 - 4);
        v62 = &v47;
        v47 = v42;
        v64 = &v50;
        v63 = 8LL;
        v50 = 0x1000000LL;
        v65 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009779D, 0LL, 0LL, 5u, &pData);
      }
      if ( !Process )
      {
        v31 = v45;
        v14 = HampActCreate(v49, v21, v24, a8, 0, &v48);
        v32 = v14 < 0;
        goto LABEL_31;
      }
      v39 = HampHostFindByProcessHandle(v21, Process, &v45, &v50);
      v14 = v39;
      if ( v39 != -1073741275 )
      {
        v31 = v45;
        if ( v39 >= 0 )
        {
          v40 = v49;
          if ( v24 == v45 )
          {
            *((_DWORD *)a8 + 92) &= ~0x20u;
            *((_QWORD *)a8 + 41) = 0LL;
            *((_QWORD *)a8 + 42) = 0LL;
            *((_QWORD *)a8 + 43) = 0LL;
            *((_QWORD *)a8 + 44) = 0LL;
            *((_QWORD *)a8 + 40) |= 0xFuLL;
            v44 = 1;
            v41 = HampActCreate(v40, v21, v24, a8, 0, &v48);
          }
          else
          {
            v41 = HampDepGroupAddDonationDependency(v49, v45, v50, v24, a8, &v48);
          }
          v14 = v41;
          v32 = v41 < 0;
LABEL_31:
          v33 = v48;
          if ( v32 )
          {
            v16 = -1LL;
          }
          else
          {
            v14 = 0;
            v16 = *((_QWORD *)v48 + 5);
            *v53 = v16;
          }
          if ( v33 )
            CemRcObjectDereference(v33);
          goto LABEL_35;
        }
        v16 = -1LL;
LABEL_35:
        if ( v24 )
        {
          RmpAcquireGlobalLock();
          v34 = (*((_QWORD *)v24 + 74))-- == 1LL;
          if ( v34 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v24 - 64));
          RmpReleaseGlobalLock();
        }
        if ( v31 )
        {
          RmpAcquireGlobalLock();
          v34 = (*((_QWORD *)v31 + 74))-- == 1LL;
          if ( v34 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v31 - 64));
          RmpReleaseGlobalLock();
        }
        goto LABEL_40;
      }
      v14 = -1058275323;
      v16 = -1LL;
    }
    v31 = v45;
    goto LABEL_35;
  }
  v14 = -1073741776;
LABEL_42:
  v36 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v36, 0LL);
  }
  if ( v35 )
    ProcessId = GetProcessId(v35);
  else
    ProcessId = 0;
  HampSrvTraceActivityCreateStop(v14, v16, v49, pszSrc, a6, v51, v17, a8, 0, ProcessId, v44);
  return (unsigned int)v14;
}
