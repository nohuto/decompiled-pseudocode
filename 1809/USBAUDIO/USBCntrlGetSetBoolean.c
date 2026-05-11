/*
 * XREFs of USBCntrlGetSetBoolean @ 0x1C002D7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     USBHwGetSetByte @ 0x1C0028DD0 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4,
        unsigned int a5,
        signed __int8 a6,
        _DWORD *a7)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = USBHwGetSetByte(
               a1,
               *(_DWORD *)(a2 + 80),
               *(_DWORD *)(*(_QWORD *)(a2 + 128) + 16LL * a5 + 8),
               (unsigned __int16)*(_DWORD *)(a2 + 76) - 6,
               a4,
               a6);
    if ( (int)result >= 0 && a6 >= 0 )
      *a7 = 4;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0xAu,
      0xBu,
      (__int64)&WPP_5429d2dbdad8394cbb96feb220daa312_Traceguids);
    return 3221225990LL;
  }
  return result;
}
