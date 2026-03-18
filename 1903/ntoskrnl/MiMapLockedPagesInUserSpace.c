/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140711D38
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140118CE8 (MiSanitizePage.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x140156E60 (MiLegitimatePageForDriversToMap.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiIsVaRangeAvailable @ 0x1405EB1EC (MiIsVaRangeAvailable.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060A440 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060A890 (MiSelectUserAddress.c)
 *     MiGetUserReservationHighestAddress @ 0x14067868C (MiGetUserReservationHighestAddress.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v10; // rbx
  __int64 Process; // rbp
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r10
  NTSTATUS inserted; // edi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rdi
  __int64 v21; // rax
  _DWORD *v22; // r10
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 *v26; // [rsp+50h] [rbp-68h]
  _QWORD *v27; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-58h]
  unsigned __int64 v29; // [rsp+68h] [rbp-50h]
  int v31; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v34; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v36; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v34 = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v3 = (unsigned __int64 *)(a1 + 48);
  v26 = (unsigned __int64 *)(a1 + 48);
  v4 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v5 = (unsigned __int64 *)(a1 + 48);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v8 = ((int)v36 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v7 + 16) = -2LL;
  v28 = 0LL;
  v31 = v8 + 4;
  *(_DWORD *)(v7 + 48) = *(_DWORD *)(v7 + 48) & 0xFFFFF01F | ((((_BYTE)v8 + 4) & 0x1F) << 7) | 0x100010;
  CurrentThread = KeGetCurrentThread();
  v27 = 0LL;
  v10 = v34;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (v34 & 0xFFF) != 0 )
  {
    inserted = -1073741503;
    goto LABEL_31;
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  if ( (*(_DWORD *)(Process + 780) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_23;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  if ( !v10 )
  {
    v14 = MiSelectUserAddress(
            0,
            v13,
            UserReservationHighestAddress,
            v4 << 12,
            0x10000LL,
            0LL,
            v31,
            0,
            (__int64 *)&v27,
            (unsigned __int64 *)va);
    v15 = 0LL;
    inserted = v14;
    if ( v14 >= 0 )
    {
      v10 = v34;
      v5 = v3;
      goto LABEL_7;
    }
LABEL_23:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    if ( v28 )
    {
      v23 = 1LL;
      v24 = (v28 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v28 )
        v24 = 0LL;
      while ( v23 <= v24 )
      {
        if ( !(unsigned int)MiIsPfn(*v3) )
          MiDereferenceIoPages(1, v25, 1uLL);
        ++v3;
        ++v23;
      }
    }
LABEL_31:
    ExFreePoolWithTag((PVOID)v7, 0);
    RtlRaiseStatus(inserted);
  }
  if ( !MiIsVaRangeAvailable(Process, v10, v4 << 12, 0LL, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_23;
  }
LABEL_7:
  v32 = v15;
  v29 = v10 >> 12;
  *(_DWORD *)(v7 + 24) = v10 >> 12;
  v17 = (v10 + (v4 << 12) - 1) >> 12;
  *(_BYTE *)(v7 + 32) = v10 >> 44;
  *(_DWORD *)(v7 + 28) = v17;
  *(_BYTE *)(v7 + 33) = BYTE4(v17);
  if ( v4 )
  {
    do
    {
      if ( (unsigned int)MiIsPfn(*v5) )
      {
        inserted = MiLegitimatePageForDriversToMap(48 * v18 - 0x58000000000LL);
        if ( inserted < 0 )
          goto LABEL_23;
        v19 = v26;
      }
      else
      {
        v21 = MiSanitizePage(v18);
        inserted = MiReferenceIoPages(1, v21, 1LL, a3, v22, v22);
        if ( inserted < 0 )
          goto LABEL_23;
        v19 = v26;
        v28 = (unsigned __int64)v26;
      }
      v5 = v19 + 1;
      v26 = v5;
      ++v32;
    }
    while ( v32 < v4 );
  }
  inserted = MiInsertVadCharges(v7, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v7);
  MiMapLockedPagesInUserSpaceHelper(v10, (__int64)v3, 0LL, a3, v4, v7, v36);
  MiUnlockVad((__int64)CurrentThread, v7);
  if ( v27 )
    MiAdvanceVadHint(v29, v17, v27);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  return v10 + *(unsigned int *)(a1 + 44);
}
