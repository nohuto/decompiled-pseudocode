/*
 * XREFs of ??0GameInputDeviceInfoBuilder@@AEAA@GGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1@Z @ 0x1800D3A28
 * Callers:
 *     ?Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAUIGameInputDeviceInfoBuilder@@@Z @ 0x1800D3C88 (-Create@GameInputDeviceInfoBuilder@@SAJGGW4GameInputDeviceFamily@@PEBUAppLocalDeviceId@@1PEAPEAU.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

__int64 __fastcall GameInputDeviceInfoBuilder::GameInputDeviceInfoBuilder(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &GameInputDeviceInfoBuilder::`vftable';
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  memset_0((void *)(a1 + 16), 0, 0x158uLL);
  *(_WORD *)(a1 + 24) = a2;
  *(_WORD *)(a1 + 26) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_OWORD *)(a1 + 56) = *a5;
  *(_OWORD *)(a1 + 72) = a5[1];
  *(_OWORD *)(a1 + 88) = *a6;
  result = a1;
  *(_OWORD *)(a1 + 104) = a6[1];
  return result;
}
