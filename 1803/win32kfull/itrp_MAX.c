/*
 * XREFs of itrp_MAX @ 0x1C02CAAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MAX(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v2 = qword_1C0327168, (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) >= 2) )
  {
    v3 = qword_1C0327168 - 4;
    qword_1C0327168 = v3;
    v4 = *(_DWORD *)(v2 - 4);
    if ( *(_DWORD *)(v3 - 4) < v4 )
      *(_DWORD *)(v3 - 4) = v4;
    return a1;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
