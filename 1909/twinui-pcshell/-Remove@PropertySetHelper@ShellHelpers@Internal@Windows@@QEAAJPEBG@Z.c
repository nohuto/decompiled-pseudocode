/*
 * XREFs of ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1800564B0
 * Callers:
 *     _lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator() @ 0x18005492C (_lambda_083b65f0a0bd48e59928c88ac5c6c8ab_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x180056568 (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        const unsigned __int16 *a2)
{
  PVOID Reserved1; // rdi
  int PropSetMap; // ebx
  int v5; // eax
  const WCHAR *v7[3]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7[2] = (const WCHAR *)-2LL;
  v7[0] = L"ApplicationMultiviewActivationPolicy";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7)[1].Reserved.Reserved1;
  v7[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(this, v7);
  if ( PropSetMap >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(const WCHAR *, PVOID))(*(_QWORD *)v7[0] + 88LL))(v7[0], Reserved1);
    PropSetMap = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v5,
        (int)v7[0]);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  if ( PropSetMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropSetMap,
      (int)v7[0]);
  return (unsigned int)PropSetMap;
}
