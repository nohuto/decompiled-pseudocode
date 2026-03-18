/*
 * XREFs of MiChargeForLockedPage @ 0x1400CABD8
 * Callers:
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // edx
  unsigned int v6; // r11d
  __int64 v7; // rsi
  bool v8; // bl
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a2 & 1;
  v6 = 4 * (v5 ^ 1) + 4;
  v7 = (unsigned int)-(v5 != 0);
  v8 = (v4 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1) != 0;
  v9 = (v4 >> 40) & 0x3FF;
  v10 = *(_QWORD *)(qword_140465E88 + 8 * v9);
  if ( !v8 || (result = MiChargeCommit(*(_QWORD *)(qword_140465E88 + 8 * v9), 1uLL, v6), (_DWORD)result) )
  {
    v11 = MiChargeResident(v10, 1LL, v7, a4);
    if ( !v11 && v8 )
      MiReturnCommit(v10, 1uLL);
    return v11;
  }
  return result;
}
