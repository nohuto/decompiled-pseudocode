/*
 * XREFs of ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x180100104
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x180100000 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x180100104 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_180100104.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E1F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C4DE0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800FEE28 (--$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFDF8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x180100104 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_180100104.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101958 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180101D84 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18014324C (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
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
  __int64 v10; // r14
  int v11; // ebx
  const struct ExclusiveEndpointInfo *v12; // rdi
  CAudioSessionManager *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // r12
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // ecx
  _QWORD *v24; // r12
  unsigned __int64 i; // rsi
  char *v26; // r13
  int v27; // esi
  int v28; // r14d
  unsigned int v29; // r15d
  char *v30; // r12
  struct ExclusiveEndpointInfo *v32; // rdx
  __int64 v33; // rdi
  int v35; // [rsp+44h] [rbp-BCh]
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h]
  int v43; // [rsp+74h] [rbp-8Ch]
  const struct ExclusiveEndpointInfo *v44; // [rsp+78h] [rbp-88h]
  const struct ExclusiveEndpointInfo *v45; // [rsp+80h] [rbp-80h]
  _QWORD *v46; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-58h] BYREF
  char v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  char v53[402]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v54[261]; // [rsp+252h] [rbp+152h] BYREF
  unsigned int v55; // [rsp+45Ch] [rbp+35Ch]
  int v56; // [rsp+460h] [rbp+360h]
  int v57; // [rsp+464h] [rbp+364h]

  v52 = -2LL;
  v10 = 0LL;
  v11 = 0;
  v55 = a4;
  v56 = 0;
  v57 = -1;
  if ( a2 )
    StringCchCopyW(v53, 201LL, a2);
  else
    memset_0(v53, 0, sizeof(v53));
  StringCchCopyW((char *)v54, 261LL, a3);
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v12 = 0LL;
  v36 = -1;
  v45 = 0LL;
  v35 = 0;
  v42 = 0;
  if ( a8 <= 0x14 )
  {
    v13 = WPP_GLOBAL_Control;
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids,
        a8);
      v13 = WPP_GLOBAL_Control;
    }
    v11 = -2005139389;
  }
  v43 = a5 == 1;
  if ( v11 >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v46,
                             *(_QWORD *)(v14 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v15 = *(_QWORD *)(v14 + 208);
    v16 = v46;
    if ( v15 )
    {
      v17 = v46;
      v18 = *(_QWORD *)(v14 + 200) - (_QWORD)v46;
      do
      {
        *v17 = *(_QWORD *)((char *)v17 + v18);
        ++v17;
        --v15;
      }
      while ( v15 );
    }
    v11 = 0;
    v19 = v47;
    if ( !v47 )
    {
LABEL_41:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_42;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    v23 = 0;
    while ( 1 )
    {
      if ( v23 )
        goto LABEL_30;
      v24 = (_QWORD *)v16[v10];
      v12 = 0LL;
      v44 = 0LL;
      v36 = -1;
      for ( i = 0LL; i < v24[1]; ++i )
      {
        v12 = *(const struct ExclusiveEndpointInfo **)(*v24 + 8 * i);
        if ( ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>((__int64)v53, (unsigned __int64)v12, v21, v22) )
        {
          v23 = 1;
          v35 = 1;
          v45 = v12;
        }
        else
        {
          v40 = 0;
          v41 = -1;
          CConstraintModelResourceManager::GetEndpointStatus((struct _RTL_CRITICAL_SECTION *)a1, v12, v43, &v40, &v41);
          v23 = v35;
          if ( v40 )
          {
            v44 = v12;
            v36 = v41;
            continue;
          }
        }
        v12 = v44;
      }
      if ( ++v10 >= v19 )
        break;
      v16 = v46;
    }
    if ( v23 )
    {
LABEL_30:
      if ( v12 )
      {
        v20 = 4294967294LL;
        if ( (v36 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
        {
          v11 = -2005139389;
LABEL_33:
          v26 = a2;
          v27 = a5;
          v28 = a6;
          v29 = a4;
          v30 = a3;
          goto LABEL_34;
        }
      }
      if ( v12 && !a7 )
      {
        v32 = v12;
        v33 = a1;
        v11 = CConstraintModelResourceManager::RevokeEndpointResources((CConstraintModelResourceManager *)a1, v32);
        v42 = 1;
        if ( v11 < 0 )
          goto LABEL_33;
        goto LABEL_52;
      }
    }
    v33 = a1;
LABEL_52:
    v27 = a5;
    v28 = a6;
    v29 = a4;
    v30 = a3;
    if ( v45 )
    {
      v26 = a2;
      if ( !a7 && a5 == 1 )
        CConstraintModelResourceManager::UpdateResourceEndpoint(v33, v20, a2, a3, a4, a6);
    }
    else
    {
      v26 = a2;
    }
LABEL_34:
    if ( v51 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v42 && v11 >= 0 )
    {
      if ( a8 )
        Sleep(0x32u);
      v11 = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(a1, v26, v30, v29, v27, v28, 0, a8 + 1);
    }
    goto LABEL_41;
  }
LABEL_42:
  if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v13 + 7) & 0x100) != 0
    && *((_BYTE *)v13 + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)v13 + 2), 0x1Cu, (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids, v11);
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v46);
  return (unsigned int)v11;
}
