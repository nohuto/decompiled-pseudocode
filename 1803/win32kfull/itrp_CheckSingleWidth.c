/*
 * XREFs of itrp_CheckSingleWidth @ 0x1C02C65EC
 * Callers:
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_CheckSingleWidth(int a1)
{
  __int64 v1; // rdi
  unsigned int fixed; // r8d
  int CVTScale; // eax
  signed int v5; // r9d
  int v6; // ecx
  int v7; // ebx

  v1 = qword_1C0327180;
  if ( dword_1C03271C0 == 2 )
  {
    fixed = *(_DWORD *)(qword_1C0327180 + 112);
  }
  else if ( dword_1C03271C0 == 3 )
  {
    CVTScale = itrp_GetCVTScale();
    fixed = FixMul(*(_DWORD *)(qword_1C0327180 + 112), CVTScale);
  }
  else
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    fixed = 0;
  }
  v5 = *(_DWORD *)(v1 + 108);
  if ( a1 < 0 )
  {
    v6 = -a1;
    v7 = fixed;
    if ( (int)abs32(v6 - fixed) >= v5 )
      v7 = v6;
    return (unsigned int)-v7;
  }
  else if ( (int)abs32(a1 - fixed) < v5 )
  {
    return fixed;
  }
  return (unsigned int)a1;
}
