/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0
 * Callers:
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned int *v4; // rcx
  unsigned __int64 result; // rax
  __int16 v6; // r11
  unsigned int *v7; // rcx
  __int64 v8; // r10

  v4 = *a1;
  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
  if ( result )
  {
    v6 = *(_WORD *)(result + 8);
    result = 332LL;
    if ( v6 == 332 || (result = 452LL, v6 == 452) )
    {
      if ( !a3 )
      {
        v7 = (unsigned int *)*v4;
        v8 = *a2 | 1;
        result = *v7;
        *v7 = result;
        *a1 = v7;
        *a2 = v8;
      }
    }
  }
  return result;
}
