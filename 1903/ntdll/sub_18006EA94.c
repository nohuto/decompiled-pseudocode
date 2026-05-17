/*
 * XREFs of sub_18006EA94 @ 0x18006EA94
 * Callers:
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     RtlFreeThreadActivationContextStack @ 0x18006E980 (RtlFreeThreadActivationContextStack.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006EA94(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 712) )
  {
    *(_DWORD *)(a1 + 680) = 0;
    *(_QWORD *)(a1 + 656) = 0LL;
    *(_QWORD *)(a1 + 672) = a1 + 664;
    *(_QWORD *)(a1 + 664) = a1 + 664;
    *(_DWORD *)(a1 + 684) = 1;
    result = MEMORY[0x7FFE0320];
    *(_DWORD *)(a1 + 688) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *(_DWORD *)(a1 + 680) = 2;
    *(_QWORD *)(a1 + 712) = a1 + 656;
  }
  return result;
}
