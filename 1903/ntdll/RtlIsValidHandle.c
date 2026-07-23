/*
 * XREFs of RtlIsValidHandle @ 0x18005B890
 * Callers:
 *     RtlIsValidIndexHandle @ 0x18005B850 (RtlIsValidIndexHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  return Handle
      && Handle >= HandleTable->CommittedHandles
      && Handle < HandleTable->UnCommittedHandles
      && ((HandleTable->SizeOfHandleTableEntry - 1) & (unsigned int)Handle) == 0
      && (Handle->Flags & 1) != 0;
}
