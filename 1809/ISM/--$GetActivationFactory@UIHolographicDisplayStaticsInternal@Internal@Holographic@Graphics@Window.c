/*
 * XREFs of ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18005A960
 * Callers:
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A2F8 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005AA30 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(
        __int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int ActivationFactory; // eax
  _QWORD v6[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6[2] = -2LL;
  v6[3] = a1;
  v6[0] = L"Windows.Graphics.Holographic.HolographicDisplay";
  *a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6);
  v3 = *a1;
  *a1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x669,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x18005AA27LL);
  }
  return a1;
}
