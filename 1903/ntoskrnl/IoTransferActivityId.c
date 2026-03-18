/*
 * XREFs of IoTransferActivityId @ 0x1401754C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x1401754F8 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteEx(IoTraceHandle, &IoTrace_ActivityIdTransfer, 0LL, 0, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
