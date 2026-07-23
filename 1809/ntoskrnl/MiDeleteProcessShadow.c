/*
 * XREFs of MiDeleteProcessShadow @ 0x1400686C0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiDeleteTopLevelPage @ 0x140091960 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x140091AD4 (KeFlushProcessTb.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x14013D0A0 (KeMakeUserDirectoryTableBase.c)
 */

void __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  __int64 v3; // r12
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  signed __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  KSPIN_LOCK *v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (MiFlags & 0xC00000) != 0 && *(_QWORD *)(a1 + 1544) )
  {
    v3 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 1454));
    if ( a2 )
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v5 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v8 = v5;
      if ( *(_QWORD *)(a1 + 1544) )
      {
        v9 = 0xFFFFF6FB7DBED000uLL;
        v10 = 256LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)v9;
          if ( v9 < 0xFFFFF6FB7DBED000uLL
            || v9 > 0xFFFFF6FB7DBED7F8uLL
            || (MiFlags & 0xC00000) == 0
            || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
          {
            goto LABEL_10;
          }
          if ( (v11 & 1) != 0 )
            break;
LABEL_11:
          v9 += 8LL;
          if ( !--v10 )
            goto LABEL_12;
        }
        if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
        {
          v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 8 * ((v9 >> 3) & 0x1FF));
            v22 = v11 | 0x20;
            if ( (v21 & 0x20) == 0 )
              v22 = *(_QWORD *)v9;
            v11 = v22;
            if ( (v21 & 0x42) != 0 )
              v11 = v22 | 0x42;
          }
        }
LABEL_10:
        if ( (v11 & 1) != 0 )
        {
          do
          {
            if ( v11 >= 0 )
              break;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v11 & 0x7FFFFFFFFFFFFFFFLL, v11);
            v18 = v11 == v19;
            v11 = v19;
            if ( v18 )
              break;
          }
          while ( (v19 & 1) != 0 );
        }
        goto LABEL_11;
      }
      MiUnlockWorkingSetExclusive(a1 + 1280, v5, v6, v7);
    }
    else
    {
      v8 = 17;
LABEL_12:
      v24 = &qword_14043BF40;
      v23 = 0LL;
      KxAcquireQueuedSpinLock(&v23);
      v12 = ((*(_QWORD *)(a1 + 1544) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = MI_READ_PTE_LOCK_FREE(v12);
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
      *(_QWORD *)(a1 + 1544) = 0LL;
      v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
      KxReleaseQueuedSpinLock(&v23);
      *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
      if ( v8 != 17 )
        MiUnlockWorkingSetExclusive(a1 + 1280, v8, v15, v16);
      MiReleasePtes((__int64)&qword_14043C060, v12, 1u);
      KeFlushProcessTb(v14 << 12);
      if ( (unsigned int)MiDeleteTopLevelPage(v17, v14) != 3 )
        MiReleaseNonPagedResources(v3, 1LL);
    }
  }
}
