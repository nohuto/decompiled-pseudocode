/*
 * XREFs of ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18000B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180005D90 (-lower_bound@-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B840 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x180012DBC (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800154D0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_1800154D0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::GetTargetWithFocus(
        MPCInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  bool v7; // cl
  struct IInputTarget **v8; // r15
  unsigned int v9; // ebp
  struct IInputBuffer *v10; // r9
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  struct IInputDisplay *v17; // rbx
  ContextualProcessorManager *v18; // rbx
  struct IInputTarget *v19; // rcx
  struct IInputTarget *v20; // rcx
  __int64 v22; // r14
  __int64 *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-68h]
  __int64 *v28; // [rsp+30h] [rbp-58h] BYREF
  struct DeviceInfo *v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct IInputTarget *v33; // [rsp+90h] [rbp+8h] BYREF
  struct IInputDisplay *v34; // [rsp+A0h] [rbp+18h] BYREF

  v30[1] = -2LL;
  v7 = a3 && (*((_DWORD *)a3 + 1) & 0x662600) != 0;
  if ( *((_BYTE *)this + 904) && v7 )
    return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **, struct IInputTarget *))this + 104))(
             *((_QWORD *)this + 104),
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a5,
             a4);
  v34 = a2;
  v8 = a5;
  if ( a5 )
  {
    v9 = 0;
    if ( a3 )
    {
      v33 = 0LL;
      std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::lower_bound(
        (_QWORD *)this + 84,
        &v28,
        (unsigned __int8 *)a3);
      v11 = (__int64 *)*((_QWORD *)this + 85);
      v12 = v28;
      if ( v28 == v11 )
      {
        v29 = a3;
        v22 = *v11;
        v23 = *(__int64 **)(*v11 + 8);
        v24 = std::_List_buy<std::pair<unsigned long const,InputContext>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                (_DWORD)v11,
                *v11,
                (_DWORD)v23,
                (_DWORD)v10,
                (__int64)&v29);
        v25 = *((_QWORD *)this + 86);
        if ( v25 == 0x1FFFFFFFFFFFFFELL )
          std::_Xlength_error("list<T> too long");
        *((_QWORD *)this + 86) = v25 + 1;
        *(_QWORD *)(v22 + 8) = v24;
        *v23 = v24;
        std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
          (char *)this + 672,
          &v31,
          **((_QWORD **)this + 85) + 16LL);
        v12 = v31;
      }
      v13 = v12 + 3;
      v14 = v12[3];
      v15 = *((_QWORD *)this + 40);
      if ( v14 != v15 )
      {
        if ( v15 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*((_QWORD *)this + 40));
          v14 = *v13;
        }
        *v13 = v15;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( !v34 )
      {
        v16 = (*(__int64 (__fastcall **)(MPCInputRouter *, struct DeviceInfo *, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
                this,
                a3,
                &v34);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x629,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v16,
            v27);
          __debugbreak();
        }
      }
      v17 = v34;
      if ( (struct IInputDisplay *)v13[9] != v34 )
      {
        v30[0] = (__int64)v34;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v30);
        v26 = v13[9];
        v13[9] = (__int64)v17;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v18 = (ContextualProcessorManager *)*((_QWORD *)this + 38);
      v19 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( (int)ContextualProcessorManager::OnFocusRequest(v18, a3, (struct InputContext *)v13, v10, &v33) < 0 )
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v13);
        *v8 = (struct IInputTarget *)*v13;
        v20 = v33;
      }
      else
      {
        v20 = v33;
        if ( v33 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v33 + 8LL))(v33);
          v20 = v33;
        }
        *v8 = v20;
      }
      if ( v20 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 40);
      *v8 = (struct IInputTarget *)*((_QWORD *)this + 40);
    }
  }
  else
  {
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL,
      v27);
  }
  return v9;
}
