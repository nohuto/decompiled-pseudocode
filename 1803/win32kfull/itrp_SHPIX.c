/*
 * XREFs of itrp_SHPIX @ 0x1C02CF260
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C02CF354 (itrp_SHP_Common.c)
 */

__int64 __fastcall itrp_SHPIX(int a1)
{
  int v2; // ecx
  __int64 v3; // r8
  int v4; // r9d
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && dword_1C03271A0 + 2LL <= (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
  {
    v2 = 0;
    qword_1C0327168 -= 4LL;
    v3 = *(int *)qword_1C0327168;
    if ( (_WORD)dword_1C032715C )
      v4 = ((unsigned __int64)(v3 * (__int16)dword_1C032715C) >> 32 << 18)
         + ((((unsigned int)(v3 * (__int16)dword_1C032715C) >> 13) + 1) >> 1);
    else
      v4 = 0;
    if ( HIWORD(dword_1C032715C) )
      v2 = ((unsigned __int64)(v3 * SHIWORD(dword_1C032715C)) >> 32 << 18)
         + ((((unsigned int)(v3 * SHIWORD(dword_1C032715C)) >> 13) + 1) >> 1);
    LOBYTE(v3) = 1;
    return itrp_SHP_Common(a1, -1, v3, v4, v2);
  }
  else
  {
    result = qword_1C03271D8;
    dword_1C03271D0 = 4368;
  }
  return result;
}
