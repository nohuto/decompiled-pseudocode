/*
 * XREFs of ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1802341B0
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180236EF0 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z @ 0x180229DE0 (--$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180234F44 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TryClose(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // rbx
  HWND Ptr; // rsi
  HSTRING v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF
  LPCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v2 = this + 26;
  AcquireSRWLockShared(this + 26);
  Ptr = (HWND)this[48].Ptr;
  v5 = (HSTRING)this[47].Ptr;
  v10 = (int)Ptr;
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  Win32BackedViewHostItemTelemetry::TryClose<unsigned short const *,unsigned int,unsigned char &>(
    &StringRawBuffer,
    (__int64)&v10,
    &v11);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  PostMessageW(Ptr, 0x112u, 0xF060uLL, 0LL);
  v6 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_MoveViewToDesktopAfterDelayIfSlate(
         (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
         1);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x167,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
