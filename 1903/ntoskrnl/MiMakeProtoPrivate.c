/*
 * XREFs of MiMakeProtoPrivate @ 0x1402D1AF4
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v8; // rdx
  unsigned __int64 CloneAddress; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v13 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFF8LL);
  if ( v8 < 0 )
  {
    CloneAddress = (unsigned __int64)MiLocateCloneAddress(
                                       (__int64)KeGetCurrentThread()->ApcState.Process,
                                       v8 | 0x8000000000000000uLL);
    v5 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v10 + 1296) + 360LL));
  }
  v11 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v11 >= 0 )
  {
    LOBYTE(v4) = v5 != 0;
    return v4;
  }
  else
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiUnlockWorkingSetShared(a1, a2);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v11);
    return 2LL;
  }
}
