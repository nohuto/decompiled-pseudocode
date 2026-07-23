/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1401257AC
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMakeCombineCandidateClean @ 0x140082B7C (MiMakeCombineCandidateClean.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLockVadCore @ 0x140087AC0 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140125838 (MiUnlockVadCore.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 Address; // rax
  __int64 v4; // rdi
  __int64 **VadEvent; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  LODWORD(Address) = *(_DWORD *)(a1 + 772);
  v4 = a3;
  if ( (Address & 0x20) == 0 )
  {
    if ( a3 || (Address = MiLocateAddress(a2), (v4 = Address) != 0) )
    {
      LODWORD(Address) = *(_DWORD *)(v4 + 48);
      if ( (Address & 0x20000000) == 0 )
      {
        LOBYTE(Address) = Address & 7;
        if ( (_BYTE)Address == 4 )
        {
          VadEvent = MiLocateVadEvent(v4, 4);
          v7 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
          v8 = (a2 >> 12) - v7;
          MiLockVadCore(v4, v7, v9);
          LOBYTE(v10) = 2;
          _bittestandset64(VadEvent[2], v8);
          LOBYTE(Address) = MiUnlockVadCore(v4, v10, v11);
        }
      }
    }
  }
  return Address;
}
