/*
 * XREFs of ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18011E3A4
 * Callers:
 *     PolicyConfigGetDynamicRoutingRule @ 0x1800D6C50 (PolicyConfigGetDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x18011D350 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DynamicAudioEndpointManager::GetRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  DynamicAudioEndpointManager *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17[3]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = a3;
  v17[1] = -2LL;
  v6 = g_DynamicAudioEndpointManager;
  v17[0] = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v16);
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a2,
         &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      696LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_16;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  v17[2] = (__int64)v6 + 16;
  std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
    (__int64 *)v6 + 109,
    (__int64)&v18,
    &v21);
  v9 = *(_QWORD *)(v18 + 40);
  v17[0] = v9;
  if ( !v9 )
  {
    v8 = -2147024809;
    v10 = 2147942487LL;
    v11 = 705LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v12 = v20;
  v20 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
          v9,
          &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
          &v20);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1248LL,
      (__int64)"internal\\sdk\\inc\\wil/com.h",
      (const char *)(unsigned int)v13);
    v10 = v8;
    v11 = 706LL;
    goto LABEL_12;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, struct _DynamicRoutingRule *))(*(_QWORD *)v20 + 88LL))(
          v20,
          v16,
          a4);
  v8 = v14;
  if ( v14 < 0 )
  {
    v10 = (unsigned int)v14;
    v11 = 707LL;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_14:
  if ( v6 != (DynamicAudioEndpointManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v17);
  return v8;
}
