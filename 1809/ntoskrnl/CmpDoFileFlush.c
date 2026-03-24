/*
 * XREFs of CmpDoFileFlush @ 0x14012DE9C
 * Callers:
 *     CmpFileFlush @ 0x1406B8918 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401B8AF0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( CmpNoWrite )
    return 0;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_14096E958 = (__int64)a1;
    dword_14096E960 = result;
  }
  return result;
}
