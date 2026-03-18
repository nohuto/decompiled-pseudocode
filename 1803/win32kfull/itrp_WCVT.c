/*
 * XREFs of itrp_WCVT @ 0x1C02D0A40
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_WCVT(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  int CVTScale; // ecx
  __int64 result; // rax

  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (v2 = qword_1C0327168, (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 2) )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  qword_1C0327168 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  qword_1C0327168 = v2 - 8;
  v4 = *(unsigned __int16 *)(qword_1C0327180 + 360);
  v5 = *(int *)(v2 - 8);
  if ( (int)v5 >= (int)v4
    || (int)v5 < 0
    || (qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ v4 ^ *(_QWORD *)(qword_1C0327180 + 16)) != *(_QWORD *)(qword_1C0327180 + 368) )
  {
    dword_1C03271D0 = 4379;
    return qword_1C03271D8;
  }
  if ( v3 )
  {
    if ( dword_1C03271BC != 2 )
    {
      CVTScale = itrp_GetCVTScale();
      v3 = CompDiv(CVTScale, (__int64)v3 << 16);
    }
  }
  result = a1;
  *(_DWORD *)(*(_QWORD *)(qword_1C0327180 + 16) + 4 * v5) = v3;
  return result;
}
