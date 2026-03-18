/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14013E608
 * Callers:
 *     MiCrcStillIntact @ 0x14013E6D0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(a1);
  MI_READ_PTE_LOCK_FREE((unsigned __int64)&v6);
  MiWriteValidPteNewProtection(a1);
  result = MiLockPageAndSetDirty(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x300000;
    if ( (_DWORD)result == 3145728 )
      return MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
