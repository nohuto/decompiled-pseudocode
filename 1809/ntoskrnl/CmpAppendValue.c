/*
 * XREFs of CmpAppendValue @ 0x1409D00D8
 * Callers:
 *     CmpParseInfBuffer @ 0x1409CFB20 (CmpParseInfBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpAppendValue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  if ( !a2 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x69704D43u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = a2;
  *((_BYTE *)PoolWithTag + 16) = a3;
  v8 = *(_QWORD **)(a1 + 24);
  if ( v8 )
    *v8 = v7;
  else
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = v7;
  *(_QWORD *)(a1 + 24) = v7;
  return 1;
}
