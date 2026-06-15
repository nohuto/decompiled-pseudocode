/*
 * XREFs of ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180102224
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801005A4 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801005A4.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039F30 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800BF258 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF55C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x180101FFC (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::UpdateResourceEndpoint(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        char *a3,
        char *a4,
        int a5,
        int a6)
{
  __int64 v9; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *i; // [rsp+28h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  _OWORD v19[17]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+164h] [rbp+5Ch]
  unsigned __int16 v21[201]; // [rsp+170h] [rbp+68h] BYREF
  unsigned __int16 v22[261]; // [rsp+302h] [rbp+1FAh] BYREF
  int v23; // [rsp+50Ch] [rbp+404h]

  v18 = -2LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1 + 3);
  p_Type = &a1[4].DebugInfo->Type;
  for ( i = p_Type; i; p_Type = i )
  {
    v11 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                      v9,
                      (__int64)p_Type);
    v12 = v19;
    v13 = 9LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v13;
    }
    while ( v13 );
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    if ( DWORD2(v19[0]) == 1 && v20 == a6 )
    {
      if ( a3 )
        StringCchCopyW((char *)v21, 201LL, a3);
      else
        v21[0] = 0;
      StringCchCopyW((char *)v22, 261LL, a4);
      v23 = a5;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v14, (__int64)p_Type, v19);
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v12, &i);
  }
  if ( (_BYTE)v17 )
    LeaveCriticalSection(lpCriticalSection);
}
