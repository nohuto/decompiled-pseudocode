/*
 * XREFs of MiInitializeWorkingSetList @ 0x1400F3230
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x140716DE8 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rax

  v5 = a3 ^ *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = *(_BYTE *)(a1 + 184) ^ v5 & 7;
  *(_BYTE *)(a1 + 184) = v6;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) = v6 | 0x80;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 152) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 360) = 1LL;
    v7 = MiLockWorkingSetShared(a1);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0);
    v8 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(
      a1,
      0xFFFFF6FB7DBEDF68uLL,
      (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL),
      0,
      ZeroPte,
      0,
      0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v6) = MiUnlockWorkingSetShared(a1, v7);
  }
  return v6;
}
