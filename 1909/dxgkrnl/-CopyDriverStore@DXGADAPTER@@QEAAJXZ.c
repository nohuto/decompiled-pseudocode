/*
 * XREFs of ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023ACE8
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01EDB44 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00184AC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00345A4 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C0201B60 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0218550 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C0224D70 (-VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORM.c)
 *     ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0224F94 (-VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DX.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0225DD8 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C023B318 (-DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z.c)
 *     ?DxgkpCreateHardLink@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C023B480 (-DxgkpCreateHardLink@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEAG@Z @ 0x1C023B6FC (-DxgkpDeleteFile@@YAJPEAG@Z.c)
 */

__int64 __fastcall DXGADAPTER::CopyDriverStore(DXGADAPTER *this, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int16 *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **v6; // r12
  __int64 v7; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 *v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  WCHAR *v33; // rax
  __int64 v34; // rax
  WCHAR *v35; // rcx
  __int64 v36; // r8
  char *v37; // rax
  WCHAR v38; // r9
  WCHAR *v39; // rax
  size_t *NtSystemRoot; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int16 *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int16 *v46; // rcx
  __int64 v47; // r8
  char *v48; // rax
  unsigned __int16 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r8
  char *v52; // rax
  unsigned __int16 v53; // r9
  unsigned __int16 *v54; // rax
  int HardLink; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  int v66; // [rsp+28h] [rbp-E0h]
  int v67; // [rsp+28h] [rbp-E0h]
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  int v69; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v70; // [rsp+44h] [rbp-C4h]
  struct _D3DKMT_QUERYADAPTERINFO v71; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v72[268]; // [rsp+68h] [rbp-A0h] BYREF
  size_t SourceString[66]; // [rsp+498h] [rbp+390h] BYREF
  unsigned __int16 v74[264]; // [rsp+6A8h] [rbp+5A0h] BYREF
  size_t v75[66]; // [rsp+8B8h] [rbp+7B0h] BYREF
  size_t v76[66]; // [rsp+AC8h] [rbp+9C0h] BYREF

  v3 = -1LL;
  v4 = 0LL;
  Handle = (HANDLE)-1LL;
  v6 = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 164);
  v70 = 0;
  if ( *((_BYTE *)this + 186) )
  {
    v7 = WdLogNewEntry5_WdEvent(v5);
    *(_QWORD *)(v7 + 24) = 1024LL;
    WdLogEvent5_WdEvent(v7);
    return 0LL;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_CopyDriverStore__private_propertyCache,
    17411990LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C007805C,
    0,
    v66);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_CopyDriverToSystem32__private_propertyCache,
    19649929LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0078054,
    1,
    v67);
  memset(&v72[1], 0, 0x42CuLL);
  v72[0] = 3;
  v9 = (DXGADAPTER *)((char *)this + 4144);
  v71.pPrivateDriverData = v72;
  v71.hAdapter = 0;
  *(_QWORD *)&v71.PrivateDriverDataSize = 1072LL;
  v71.Type = KMTQAITYPE_QUERYREGISTRY;
  v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4144), 0LL, &v71, 0x430u);
  v14 = v10;
  if ( v10 < 0 )
    goto LABEL_4;
  v16 = TranslateUmdFileNameToVm((unsigned __int16 *)&v72[136], 0x104u, &v72[134]);
  v14 = v16;
  if ( v16 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v15 + 32) = 1060LL;
    goto LABEL_5;
  }
  RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
  RtlStringCbCatW((unsigned __int16 *)SourceString, v20, (size_t *)&v72[136]);
  if ( (int)DxgkpCreateFile((unsigned __int16 *)SourceString, 1u, 0x80u, 0x20u, 1u, &Handle) >= 0 )
  {
    ZwClose(Handle);
    v3 = -1LL;
    if ( *((_DWORD *)this + 629) == 2 )
      DxgkpDeleteFile((PCWSTR)SourceString);
    v24 = (unsigned __int16 *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v4 = v24;
    if ( !v24 )
    {
      LODWORD(v14) = -1073741801;
      goto LABEL_63;
    }
    RtlStringCbCopyW(v24, 0x208uLL, SourceString);
    v72[0] = 2;
    v71.pPrivateDriverData = v72;
    v71.hAdapter = 0;
    *(_QWORD *)&v71.PrivateDriverDataSize = 1072LL;
    v71.Type = KMTQAITYPE_QUERYREGISTRY;
    v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4144), 0LL, &v71, 0x430u);
    v14 = v25;
    if ( v25 < 0 )
    {
LABEL_4:
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
LABEL_5:
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
      goto LABEL_63;
    }
    v26 = TranslateUmdFileNameToVm((unsigned __int16 *)&v72[136], 0x104u, &v72[134]);
    v14 = v26;
    if ( v26 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v15 + 32) = 1122LL;
      goto LABEL_5;
    }
    while ( 1 )
    {
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
                  v9,
                  (unsigned __int16 *const)v75,
                  (unsigned __int16 *const)v76,
                  (enum DXGKP_HARDLINKTYPE *)&v69,
                  (enum DXGKP_HARDLINKOVERWRITETYPE *)&Handle) < 0 )
      {
        LODWORD(v14) = 0;
        goto LABEL_63;
      }
      RtlStringCbCopyW((unsigned __int16 *)SourceString, 0x208uLL, (size_t *)L"\\??\\");
      RtlStringCbCatW((unsigned __int16 *)SourceString, v30, (size_t *)&v72[136]);
      v32 = 260LL;
      v33 = (WCHAR *)SourceString;
      do
      {
        if ( !*v33 )
          break;
        ++v33;
        --v32;
      }
      while ( v32 );
      if ( v32 )
        v34 = 260 - v32;
      else
        v34 = 0LL;
      if ( v32 )
      {
        v35 = (WCHAR *)SourceString + v34;
        v31 = 260 - v34;
        if ( v34 != 260 )
        {
          v36 = 2147483646LL;
          v37 = (char *)((char *)L"\\" - (char *)v35);
          do
          {
            if ( !v36 )
              break;
            v38 = *(WCHAR *)((char *)v35 + (_QWORD)v37);
            if ( !v38 )
              break;
            *v35 = v38;
            --v36;
            ++v35;
            --v31;
          }
          while ( v31 );
        }
        v39 = v35 - 1;
        if ( v31 )
          v39 = v35;
        *v39 = 0;
      }
      RtlStringCbCatW((unsigned __int16 *)SourceString, v31, v75);
      RtlStringCbCopyW(v74, 0x208uLL, (size_t *)L"\\??\\");
      NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
      RtlStringCbCatW(v74, v41, NtSystemRoot);
      v43 = v74;
      v44 = 260LL;
      if ( v69 )
      {
        do
        {
          if ( !*v43 )
            break;
          ++v43;
          --v44;
        }
        while ( v44 );
        if ( v44 )
          v50 = 260 - v44;
        else
          v50 = 0LL;
        if ( !v44 )
          goto LABEL_59;
        v46 = &v74[v50];
        v42 = 260 - v50;
        if ( v50 != 260 )
        {
          v51 = 2147483646LL;
          v52 = (char *)((char *)L"\\Syswow64\\" - (char *)v46);
          do
          {
            if ( !v51 )
              break;
            v53 = *(unsigned __int16 *)((char *)v46 + (_QWORD)v52);
            if ( !v53 )
              break;
            *v46 = v53;
            --v51;
            ++v46;
            --v42;
          }
          while ( v42 );
        }
      }
      else
      {
        do
        {
          if ( !*v43 )
            break;
          ++v43;
          --v44;
        }
        while ( v44 );
        if ( v44 )
          v45 = 260 - v44;
        else
          v45 = 0LL;
        if ( !v44 )
          goto LABEL_59;
        v46 = &v74[v45];
        v42 = 260 - v45;
        if ( v45 != 260 )
        {
          v47 = 2147483646LL;
          v48 = (char *)((char *)L"\\System32\\" - (char *)v46);
          do
          {
            if ( !v47 )
              break;
            v49 = *(unsigned __int16 *)((char *)v46 + (_QWORD)v48);
            if ( !v49 )
              break;
            *v46 = v49;
            --v47;
            ++v46;
            --v42;
          }
          while ( v42 );
        }
      }
      v54 = v46 - 1;
      if ( v42 )
        v54 = v46;
      *v54 = 0;
