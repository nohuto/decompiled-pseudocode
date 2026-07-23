/*
 * XREFs of MiClearRangeInPartitionTree @ 0x1402D0FD8
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1402D0928 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 *v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdx
  bool v19; // zf
  bool i; // zf
  __int64 v21; // [rsp+58h] [rbp+10h]

  v3 = a2;
  v5 = a2 & 0x7FFFFFFFFFFC0000LL | v21 & 0x8000000000000000uLL;
  v6 = a3;
  result = a2 - (a2 & 0x7FFFFFFFFFFC0000LL);
  v8 = (result + a3 + 0x3FFFF) >> 18;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *a1;
      if ( *a1 )
      {
        v10 = v5 & 0x7FFFFFFFFFFFFFFFLL;
        do
        {
          v11 = *(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL;
          if ( v10 < v11 )
          {
            v9 = *(_QWORD *)v9;
          }
          else
          {
            if ( v10 <= v11 )
              break;
            v9 = *(_QWORD *)(v9 + 8);
          }
        }
        while ( v9 );
      }
      v12 = v6;
      v13 = *(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL;
      if ( v13 - v3 + 0x40000 <= v6 )
        v12 = v13 - v3 + 0x40000;
      RtlClearBitsEx(v9 + 32, v3 - v13, v12);
      v14 = *(_QWORD *)(v9 + 32);
      v15 = v14 - 1;
      if ( !v14 )
        goto LABEL_24;
      if ( v14 <= 1 )
        break;
      v16 = *(__int64 **)(v9 + 40);
      v17 = *v16;
      v18 = &v16[v15 >> 6];
      if ( v16 != v18 )
      {
        for ( i = v17 == 0; i; i = *v16 == 0 )
        {
          if ( ++v16 == v18 )
          {
            v19 = (*v16 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v15)) == 0;
            goto LABEL_22;
          }
        }
        goto LABEL_24;
      }
      v19 = (v17 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v14))) == 0;
LABEL_22:
      if ( v19 )
        goto LABEL_23;
LABEL_24:
      v3 += v12;
      result = (v5 ^ (v5 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
      v6 -= v12;
      v5 ^= result;
      if ( !--v8 )
        return result;
    }
    if ( _bittest64(*(const signed __int64 **)(v9 + 40), 0) )
      goto LABEL_24;
LABEL_23:
    RtlAvlRemoveNode(a1, (unsigned __int64 *)v9);
    ExFreePoolWithTag(*(PVOID *)(v9 + 40), 0);
    ExFreePoolWithTag((PVOID)v9, 0);
    goto LABEL_24;
  }
  return result;
}
