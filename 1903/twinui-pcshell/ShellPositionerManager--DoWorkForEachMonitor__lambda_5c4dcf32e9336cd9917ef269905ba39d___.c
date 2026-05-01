/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___ @ 0x18039396C
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180395394 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x18009920C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V12@@std@@PEAX@2@XZ @ 0x180214EC4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Ue_ea_180214EC4.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x18039366C (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$.c)
 *     wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___ @ 0x180393DD8 (wil--ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___.c)
 *     _lambda_5c4dcf32e9336cd9917ef269905ba39d_::operator() @ 0x1803943E8 (_lambda_5c4dcf32e9336cd9917ef269905ba39d_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 **v11; // r9
  unsigned int v12; // esi
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 **); // rbx
  int v14; // ebx
  __int64 *v15; // rbx
  __int64 (__fastcall *v16)(__int64 *, __int64 *); // rdi
  wil::details::in1diag3 *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 **v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r14
  int (__fastcall *v24)(__int64, _QWORD, __int64 *); // rsi
  __int64 v25; // rdx
  __int64 *v26; // rcx
  __int64 **i; // rax
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v31[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v35; // [rsp+B8h] [rbp+38h] BYREF

  v31[1] = (__int64 *)-2LL;
  v32 = 0LL;
  *(_QWORD *)&v32 = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::_Buyheadnode();
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v35);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v9);
    v11 = (__int64 **)v32;
    goto LABEL_35;
  }
  v12 = 0;
  if ( v35 )
  {
    while ( 1 )
    {
      v31[0] = 0LL;
      v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)a2 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
      if ( v13(a2, v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v31) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
      if ( ++v12 >= v35 )
        goto LABEL_16;
    }
    v14 = 0;
    v30 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(&v30, a4);
    }
    else
    {
      v15 = v31[0];
      v16 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*v31[0] + 80);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      v14 = v16(v15, &v30);
    }
    v17 = retaddr;
    if ( v14 >= 0 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 24LL))(v30, &v29) < 0 )
        goto LABEL_14;
      v33[0] = &v32;
      v33[1] = &v29;
      v33[2] = v31;
      v20 = wil::ResultFromException__lambda_aef78f8519886e93f79e2f19914772e2___(v33);
      v17 = retaddr;
      if ( v20 >= 0 )
        goto LABEL_14;
      v18 = (unsigned int)v20;
      v19 = 957LL;
    }
    else
    {
      v18 = (unsigned int)v14;
      v19 = 938LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v18);
LABEL_14:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    goto LABEL_15;
  }
LABEL_16:
  v11 = (__int64 **)v32;
  v21 = *(__int64 ***)v32;
  while ( v21 != v11 )
  {
    v22 = (__int64)v21[5];
    v29 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v30 = 0LL;
    v23 = *(_QWORD *)(a1 + 152);
    v24 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    if ( v24(v23, *((unsigned int *)v21 + 8), &v30) >= 0 )
    {
      v31[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 **))v22)(
             v22,
             &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
             v31) >= 0 )
      {
        v25 = a3;
        if ( !a3 )
          v25 = v30;
        lambda_5c4dcf32e9336cd9917ef269905ba39d_::operator()(a5, v25, v30, v31[0]);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v26 = v21[2];
    if ( *((_BYTE *)v26 + 25) )
    {
      for ( i = (__int64 **)v21[1]; !*((_BYTE *)i + 25) && v21 == (__int64 **)i[2]; i = (__int64 **)i[1] )
        v21 = i;
    }
    else
    {
      i = (__int64 **)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min(v26);
    }
    v21 = i;
    v11 = (__int64 **)v32;
  }
  v10 = 0;
LABEL_35:
  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
    (__int64 ***)&v32,
    v31,
    *v11,
    (__int64 *)v11);
  std::_Deallocate<16,0>((void *)v32, (const struct std::nothrow_t *)0x30);
  return v10;
}
