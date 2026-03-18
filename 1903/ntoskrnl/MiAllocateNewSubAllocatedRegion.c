/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x140670298
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140072FFC (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14007320C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAddSecureEntry @ 0x140609DB0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060A440 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060A890 (MiSelectUserAddress.c)
 *     MiCreateVadEventBitmap @ 0x14066FCC8 (MiCreateVadEventBitmap.c)
 *     MiGetUserReservationHighestAddress @ 0x14067868C (MiGetUserReservationHighestAddress.c)
 *     MiFreeVadEventBitmap @ 0x14088B408 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 Process; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r13
  unsigned __int64 UserReservationHighestAddress; // r14
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned __int64 v13; // r12
  int VadEventBitmap; // ebp
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  int v19; // edx
  unsigned int v20; // eax
  _QWORD *v21; // r15
  __int64 v22; // rdx
  _DWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v27; // [rsp+50h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+D8h] [rbp+10h]
  __int64 v33; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v34; // [rsp+E0h] [rbp+18h] BYREF
  _QWORD *v35; // [rsp+E8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v30 = *(_QWORD *)(Process + 1296);
  if ( a2 <= 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v6 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      v7 = 32LL;
      v8 = *(_DWORD *)(v6 + 48) & 0xFFFFF27F;
      *(_QWORD *)(v6 + 16) = -2LL;
      *(_DWORD *)(v6 + 48) = v8 | 0x100200;
      if ( a1 != 1 )
        v7 = 0LL;
      v9 = 0LL;
      UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v7);
      v11 = 0x200000LL;
      do
      {
        v12 = *(_DWORD *)(v6 + 48);
        v35 = 0LL;
        v13 = v3 << 12;
        v27 = v3;
        v32 = v11;
        VadEventBitmap = MiSelectUserAddress(
                           0,
                           0LL,
                           UserReservationHighestAddress,
                           v3 << 12,
                           v11,
                           0LL,
                           (v12 >> 7) & 0x1F,
                           0x80000000,
                           (__int64 *)&v35,
                           &v34);
        if ( VadEventBitmap >= 0 )
          break;
        if ( v11 != 0x10000 )
          v11 = 0x10000LL;
        v3 >>= 1;
        if ( v32 != 0x10000 )
          v3 = v27;
      }
      while ( v3 >= 0x10 );
      v15 = (__int64)CurrentThread;
      if ( v3 >= 0x10 )
      {
        v16 = v13 + v34 - 1;
        v17 = v34 >> 12;
        v18 = v16 >> 12;
        *(_BYTE *)(v6 + 32) = v34 >> 44;
        v29 = v16;
        *(_BYTE *)(v6 + 33) = v16 >> 44;
        *(_DWORD *)(v6 + 24) = v17;
        *(_DWORD *)(v6 + 28) = v16 >> 12;
        VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v3, 64);
        if ( VadEventBitmap < 0 )
        {
LABEL_30:
          ExFreePoolWithTag((PVOID)v6, 0);
          return (unsigned int)VadEventBitmap;
        }
        v33 = MiLocateVadEvent(v6, 64LL) + 8;
        v20 = ExGenRandom(v19 - 63);
        v21 = (_QWORD *)(v33 + 16);
        *(_QWORD *)(v33 + 32) = v6;
        *(_QWORD *)(v33 + 16) = 0LL;
        *(_DWORD *)(v33 + 48) = a1 & 3 ^ (4 * (v20 % v3));
        v22 = v34;
        *(_QWORD *)(v33 + 24) = 0LL;
        *(_DWORD *)(v33 + 40) = 0;
        *(_DWORD *)(v33 + 44) = v3;
        v23 = MiAddSecureEntry(v6, v22, v29, -2147483647, 0);
        if ( v23 )
        {
          VadEventBitmap = MiInsertVadCharges(v6, (struct _KPROCESS *)Process);
          if ( VadEventBitmap >= 0 )
          {
            MiLockVad(v15, v6);
            MiInsertPrivateVad(v6, 0LL, Process);
            MiUnlockVad(v15, v6);
            if ( v35 )
              MiAdvanceVadHint(v17, v18, v35);
            LOCK_PAGE_TABLE_COMMITMENT(v15, Process);
            v24 = (__int64 *)(v30 + 16 * (a1 + 20LL));
            v25 = *v24;
            if ( *(__int64 **)(*v24 + 8) != v24 )
              __fastfail(3u);
            *v21 = v25;
            *(_QWORD *)(v33 + 24) = v24;
            *(_QWORD *)(v25 + 8) = v21;
            *v24 = (__int64)v21;
            UNLOCK_PAGE_TABLE_COMMITMENT(v15, Process);
            v9 = v33;
LABEL_15:
            if ( VadEventBitmap >= 0 )
              return (unsigned int)VadEventBitmap;
            goto LABEL_26;
          }
        }
        else
        {
          VadEventBitmap = -1073741670;
        }
        v9 = v33;
LABEL_26:
        if ( v9 )
          MiFreeVadEventBitmap(Process, v6, 64LL);
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        goto LABEL_30;
      }
      v23 = 0LL;
      goto LABEL_15;
    }
  }
  return 3221225495LL;
}
