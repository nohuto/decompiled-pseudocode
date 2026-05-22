/*
 * XREFs of ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x1800268A0
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800267E0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x180026948 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180026CDC (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800A5CE4 (-Close@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 */

__int64 __fastcall WGIRawInputProvider::Initialize(WGIRawInputProvider *this)
{
  int v2; // eax
  int v3; // eax
  int started; // eax
  HANDLE FileW; // rsi
  const char *v7; // r9
  int dwCreationDisposition; // [rsp+20h] [rbp-28h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD CurrentProcessId; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 40);
  v2 = CoreUICreate((char *)this + 40);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v2,
      dwCreationDisposition);
    __debugbreak();
  }
  if ( IsEdition(6176LL) )
  {
    FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
    if ( FileW != *((HANDLE *)this + 8) )
    {
      Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((char *)this + 56);
      *((_QWORD *)this + 8) = FileW;
    }
    if ( *((_QWORD *)this + 8) == -1LL )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x69,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        v7);
      __debugbreak();
    }
  }
  v3 = WGIRawInputProvider::SetInputFocusProcess(this, 0, 0);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v3,
      dwCreationDisposition);
    __debugbreak();
  }
  CurrentProcessId = GetCurrentProcessId();
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
  started = WGIRawInputProvider::StartRawGameControllerWatcher(this);
  if ( started < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)started,
      dwCreationDispositiona);
    __debugbreak();
  }
  return 0LL;
}
