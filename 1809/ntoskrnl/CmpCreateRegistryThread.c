/*
 * XREFs of CmpCreateRegistryThread @ 0x1407F7770
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall CmpCreateRegistryThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+50h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-18h]

  LODWORD(v5) = 48;
  *((_QWORD *)&v5 + 1) = 0LL;
  v7 = 512;
  v6 = 0LL;
  v8 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFF, &v5, CmpRegistryProcess, 0LL, a3, a4, 0LL, 0LL);
}
