/*
 * XREFs of IopAllocateReserveIrp @ 0x140292EF0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140037420 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1401171C0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v4; // rcx
  bool v5; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140461640 )
    return 0LL;
  v3 = a2 + 1;
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140461568, 1) == 1 )
      KeWaitForSingleObject(&word_140461570, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v4 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v4->CurrentLocation;
    --v4->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v4->Tail.CompletionKey + 10) = v4->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140461590, 1) == 1 )
      KeWaitForSingleObject(&word_140461598, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140461588, 72 * v3 + 208, v3);
    qword_140461588->AllocationFlags = 33;
    v7 = qword_140461588;
    --qword_140461588->Tail.Overlay.CurrentStackLocation;
    --v7->CurrentLocation;
    --v7->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(qword_140461588);
    return qword_140461588;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_1404615B8, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_1404615C0, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_1404615B0, 72 * v3 + 208, v3);
  qword_1404615B0->AllocationFlags = 33;
  v8 = qword_1404615B0;
  --qword_1404615B0->Tail.Overlay.CurrentStackLocation;
  --v8->CurrentLocation;
  --v8->StackCount;
  v5 = (IopIrpExtensionStatus & 1) == 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
    IopInitActivityIdIrp(qword_1404615B0);
  return qword_1404615B0;
}
