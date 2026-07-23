/*
 * XREFs of MiMarkPteDirty @ 0x1400ADF40
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 a1)
{
  __int64 result; // rax
  __int16 v3; // dx
  char *AnyMultiplexedVm; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  __int16 v8; // r8
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) != 1 && (v3 & 1) != 0 )
      {
        if ( (v3 & 0x20) != 0 && (v3 & 0x42) != 0 )
          return result;
        result = (__int64)KeGetCurrentThread();
        v7 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
        if ( v7 )
        {
          result = *(_QWORD *)(v7 + 8 * ((a1 >> 3) & 0x1FF));
          v8 = v3 | 0x20;
          if ( (result & 0x20) == 0 )
            v8 = v3;
          v3 = v8;
          if ( (result & 0x42) != 0 )
            v3 = v8 | 0x42;
        }
      }
    }
  }
  if ( (v3 & 0x42) == 0 && (v3 & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v5 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, a1, &v9);
    v6 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v6 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
  }
  return result;
}
