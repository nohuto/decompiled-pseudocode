/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x1800855E8
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800838E4 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x1800855E8 (--$_Insert@AEAU-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$_List_unchecked_iterator@V-$_L.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x180085148 (-erase@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTarget.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x1800855E8 (--$_Insert@AEAU-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$_List_unchecked_iterator@V-$_L.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Insert<std::pair<unsigned long const,Win32kInterop::TargetingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD **a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 **v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rax
  _QWORD *v19; // rax
  _QWORD **v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  float v23; // xmm0_4
  float v24; // xmm2_4
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // r15
  __int64 v28; // rbx
  _QWORD *iter; // rax
  __int64 v30[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v31[56]; // [rsp+30h] [rbp-38h] BYREF

  v30[1] = -2LL;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = (__int64 **)(a1 + 1);
  v11 = a1[1];
  v12 = 2 * (v8 & a1[6]);
  v13 = a1[3];
  if ( v11 == *(_QWORD *)(v13 + 16 * (v8 & a1[6]))
    || (v11 = **(_QWORD **)(v13 + 16 * (v8 & a1[6]) + 8), v11 == *(_QWORD *)(v13 + 16 * (v8 & a1[6]))) )
  {
LABEL_9:
    v30[0] = (__int64)a4;
    v15 = *a4;
    if ( (_QWORD *)v11 != *a4 )
    {
      *a4[1] = v15;
      *(_QWORD *)v15[1] = v11;
      **(_QWORD **)(v11 + 8) = a4;
      v16 = *(_QWORD **)(v11 + 8);
      *(_QWORD *)(v11 + 8) = v15[1];
      v15[1] = a4[1];
      a4[1] = v16;
    }
    v17 = a1[3];
    v18 = *(__int64 **)(v17 + 8 * v12);
    if ( v18 == *v10 )
    {
      *(_QWORD *)(v17 + 8 * v12) = a4;
      *(_QWORD *)(a1[3] + 8 * v12 + 8) = a4;
    }
    else if ( v18 == (__int64 *)v11 )
    {
      *(_QWORD *)(v17 + 8 * v12) = a4;
    }
    else
    {
      v19 = *(_QWORD **)(v17 + 8 * v12 + 8);
      v20 = (_QWORD **)*v19;
      *(_QWORD *)(v17 + 8 * v12 + 8) = *v19;
      if ( v20 != a4 )
        *(_QWORD *)(a1[3] + 8 * v12 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v12 + 8) + 8LL);
    }
    v21 = a1[2];
    v22 = a1[7];
    v23 = (float)(int)v21;
    if ( v21 < 0 )
      v23 = v23 + 1.8446744e19;
    v24 = (float)(int)v22;
    if ( v22 < 0 )
      v24 = v24 + 1.8446744e19;
    if ( (float)(v23 / v24) > *(float *)a1 )
    {
      if ( (unsigned __int64)v22 >= 0x200 )
      {
        if ( (unsigned __int64)v22 < 0xFFFFFFFFFFFFFFFLL )
          v22 *= 2LL;
      }
      else
      {
        v22 *= 8LL;
      }
      try
      {
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
          a1,
          v22);
        v26 = *v10;
        if ( (__int64 *)*v26 != v26 )
        {
          v27 = v26[1];
          do
          {
            v28 = **v10;
            std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Insert<std::pair<unsigned long const,Win32kInterop::TargetingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>>(
              a1,
              v31,
              v28 + 16);
          }
          while ( v28 != v27 );
        }
      }
      catch ( ... )
      {
        iter = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Make_iter(
                 v25,
                 v30,
                 v30[0]);
        std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>,void>(
          a1,
          v31,
          *iter);
        throw;
      }
    }
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( *a3 == *(_DWORD *)(v11 + 16) )
        break;
      if ( v11 == *(_QWORD *)(v13 + 16 * (v8 & a1[6])) )
        goto LABEL_9;
    }
    std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::erase((__int64)(a1 + 1), v30, a4);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
}
