/*
 * XREFs of PopPowerRequestDeleteEntryById @ 0x14069FC64
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 */

char __fastcall PopPowerRequestDeleteEntryById(unsigned int a1)
{
  PVOID v1; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  Buffer[0] = 0LL;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v1 )
    LOBYTE(v1) = RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, v1);
  return (char)v1;
}
