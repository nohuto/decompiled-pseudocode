/*
 * XREFs of sub_180073A4C @ 0x180073A4C
 * Callers:
 *     RtlLockMemoryZone @ 0x1800739A0 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 */

__int64 sub_180073A4C()
{
  NTSTATUS v0; // esi
  int v1; // eax
  int v3; // ebx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&stru_180166358);
  v1 = dword_180166034;
  if ( dword_180166034 )
  {
LABEL_2:
    dword_180166034 = v1 + 1;
  }
  else
  {
    v3 = 0;
    v4 = (PVOID *)&off_180118FD0;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      ++v3;
      ++v4;
      if ( v3 )
      {
        v1 = dword_180166034;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180166358);
  return (unsigned int)v0;
}
