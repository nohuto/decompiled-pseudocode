/*
 * XREFs of ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x180104250
 * Callers:
 *     s_StartPersonalAssistantDialogSession @ 0x1801044A0 (s_StartPersonalAssistantDialogSession.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x180103ED8 (--$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RpcBeginDialogSession(const unsigned __int16 *a1, struct DialogSession **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IAudioProcess *v9; // [rsp+50h] [rbp+18h] BYREF
  struct IAudioProcess *v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v9);
  v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = v9;
    v3 = Microsoft::WRL::Details::MakeAndInitialize<DialogSession,DialogSession,IAudioProcess *,unsigned short const * &>(
           a2,
           &v10,
           &v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 72LL;
  }
  else
  {
    v5 = 71LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v4;
}
