/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x140073C40
 * Callers:
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140131404 (MiMakeVaRangeNoAccess.c)
 *     MiMakeCombineCandidateClean @ 0x14013E608 (MiMakeCombineCandidateClean.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     MiGetVadMandatoryPageSize @ 0x140053750 (MiGetVadMandatoryPageSize.c)
 *     MiLockVadCore @ 0x1400727A0 (MiLockVadCore.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     MiUnlockVadCore @ 0x14012545C (MiUnlockVadCore.c)
 */

__int64 __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 LockedVadEvent; // rdi
  __int64 v6; // rcx
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx

  result = *(unsigned int *)(a1 + 780);
  v4 = a3;
  if ( (result & 0x20) == 0 )
  {
    if ( a3 || (result = MiLocateAddress(a2), (v4 = result) != 0) )
    {
      result = *(unsigned int *)(v4 + 48);
      if ( (result & 4) == 0 )
      {
        result &= 0x300000u;
        if ( (_DWORD)result == 3145728 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v4, 4LL);
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v6);
          v9 = (v8 >> 12) - (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32));
          v10 = v9 / VadMandatoryPageSize;
          MiLockVadCore(v4, v9 % VadMandatoryPageSize);
          LOBYTE(v11) = 2;
          _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v10);
          return MiUnlockVadCore(v4, v11);
        }
      }
    }
  }
  return result;
}
