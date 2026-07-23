/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x1408F4F48
 * Callers:
 *     BiCreateMergedBootEntry @ 0x1408F4238 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1408F5BA8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlULongSub @ 0x140101D94 (RtlULongSub.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall BiGetFilePathFromEfiPath(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  int v7; // esi
  __int64 i; // r10
  unsigned int v9; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbp
  _WORD *v12; // r14
  __int64 j; // rdi
  unsigned int v14; // ebx
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 0x7F) == 0x7F )
    return -1073741766;
  v7 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)i & 0x7F) != 0x7F; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( *(_BYTE *)i == 4 && *(_BYTE *)(i + 1) == 4 )
    {
      result = RtlULongSub(*(unsigned __int16 *)(i + 2), 4u, &pulResult);
      if ( result < 0 )
        return result;
      v7 += pulResult;
    }
  }
  if ( !v7 )
    return -1073741275;
  v9 = v7 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  v12 = PoolWithTag;
  for ( j = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)j & 0x7F) != 0x7F; j += *(unsigned __int16 *)(j + 2) )
  {
    if ( *(_BYTE *)j == 4 && *(_BYTE *)(j + 1) == 4 )
    {
      v14 = *(unsigned __int16 *)(j + 2) - 4;
      memmove(v12, (const void *)(j + 4), v14);
      v12 = (_WORD *)((char *)v12 + v14);
    }
  }
  result = 0;
  *a2 = v11;
  *v12 = 0;
  *a3 = v9;
  return result;
}
