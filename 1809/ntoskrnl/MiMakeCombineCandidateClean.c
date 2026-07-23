/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140082B7C
 * Callers:
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 */

char __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  char result; // al
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return result;
}
