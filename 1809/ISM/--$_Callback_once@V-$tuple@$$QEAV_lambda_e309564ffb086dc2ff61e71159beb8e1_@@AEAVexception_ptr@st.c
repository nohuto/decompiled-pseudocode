/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_e309564ffb086dc2ff61e71159beb8e1_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800FA510
 * Callers:
 *     <none>
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

// Hidden C++ exception states: #wind=12
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_e309564ffb086dc2ff61e71159beb8e1_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  struct MPCConstantManager *Instance; // rcx
  __int64 result; // rax
  void *v17; // rbx
  void *v18[2]; // [rsp+20h] [rbp-168h] BYREF
  __m128i v19; // [rsp+30h] [rbp-158h] BYREF
  void **v20; // [rsp+40h] [rbp-148h]
  __int64 v21; // [rsp+48h] [rbp-140h]
  char v22[32]; // [rsp+50h] [rbp-138h] BYREF
  float v23; // [rsp+70h] [rbp-118h]
  char v24; // [rsp+74h] [rbp-114h]
  char v25[32]; // [rsp+78h] [rbp-110h] BYREF
  float v26; // [rsp+98h] [rbp-F0h]
  char v27; // [rsp+9Ch] [rbp-ECh]
  char v28[32]; // [rsp+A0h] [rbp-E8h] BYREF
  float v29; // [rsp+C0h] [rbp-C8h]
  char v30; // [rsp+C4h] [rbp-C4h]
  char v31[32]; // [rsp+C8h] [rbp-C0h] BYREF
  float v32; // [rsp+E8h] [rbp-A0h]
  char v33; // [rsp+ECh] [rbp-9Ch]
  char v34[32]; // [rsp+F0h] [rbp-98h] BYREF
  float v35; // [rsp+110h] [rbp-78h]
  char v36; // [rsp+114h] [rbp-74h]
  char v37[32]; // [rsp+118h] [rbp-70h] BYREF
  float v38; // [rsp+138h] [rbp-50h]
  char v39; // [rsp+13Ch] [rbp-4Ch]
  char v40[32]; // [rsp+140h] [rbp-48h] BYREF
  float v41; // [rsp+160h] [rbp-28h]
  char v42; // [rsp+164h] [rbp-24h]
  char v43; // [rsp+168h] [rbp-20h] BYREF

  v21 = -2LL;
  try
  {
    v20 = (void **)a2;
    v3 = *(_QWORD **)(a2 + 8);
    std::wstring::wstring(v22, L"ThumbstickDeadzone", a3);
    v23 = FLOAT_0_2;
    v24 = 2;
    std::wstring::wstring(v25, L"TriggerDeadzone", v4);
    v26 = FLOAT_0_1;
    v27 = 2;
    std::wstring::wstring(v28, L"ScrollingScale", v5);
    v29 = FLOAT_7_0;
    v30 = 2;
    std::wstring::wstring(v31, L"ZoomingScale", v6);
    v32 = FLOAT_0_029999999;
    v33 = 2;
    std::wstring::wstring(v34, L"PointScaleFactor", v7);
    v35 = FLOAT_0_037500001;
    v36 = 2;
    std::wstring::wstring(v37, L"SelectXYDeadzone1M", v8);
    v38 = FLOAT_15_0;
    v39 = 2;
    std::wstring::wstring(v40, L"SelectTemporalDeadzoneSec", v9);
    v41 = FLOAT_2_0;
    v42 = 2;
    v19.m128i_i64[0] = (__int64)v22;
    v19.m128i_i64[1] = (__int64)&v43;
    std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
      (__int64)v18,
      &v19);
    v10 = *v3 + 32LL;
    v11 = v10 & -(__int64)(*v3 != 0LL);
    Instance = MPCConstantManager::GetInstance(v10, v12, v13, v14);
    MPCConstantManager::AddAndPopulateInputType((__int64)Instance, v11, v18);
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
      (__int64 ***)v18,
      (__int64 **)&v19,
      *(__int64 **)v18[0],
      (__int64 *)v18[0]);
    operator delete(v18[0], (const struct std::nothrow_t *)0x48);
    `eh vector destructor iterator'(
      v22,
      0x28uLL,
      7uLL,
      (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
    result = 1LL;
  }
  catch ( ... )
  {
    v17 = *v20;
    __ExceptionPtrCreate(v18);
    __ExceptionPtrCurrentException(v18);
    __ExceptionPtrAssign(v17, v18);
    __ExceptionPtrDestroy(v18);
    return 0LL;
  }
  return result;
}
