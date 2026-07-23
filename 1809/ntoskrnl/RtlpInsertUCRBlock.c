/*
 * XREFs of RtlpInsertUCRBlock @ 0x1402F2C20
 * Callers:
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x1402FC1D4 (RtlpFindUCREntry.c)
 */

__int64 __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 UCREntry; // rax
  __int64 *v6; // rdx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rcx
  __int64 **v9; // r8
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    UCREntry = RtlpFindUCREntry(a1, v4);
    v6 = *(__int64 **)(UCREntry + 8);
    if ( *v6 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, UCREntry, 0, *v6, 0LL);
    }
  }
  v7 = *((_BYTE *)a2 - 2);
  if ( v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (__int64 **)(v8 + 96);
  v10 = a2 + 2;
  result = *(_QWORD *)(v8 + 96);
  v12 = *(_QWORD *)(result + 8);
  if ( v12 != v8 + 96 )
    return RtlpLogHeapFailure(13, 0, (_DWORD)v9, v12, 0LL, 0LL);
  *v10 = result;
  v10[1] = (__int64)v9;
  *(_QWORD *)(result + 8) = v10;
  *v9 = v10;
  return result;
}
