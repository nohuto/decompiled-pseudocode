/*
 * XREFs of MiReturnDriverLoadPages @ 0x1409F87A0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnDriverLoadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  char *AnyMultiplexedVm; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // r13
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  ULONG_PTR v15; // r11
  bool v16; // zf
  ULONG_PTR v17; // rbx
  unsigned __int8 v19; // [rsp+28h] [rbp-A9h]
  __int64 v20; // [rsp+30h] [rbp-A1h] BYREF
  int v21; // [rsp+38h] [rbp-99h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-95h]
  __int64 v23; // [rsp+40h] [rbp-91h]
  __int64 v24; // [rsp+48h] [rbp-89h]
  __int64 v25; // [rsp+50h] [rbp-81h]

  v23 = 20LL;
  v21 = 0;
  v22 = 0;
  v24 = 0LL;
  v3 = a1;
  v25 = 0LL;
  v4 = 0LL;
  v5 = (__int64)(a1 << 25) >> 16;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v19 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v10 = v19;
  if ( v3 <= a2 )
  {
    while ( 1 )
    {
      if ( !v4 || (v3 & 0xFFF) == 0 )
      {
        MiFlushTbList(&v21, v7, v8, 0xFFFFFA8000000000uLL);
        if ( v4 )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0);
      }
      v20 = MI_READ_PTE_LOCK_FREE(v3);
      if ( (v20 & 1) == 0 )
        goto LABEL_19;
      MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
      if ( MiPteInShadowRange(v3) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v12 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v16 = (v11 & 1) == 0;
            goto LABEL_14;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v16 = (v11 & 1) == 0;
LABEL_14:
          if ( !v16 )
            v11 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v3 = v11;
      if ( v12 )
      {
        MiWritePteShadow(v3, v11);
        v13 = 0xFFFFFA8000000000uLL;
        v14 = 0xFFFFFFFFFLL;
      }
      v17 = v13 + 48 * (v14 & *(_QWORD *)(v15 + 40));
      MiLockAndDecrementShareCount(v15, 1);
      MiLockAndDecrementShareCount(v17, 0);
      MiInsertTbFlushEntry((__int64)&v21, v5, 1LL, 0);
LABEL_19:
      v3 += 8LL;
      v9 = 0xFFFFFA8000000000uLL;
      v5 += 4096LL;
      if ( v3 > a2 )
      {
        v10 = v19;
        break;
      }
    }
  }
  MiFlushTbList(&v21, v7, v8, v9);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
}
