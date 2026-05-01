/*
 * XREFs of ?IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800D246C
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsAvailabilityHelpers::IsFeedsAppInstalled(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v9; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v3 = v14;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_4408fb32_c420_41c5_b6c1_edce489bb84d, v12);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v11[0] = 0;
    v7 = v12[0];
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, _BYTE *))(*(_QWORD *)v12[0] + 328LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_180451688);
    ActivationFactory = v8(v7, 0LL, v9[1].Reserved.Reserved1, v11);
    v5 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      *(_BYTE *)this = v11[0];
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 79LL;
  }
  else
  {
    v6 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v5;
}
