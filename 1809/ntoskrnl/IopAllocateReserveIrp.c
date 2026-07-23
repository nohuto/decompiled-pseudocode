/*
 * XREFs of IopAllocateReserveIrp @ 0x14027E8F0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x1400B91E0 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEAA0 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14011A210 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v5; // rcx
  bool v6; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140436E60 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_140436DB0, 1) == 1 )
        KeWaitForSingleObject(&word_140436DB8, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_140436DA8, 72 * v3 + 208, v3);
      qword_140436DA8->AllocationFlags = 33;
      v7 = qword_140436DA8;
      --qword_140436DA8->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140436DA8);
      return qword_140436DA8;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_140436DD8, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&stru_140436DE0, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_140436DD0, 72 * v3 + 208, v3);
      qword_140436DD0->AllocationFlags = 33;
      v8 = qword_140436DD0;
      --qword_140436DD0->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140436DD0);
      return qword_140436DD0;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_140436D88, 1) == 1 )
      KeWaitForSingleObject(&word_140436D90, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v5->CurrentLocation;
    --v5->StackCount;
    v6 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = v5->Tail.Overlay.CurrentStackLocation;
    if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
}
