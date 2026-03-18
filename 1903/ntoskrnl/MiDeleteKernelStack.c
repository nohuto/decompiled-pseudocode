/*
 * XREFs of MiDeleteKernelStack @ 0x140023E50
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x1400045F0 (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 * Callees:
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  unsigned int v4; // eax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // [rsp+20h] [rbp-88h]
  unsigned __int64 v24[8]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int8 v25; // [rsp+B8h] [rbp+10h]
  unsigned int v26; // [rsp+C0h] [rbp+18h]
  __int64 v27; // [rsp+C8h] [rbp+20h] BYREF

  memset(v24, 0, 0x30uLL);
  if ( (a2 & 1) != 0 )
    v4 = 18;
  else
    v4 = (unsigned __int8)byte_1404666FC;
  v5 = v4 + 1;
  v6 = v4;
  v7 = 0LL;
  v26 = v4 + 1;
  v23 = v4;
  v8 = 0LL;
  v9 = (_QWORD *)(a1 - 8LL * v4);
  v10 = (unsigned __int64)v9;
  v11 = (unsigned __int64)&v9[v5];
  v12 = MiLockWorkingSetShared(&unk_140466F80);
  v25 = v12;
  if ( (unsigned __int64)v9 >= v11 )
    goto LABEL_16;
  v13 = (unsigned __int64)v9;
  v14 = 0xFFFFFA8000000028uLL;
  do
  {
    if ( v7 )
    {
      if ( (v13 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_140466F80);
    }
    v7 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(&unk_140466F80, v7, 0LL, v14);
LABEL_7:
    v15 = *(_QWORD *)v10;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v21 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v10 >> 3) & 0x1FF));
        v22 = v15 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = *(_QWORD *)v10;
        v15 = v22;
        if ( (v21 & 0x42) != 0 )
          v15 = v22 | 0x42;
      }
    }
    v27 = v15;
    if ( (v15 & 1) != 0 )
    {
      if ( !v8 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(&v27);
        v8 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v19 + 48 * (v18 & (v17 >> 12))) >> 40) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_140466F80, v10, 0LL, v24);
      ++v24[0];
    }
    v10 += 8LL;
    v14 = 0xFFFFFA8000000028uLL;
    v13 = v10;
  }
  while ( v10 < v11 );
  v6 = v23;
  LODWORD(v5) = v26;
  if ( v7 )
    MiUnlockPageTableInternal(&unk_140466F80);
  v12 = v25;
LABEL_16:
  MiUnlockWorkingSetShared(&unk_140466F80, v12);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_140466A48, -v6);
    MiReturnResidentAvailable(v24[0]);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8128), v24[0]);
  }
  MiReleasePtes(&unk_140466698, v9, (unsigned int)v5);
  return MiReturnCommit(v8, v6 - v24[1]);
}
