/*
 * XREFs of USBCntrlGetSetBoolean @ 0x1C002EB50
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetByte @ 0x1C0029FB0 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned int a4,
        signed __int8 a5,
        _DWORD *a6)
{
  __int64 result; // rax

  result = USBHwGetSetByte(
             a1,
             *(_DWORD *)(a2 + 80),
             *(_DWORD *)(*(_QWORD *)(a2 + 128) + 16LL * a4 + 8),
             *(_WORD *)(a2 + 76) - 6,
             a3,
             a5);
  if ( (int)result >= 0 && a5 >= 0 )
    *a6 = 4;
  return result;
}
