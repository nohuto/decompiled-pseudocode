/*
 * XREFs of itrp_WCVTFOD @ 0x1C02D0B60
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B3B48 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_WCVTFOD(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rdi

  v1 = qword_1C0327180;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && (v3 = qword_1C0327168, (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) >= 2) )
  {
    qword_1C0327168 -= 4LL;
    v4 = *(_DWORD *)(v3 - 4);
    qword_1C0327168 = v3 - 8;
    v5 = *(int *)(v3 - 8);
    if ( (int)v5 < *(unsigned __int16 *)(qword_1C0327180 + 360)
      && (int)v5 >= 0
      && (*(_QWORD *)(qword_1C0327180 + 16) ^ qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0327180 + 360)) == *(_QWORD *)(qword_1C0327180 + 368) )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v5) = InvokeGlobalGSScale(
                                                     *(_DWORD *)(qword_1C0327180 + 192),
                                                     (int *)(qword_1C0327180 + 296),
                                                     v4);
      return a1;
    }
    dword_1C03271D0 = 4379;
  }
  else
  {
    dword_1C03271D0 = 4368;
  }
  return qword_1C03271D8;
}
