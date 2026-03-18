/*
 * XREFs of MiMarkPteDirty @ 0x1400D8DA0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiLockWorkingSetOptimal @ 0x14005D5C8 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 a1)
{
  __int64 result; // rax
  __int16 v3; // dx
  char *AnyMultiplexedVm; // rdi
  __int16 v5; // ax
  __int64 v6; // r8
  __int16 v7; // r8
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 648LL) != 1 && (v3 & 1) != 0 )
      {
        if ( (v3 & 0x20) != 0 && (v3 & 0x42) != 0 )
          return result;
        result = (__int64)KeGetCurrentThread();
        v6 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
        if ( v6 )
        {
          result = *(_QWORD *)(v6 + 8 * ((a1 >> 3) & 0x1FF));
          v7 = v3 | 0x20;
          if ( (result & 0x20) == 0 )
            v7 = v3;
          v3 = v7;
          if ( (result & 0x42) != 0 )
            v3 = v7 | 0x42;
        }
      }
    }
  }
  if ( (v3 & 0x42) == 0 && (v3 & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, a1, &v8);
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1);
    MiUnlockPageTableInternal(AnyMultiplexedVm);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  }
  return result;
}
