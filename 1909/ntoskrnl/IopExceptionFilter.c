/*
 * XREFs of IopExceptionFilter @ 0x1402934E8
 * Callers:
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
  {
    v2 = (*a1)[12];
    *a2 = v2;
  }
  v3 = *a2;
  if ( v2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
