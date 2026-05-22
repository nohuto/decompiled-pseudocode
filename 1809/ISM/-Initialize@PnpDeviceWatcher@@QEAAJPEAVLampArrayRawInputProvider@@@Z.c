/*
 * XREFs of ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180071480
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800719F4 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180076734 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x180076F70 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDeviceWatcher::Initialize(PnpDeviceWatcher *this, struct LampArrayRawInputProvider *a2)
{
  DWORD CurrentThreadId; // eax
  struct _CM_NOTIFY_FILTER *v4; // rdx
  const char *v5; // r9
  int LastError; // eax
  __int64 v7; // rcx
  int v8; // edi
  PCWSTR StringRawBuffer; // rax
  struct _CM_NOTIFY_FILTER *v10; // rdx
  void **v12; // [rsp+20h] [rbp-E0h]
  void **v13; // [rsp+20h] [rbp-E0h]
  UINT32 length[4]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h]
  _DWORD v17[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v18[400]; // [rsp+200h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  *(_QWORD *)this = a2;
  CurrentThreadId = GetCurrentThreadId();
  _InterlockedExchange64((volatile __int64 *)this + 3, (__int64)OpenThread(0x1FFFFFu, 0, CurrentThreadId));
  if ( !*((_QWORD *)this + 3) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x26,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
                  v5);
LABEL_6:
    v8 = LastError;
LABEL_10:
    PnpDeviceWatcher::Shutdown(this);
    return (unsigned int)v8;
  }
  v7 = 0x11CFF16F4D1E55B2LL - *(_QWORD *)&DirectX::g_XMZero.Data1;
  v15[0] = 416;
  if ( *(_QWORD *)&DirectX::g_XMZero.Data1 == 0x11CFF16F4D1E55B2LL )
    v7 = 0x300000111100CB88LL - *(_QWORD *)DirectX::g_XMZero.Data4;
  v15[2] = 0;
  v15[1] = v7 == 0;
  v16 = xmmword_18014F0D0;
  LastError = PnpApiWrapper::Details::RegisterDeviceEventHandler(
                (PnpApiWrapper::Details *)v15,
                v4,
                (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
                (char *)this + 16,
                v12);
  if ( LastError < 0 )
    goto LABEL_6;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, length);
  if ( length[0] >= 0xC8 )
  {
    *((_QWORD *)this + 1) = 0LL;
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x80070057LL);
    goto LABEL_10;
  }
  v17[0] = 416;
  v17[2] = 2;
  v17[1] = length[0] != 0 ? 0 : 2;
  _o_wcscpy_s(v18, 200LL, StringRawBuffer);
  v8 = PnpApiWrapper::Details::RegisterDeviceEventHandler(
         (PnpApiWrapper::Details *)v17,
         v10,
         (void (__high *)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *))this,
         (char *)this + 8,
         v13);
  if ( v8 < 0 )
    goto LABEL_10;
  PnpApiWrapper::Details::EnumerateDevices(
    PnpApiWrapper::Adapters::GetDeviceInterfaceList,
    PnpApiWrapper::Adapters::GetDeviceInterfaceListSize,
    3LL,
    &xmmword_18014F0D0);
  PnpApiWrapper::Details::EnumerateDevices(
    PnpApiWrapper::Adapters::GetDeviceInstanceList,
    PnpApiWrapper::Adapters::GetDeviceInstanceListSize,
    1LL,
    &DirectX::g_XMZero);
  return 0LL;
}
