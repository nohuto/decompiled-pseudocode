/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400379C0
 * Callers:
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
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
