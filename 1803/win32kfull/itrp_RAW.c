/*
 * XREFs of itrp_RAW @ 0x1C02CD280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RAW(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r9d
  __int64 result; // rax

  if ( *(_BYTE *)(qword_1C0327180 + 333) == 2 )
  {
    v2 = *(_QWORD *)(qword_1C0327180 + 424);
    if ( (qword_1C0327180 ^ v2 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327180 + 432)
      && (v2 - qword_1C0327168) >> 2 )
    {
      v3 = *(__int16 *)(*(_QWORD *)(qword_1C0327178 + 176) + 2LL * (*(__int16 *)(qword_1C0327178 + 192) - 1)) + 1;
      *(_DWORD *)qword_1C0327168 = *(_DWORD *)(*(_QWORD *)(qword_1C0327178 + 128) + 4LL * (v3 + 1))
                                 - *(_DWORD *)(*(_QWORD *)(qword_1C0327178 + 128) + 4LL * v3);
      result = a1;
      qword_1C0327168 += 4LL;
      return result;
    }
    dword_1C03271D0 = 4369;
  }
  else
  {
    dword_1C03271D0 = 4365;
  }
  return qword_1C03271D8;
}
