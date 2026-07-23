/*
 * XREFs of IoSetOplockKeyContext @ 0x140166D04
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14008D778 (IopSetTypeSpecificFoExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall IoSetOplockKeyContext(__int64 a1, __int128 *a2, __int16 a3)
{
  __int64 result; // rax
  char *v6; // rax
  char *v7; // rbx
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  unsigned int v10; // edi
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 6, &v11);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v11);
    if ( (int)result < 0 )
      return result;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  memset(v6, 0, 0x30uLL);
  *(_WORD *)v7 = a3;
  if ( a3 == 1 )
  {
    v9 = *a2;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_12;
    if ( *((_BYTE *)a2 + 32) )
    {
      v8 = *a2;
      *((_WORD *)v7 + 1) |= 1u;
      *(_OWORD *)(v7 + 4) = v8;
    }
    if ( !*((_BYTE *)a2 + 33) )
      goto LABEL_12;
    v9 = a2[1];
  }
  *((_WORD *)v7 + 1) |= 2u;
  *(_OWORD *)(v7 + 20) = v9;
LABEL_12:
  v10 = IopSetTypeSpecificFoExtension(v11, 6u, (signed __int64)v7);
  if ( v10 == -1073741823 )
    ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v7);
  return v10;
}
