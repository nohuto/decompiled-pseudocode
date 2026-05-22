/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4a5cb4a35df262c8aa4f0fe492943826_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1801003B0
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

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4a5cb4a35df262c8aa4f0fe492943826_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  struct MPCConstantManager *Instance; // rcx
  __int64 result; // rax
  void *v14; // rbx
  void *v15[2]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v16; // [rsp+30h] [rbp-D8h] BYREF
  void **v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+48h] [rbp-C0h]
  char v19[32]; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+70h] [rbp-98h]
  char v21; // [rsp+74h] [rbp-94h]
  char v22[32]; // [rsp+78h] [rbp-90h] BYREF
  int v23; // [rsp+98h] [rbp-70h]
  char v24; // [rsp+9Ch] [rbp-6Ch]
  char v25[32]; // [rsp+A0h] [rbp-68h] BYREF
  float v26; // [rsp+C0h] [rbp-48h]
  char v27; // [rsp+C4h] [rbp-44h]
  char v28[32]; // [rsp+C8h] [rbp-40h] BYREF
  float v29; // [rsp+E8h] [rbp-20h]
  char v30; // [rsp+ECh] [rbp-1Ch]
  __int64 v31; // [rsp+F0h] [rbp-18h] BYREF

  v18 = -2LL;
  try
  {
    v17 = (void **)a2;
    v3 = *(_QWORD **)(a2 + 8);
    std::wstring::wstring(v19, L"PointScaleFactorXY", a3);
    v20 = 1000593162;
    v21 = 2;
    std::wstring::wstring(v22, L"PointScaleFactorStick", v4);
    v23 = 1000593162;
    v24 = 2;
    std::wstring::wstring(v25, L"DeadZoneAngle", v5);
    v26 = FLOAT_3_0;
    v27 = 2;
    std::wstring::wstring(v28, L"ThumbStickDeadZone", v6);
    v29 = FLOAT_0_1;
    v30 = 2;
    v16.m128i_i64[0] = (__int64)v19;
    v16.m128i_i64[1] = (__int64)&v31;
    std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
      (__int64)v15,
      &v16);
    v7 = *v3 + 24LL;
    v8 = v7 & -(__int64)(*v3 != 0LL);
    Instance = MPCConstantManager::GetInstance(v7, v9, v10, v11);
    MPCConstantManager::AddAndPopulateInputType((__int64)Instance, v8, v15);
    std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::erase(
      (__int64 ***)v15,
      (__int64 **)&v16,
      *(__int64 **)v15[0],
      (__int64 *)v15[0]);
    operator delete(v15[0], (const struct std::nothrow_t *)0x48);
    `eh vector destructor iterator'(
      v19,
      0x28uLL,
      4uLL,
      (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
    result = 1LL;
  }
  catch ( ... )
  {
    v14 = *v17;
    __ExceptionPtrCreate(v15);
    __ExceptionPtrCurrentException(v15);
    __ExceptionPtrAssign(v14, v15);
    __ExceptionPtrDestroy(v15);
    return 0LL;
  }
  return result;
}
