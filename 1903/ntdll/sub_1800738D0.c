/*
 * XREFs of sub_1800738D0 @ 0x1800738D0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800737A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180083950 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 */

signed __int64 sub_1800738D0()
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v2; // rdi

  RtlAcquireSRWLockExclusive(&qword_180166350);
  if ( !--dword_180166030 )
  {
    v1 = off_180118CD0;
    v2 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v1++);
      --v2;
    }
    while ( v2 );
  }
  return RtlReleaseSRWLockExclusive(&qword_180166350);
}
