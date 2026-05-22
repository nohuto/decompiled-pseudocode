/*
 * XREFs of ?Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAUIGameInputDeviceInfoBuilder@@@Z @ 0x1800D3C88
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x1800A9CEC (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0GameInputDeviceInfoBuilder@@AEAA@GGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1@Z @ 0x1800D3A28 (--0GameInputDeviceInfoBuilder@@AEAA@GGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputDeviceInfoBuilder::Create(
        __int16 a1,
        __int16 a2,
        int a3,
        _OWORD *a4,
        _OWORD *a5,
        __int64 *a6)
{
  __int64 v10; // rax
  int v11; // edx

  *a6 = 0LL;
  v10 = (__int64)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
    v10 = GameInputDeviceInfoBuilder::GameInputDeviceInfoBuilder(v10, a1, a2, a3, a4, a5);
  if ( v10 )
  {
    *a6 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v11);
    return 2147942414LL;
  }
}