LABEL_59:
      RtlStringCbCatW(v74, v42, v76);
      HardLink = DxgkpCreateHardLink(SourceString, v74, (unsigned int)Handle);
      v59 = HardLink;
      if ( HardLink < 0 )
      {
        v60 = WdLogNewEntry5_WdError(v57, v56, v58);
        *(_QWORD *)(v60 + 24) = v59;
        *(_QWORD *)(v60 + 32) = 1372LL;
        WdLogEvent5_WdError(v60);
      }
    }
  }
  v61 = WdLogNewEntry5_WdError(v22, v21, v23);
  *(_QWORD *)(v61 + 24) = 1093LL;
  WdLogEvent5_WdError(v61);
  v3 = (__int64)Handle;
  LODWORD(v14) = -1073741823;
LABEL_63:
  operator delete[](v4);
  if ( v3 != -1 )
    ZwClose((HANDLE)v3);
  if ( v70 )
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(v6, v70);
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(v9, (unsigned __int16 *const)SourceString, 0LL, 0LL, 0LL);
  if ( (int)v14 < 0 )
  {
    v65 = WdLogNewEntry5_WdError(v63, v62, v64);
    *(_QWORD *)(v65 + 24) = (int)v14;
    *(_QWORD *)(v65 + 32) = 1419LL;
    WdLogEvent5_WdError(v65);
  }
  return (unsigned int)v14;
}
