/*
 * XREFs of SetLogSize @ 0x1C0007220
 * Callers:
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( qword_1C0082830 )
  {
    ExFreePoolWithTag(qword_1C0082830, 0);
    qword_1C0082830 = 0LL;
    qword_1C0082828 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  qword_1C0082830 = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C0082828 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
