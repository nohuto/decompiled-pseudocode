/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1407F95C4
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x140692DF4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12DC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(volatile signed __int32 *P, unsigned int a2)
{
  ULONG_PTR v3; // rcx

  v3 = *((_QWORD *)P + 205) + 24LL * a2;
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  if ( _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
