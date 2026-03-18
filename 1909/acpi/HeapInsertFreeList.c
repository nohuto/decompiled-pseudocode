/*
 * XREFs of HeapInsertFreeList @ 0x1C0014540
 * Callers:
 *     ProcessIncDec @ 0x1C0011BE0 (ProcessIncDec.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     FindNSObj @ 0x1C0014240 (FindNSObj.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall HeapInsertFreeList(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int *i; // r8
  __int64 **v5; // rcx
  __int64 *v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // rcx
  unsigned int *v9; // rax
  unsigned int *v10; // r10
  _QWORD *result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v2 = *(unsigned int **)(a1 + 40);
  for ( i = (unsigned int *)(a1 + 40); v2 != i; v2 = *(unsigned int **)v2 )
  {
    if ( a2 + 4 < v2 )
      break;
  }
  v5 = (__int64 **)*((_QWORD *)v2 + 1);
  v6 = (__int64 *)(a2 + 4);
  if ( *v5 != (__int64 *)v2 )
    goto LABEL_20;
  *((_QWORD *)a2 + 3) = v5;
  *v6 = (__int64)v2;
  *v5 = v6;
  *((_QWORD *)v2 + 1) = v6;
  v7 = (_QWORD *)*v6;
  v8 = *v6 - 16;
  if ( (unsigned int *)*v6 != i )
  {
    v17 = a2[1];
    if ( (unsigned int *)v8 == (unsigned int *)((char *)a2 + v17) )
    {
      a2[1] = v17 + *(_DWORD *)(v8 + 4);
      v18 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_20;
      v19 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v19 != v7 )
        goto LABEL_20;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
    }
  }
  v9 = (unsigned int *)*((_QWORD *)a2 + 3);
  v10 = v9 - 4;
  if ( v9 != i )
  {
    v14 = v10[1];
    if ( a2 == (unsigned int *)((char *)v10 + v14) )
    {
      v10[1] = a2[1] + v14;
      v15 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_20;
      v16 = (__int64 **)*((_QWORD *)a2 + 3);
      if ( *v16 != v6 )
        goto LABEL_20;
      *v16 = v15;
      a2 = v10;
      v15[1] = (__int64)v16;
    }
  }
  result = (_QWORD *)((char *)a2 + a2[1]);
  if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)result )
    return result;
  *(_QWORD *)(a1 + 32) = a2;
  v12 = a2 + 4;
  v13 = *v12;
  if ( *(_QWORD **)(*v12 + 8LL) != v12 || (result = (_QWORD *)v12[1], (_QWORD *)*result != v12) )
LABEL_20:
    __fastfail(3u);
  *result = v13;
  *(_QWORD *)(v13 + 8) = result;
  return result;
}
