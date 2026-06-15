/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18012C0A8
 * Callers:
 *     PolicyConfigUpdateDynamicRoutingRule @ 0x1800E3810 (PolicyConfigUpdateDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18012BDA8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  __int64 **v7; // rbp
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v13; // [rsp+40h] [rbp+8h] BYREF

  v7 = (__int64 **)g_DynamicAudioEndpointManager;
  v13 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v13);
  updated = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
              g_PolicyManager,
              a2,
              &v13);
  v9 = updated;
  if ( updated >= 0 )
  {
    updated = DynamicAudioEndpointManager::UpdateRule(v7, v13, a3, a4);
    v9 = updated;
    if ( updated >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 485LL;
  }
  else
  {
    v10 = 483LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v9;
}
