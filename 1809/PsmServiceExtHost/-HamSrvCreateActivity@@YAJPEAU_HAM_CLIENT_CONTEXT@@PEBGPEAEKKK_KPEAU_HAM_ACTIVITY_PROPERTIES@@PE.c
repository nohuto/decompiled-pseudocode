/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180021520
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x18003AD90 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180001CA4 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009700 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009A80 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C34 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FF0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     StringCopyWorkerW @ 0x180013800 (StringCopyWorkerW.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HOST_ACTIVITY_MANAGER **a1,
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
  struct _HAM_ACTIVITY_PROPERTIES *v11; // rbx
  DWORD v14; // edi
  bool v15; // cf
  struct _RM_HAM_ACTIVITY_HOST *v16; // r13
  unsigned __int64 v17; // rdi
  unsigned int v18; // eax
  const WCHAR *v19; // r15
  size_t *v20; // r8
  int v21; // edx
  struct _HOST_ACTIVITY_MANAGER *v22; // r14
  struct _HOST_ACTIVITY_MANAGER *v23; // rcx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v25; // rdi
  bool v26; // sf
  struct _HAM_ACTIVITY *v27; // rcx
  bool v28; // zf
  HANDLE v29; // r14
  DWORD v30; // edi
  int v31; // r9d
  int v32; // r10d
  int v34; // eax
  int v35; // eax
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+30h] [rbp-D0h] BYREF
  char v38; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Process; // [rsp+38h] [rbp-C8h]
  struct _HAM_ACTIVITY *v40; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v41; // [rsp+48h] [rbp-B8h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+50h] [rbp-B0h]
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v50; // [rsp+88h] [rbp-78h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v52; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[232]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[68]; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v55; // [rsp+2C4h] [rbp+1C4h]
  unsigned int v56; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 v57; // [rsp+2D0h] [rbp+1D0h]
  _BYTE TlsValue[144]; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+370h] [rbp+270h] BYREF
  void *v60; // [rsp+380h] [rbp+280h]
  int v61; // [rsp+388h] [rbp+288h]
  int v62; // [rsp+38Ch] [rbp+28Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+390h] [rbp+290h] BYREF
  void *v64; // [rsp+3A0h] [rbp+2A0h]
  int v65; // [rsp+3A8h] [rbp+2A8h]
  int v66; // [rsp+3ACh] [rbp+2ACh]
  unsigned int *v67; // [rsp+3B0h] [rbp+2B0h]
  __int64 v68; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v69; // [rsp+3C0h] [rbp+2C0h]
  __int64 v70; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned int *v72; // [rsp+3E0h] [rbp+2E0h]
  __int64 v73; // [rsp+3E8h] [rbp+2E8h]
  unsigned __int64 *v74; // [rsp+3F0h] [rbp+2F0h]
  __int64 v75; // [rsp+3F8h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+400h] [rbp+300h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+410h] [rbp+310h] BYREF
  int *v78; // [rsp+420h] [rbp+320h]
  __int64 v79; // [rsp+428h] [rbp+328h]
  int *v80; // [rsp+430h] [rbp+330h]
  __int64 v81; // [rsp+438h] [rbp+338h]
  char *v82; // [rsp+440h] [rbp+340h]
  __int64 v83; // [rsp+448h] [rbp+348h]

  v11 = a8;
  Process = a9;
  pszSrc = a2;
  v50 = a10;
  memset_0(TlsValue, 0, 0x88uLL);
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, TlsValue);
  }
  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180089545 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v60 = &unk_180089550;
    UserData.Reserved = 2;
    v61 = 19;
    v62 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v15 = *(_DWORD *)v11 < 0x400000u;
  v16 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v38 = 0;
  v47 = -1LL;
  if ( !v15
    || wcsnlen((const wchar_t *)v11 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)v11 + 70, 0x40uLL) == 64
    || *((int *)v11 + 67) > 5 )
  {
    v19 = pszSrc;
    *((_WORD *)v11 + 69) = 0;
    *((_WORD *)v11 + 133) = 0;
    goto LABEL_48;
  }
  v17 = a7;
  if ( (unsigned __int8)PsmIsValidKey(pszSrc) )
  {
    if ( a4 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      if ( !a6 || ((a6 - 1) & a6) != 0 || (_BitScanForward(&v18, a6), v18 >= 4) )
      {
        v21 = -1073741580;
      }
      else
      {
        if ( v17 != -1LL )
        {
          memset_0(pszDest, 0, 0x228uLL);
          v19 = pszSrc;
          StringCopyWorkerW(pszDest, 0xE8uLL, v20, pszSrc, *(size_t *)UserDataCount);
          RtlCopySid(0x44u, DestinationSid, a3);
          v21 = 0;
          v55 = a5;
          v56 = a6;
          v57 = v17;
          goto LABEL_20;
        }
        v21 = -1073741579;
      }
    }
    else
    {
      v21 = -1073741583;
    }
  }
  else
  {
    v21 = -1073741584;
  }
  v19 = pszSrc;
