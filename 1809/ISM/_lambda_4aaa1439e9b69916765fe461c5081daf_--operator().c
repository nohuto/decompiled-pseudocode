/*
 * XREFs of _lambda_4aaa1439e9b69916765fe461c5081daf_::operator() @ 0x1800FB504
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4aaa1439e9b69916765fe461c5081daf_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800FDE70 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4aaa1439e9b69916765fe461c5081daf_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x1800480D0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004859C (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x18004963C (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800F3A54 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall lambda_4aaa1439e9b69916765fe461c5081daf_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  struct MPCConstantManager *Instance; // rcx
  __m128i v21; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-D8h]
  void *v23[4]; // [rsp+38h] [rbp-D0h] BYREF
  char v24[32]; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+78h] [rbp-90h]
  char v26; // [rsp+7Ch] [rbp-8Ch]
  char v27[32]; // [rsp+80h] [rbp-88h] BYREF
  float v28; // [rsp+A0h] [rbp-68h]
  char v29; // [rsp+A4h] [rbp-64h]
  char v30[32]; // [rsp+A8h] [rbp-60h] BYREF
  float v31; // [rsp+C8h] [rbp-40h]
  char v32; // [rsp+CCh] [rbp-3Ch]
  char v33[32]; // [rsp+D0h] [rbp-38h] BYREF
  float v34; // [rsp+F0h] [rbp-18h]
  char v35; // [rsp+F4h] [rbp-14h]
  char v36[32]; // [rsp+F8h] [rbp-10h] BYREF
  float v37; // [rsp+118h] [rbp+10h]
  char v38; // [rsp+11Ch] [rbp+14h]
  char v39[32]; // [rsp+120h] [rbp+18h] BYREF
  float v40; // [rsp+140h] [rbp+38h]
  char v41; // [rsp+144h] [rbp+3Ch]
  char v42[32]; // [rsp+148h] [rbp+40h] BYREF
  float v43; // [rsp+168h] [rbp+60h]
  char v44; // [rsp+16Ch] [rbp+64h]
  char v45[32]; // [rsp+170h] [rbp+68h] BYREF
  float v46; // [rsp+190h] [rbp+88h]
  char v47; // [rsp+194h] [rbp+8Ch]
  __int64 v48; // [rsp+198h] [rbp+90h] BYREF

  v23[2] = (void *)-2LL;
  v4 = FLOAT_0_5;
  v5 = FLOAT_0_5;
  v6 = FLOAT_0_40000001;
  v7 = FLOAT_0_18000001;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    v4 = FLOAT_1_5700001;
    v5 = FLOAT_1_5700001;
    v6 = FLOAT_0_5;
    v7 = FLOAT_0_5;
  }
  std::wstring::wstring(v24, L"ActivationDelta", a3);
  v25 = 2500;
  v26 = 0;
  std::wstring::wstring(v27, L"MouseParams_DeltaToRadiansRatio", v8);
  v28 = FLOAT_600_0;
  v29 = 2;
  std::wstring::wstring(v30, L"MouseParams_ResetHorizontalAngleRadians", v9);
  v31 = v4;
  v32 = 2;
  std::wstring::wstring(v33, L"MouseParams_ResetVerticalAngleRadians", v10);
  v34 = v5;
  v35 = 2;
  std::wstring::wstring(v36, L"MouseParams_ClampHorizontalAngleRadians", v11);
  v37 = v6;
  v38 = 2;
  std::wstring::wstring(v39, L"MouseParams_ClampVerticalAngleRadians", v12);
  v40 = v7;
  v41 = 2;
  std::wstring::wstring(v42, L"MouseParams_PointScaleFactorXY", v13);
  v43 = FLOAT_0_00108;
  v44 = 2;
  std::wstring::wstring(v45, L"MouseParams_PointScaleFactorWheel", v14);
  v46 = FLOAT_0_00075000001;
  v47 = 2;
  v21.m128i_i64[1] = (__int64)v24;
  v22 = &v48;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64)v23,
    (__m128i *)&v21.m128i_u64[1]);
  v15 = *a1 + 40LL;
  v16 = v15 & -(__int64)(*a1 != 0LL);
  Instance = MPCConstantManager::GetInstance(v15, v17, v18, v19);
  MPCConstantManager::AddAndPopulateInputType((__int64)Instance, v16, v23);
  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
    (__int64 ***)v23,
    (__int64 **)&v21.m128i_i64[1],
    *(__int64 **)v23[0],
    (__int64 *)v23[0]);
  operator delete(v23[0], (const struct std::nothrow_t *)0x48);
  `eh vector destructor iterator'(
    v24,
    0x28uLL,
    8uLL,
    (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
