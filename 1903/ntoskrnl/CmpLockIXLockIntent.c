/*
 * XREFs of CmpLockIXLockIntent @ 0x140631EAC
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719204 (CmpUndoDeleteKeyForTrans.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    *a1 = 1;
    *((_QWORD *)a1 + 1) = a2;
LABEL_9:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v2 < 0 )
    return CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56)) != 0;
  if ( v2 != 1 )
  {
    v8 = 0LL;
    while ( !CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v8) + 56LL), *(_QWORD *)(a2 + 56)) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *a1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (*a1 + 1), 0x78494D43u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
          return 0;
        memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
        ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
        v11 = *a1;
        *((_QWORD *)a1 + 1) = v10;
        v10[v11] = a2;
        goto LABEL_18;
      }
    }
    return 1;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( CmEqualTrans(*(_QWORD *)(v6 + 56), *(_QWORD *)(a2 + 56)) )
    return 1;
  v7 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x78494D43u);
  if ( v7 )
  {
    *((_QWORD *)a1 + 1) = v7;
    *v7 = v6;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_18:
    ++*a1;
    goto LABEL_9;
  }
  return 0;
}
