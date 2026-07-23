/*
 * XREFs of PsDereferenceVsmEnclave @ 0x14088F3E4
 * Callers:
 *     MiCanDeleteEnclave @ 0x1402BD004 (MiCanDeleteEnclave.c)
 *     MiInitializeEnclave @ 0x14085B4A0 (MiInitializeEnclave.c)
 *     MiTerminateEnclave @ 0x14085B980 (MiTerminateEnclave.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 *     PsDeleteVsmEnclave @ 0x14088F298 (PsDeleteVsmEnclave.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x14027C930 (VslCloseSecureHandle.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PsDereferenceVsmEnclave(PVOID P)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax
  void *v7; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    VslCloseSecureHandle(*((_QWORD *)P + 3));
    v7 = (void *)*((_QWORD *)P + 15);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    ExFreePoolWithTag(P, 0);
  }
}
