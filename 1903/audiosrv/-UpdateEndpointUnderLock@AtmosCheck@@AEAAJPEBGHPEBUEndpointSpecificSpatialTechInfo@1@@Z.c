/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006B4CC
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18006AEB8 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009ED0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003ADE0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180043548 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(
        AtmosCheck *this,
        unsigned __int16 *a2,
        int a3,
        const struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-40h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v5 = a3;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 56),
    lpCriticalSection);
  std::wstring::wstring(v13, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 56,
    &v11,
    (char *)v13);
  std::wstring::~wstring((__int64)v13);
  v8 = v11;
  if ( v11 != *((_QWORD *)this + 57) )
  {
    v9 = 3 * v5;
    *(_BYTE *)(*(_QWORD *)(v11 + 48) + 8 * v9) = *((_BYTE *)a4 + 24 * v5);
    *(_BYTE *)(*(_QWORD *)(v8 + 48) + 8 * v9 + 1) = *((_BYTE *)a4 + 24 * v5 + 1);
    *(_BYTE *)(*(_QWORD *)(v8 + 48) + 8 * v9 + 2) = *((_BYTE *)a4 + 24 * v5 + 2);
    *(_DWORD *)(*(_QWORD *)(v8 + 48) + 8 * v9 + 4) = *((_DWORD *)a4 + 6 * v5 + 1);
    *(_DWORD *)(*(_QWORD *)(v8 + 48) + 8 * v9 + 16) = *((_DWORD *)a4 + 6 * v5 + 4);
    *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8 * v9 + 8) = *((_QWORD *)a4 + 3 * v5 + 1);
  }
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return 0LL;
}
