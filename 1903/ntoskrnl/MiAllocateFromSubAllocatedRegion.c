/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x14060E890
 * Callers:
 *     MiCreatePebOrTeb @ 0x14060E814 (MiCreatePebOrTeb.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiVadDeleted @ 0x140053930 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140072FFC (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14007320C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlFindClearBitsAndSetEx @ 0x140082140 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140670298 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 */

__int64 MiAllocateFromSubAllocatedRegion(unsigned int a1, __int64 a2, unsigned __int64 *a3, ...)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  __int64 Process; // r14
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 *v12; // rdi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rcx
  unsigned int v18; // r9d
  int NewSubAllocatedRegion; // edi
  __int64 *v21; // rcx
  __int64 **v22; // rax
  __int64 v23; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)(a2 + 4095) >> 12;
  v7 = (int)a1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = *(_QWORD *)(Process + 1296) + 48LL;
  --CurrentThread->SpecialApcDisable;
  v23 = v9;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 780) & 0x20) != 0 )
  {
    NewSubAllocatedRegion = -1073741558;
LABEL_16:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)NewSubAllocatedRegion;
  }
  v10 = 2 * (v7 + 17);
  v11 = v9 + 16 * (v7 + 17);
  v27 = v11;
  while ( 2 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    v12 = *(__int64 **)(v9 + 8 * v10);
    while ( v12 != (__int64 *)v11 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(
                          (unsigned __int64 *)v12 - 2,
                          v6,
                          (unsigned __int64)*((unsigned int *)v12 + 8) >> 2);
      v14 = ClearBitsAndSet;
      if ( ClearBitsAndSet != -1LL )
      {
        *((_DWORD *)v12 + 6) += v6;
        v15 = v12[4] & 3 | (4 * (v6 + ClearBitsAndSet));
        v16 = *((_DWORD *)v12 + 6);
        *((_DWORD *)v12 + 8) = v15;
        if ( v16 >= *((_DWORD *)v12 + 7) )
        {
          v21 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 || (v22 = (__int64 **)v12[1], *v22 != v12) )
            __fastfail(3u);
          *v22 = v21;
          v21[1] = (__int64)v22;
          *v12 = 0LL;
        }
        v4 = v12[2];
        v11 = v27;
        v5 = (v14 << 12)
           + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
        break;
      }
      v12 = (__int64 *)*v12;
      v11 = v27;
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( !v4 )
    {
      NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(a1, v6);
      if ( NewSubAllocatedRegion >= 0 )
      {
        v9 = v23;
        continue;
      }
      goto LABEL_16;
    }
    break;
  }
  MiReferenceVad(v4);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !(unsigned int)MiVadDeleted(v4) )
  {
    v18 = (*(_DWORD *)(v4 + 48) >> 7) & 0x1F;
    LODWORD(v27) = 0;
    NewSubAllocatedRegion = MiCommitExistingVad((ULONG_PTR)v17, v5, a2, v18, 0, 0LL, 0, 0LL, (__int64 *)va);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion((PVOID)v4);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v4);
      *a3 = v5;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v17);
  return 3221225738LL;
}
