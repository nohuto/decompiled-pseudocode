/*
 * XREFs of ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18009ECF0
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x18009E738 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800337E0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _WORD *v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // r14
  PVOID Reserved1; // r15
  const WCHAR *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  char *StringRawBuffer; // rdx
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v19; // [rsp+28h] [rbp-48h]
  const WCHAR *v20; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v22; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  string[1] = (HSTRING)-2LL;
  if ( a3[3] < 8uLL )
    v5 = a3;
  else
    v5 = (_WORD *)*a3;
  v6 = 0LL;
  a3[2] = 0LL;
  *v5 = 0;
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  v7 = 0;
  v19 = 0LL;
  v20 = L"PackageFullName";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v20)[1].Reserved.Reserved1;
  v9 = 0LL;
  v19 = 0LL;
  v18[0] = 0;
  if ( a1 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, Reserved1, v18);
    v11 = retaddr;
    if ( v10 < 0 )
    {
LABEL_26:
      wil::details::in1diag3::Throw_Hr(
        v11,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v10);
      goto LABEL_27;
    }
    if ( !v18[0] )
      goto LABEL_12;
    v20 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, PVOID, const WCHAR **))(*(_QWORD *)a1 + 48LL))(a1, Reserved1, &v20);
    v13 = retaddr;
    if ( v12 < 0 )
    {
LABEL_27:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x2A,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x18009EEE8LL);
    }
    v9 = v20;
    if ( v20 )
    {
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 8LL))(v20);
      v9 = v20;
    }
    v19 = v9;
    if ( v9 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_12:
      v9 = v19;
    }
  }
  v23 = 0LL;
  if ( !v18[0] )
    goto LABEL_16;
  v14 = (*(__int64 (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v9 + 152LL))(v9, string);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v14);
    goto LABEL_26;
  }
  v7 = 1;
  v9 = v19;
LABEL_16:
  if ( v9 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string[0], 0LL);
    if ( *(_WORD *)StringRawBuffer )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&StringRawBuffer[2 * v16] );
      v6 = v16;
    }
    std::wstring::assign(a3, StringRawBuffer, v6);
    LOBYTE(v6) = 1;
  }
  WindowsDeleteString(string[0]);
  return v6;
}
