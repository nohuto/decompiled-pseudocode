/*
 * XREFs of MiChargeForLockedPage @ 0x1400A74D0
 * Callers:
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiRelockProtoPoolPage @ 0x140091D24 (MiRelockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x140054CE0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
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
  v10 = *(_QWORD *)(qword_140466188 + 8 * v9);
  if ( !v8 || (result = MiChargeCommit(*(_QWORD *)(qword_140466188 + 8 * v9), 1uLL, v6), (_DWORD)result) )
  {
    v11 = MiChargeResident(v10, 1LL, v7, a4);
    if ( !v11 && v8 )
      MiReturnCommit(v10, 1uLL);
    return v11;
  }
  return result;
}
