/*
 * XREFs of ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x18035D47C
 * Callers:
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x18035DE94 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x18035D7A8 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x18035E084 (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PropertySetAssembler::InsertHString<wchar_t const *>(
        PropertySetAssembler *this,
        __int64 a2,
        HSTRING a3,
        __int64 a4)
{
  HRESULT v6; // eax
  const wchar_t *v7; // rdx
  struct IInspectable *v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HSTRING, struct IInspectable **); // rbx
  int v11; // eax
  bool v12; // bl
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInspectable *v15; // [rsp+58h] [rbp+10h] BYREF
  INT32 v16; // [rsp+68h] [rbp+20h] BYREF
  int v17; // [rsp+6Ch] [rbp+24h]

  v17 = HIDWORD(a4);
  v15 = 0LL;
  v16 = 0;
  v6 = WindowsCompareStringOrdinal(a3, 0LL, &v16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      98LL,
      (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v16 )
  {
    PropertySetAssembler::EnsureValueFactory(this);
    v9 = *((_QWORD *)this + 1);
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v9 + 144LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v11 = v10(v9, a3, &v15);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        102LL,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v12 = PropertySetAssembler::Insert(this, v7, v15, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v12;
}
