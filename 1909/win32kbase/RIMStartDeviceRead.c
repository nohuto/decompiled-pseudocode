/*
 * XREFs of RIMStartDeviceRead @ 0x1C00622BC
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RIMStartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext, __int64 a2, void *a3, ULONG a4)
{
  NTSTATUS result; // eax

  result = ZwReadFile(
             ApcContext[14].Pointer,
             0LL,
             rimInputApc,
             ApcContext,
             ApcContext + 16,
             a3,
             a4,
             (PLARGE_INTEGER)&gZero,
             0LL);
  ApcContext[17].Status = result;
  if ( result >= 0 )
  {
    ApcContext[136].Information = MEMORY[0xFFFFF78000000014];
    return ApcContext[17].Status;
  }
  return result;
}
