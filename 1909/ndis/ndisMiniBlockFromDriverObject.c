/*
 * XREFs of ndisMiniBlockFromDriverObject @ 0x1C010B7C4
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ndisMiniBlockFromDriverObject(PDRIVER_OBJECT DriverObject, char a2)
{
  PVOID result; // rax

  if ( !a2 || (result = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944)) == 0LL )
  {
    result = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
    if ( !result )
      return IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  }
  return result;
}
