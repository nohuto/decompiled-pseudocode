/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140010A70
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400B78B4 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *FileObjectExtension; // rdi
  char v7; // r9
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  LOBYTE(a4) = 0;
  v10 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v10, a3, a4);
    v4 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_9;
  }
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a1, 6, &v10);
  if ( !FileObjectExtension )
  {
LABEL_9:
    v9 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = v9;
    if ( !v9 )
      return 3221225626LL;
    memset(v9, 0, 0x30uLL);
    v7 = 1;
  }
  FileObjectExtension[5] = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 56), (signed __int64)FileObjectExtension, 0LL) )
    {
      v4 = -1073741823;
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, FileObjectExtension);
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
