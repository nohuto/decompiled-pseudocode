/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x140132CD0
 * Callers:
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall MiUpdatePageAttributeStamp(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 PfnPriority; // rcx
  unsigned __int64 v6; // r8
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  volatile signed __int64 *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_WORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD *)(qword_14043B808 + 8 * ((v2 >> 40) & 0x3FF));
    v4 = *(_QWORD *)(v3 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 4152);
    if ( (*(_BYTE *)(a1 + 34) & 7) == 2 )
    {
      PfnPriority = (unsigned int)MiGetPfnPriority(a1);
      v6 = PfnPriority + 74;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 8) != 3 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
        goto LABEL_5;
      PfnPriority = v2 >> 58;
      v6 = PfnPriority + 106;
    }
    v4 = v3 + 8 * (PfnPriority + 4 * v6);
LABEL_5:
    v8[0] = 0LL;
    v8[1] = (volatile signed __int64 *)(v4 + 32);
    KxAcquireQueuedSpinLock((__int64)v8, (volatile __int64 *)(v4 + 32), v4);
    _InterlockedOr(v7, 0);
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
    KxReleaseQueuedSpinLock(v8);
  }
}
