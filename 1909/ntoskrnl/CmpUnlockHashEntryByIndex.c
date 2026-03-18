/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1408320B8
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(volatile signed __int32 *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = *((_QWORD *)P + 205) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
