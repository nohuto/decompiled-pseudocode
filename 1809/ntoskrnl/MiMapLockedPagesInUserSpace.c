/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140696CE4
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiLegitimatePageForDriversToMap @ 0x1400298DC (MiLegitimatePageForDriversToMap.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x1400E6454 (MiSanitizePage.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  unsigned int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v12; // rbx
  __int64 Process; // rbp
  unsigned __int64 UserReservationHighestAddress; // rax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r10
  NTSTATUS inserted; // edi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rdi
  __int64 v23; // rax
  _DWORD *v24; // r10
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 *v28; // [rsp+50h] [rbp-68h]
  _RTL_BITMAP *v29; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v31; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v36; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v38; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  v3 = (unsigned __int64 *)(a1 + 48);
  v28 = (unsigned __int64 *)(a1 + 48);
  v4 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v5 = (unsigned __int64 *)(a1 + 48);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v8 = ((int)v38 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v7 + 40) = 0LL;
  v8 += 4;
  *(_QWORD *)(v7 + 16) = -2LL;
  v9 = v8;
  v33 = v8;
  v10 = *(_DWORD *)(v7 + 48) & 0xFFFFFF01;
  v30 = 0LL;
  *(_DWORD *)(v7 + 48) = v10 | (8 * (v9 & 0x1F)) | 0x4001;
  CurrentThread = KeGetCurrentThread();
  v29 = 0LL;
  v12 = v36;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (v36 & 0xFFF) != 0 )
  {
    inserted = -1073741503;
    goto LABEL_31;
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_23;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  if ( !v12 )
  {
    v16 = MiSelectUserAddress(
            0,
            v15,
            UserReservationHighestAddress,
            v4 << 12,
            0x10000LL,
            0LL,
            v33,
            0,
            &v29,
            (__int64)va);
    v17 = 0LL;
    inserted = v16;
    if ( v16 >= 0 )
    {
      v12 = v36;
      v5 = v3;
      goto LABEL_7;
    }
LABEL_23:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( v30 )
    {
      v25 = 1LL;
      v26 = (v30 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v30 )
        v26 = 0LL;
      while ( v25 <= v26 )
      {
        if ( !(unsigned int)MiIsPfn(*v3) )
          MiDereferenceIoPages(1, v27, 1uLL);
        ++v3;
        ++v25;
      }
    }
LABEL_31:
    ExFreePoolWithTag((PVOID)v7, 0);
    RtlRaiseStatus(inserted);
  }
  if ( !MiIsVaRangeAvailable(Process, v12, v4 << 12, 0LL, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_23;
  }
LABEL_7:
  v34 = v17;
  v31 = v12 >> 12;
  *(_DWORD *)(v7 + 24) = v12 >> 12;
  v19 = (v12 + (v4 << 12) - 1) >> 12;
  *(_BYTE *)(v7 + 32) = v12 >> 44;
  *(_DWORD *)(v7 + 28) = v19;
  *(_BYTE *)(v7 + 33) = BYTE4(v19);
  if ( v4 )
  {
    do
    {
      if ( (unsigned int)MiIsPfn(*v5) )
      {
        inserted = MiLegitimatePageForDriversToMap(48 * v20 - 0x58000000000LL);
        if ( inserted < 0 )
          goto LABEL_23;
        v21 = v28;
      }
      else
      {
        v23 = MiSanitizePage(v20);
        inserted = MiReferenceIoPages(1u, v23, 1LL, a3, v24, v24);
        if ( inserted < 0 )
          goto LABEL_23;
        v21 = v28;
        v30 = (unsigned __int64)v28;
      }
      v5 = v21 + 1;
      v28 = v5;
      ++v34;
    }
    while ( v34 < v4 );
  }
  inserted = MiInsertVadCharges(v7, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v7);
  MiMapLockedPagesInUserSpaceHelper(v12, (__int64)v3, 0LL, a3, v4, v7, v38);
  MiUnlockVad((__int64)CurrentThread, v7);
  if ( v29 )
    MiAdvanceVadHint(v31, v19);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  return v12 + *(unsigned int *)(a1 + 44);
}
