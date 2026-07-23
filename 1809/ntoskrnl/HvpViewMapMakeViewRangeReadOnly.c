/*
 * XREFs of HvpViewMapMakeViewRangeReadOnly @ 0x1405A6998
 * Callers:
 *     HvpViewMapSealRange @ 0x1405A692C (HvpViewMapSealRange.c)
 *     HvpViewMapMigrateCOWData @ 0x1407F8190 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14000F024 (CmSiProtectViewOfSection.c)
 */

int __fastcall HvpViewMapMakeViewRangeReadOnly(SIZE_T a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rax
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  LODWORD(v7) = CmSiProtectViewOfSection(
                  a1,
                  *(void ***)(a1 + 24),
                  (void *)(a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24)),
                  a4 - a3,
                  2u,
                  &v9);
  while ( v4 < a4 )
  {
    v7 = (unsigned __int64)(v4 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(v7 + a2 + 72) &= ~8u;
    v4 += 4096LL;
  }
  return v7;
}
