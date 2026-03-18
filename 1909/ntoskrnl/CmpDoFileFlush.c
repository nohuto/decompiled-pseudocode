/*
 * XREFs of CmpDoFileFlush @ 0x1400EDAF8
 * Callers:
 *     CmpFileFlush @ 0x1406911D0 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401C15B0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !BYTE1(NlsMbCodePageTag) )
  {
    result = ZwFlushBuffersFile(a1, &IoStatusBlock);
    if ( result < 0 )
    {
      CmRegistryIODebug = 4;
      qword_1409AEA00 = (__int64)a1;
      dword_1409AEA08 = result;
    }
  }
  return result;
}
