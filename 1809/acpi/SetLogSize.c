/*
 * XREFs of SetLogSize @ 0x1C00100B0
 * Callers:
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( qword_1C0080840 )
  {
    ExFreePoolWithTag(qword_1C0080840, 0);
    qword_1C0080840 = 0LL;
    qword_1C0080838 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  qword_1C0080840 = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C0080838 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
