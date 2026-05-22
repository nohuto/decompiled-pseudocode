/*
 * XREFs of ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18006A994 (--0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x18006B700 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006B80C (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3,
        const char *a4)
{
  wil::details::in1diag3 *v6; // rcx
  wil::details::in1diag3 *v7; // rcx
  WGIRawInputProvider *v8; // rax
  const char *v9; // r9
  WGIRawInputProvider *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  HANDLE FileW; // rdi
  const char *v14; // r9
  HANDLE v15; // rcx
  int v16; // eax
  int started; // eax
  signed int LastError; // eax
  unsigned __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD CurrentProcessId; // [rsp+78h] [rbp+20h] BYREF

  v6 = retaddr;
  if ( WGIRawInputProvider::s_pInstance )
    goto LABEL_23;
  v7 = retaddr;
  if ( !a3 )
    goto LABEL_24;
  *a3 = 0LL;
  if ( !a1 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v8 = (WGIRawInputProvider *)malloc(0x198uLL);
  v10 = v8;
  if ( v8 )
    memset_0(v8, 0, 0x198uLL);
  if ( v10 )
    v10 = WGIRawInputProvider::WGIRawInputProvider(v10, a1);
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v9);
    __debugbreak();
  }
  v11 = *((_QWORD *)v10 + 5);
  if ( v11 )
  {
    *((_QWORD *)v10 + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = CoreUICreate((char *)v10 + 40);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
  {
    FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
    v15 = (HANDLE)*((_QWORD *)v10 + 7);
    if ( FileW != v15 )
    {
      if ( v15 != (HANDLE)-1LL )
      {
        if ( !CloseHandle(v15) )
        {
          LastError = GetLastError();
          v20 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v20 = (unsigned int)LastError;
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v20);
          __debugbreak();
        }
        *((_QWORD *)v10 + 7) = -1LL;
      }
      *((_QWORD *)v10 + 7) = FileW;
      v15 = FileW;
    }
    if ( v15 == (HANDLE)-1LL )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x69,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        v14);
      __debugbreak();
    }
  }
  v16 = WGIRawInputProvider::SetInputFocusProcess(v10, 0, 0);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18006B04CLL);
  }
  CurrentProcessId = GetCurrentProcessId();
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
  started = WGIRawInputProvider::StartRawGameControllerWatcher(v10);
  if ( started < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)(unsigned int)started);
LABEL_23:
    wil::details::in1diag3::_FailFast_Unexpected(
      v6,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      a4);
LABEL_24:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      (const char *)0x80004003LL);
    __debugbreak();
  }
  WGIRawInputProvider::s_pInstance = v10;
  *a3 = v10;
  return 0LL;
}
