/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x14080ACFC
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140809AA4 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x14080B6F4 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONGLONG v4; // r14
  void *v5; // r13
  ULONGLONG v6; // rcx
  ULONGLONG v7; // rdx
  __int64 v8; // r12
  ULONGLONG v9; // r12
  size_t v10; // r13
  PVOID v11; // rsi
  size_t v12; // r8
  unsigned __int64 v13; // rdx
  ULONGLONG v14; // r14
  __int64 v15; // r12
  ULONGLONG v16; // r12
  size_t v17; // r14
  PVOID PoolWithTag; // rsi
  size_t v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rsi
  unsigned __int64 v22; // rdx
  char *v23; // r15
  ULONGLONG pullResult[2]; // [rsp+20h] [rbp-10h] BYREF
  void *Src; // [rsp+80h] [rbp+50h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+88h] [rbp+58h] BYREF

  if ( VrpFindExactNamespaceNode(a1, a2, &Src) )
    return 3221225525LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = Src;
  v6 = *(_QWORD *)(a1 + 56);
  if ( (unsigned __int64)Src < v4 )
  {
    if ( v4 < v6 )
      goto LABEL_40;
    v14 = v4 + 1;
    if ( v14 <= v6 )
      return 2147942487LL;
    v15 = *(_QWORD *)(a1 + 64) - 1LL;
    if ( v15 + v14 < v14 )
      return 2147483659LL;
    v16 = (v15 + v14) & ~v15;
    if ( ULongLongMult(v6, *(_QWORD *)(a1 + 40), pullResult) < 0
      || ULongLongMult(v16, *(_QWORD *)(a1 + 40), &NumberOfBytes) < 0 )
    {
      result = 2147483659LL;
      goto LABEL_39;
    }
    v17 = NumberOfBytes;
    Src = *(void **)(a1 + 72);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    if ( Src )
    {
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v17);
        v19 = pullResult[0];
        if ( pullResult[0] >= v17 )
          v19 = v17;
        memmove(PoolWithTag, Src, v19);
        ExFreePoolWithTag(Src, 0x72615452u);
        goto LABEL_37;
      }
    }
    else if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v17);
LABEL_37:
      *(_QWORD *)(a1 + 72) = PoolWithTag;
      result = 0LL;
      *(_QWORD *)(a1 + 56) = v16;
      goto LABEL_39;
    }
    result = 2147942414LL;
LABEL_39:
    if ( (_DWORD)result )
      return result;
LABEL_40:
    if ( ULongLongMult(*(_QWORD *)(a1 + 40), (ULONGLONG)v5, (ULONGLONG *)&Src) >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 72);
      if ( (unsigned __int64)Src + v20 >= v20 )
      {
        v21 = (char *)Src + v20;
        if ( ULongLongMult(*(_QWORD *)(a1 + 40), (ULONGLONG)v5 + 1, (ULONGLONG *)&Src) >= 0 )
        {
          v22 = *(_QWORD *)(a1 + 72);
          if ( (unsigned __int64)Src + v22 >= v22 )
          {
            v23 = (char *)Src + v22;
            if ( ULongLongMult(*(_QWORD *)(a1 + 48) - (_QWORD)v5, *(_QWORD *)(a1 + 40), (ULONGLONG *)&Src) >= 0 )
            {
              memmove(v23, v21, (size_t)Src);
              *v21 = a2;
              goto LABEL_47;
            }
          }
        }
      }
    }
    return 2147483659LL;
  }
  if ( v4 < v6 )
    goto LABEL_20;
  v7 = v4 + 1;
  if ( v4 + 1 <= v6 )
    return 2147942487LL;
  v8 = *(_QWORD *)(a1 + 64) - 1LL;
  if ( v8 + v7 < v7 )
    return 2147483659LL;
  v9 = (v8 + v7) & ~v8;
  if ( ULongLongMult(v6, *(_QWORD *)(a1 + 40), pullResult) < 0
    || ULongLongMult(v9, *(_QWORD *)(a1 + 40), &NumberOfBytes) < 0 )
  {
    result = 2147483659LL;
    goto LABEL_19;
  }
  v10 = NumberOfBytes;
  Src = *(void **)(a1 + 72);
  v11 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
  if ( Src )
  {
    if ( v11 )
    {
      memset(v11, 0, v10);
      v12 = pullResult[0];
      if ( pullResult[0] >= v10 )
        v12 = v10;
      memmove(v11, Src, v12);
      ExFreePoolWithTag(Src, 0x72615452u);
      goto LABEL_17;
    }
  }
  else if ( v11 )
  {
    memset(v11, 0, v10);
LABEL_17:
    *(_QWORD *)(a1 + 72) = v11;
    result = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
    goto LABEL_19;
  }
  result = 2147942414LL;
LABEL_19:
  if ( (_DWORD)result )
    return result;
LABEL_20:
  if ( ULongLongMult(*(_QWORD *)(a1 + 40), v4, (ULONGLONG *)&Src) < 0 )
    return 2147483659LL;
  v13 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int64)Src + v13 < v13 )
    return 2147483659LL;
  *(_QWORD *)((char *)Src + v13) = a2;
LABEL_47:
  ++*(_QWORD *)(a1 + 48);
  return 0LL;
}
