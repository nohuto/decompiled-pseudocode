/*
 * XREFs of _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802AE2C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::Run @ 0x1802AF510 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f_ea_1802AF510.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18017BB18 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??$_Buynode@AEAKAEAUDisplayRegionInfo@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x1802AD7B0 (--$_Buynode@AEAKAEAUDisplayRegionInfo@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KUDisplayRegionInfo@@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUDisplayRegionInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@@Z @ 0x1802AD9A4 (--$_Insert_nohint@AEAU-$pair@$$CBKUDisplayRegionInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUDispl.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1802AF1B4 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@@Z @ 0x1802AFB1C (-erase@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$_ea_1802AFB1C.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1802AFB8C (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e5434191a426e1e6c5461e9f90ae0298_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  WindowingEnvironmentConfig *v17; // rcx
  __int64 v18; // rbx
  HSTRING_HEADER *v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  const char *v26; // r9
  __int64 result; // rax
  __int64 v28; // [rsp+30h] [rbp-248h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-240h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-238h] BYREF
  __int128 v31; // [rsp+50h] [rbp-228h] BYREF
  HMONITOR v32[2]; // [rsp+60h] [rbp-218h] BYREF
  __int128 v33; // [rsp+70h] [rbp-208h] BYREF
  __int64 v34; // [rsp+80h] [rbp-1F8h]
  int v35; // [rsp+88h] [rbp-1F0h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-1E8h] BYREF
  int v37; // [rsp+A8h] [rbp-1D0h]
  DISPLAYCONFIG_TARGET_DEVICE_NAME v38; // [rsp+B0h] [rbp-1C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v32[1] = (HMONITOR)-2LL;
  try
  {
    v28 = 0LL;
    v30[0] = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 80) + 32LL))(*(_QWORD *)(*a1 + 80));
    v30[0] = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, v30);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v3);
    v29 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1[1] + 24LL))(*(_QWORD *)a1[1], &v29);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        172LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v4);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      *a1 + 104,
      &v31,
      &v29);
    v5 = v31;
    v7 = *(_QWORD *)(v6 + 80);
    if ( (_QWORD)v31 == *(_QWORD *)(v6 + 104) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
      v28 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v28);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          177LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 64LL))(v28, &v31);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          180LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v10);
      hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v29, v31);
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)a1[2];
      LOBYTE(v37) = *(_DWORD *)a1[3] != 0;
      v33 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      v34 = *(_OWORD *)&_mm_unpackhi_pd(
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
      v35 = v37;
    }
    else
    {
      v33 = *(_OWORD *)(v31 + 32);
      v34 = *(_QWORD *)(v31 + 48);
      v35 = *(_DWORD *)(v31 + 56);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
      v28 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(
              v11,
              (unsigned int)v33,
              &v28);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v12);
      std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::erase(
        *a1 + 104,
        &v31,
        v5);
    }
    v31 = *(_OWORD *)a1[4];
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 104LL))(v28, &v31);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        191LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v13);
    LOBYTE(v14) = *(_DWORD *)a1[3] != 0;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 112LL))(v28, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        192LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v15);
    v32[0] = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(**(_QWORD **)a1[1] + 40LL))(*(_QWORD *)a1[1], v32);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        195LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v16);
    memset_0(&v38, 0, sizeof(v38));
    if ( WindowingEnvironmentConfig::GetTargetDeviceName(v17, v32[0], &v38) >= 0 )
    {
      v18 = v28;
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v38.monitorDevicePath);
      v20 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD))(*(_QWORD *)v18 + 136LL))(
              v18,
              v19[1].Reserved.Reserved1,
              0LL,
              0LL);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          201LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v20);
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 64) + 96LL))(*(_QWORD *)(*a1 + 64), v28);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        204LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v21);
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30[0] + 56LL))(v30[0]);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        206LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v22);
    v23 = *a1;
    v24 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Buynode<unsigned long &,DisplayRegionInfo &>(
            *a1 + 104,
            &v29,
            (__int64)&v33);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Insert_nohint<std::pair<unsigned long const,DisplayRegionInfo> &,std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *> *>(
      (__int64 *)(v23 + 104),
      (__int64)&v31,
      v25,
      (_DWORD *)(v24 + 28),
      (_QWORD *)v24);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v30);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v28);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD2,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v26);
  }
  return result;
}
