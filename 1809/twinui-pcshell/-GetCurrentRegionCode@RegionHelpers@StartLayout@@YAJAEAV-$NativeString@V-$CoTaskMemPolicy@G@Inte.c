/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x1803A0620
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18013D8F8 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803A0580 (--$ActivateInstance@V-$ComPtr@UIGeographicRegion@Globalization@Windows@@@WRL@Microsoft@@@Foundat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::RegionHelpers::GetCurrentRegionCode(LPVOID *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // r9
  PCWSTR v9; // rax
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Globalization::IGeographicRegion>>(
         v14,
         v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v12[0];
    WindowsDeleteString(0LL);
    string = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 56LL))(v4, &string);
    v3 = v5;
    if ( v5 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
      {
        v3 = -2147467259;
        v8 = 2147500037LL;
        v6 = 25LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
          (const char *)v8);
LABEL_12:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_13;
      }
      v9 = WindowsGetStringRawBuffer(string, 0LL);
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a1,
             (__int64)v9,
             0xFFFFFFFFFFFFFFFFuLL);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_12;
      }
      v6 = 32LL;
    }
    else
    {
      v6 = 21LL;
    }
    v8 = (unsigned int)v5;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v2);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v3;
}
