/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C794
 * Callers:
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(unsigned int **a1, __int64 *a2, char a3)
{
  unsigned int *v4; // rcx
  unsigned __int64 result; // rax
  unsigned int *v6; // rcx
  __int64 v7; // r10

  v4 = *a1;
  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 8);
    if ( ((_WORD)result == 332 || (_WORD)result == 452) && !a3 )
    {
      v6 = (unsigned int *)*v4;
      v7 = *a2 | 1;
      result = *v6;
      *v6 = result;
      *a1 = v6;
      *a2 = v7;
    }
  }
  return result;
}
