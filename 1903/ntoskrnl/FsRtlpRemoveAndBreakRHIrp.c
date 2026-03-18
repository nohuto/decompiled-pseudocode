/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x1400B6DE8
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlUninitializeOplock @ 0x140088520 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400B5CA0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6CDC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1400B6F60 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x1400B734C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     IoReleaseCancelSpinLock @ 0x1400B7400 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400B74A0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400B7540 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400B774C (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400B78B4 (FsRtlpOplockEnqueueRH.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        PVOID P,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int16 a8)
{
  __int64 v8; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r8

  v8 = *((_QWORD *)P + 2);
  *((_QWORD *)P + 2) = 0LL;
  if ( a3 )
  {
    IoAcquireCancelSpinLock((PKIRQL)(v8 + 69));
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    IoReleaseCancelSpinLock(*(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObject(*((PVOID *)P + 3));
    if ( *((_QWORD *)P + 5) )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 24);
    v13 = 24LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)v12 = 1572865;
    *(_DWORD *)(v12 + 4) = 3;
    *(_DWORD *)(v12 + 8) = (a5 >> 12) & 7;
    *(_DWORD *)(v12 + 12) = a6;
    if ( (a6 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 16) = a7;
      *(_WORD *)(v12 + 20) = a8;
    }
    if ( (a6 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = *((_DWORD *)P + 12) & 0xFF0FFFFF | (a5 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH(a2 + 72, P, -a5);
      LOBYTE(v15) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v15);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObject(*((PVOID *)P + 3));
      if ( *((_QWORD *)P + 5) )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag(P, 0);
    }
  }
  *(_QWORD *)(v8 + 56) = v13;
  v14 = -1073741536;
  if ( !*(_BYTE *)(v8 + 68) )
    v14 = a4;
  *(_DWORD *)(v8 + 48) = v14;
  IofCompleteRequest((PIRP)v8, 1);
}
