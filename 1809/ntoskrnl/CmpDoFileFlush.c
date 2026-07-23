/*
 * XREFs of CmpDoFileFlush @ 0x14012DF6C
 * Callers:
 *     CmpFileFlush @ 0x1406B9BB8 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401B8C50 (ZwFlushBuffersFile.c)
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
    qword_14096F958 = (__int64)a1;
    dword_14096F960 = result;
  }
  return result;
}
