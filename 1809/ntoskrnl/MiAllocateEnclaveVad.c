/*
 * XREFs of MiAllocateEnclaveVad @ 0x14085A3B8
 * Callers:
 *     MiCreateEnclave @ 0x14085AD08 (MiCreateEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertPrivateVad @ 0x1400767E0 (MiInsertPrivateVad.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rsi
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
  unsigned __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  _RTL_BITMAP *v25; // [rsp+98h] [rbp+10h] BYREF

  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  Process = CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( a1 == 16 )
  {
    v11 = 0x200000LL;
  }
  else
  {
    v11 = a2;
    if ( ((a2 - 1) & a2) != 0 )
      v11 = a2 & ~(a2 - 1);
    if ( v11 < 0x10000 )
      v11 = 0x10000LL;
    if ( v11 >= 0x7FFFFFFF0000LL )
      return 3221225485LL;
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
  if ( a1 != 16 )
  {
    *(_DWORD *)(v13 + 64) |= 1u;
    v15 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
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
          MiReleasePtes((__int64)&qword_14043C060, *(_QWORD *)(v13 + 80), 1u);
        }
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)inserted;
      }
    }
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFFF8 | 3;
  }
  v19 = *(_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v19 & 0xFFFDBF07 | 0x24020;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, a4);
  if ( v7 )
  {
    v21 = (v7 + a2 - 1) | 0xFFF;
    if ( !MiIsVaRangeAvailable((__int64)Process, v7, v21 - v7 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, &v25, (__int64)&v24);
    if ( inserted < 0 )
      goto LABEL_23;
    v7 = v24;
    v21 = v24 + a2 - 1;
  }
  v22 = v7 >> 12;
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
  if ( v25 )
    MiAdvanceVadHint(v22, v23, v25);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  *a5 = v13;
  return 0LL;
}