LABEL_20:
  v37 = v21;
  if ( v21 < 0 )
  {
LABEL_37:
    v29 = Process;
    goto LABEL_38;
  }
  if ( (unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)pszDest, v11) )
  {
    if ( (*(_DWORD *)v11 & 0x80000) != 0 )
    {
      v29 = Process;
      if ( !Process )
      {
        v21 = -1073741776;
        goto LABEL_49;
      }
    }
    v22 = *a1;
    v23 = *a1;
    if ( (*(_DWORD *)v11 & 0x200000) != 0 )
    {
      Host = RmHamFindHost(v23, v57, &v48);
      v25 = 0LL;
      if ( Host >= 0 )
        v25 = v48;
    }
    else
    {
      Host = HampHostFindOrCreate(v23, (struct _RM_PSM_HOST_INFO *)pszDest, &v46);
      v25 = v46;
    }
    v37 = Host;
    v21 = Host;
    if ( Host < 0 )
      goto LABEL_32;
    if ( !Process )
    {
      v21 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v22, v25, v11, 0, &v40);
      v37 = v21;
      v26 = v21 < 0;
LABEL_28:
      v27 = v40;
      if ( !v26 )
      {
        v47 = *((_QWORD *)v40 + 5);
        *v50 = v47;
        v21 = 0;
        v37 = 0;
      }
      if ( v27 )
      {
        CemRcObjectDereference(v27);
        v21 = v37;
      }
      goto LABEL_32;
    }
    v34 = HampHostFindByProcessHandle(v22, Process, &v41, &v49);
    v37 = v34;
    v21 = v34;
    if ( v34 == -1073741275 )
    {
      v21 = -1058275323;
      v37 = -1058275323;
    }
    else if ( v34 >= 0 )
    {
      v16 = v41;
      if ( v25 == v41 )
      {
        *((_DWORD *)v11 + 92) &= ~0x20u;
        *((_QWORD *)v11 + 41) = 0LL;
        *((_QWORD *)v11 + 42) = 0LL;
        *((_QWORD *)v11 + 43) = 0LL;
        *((_QWORD *)v11 + 44) = 0LL;
        *((_QWORD *)v11 + 40) |= 0xFuLL;
        v38 = 1;
        v35 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v22, v25, v11, 0, &v40);
      }
      else
      {
        v35 = HampDepGroupAddDonationDependency(a1, v41, v49, v25, v11, &v40);
      }
      v21 = v35;
      v37 = v35;
      v26 = v35 < 0;
      goto LABEL_28;
    }
    v16 = v41;
LABEL_32:
    if ( v25 )
    {
      RmpAcquireGlobalLock();
      v28 = (*((_QWORD *)v25 + 72))-- == 1LL;
      if ( v28 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v25 - 64));
      RmpReleaseGlobalLock();
      v21 = v37;
    }
    if ( v16 )
    {
      RmpAcquireGlobalLock();
      v28 = (*((_QWORD *)v16 + 72))-- == 1LL;
      if ( v28 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
      RmpReleaseGlobalLock();
      v21 = v37;
    }
    goto LABEL_37;
  }
LABEL_48:
  v29 = Process;
  v21 = -1073741578;
LABEL_49:
  v37 = v21;
LABEL_38:
  v30 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v30, 0LL);
    v21 = v37;
  }
  if ( v29 )
  {
    GetProcessId(v29);
    v21 = v37;
  }
  if ( hProvider <= 4u || (byte_18009B100 & 8) == 0 || (qword_18009B108 & 8) != qword_18009B108 )
    return (unsigned int)v21;
  v68 = 4LL;
  v67 = &v37;
  v70 = 8LL;
  v69 = &v47;
  TlgCreateWsz(&pDesc, v19);
  v43 = a6;
  v72 = &v43;
  v73 = 4LL;
  v74 = &a7;
  v75 = 8LL;
  TlgCreateWsz(&v76, (LPCWSTR)v11 + 6);
  TlgCreateWsz(&v77, (LPCWSTR)v11 + 70);
  v31 = *(_DWORD *)v11;
  v78 = &v44;
  v80 = &v45;
  v82 = &v38;
  v44 = v31;
  v79 = 4LL;
  v45 = v32;
  v81 = 4LL;
  v83 = 1LL;
  *(_DWORD *)&v52.Level = 516;
  v63.Ptr = (ULONGLONG)off_18009B0F8;
  *(_DWORD *)&v52.Id = ((unsigned int)&unk_180089F59 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v52.Keyword = 8LL;
  v63.Size = *(unsigned __int16 *)off_18009B0F8;
  v64 = &unk_180089F64;
  v63.Reserved = 2;
  v65 = 155;
  v66 = 1;
  EventWriteTransfer(RegHandle, &v52, 0LL, 0LL, 0xCu, &v63);
  return v37;
}
