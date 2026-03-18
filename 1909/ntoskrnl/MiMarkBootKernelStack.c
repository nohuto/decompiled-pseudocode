/*
 * XREFs of MiMarkBootKernelStack @ 0x1409EE190
 * Callers:
 *     MiInitializeKernelStacks @ 0x1409EDAC8 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiMarkKernelStack @ 0x14002DF50 (MiMarkKernelStack.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r14
  _QWORD v11[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v11, 0, 0xB8uLL);
  v11[3] = 0LL;
  v4 = 0LL;
  LODWORD(v11[1]) = 20;
  BYTE4(v11[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( a1 < a2 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_10;
      if ( (a1 & 0xFFF) == 0 )
        break;
LABEL_4:
      MiMarkKernelStack(a1, 0xFFFFFFFFFFFFFFF0uLL);
      if ( (MiFlags & 0x40000) == 0 )
      {
        MI_READ_PTE_LOCK_FREE(a1);
        MiWriteValidPteNewProtection(a1);
        MiInsertTbFlushEntry((__int64)v11, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      if ( a1 >= a2 )
        goto LABEL_7;
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
LABEL_10:
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0LL);
    goto LABEL_4;
  }
LABEL_7:
  MiFlushTbList((int *)v11, v6, v7, v8);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
}
