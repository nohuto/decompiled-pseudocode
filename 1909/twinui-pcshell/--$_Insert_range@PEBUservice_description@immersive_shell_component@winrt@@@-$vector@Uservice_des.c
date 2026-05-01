/*
 * XREFs of ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BF574
 * Callers:
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800C039C (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@CAXXZ @ 0x1800B8338 (-_Xlength@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_d.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@0AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BF530 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1800BF938 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 *     ??$_Ucopy@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAPEAUservice_description@immersive_shell_component@winrt@@PEBU234@0PEAU234@@Z @ 0x1800BFA14 (--$_Ucopy@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_descriptio.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BFA88 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@V-$alloc.c)
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x1800C47A8 (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 */

_UNKNOWN **__fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_range<winrt::immersive_shell_component::service_description const *>(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  size_t v18; // rcx
  _QWORD *v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  char v26; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v9 = (a4 - a3) >> 5;
  v10 = ((char *)a2 - (char *)*a1) >> 5;
  v26 = 1;
  if ( v9 == 1 && a2 == a1[1] || (v26 = 0, v9) )
  {
    v11 = a1[2];
    v12 = a1[1];
    if ( v9 <= ((char *)v11 - (char *)v12) >> 5 )
    {
      if ( v9 >= ((char *)v12 - (char *)a2) >> 5 )
      {
        a1[1] = (__int64 *)std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
                             a2,
                             v12,
                             &a2[4 * v9]);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, v12);
      }
      else
      {
        v24 = 32 * v9;
        a1[1] = (__int64 *)std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
                             &v12[v24 / 0xFFFFFFFFFFFFFFF8uLL],
                             v12,
                             v12);
        std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          a2,
          &v12[v24 / 0xFFFFFFFFFFFFFFF8uLL],
          v12);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
          a2,
          &a2[(unsigned __int64)v24 / 8]);
      }
      return (_UNKNOWN **)std::vector<winrt::immersive_shell_component::service_description>::_Ucopy<winrt::immersive_shell_component::service_description const *>(
                            v25,
                            a3,
                            a4,
                            a2);
    }
    else
    {
      v13 = ((char *)v12 - (char *)*a1) >> 5;
      if ( v9 > 0x7FFFFFFFFFFFFFFLL - v13 )
        std::vector<winrt::immersive_shell_component::service_description>::_Xlength();
      v14 = v13 + v9;
      v15 = ((char *)v11 - (char *)*a1) >> 5;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v17 = v16 + v15;
        if ( v16 + v15 < v14 )
          v17 = v14;
      }
      else
      {
        v17 = v13 + v9;
      }
      v18 = 32 * v17;
      if ( v17 > 0x7FFFFFFFFFFFFFFLL )
        v18 = -1LL;
      v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(v18);
      v20 = &v19[4 * v10 + 4 * v9];
      std::vector<winrt::immersive_shell_component::service_description>::_Ucopy<winrt::immersive_shell_component::service_description const *>(
        v21,
        a3,
        a4,
        &v19[4 * v10]);
      v22 = v19;
      v23 = *a1;
      if ( !v26 )
      {
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
          v23,
          a2,
          v19);
        v22 = v20;
        v23 = a2;
      }
      std::_Uninitialized_move<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *,std::allocator<winrt::immersive_shell_component::service_description>>(
        v23,
        a1[1],
        v22);
      return (_UNKNOWN **)std::vector<winrt::immersive_shell_component::service_description>::_Change_array(
                            a1,
                            v19,
                            v14,
                            v17);
    }
  }
  return result;
}
