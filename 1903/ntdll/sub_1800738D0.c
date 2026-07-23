/*
 * XREFs of sub_1800738D0 @ 0x1800738D0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800737A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180083950 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 */

void sub_1800738D0()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&stru_180166350);
  if ( !--dword_180166030 )
  {
    v0 = (PVOID *)off_180118CD0;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&stru_180166350);
}
