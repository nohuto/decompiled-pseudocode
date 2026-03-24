/*
 * XREFs of IopAllocateReserveIrp @ 0x14027E700
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x1400B92A0 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA20 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140135014 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14011A1A0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x14027EFE4 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140435DC0 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_140435D10, 1) == 1 )
        KeWaitForSingleObject(&word_140435D18, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_140435D08, 72 * v3 + 208, v3);
      qword_140435D08->AllocationFlags = 33;
      v7 = qword_140435D08;
      --qword_140435D08->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140435D08);
      return qword_140435D08;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_140435D38, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&stru_140435D40, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_140435D30, 72 * v3 + 208, v3);
      qword_140435D30->AllocationFlags = 33;
      v8 = qword_140435D30;
      --qword_140435D30->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140435D30);
      return qword_140435D30;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_140435CE8, 1) == 1 )
      KeWaitForSingleObject(&word_140435CF0, Executive, 0, 0, 0LL);
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
