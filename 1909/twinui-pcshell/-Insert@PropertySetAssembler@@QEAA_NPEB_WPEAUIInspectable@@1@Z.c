/*
 * XREFs of ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x18035E084
 * Callers:
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x18035D47C (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180136BA4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x18035D70C (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PropertySetAssembler::Insert(
        PropertySetAssembler *this,
        const wchar_t *a2,
        struct IInspectable *a3,
        struct IInspectable *a4)
{
  bool v6; // bl
  HRESULT v7; // eax
  HSTRING v8; // rdi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+10h] BYREF
  struct IInspectable *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  v6 = 0;
  string = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&string, L"LogoPath", 8u);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      85LL,
      (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = string;
  if ( a3 )
  {
    PropertySetAssembler::EnsurePropertySet(this);
    LOBYTE(v13) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, struct IInspectable *, struct IInspectable **))(**(_QWORD **)this + 80LL))(
           *(_QWORD *)this,
           v8,
           a3,
           &v13);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v6 = (_BYTE)v13 != 0;
    v8 = string;
  }
  WindowsDeleteString(v8);
  return v6;
}
