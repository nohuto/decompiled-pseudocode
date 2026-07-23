/*
 * XREFs of RtlIsValidIndexHandle @ 0x18005B850
 * Callers:
 *     sub_18005B814 @ 0x18005B814 (sub_18005B814.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 * Callees:
 *     RtlIsValidHandle @ 0x18005B890 (RtlIsValidHandle.c)
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  _RTL_HANDLE_TABLE_ENTRY *v4; // rbx

  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)HandleTable->CommittedHandles
                               + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !RtlIsValidHandle(HandleTable, v4) )
    return 0;
  *Handle = v4;
  return 1;
}
