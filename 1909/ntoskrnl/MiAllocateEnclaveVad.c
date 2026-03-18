/*
 * XREFs of MiAllocateEnclaveVad @ 0x14089286C
 * Callers:
 *     MiCreateEnclave @ 0x1408931F0 (MiCreateEnclave.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D554 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReferenceVad @ 0x140053A20 (MiReferenceVad.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiInsertPrivateVad @ 0x140071540 (MiInsertPrivateVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071A78 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiIsVaRangeAvailable @ 0x1405EB9BC (MiIsVaRangeAvailable.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060BF50 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060C3A0 (MiSelectUserAddress.c)
 *     MiGetUserReservationHighestAddress @ 0x14067DD9C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // rsi
  BOOL v8; // r12d
  struct _KPROCESS *Process; // r14
  unsigned __int64 v11; // rdi
  PVOID PoolWithTag; // rax
  __int64 v13; // rbx
  ULONG_PTR v15; // rax
  PVOID v16; // rax
  int inserted; // edi
  void *v18; // rcx
  int v19; // eax
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26[9]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v27; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v28 = a4;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v8 = (unsigned int)(a1 - 16) <= 1;
  Process = CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v11 = a2;
    if ( ((a2 - 1) & a2) != 0 )
      v11 = a2 & ~(a2 - 1);
    if ( v11 < 0x10000 )
      v11 = 0x10000LL;
    if ( v11 >= 0x7FFFFFFF0000LL )
      return 3221225485LL;
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x45646156u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  if ( !v8 )
  {
    *(_DWORD *)(v13 + 64) |= 1u;
    v15 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
    *(_QWORD *)(v13 + 80) = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
      return 3221225626LL;
    }
    if ( a1 == 2 )
    {
      *(_DWORD *)(v13 + 72) |= 1u;
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6E45694Du);
      *(_QWORD *)(v13 + 88) = v16;
      if ( !v16 )
      {
        inserted = -1073741670;
LABEL_23:
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
        if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
        {
          v18 = *(void **)(v13 + 88);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
          MiReleasePtes((__int64)&qword_1404666C0, *(_QWORD *)(v13 + 80), 1u);
        }
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)inserted;
      }
    }
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFF8F | 0x30;
  }
  v19 = *(_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v19 & 0xFDEFF07F | 0x2100200;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, v28);
  if ( v6 )
  {
    v21 = (v6 + a2 - 1) | 0xFFF;
    if ( !MiIsVaRangeAvailable((__int64)Process, v6, v21 - v6 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, (__int64 *)&v27, v26);
    if ( inserted < 0 )
      goto LABEL_23;
    v6 = v26[0];
    v21 = v26[0] + a2 - 1;
  }
  v22 = v6 >> 12;
  v23 = v21 >> 12;
  *(_BYTE *)(v13 + 32) = BYTE4(v22);
  *(_BYTE *)(v13 + 33) = BYTE4(v23);
  *(_DWORD *)(v13 + 24) = v22;
  *(_DWORD *)(v13 + 28) = v23;
  inserted = MiInsertVadCharges(v13, Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v13);
  MiInsertPrivateVad(v13, 0LL, (__int64)Process);
  if ( v27 )
    MiAdvanceVadHint(v22, v23, v27);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process, v24, v25);
  *a5 = v13;
  return 0LL;
}
