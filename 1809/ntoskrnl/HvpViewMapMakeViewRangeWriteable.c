/*
 * XREFs of HvpViewMapMakeViewRangeWriteable @ 0x140581D14
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407F8190 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14000F024 (CmSiProtectViewOfSection.c)
 */

int __fastcall HvpViewMapMakeViewRangeWriteable(SIZE_T a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v7) = CmSiProtectViewOfSection(
                  a1,
                  *(void ***)(a1 + 24),
                  (void *)(a3 + *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 24)),
                  a4 - a3,
                  8u,
                  &v9);
  while ( a3 < a4 )
  {
    v7 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 24)) >> 12;
    *(_BYTE *)(v7 + a2 + 72) |= 8u;
    a3 += 4096LL;
  }
  return v7;
}
