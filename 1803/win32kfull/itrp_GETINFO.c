/*
 * XREFs of itrp_GETINFO @ 0x1C02C8100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_GETINFO(__int64 a1)
{
  int *v2; // r10
  int v3; // edx
  int v4; // ecx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2 )
  {
    v2 = (int *)(qword_1C0327168 - 4);
    qword_1C0327168 = (__int64)v2;
    v3 = *v2;
    v4 = (*v2 & 1) != 0 ? 0x25 : 0;
    if ( (*v2 & 2) != 0 && (*(_BYTE *)(qword_1C0327180 + 321) & 1) != 0 )
      v4 |= 0x100u;
    if ( (v3 & 4) != 0 && (*(_BYTE *)(qword_1C0327180 + 321) & 2) != 0 )
      v4 |= 0x200u;
    if ( (v3 & 0x20) != 0 && *(_DWORD *)(qword_1C0327180 + 392) )
      v4 |= 0x1000u;
    if ( (v3 & 0x40) != 0 && (*(_BYTE *)(qword_1C0327180 + 452) & 1) != 0 )
      v4 |= 0x2000u;
    if ( (v3 & 0x80u) != 0 && (*(_BYTE *)(qword_1C0327180 + 452) & 2) != 0 )
      v4 |= 0x4000u;
    if ( (v3 & 0x100) != 0 && (*(_BYTE *)(qword_1C0327180 + 452) & 4) != 0 )
      v4 |= 0x8000u;
    if ( (v3 & 0x200) != 0 && (*(_BYTE *)(qword_1C0327180 + 452) & 8) != 0 )
      v4 |= 0x10000u;
    *v2 = v4;
    result = a1;
    qword_1C0327168 += 4LL;
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
