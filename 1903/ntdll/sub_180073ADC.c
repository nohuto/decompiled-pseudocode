/*
 * XREFs of sub_180073ADC @ 0x180073ADC
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180073930 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 */

__int64 sub_180073ADC()
{
  NTSTATUS v0; // esi
  int v1; // eax
  __int64 v3; // rbx
  PVOID *v4; // rdi
  PVOID *v5; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&stru_180166350);
  v1 = dword_180166030;
  if ( dword_180166030 )
  {
LABEL_2:
    dword_180166030 = v1 + 1;
  }
  else
  {
    v3 = 0LL;
    v4 = (PVOID *)off_180118CD0;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      if ( (unsigned int)v3 >= 4 )
      {
        v1 = dword_180166030;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v3 )
    {
      v5 = (PVOID *)&off_180118CD0[v3];
      do
      {
        RtlUnlockModuleSection(*--v5);
        LODWORD(v3) = v3 - 1;
      }
      while ( (_DWORD)v3 );
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180166350);
  return (unsigned int)v0;
}
