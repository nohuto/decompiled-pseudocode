/*
 * XREFs of itrp_GetCVTScale @ 0x1C02C8320
 * Callers:
 *     InvokeGetCVTEntry @ 0x1C02C524C (InvokeGetCVTEntry.c)
 *     itrp_ChangeCvtSlow @ 0x1C02C6594 (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02C65EC (itrp_CheckSingleWidth.c)
 *     itrp_DeltaEngine @ 0x1C02C6A7C (itrp_DeltaEngine.c)
 *     itrp_MPPEM @ 0x1C02CC330 (itrp_MPPEM.c)
 *     itrp_WCVT @ 0x1C02D0A40 (itrp_WCVT.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     FracSqrt @ 0x1C02B3100 (FracSqrt.c)
 */

__int64 itrp_GetCVTScale()
{
  __int64 result; // rax
  int v1; // ebx
  int fixed; // eax
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  int v6; // eax
  int v7; // r10d
  int v8; // r10d

  if ( !HIWORD(dword_1C0327158) )
    return *(unsigned int *)(qword_1C0327180 + 312);
  if ( !(_WORD)dword_1C0327158 )
    return *(unsigned int *)(qword_1C0327180 + 316);
  result = (unsigned int)dword_1C03271C8;
  if ( !dword_1C03271C8 )
  {
    v1 = SHIWORD(dword_1C0327158);
    fixed = FixMul(*(_DWORD *)(qword_1C0327180 + 312), *(_DWORD *)(qword_1C0327180 + 312));
    FixMul(4 * (__int16)((v3 * v3 + 0x2000) >> 14), fixed);
    v5 = FixMul(v4, v4);
    v6 = FixMul(4 * (__int16)((v1 * v1 + 0x2000) >> 14), v5);
    v8 = v6 + v7;
    result = 0x10000LL;
    if ( v8 <= 0x10000 )
    {
      result = (unsigned int)((int)(FracSqrt(v8 << 14) + 0x2000) >> 14);
      dword_1C03271C8 = result;
    }
  }
  return result;
}
