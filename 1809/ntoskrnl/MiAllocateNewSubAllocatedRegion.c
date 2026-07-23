/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x140697060
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiInsertPrivateVad @ 0x1400767E0 (MiInsertPrivateVad.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769C4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140076BD8 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 Process; // rbp
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 **v9; // r13
  unsigned __int64 UserReservationHighestAddress; // r14
  __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // r12
  int VadEventBitmap; // esi
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  int v19; // edx
  unsigned int v20; // eax
  __int64 *v21; // r15
  __int64 v22; // rdx
  _DWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v27; // [rsp+50h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+D8h] [rbp+10h]
  __int64 **v33; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v34; // [rsp+E0h] [rbp+18h] BYREF
  _RTL_BITMAP *v35; // [rsp+E8h] [rbp+20h] BYREF

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
      v7 = *(_DWORD *)(v6 + 48) & 0xFFFFFF27;
      *(_QWORD *)(v6 + 16) = -2LL;
      *(_QWORD *)(v6 + 40) = 0LL;
      *(_DWORD *)(v6 + 48) = v7 | 0x4020;
      v8 = 33LL;
      if ( a1 != 1 )
        v8 = 0LL;
      if ( a1 == 2 )
        v8 = 32LL;
      v9 = 0LL;
      UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v8);
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
                           (unsigned __int8)v12 >> 3,
                           0x80000000,
                           &v35,
                           (__int64)&v34);
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
        VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v3, 64LL);
        if ( VadEventBitmap < 0 )
        {
LABEL_32:
          ExFreePoolWithTag((PVOID)v6, 0);
          return (unsigned int)VadEventBitmap;
        }
        v33 = MiLocateVadEvent(v6, 64) + 1;
        v20 = ExGenRandom(v19 - 63);
        v21 = (__int64 *)(v33 + 2);
        v33[4] = (__int64 *)v6;
        v33[2] = 0LL;
        *((_DWORD *)v33 + 12) = a1 & 3 ^ (4 * (v20 % v3));
        v22 = v34;
        v33[3] = 0LL;
        *((_DWORD *)v33 + 10) = 0;
        *((_DWORD *)v33 + 11) = v3;
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
            v24 = (__int64 *)(v30 + 16 * (a1 + 16LL));
            v25 = *v24;
            if ( *(__int64 **)(*v24 + 8) != v24 )
              __fastfail(3u);
            *v21 = v25;
            v33[3] = v24;
            *(_QWORD *)(v25 + 8) = v21;
            *v24 = (__int64)v21;
            UNLOCK_PAGE_TABLE_COMMITMENT(v15, Process);
            v9 = v33;
LABEL_17:
            if ( VadEventBitmap >= 0 )
              return (unsigned int)VadEventBitmap;
            goto LABEL_28;
          }
        }
        else
        {
          VadEventBitmap = -1073741670;
        }
        v9 = v33;
LABEL_28:
        if ( v9 )
          MiFreeVadEventBitmap(Process, v6, 64LL);
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        goto LABEL_32;
      }
      v23 = 0LL;
      goto LABEL_17;
    }
  }
  return 3221225495LL;
}
