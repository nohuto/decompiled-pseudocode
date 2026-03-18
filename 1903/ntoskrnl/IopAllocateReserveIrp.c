/*
 * XREFs of IopAllocateReserveIrp @ 0x140293190
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140037030 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x140115B50 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1402939B8 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140461960 )
    return 0LL;
  v3 = a2 + 1;
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140461888, 1) == 1 )
      KeWaitForSingleObject(&word_140461890, Executive, 0, 0, 0LL);
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
    while ( _InterlockedExchange(&dword_1404618B0, 1) == 1 )
      KeWaitForSingleObject(&word_1404618B8, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_1404618A8, 72 * v3 + 208, v3);
    qword_1404618A8->AllocationFlags = 33;
    v7 = qword_1404618A8;
    --qword_1404618A8->Tail.Overlay.CurrentStackLocation;
    --v7->CurrentLocation;
    --v7->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(qword_1404618A8);
    return qword_1404618A8;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_1404618D8, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_1404618E0, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_1404618D0, 72 * v3 + 208, v3);
  qword_1404618D0->AllocationFlags = 33;
  v8 = qword_1404618D0;
  --qword_1404618D0->Tail.Overlay.CurrentStackLocation;
  --v8->CurrentLocation;
  --v8->StackCount;
  v5 = (IopIrpExtensionStatus & 1) == 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
    IopInitActivityIdIrp(qword_1404618D0);
  return qword_1404618D0;
}
