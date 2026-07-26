/*
 * XREFs of NdisMSynchronizeWithInterruptEx @ 0x1C0014BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisMSynchronizeWithInterruptEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        MINIPORT_SYNCHRONIZE_INTERRUPT_HANDLER SynchronizeFunction,
        PVOID SynchronizeContext)
{
  __int64 v4; // r10

  v4 = *((_QWORD *)NdisInterruptHandle + 15);
  if ( *((_BYTE *)NdisInterruptHandle + 193) != 1 )
    return KeSynchronizeExecution((PKINTERRUPT)v4, SynchronizeFunction, SynchronizeContext);
  if ( v4 && *(_DWORD *)(v4 + 4) > MessageId )
  {
    v4 = *(_QWORD *)(v4 + 48LL * MessageId + 24);
    return KeSynchronizeExecution((PKINTERRUPT)v4, SynchronizeFunction, SynchronizeContext);
  }
  return 0;
}
