/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x18011F330
 * Callers:
 *     PolicyConfigRemoveDynamicRoutingRule @ 0x1800D7270 (PolicyConfigRemoveDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011F1FC (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(DynamicAudioEndpointManager *this, void *a2, __int64 a3)
{
  DynamicAudioEndpointManager *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = g_DynamicAudioEndpointManager;
  v11 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v11);
  v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         a2,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = DynamicAudioEndpointManager::RemoveRule(v5, v11, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 549LL;
  }
  else
  {
    v8 = 548LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return v7;
}
