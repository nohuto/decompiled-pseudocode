/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F46E0
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F45DC (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F46E0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F46E0.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B6BB0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F33B8 (--$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800F43D8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F46E0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F46E0.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F5F38 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1800F636C (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18013F66C (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(
        __int64 a1,
        char *a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  int v10; // ebx
  struct ExclusiveEndpointInfo *v11; // r13
  CAudioSessionManager *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // r14
  int v23; // ecx
  _QWORD *v24; // r12
  unsigned __int64 i; // rsi
  const struct ExclusiveEndpointInfo *v26; // rdi
  __int64 v27; // rdi
  char *v28; // rsi
  int v29; // r14d
  int v30; // r15d
  unsigned int v31; // r12d
  char *v32; // r13
  int v35; // [rsp+44h] [rbp-BCh]
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h]
  int v43; // [rsp+74h] [rbp-8Ch]
  const struct ExclusiveEndpointInfo *v44; // [rsp+78h] [rbp-88h]
  _QWORD *v45; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A0h] [rbp-60h] BYREF
  char v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  char v52[402]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v53[261]; // [rsp+252h] [rbp+152h] BYREF
  unsigned int v54; // [rsp+45Ch] [rbp+35Ch]
  int v55; // [rsp+460h] [rbp+360h]
  int v56; // [rsp+464h] [rbp+364h]

  v51 = -2LL;
  v10 = 0;
  v54 = a4;
  v55 = 0;
  v56 = -1;
  if ( a2 )
    StringCchCopyW(v52, 201LL, a2);
  else
    memset_0(v52, 0, sizeof(v52));
  StringCchCopyW((char *)v53, 261LL, a3);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v11 = 0LL;
  v36 = -1;
  v44 = 0LL;
  v35 = 0;
  v42 = 0;
  if ( a8 <= 0x14 )
  {
    v12 = WPP_GLOBAL_Control;
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids,
        a8);
      v12 = WPP_GLOBAL_Control;
    }
    v10 = -2005139389;
  }
  v43 = a5 == 1;
  if ( v10 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v45,
                             *(_QWORD *)(v13 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v14 = *(_QWORD *)(v13 + 208);
    v15 = v45;
    if ( v14 )
    {
      v16 = v45;
      v17 = *(_QWORD *)(v13 + 200) - (_QWORD)v45;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v17);
        ++v16;
        --v14;
      }
      while ( v14 );
    }
    v10 = 0;
    v18 = v46;
    if ( !v46 )
    {
LABEL_40:
      v12 = WPP_GLOBAL_Control;
      goto LABEL_41;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    v22 = 0LL;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 )
        goto LABEL_29;
      v24 = (_QWORD *)v15[v22];
      v11 = 0LL;
      v36 = -1;
      for ( i = 0LL; i < v24[1]; ++i )
      {
        v26 = *(const struct ExclusiveEndpointInfo **)(*v24 + 8 * i);
        if ( ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>((__int64)v52, (unsigned __int64)v26, v20, v21) )
        {
          v23 = 1;
          v35 = 1;
          v44 = v26;
        }
        else
        {
          v40 = 0;
          v41 = -1;
          CConstraintModelResourceManager::GetEndpointStatus((struct _RTL_CRITICAL_SECTION *)a1, v26, v43, &v40, &v41);
          v23 = v35;
          if ( v40 )
          {
            v11 = v26;
            v36 = v41;
          }
        }
      }
      if ( ++v22 >= v18 )
        break;
      v15 = v45;
    }
    if ( v23 )
    {
LABEL_29:
      if ( v11 )
      {
        v19 = 4294967294LL;
        if ( (v36 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
        {
          v10 = -2005139389;
          v27 = a1;
LABEL_32:
          v28 = a2;
          v29 = a5;
          v30 = a6;
          v31 = a4;
          v32 = a3;
          goto LABEL_33;
        }
      }
      if ( v11 )
      {
        v27 = a1;
        if ( !a7 )
        {
          v10 = CConstraintModelResourceManager::RevokeEndpointResources((CConstraintModelResourceManager *)a1, v11);
          v42 = 1;
          if ( v10 < 0 )
            goto LABEL_32;
        }
        goto LABEL_51;
      }
    }
    v27 = a1;
LABEL_51:
    v29 = a5;
    v30 = a6;
    v31 = a4;
    v32 = a3;
    v28 = a2;
    if ( v44 && !a7 && a5 == 1 )
      CConstraintModelResourceManager::UpdateResourceEndpoint(v27, v19, a2, a3, a4, a6);
LABEL_33:
    if ( v50 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v42 && v10 >= 0 )
    {
      if ( a8 )
        Sleep(0x32u);
      v10 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(v27, v28, v32, v31, v29, v30, 0, a8 + 1);
    }
    goto LABEL_40;
  }
LABEL_41:
  if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v12 + 7) & 0x100) != 0
    && *((_BYTE *)v12 + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)v12 + 2), 0x1Cu, (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids, v10);
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v45);
  return (unsigned int)v10;
}
