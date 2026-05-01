/*
 * XREFs of _LogEventWithViewHostItemData_0 @ 0x1801BAA10
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BA480 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z @ 0x1801B9B3C (--$GetLastActiveItem@PEBGAEAI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithViewHostItemData_0(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  LPCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  string = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &string);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v8);
    if ( v4 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const *,unsigned int &>(
        &StringRawBuffer,
        (__int64)&v8);
      v4 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\telemetryhelpers.h",
      (const char *)(unsigned int)v3);
  }
  if ( string )
    WindowsDeleteString(string);
  return (unsigned int)v4;
}
