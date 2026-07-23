/*
 * XREFs of sub_180112230 @ 0x180112230
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

NTSTATUS __fastcall sub_180112230(HANDLE ThreadHandle, char *ThreadInformation, unsigned int a3, ULONG *ReturnLength)
{
  NTSTATUS result; // eax

  *ReturnLength = 0;
  if ( a3 < 0x38 )
    return -1073741789;
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, ThreadInformation, 0x30u, ReturnLength);
  if ( result < 0
    || (result = ZwQueryInformationThread(
                   ThreadHandle,
                   ThreadQuerySetWin32StartAddress,
                   ThreadInformation + 48,
                   8u,
                   0LL),
        result < 0) )
  {
    *ReturnLength = 0;
  }
  else
  {
    *ReturnLength += 8;
  }
  return result;
}
