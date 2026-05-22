/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_3929f32d634c578ffcbecb8bfbdfcf67_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800F7490
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_3929f32d634c578ffcbecb8bfbdfcf67_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  struct MPCConstantManager *Instance; // rcx
  __int64 result; // rax
  void *v11; // rbx
  void *v12[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v13; // [rsp+30h] [rbp-58h] BYREF
  void **v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  char v16[32]; // [rsp+50h] [rbp-38h] BYREF
  float v17; // [rsp+70h] [rbp-18h]
  char v18; // [rsp+74h] [rbp-14h]
  __int64 v19; // [rsp+78h] [rbp-10h] BYREF

  v15 = -2LL;
  try
  {
    v14 = (void **)a2;
    v3 = *(_QWORD **)(a2 + 8);
    std::wstring::wstring(v16, L"HandGuidanceScoreForPrimary", a3);
    v17 = FLOAT_0_89999998;
    v18 = 2;
    v13.m128i_i64[0] = (__int64)v16;
    v13.m128i_i64[1] = (__int64)&v19;
    std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
      (__int64)v12,
      &v13);
    v4 = *v3 + 24LL;
    v5 = v4 & -(__int64)(*v3 != 0LL);
    Instance = MPCConstantManager::GetInstance(v4, v6, v7, v8);
    MPCConstantManager::AddAndPopulateInputType((__int64)Instance, v5, v12);
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
      (__int64 ***)v12,
      (__int64 **)&v13,
      *(__int64 **)v12[0],
      (__int64 *)v12[0]);
    operator delete(v12[0], (const struct std::nothrow_t *)0x48);
    `eh vector destructor iterator'(
      v16,
      0x28uLL,
      1uLL,
      (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
    result = 1LL;
  }
  catch ( ... )
  {
    v11 = *v14;
    __ExceptionPtrCreate(v12);
    __ExceptionPtrCurrentException(v12);
    __ExceptionPtrAssign(v11, v12);
    __ExceptionPtrDestroy(v12);
    return 0LL;
  }
  return result;
}
