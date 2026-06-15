/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A7AC
 * Callers:
 *     PolicyConfigAddDynamicRoutingRule @ 0x1800E1AF0 (PolicyConfigAddDynamicRoutingRule.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A1AC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  __int64 **v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v13; // [rsp+40h] [rbp+8h] BYREF

  v7 = (__int64 **)g_DynamicAudioEndpointManager;
  v13 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         a2,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = DynamicAudioEndpointManager::AddRule(v7, v13, a3, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 336LL;
  }
  else
  {
    v10 = 335LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)(unsigned int)v8);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v9;
}
