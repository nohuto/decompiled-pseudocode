/*
 * XREFs of MiMarkBootKernelStack @ 0x1409B7464
 * Callers:
 *     MiInitializeKernelStacks @ 0x1409B6C54 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiMarkKernelStack @ 0x14017E8C0 (MiMarkKernelStack.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *AnyMultiplexedVm; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r14
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v13; // [rsp+24h] [rbp-E4h]
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+2Ch] [rbp-DCh]
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]

  v15 = 0;
  v12 = 0;
  v3 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v13 = 1;
  v14 = 20;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( a1 < a2 )
  {
    while ( 1 )
    {
      if ( !v3 )
        goto LABEL_10;
      if ( (a1 & 0xFFF) == 0 )
        break;
LABEL_4:
      MiMarkKernelStack(a1, 0xFFFFFFFFFFFFFFF0uLL);
      if ( (MiFlags & 0x40000) == 0 )
      {
        v10 = MI_READ_PTE_LOCK_FREE(a1);
        MiWriteValidPteNewProtection(a1, v10 | 0x8000000000000062uLL);
        MiInsertTbFlushEntry((__int64)&v12, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      if ( a1 >= a2 )
        goto LABEL_7;
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
LABEL_10:
    v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0);
    goto LABEL_4;
  }
LABEL_7:
  MiFlushTbList(&v12, v6, v7, v8);
  if ( v3 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
}
