/*
 * XREFs of MiDeleteKernelStack @ 0x14007A5A0
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x1400A5DB0 (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  unsigned int v4; // eax
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23[6]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int8 v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  memset(v23, 0, 0x28uLL);
  if ( (a2 & 1) != 0 )
    v4 = 18;
  else
    v4 = (unsigned __int8)byte_14043BD3C;
  v5 = v4 + 1;
  v6 = v4;
  v7 = 0LL;
  v25 = v4 + 1;
  v22 = v4;
  v8 = 0LL;
  v9 = a1 - 8LL * v4;
  v10 = v9;
  v11 = v9 + 8 * v5;
  v12 = MiLockWorkingSetShared((__int64)&unk_14043C580);
  v24 = v12;
  if ( v9 >= v11 )
    goto LABEL_17;
  v13 = v9;
  do
  {
    if ( v7 )
    {
      if ( (v13 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_14043C580, v7);
    }
    v7 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_14043C580, v7, 0);
LABEL_7:
    v14 = *(_QWORD *)v10;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * ((v10 >> 3) & 0x1FF));
        v21 = v14 | 0x20;
        if ( (v20 & 0x20) == 0 )
          v21 = *(_QWORD *)v10;
        v14 = v21;
        if ( (v20 & 0x42) != 0 )
          v14 = v21 | 0x42;
      }
    }
    v26 = v14;
    if ( (v14 & 1) != 0 )
    {
      if ( !v8 )
      {
        v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
        v8 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v18 + 48 * (v17 & (v16 >> 12))) >> 40) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_14043C580, v10, 0LL, v23);
      ++v23[0];
    }
    v10 += 8LL;
    v13 = v10;
  }
  while ( v10 < v11 );
  v6 = v22;
  LODWORD(v5) = v25;
  if ( v7 )
    MiUnlockPageTableInternal(&unk_14043C580, v7);
  v12 = v24;
LABEL_17:
  MiUnlockWorkingSetShared((__int64)&unk_14043C580, v12);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14043C0F0, -v6);
    MiReturnResidentAvailable(v23[0]);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7360), v23[0]);
  }
  MiReleasePtes((__int64)&unk_14043BCD8, v9, v5);
  return MiReturnCommit(v8, v6 - v23[1]);
}
