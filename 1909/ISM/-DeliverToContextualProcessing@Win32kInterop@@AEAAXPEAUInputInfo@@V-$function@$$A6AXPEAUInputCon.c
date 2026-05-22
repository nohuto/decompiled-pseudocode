/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC3D0
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BC664 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD274 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BDE04 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180015870 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800BA374 (--$emplace@AEA_KUTargetingInfo@Win32kInterop@@@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kIn.c)
 *     ??1InputContext@@QEAA@XZ @ 0x1800BACCC (--1InputContext@@QEAA@XZ.c)
 *     ??R?$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z @ 0x1800BB404 (--R-$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800BE4E4 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800BF778 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_K_ea_1800BF778.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned int v15; // ecx
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-71h] BYREF
  __int64 v21[8]; // [rsp+40h] [rbp-69h] BYREF
  char v22[32]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  char v25[80]; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  int *v27; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v28; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+120h] [rbp+77h]
  __int64 v30; // [rsp+128h] [rbp+7Fh]

  v30 = a4;
  v29 = a3;
  InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)a2);
  v28 = (unsigned int)a2[1] | (unsigned __int64)((__int64)*a2 << 32);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 192,
    (__int64)&v27,
    (unsigned __int8 *)&v28);
  v8 = (__int64)v27;
  if ( v27 == *(int **)(a1 + 200) )
  {
    v24 = 0LL;
    v20 = 0LL;
    std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(v21);
    memset_0(v22, 0, sizeof(v22));
    v23 = 0LL;
    v8 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::emplace<unsigned __int64 &,Win32kInterop::TargetingInfo>(
                      a1 + 192,
                      (__int64)v25,
                      &v28,
                      (__int64)&v20);
    v9 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    InputContext::~InputContext((InputContext *)&v20);
    std::_Func_class<void,InputContext *>::operator()(a3, v8 + 24);
    v27 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, int *, __int64, __int64, int **))(**(_QWORD **)(a1 + 48) + 104LL))(
           *(_QWORD *)(a1 + 48),
           a2,
           v8 + 24,
           a1 + 8,
           &v27) >= 0 )
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(v8 + 128), (__int64 *)&v27);
    v10 = (__int64)v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    std::_Func_class<void,InputContext *>::operator()(a3, (__int64)(v27 + 6));
  }
  v11 = *(_QWORD *)(v8 + 128);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    if ( v12 != -2147417853 && v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1536LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  else
  {
    v27 = a2;
    v13 = *(_QWORD *)(a4 + 56);
    if ( !v13 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v13 + 16LL))(v13, &v27);
  }
  if ( *a2 == 4096 )
    goto LABEL_23;
  LOBYTE(result) = 0;
  v15 = a2[53];
  if ( !v15 )
    goto LABEL_23;
  v16 = a2 + 57;
  v17 = v15;
  do
  {
    result = (unsigned __int8)result;
    if ( (*v16 & 4) != 0 )
      result = 1LL;
    v16 += 144;
    --v17;
  }
  while ( v17 );
  if ( !(_BYTE)result )
LABEL_23:
    result = std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::erase(
               a1 + 192,
               &v28);
  v18 = *(_QWORD *)(a3 + 56);
  if ( v18 )
  {
    LOBYTE(v17) = v18 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v17);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  v19 = *(_QWORD *)(a4 + 56);
  if ( v19 )
  {
    LOBYTE(v17) = v19 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v17);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return result;
}
