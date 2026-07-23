/*
 * XREFs of MiChargeForLockedPage @ 0x14002DE70
 * Callers:
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  unsigned __int64 v2; // r10
  int v3; // edx
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r11d
  __int64 v7; // rsi
  bool v8; // bl
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 & 1;
  v4 = v3 ^ 1;
  v5 = (unsigned int)-v3;
  v6 = 4 * v4 + 4;
  v7 = (unsigned int)-((_DWORD)v5 != 0);
  v8 = (v2 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1, v5) != 0;
  v9 = (v2 >> 40) & 0x3FF;
  v10 = *(_QWORD *)(qword_14043B808 + 8 * v9);
  if ( !v8 || (result = MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * v9), 1LL, v6), (_DWORD)result) )
  {
    v11 = MiChargeResident(v10, 1LL, v7);
    if ( !v11 && v8 )
      MiReturnCommit(v10, 1LL);
    return v11;
  }
  return result;
}
