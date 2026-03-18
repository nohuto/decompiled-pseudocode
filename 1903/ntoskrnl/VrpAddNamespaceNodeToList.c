/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x1408433E4
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140841E7C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1408421E8 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ULongLongMult @ 0x1402812BC (ULongLongMult.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpFindExactNamespaceNode @ 0x140843D98 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  ULONGLONG v4; // r14
  ULONGLONG v5; // r13
  ULONGLONG v6; // rcx
  ULONGLONG v7; // rdx
  __int64 v8; // r15
  ULONGLONG v9; // r15
  PVOID PoolWithTag; // rsi
  size_t v11; // r8
  ULONGLONG v12; // rcx
  ULONGLONG v13; // rdx
  __int64 v14; // r14
  ULONGLONG v15; // r14
  void *v16; // r15
  PVOID v17; // rsi
  size_t v18; // r8
  ULONGLONG v19; // rcx
  _QWORD *v20; // rsi
  void *v21; // r9
  ULONGLONG pullResult[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+80h] [rbp+50h] BYREF
  void *Src; // [rsp+88h] [rbp+58h] BYREF

  if ( VrpFindExactNamespaceNode(a1, a2, &NumberOfBytes) )
    return 3221225525LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = NumberOfBytes;
  v6 = *(_QWORD *)(a1 + 56);
  if ( NumberOfBytes >= v4 )
  {
    if ( v4 < v6 )
      goto LABEL_20;
    v7 = v4 + 1;
    if ( v4 + 1 > v6 )
    {
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
      Src = *(void **)(a1 + 72);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      if ( Src )
      {
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, NumberOfBytes);
          v11 = pullResult[0];
          if ( pullResult[0] >= NumberOfBytes )
            v11 = NumberOfBytes;
          memmove(PoolWithTag, Src, v11);
          ExFreePoolWithTag(Src, 0x72615452u);
          goto LABEL_17;
        }
      }
      else if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, NumberOfBytes);
LABEL_17:
        *(_QWORD *)(a1 + 72) = PoolWithTag;
        result = 0LL;
        *(_QWORD *)(a1 + 56) = v9;
        goto LABEL_19;
      }
      result = 2147942414LL;
LABEL_19:
      if ( (_DWORD)result )
        return result;
LABEL_20:
      if ( ULongLongMult(*(_QWORD *)(a1 + 40), v4, &NumberOfBytes) >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 72);
        if ( v12 + NumberOfBytes >= v12 )
        {
          *(_QWORD *)(v12 + NumberOfBytes) = a2;
LABEL_46:
          ++*(_QWORD *)(a1 + 48);
          return 0LL;
        }
      }
      return 2147483659LL;
    }
    return 2147942487LL;
  }
  if ( v4 >= v6 )
  {
    v13 = v4 + 1;
    if ( v4 + 1 <= v6 )
      return 2147942487LL;
    v14 = *(_QWORD *)(a1 + 64) - 1LL;
    if ( v14 + v13 < v13 )
      return 2147483659LL;
    v15 = (v14 + v13) & ~v14;
    if ( ULongLongMult(v6, *(_QWORD *)(a1 + 40), pullResult) < 0
      || ULongLongMult(v15, *(_QWORD *)(a1 + 40), (ULONGLONG *)&Src) < 0 )
    {
      result = 2147483659LL;
      goto LABEL_39;
    }
    v16 = Src;
    NumberOfBytes = *(_QWORD *)(a1 + 72);
    v17 = ExAllocatePoolWithTag(PagedPool, (SIZE_T)Src, 0x72615452u);
    if ( NumberOfBytes )
    {
      if ( v17 )
      {
        memset(v17, 0, (size_t)v16);
        v18 = pullResult[0];
        if ( pullResult[0] >= (unsigned __int64)v16 )
          v18 = (size_t)v16;
        memmove(v17, (const void *)NumberOfBytes, v18);
        ExFreePoolWithTag((PVOID)NumberOfBytes, 0x72615452u);
        goto LABEL_37;
      }
    }
    else if ( v17 )
    {
      memset(v17, 0, (size_t)v16);
LABEL_37:
      *(_QWORD *)(a1 + 72) = v17;
      result = 0LL;
      *(_QWORD *)(a1 + 56) = v15;
      goto LABEL_39;
    }
    result = 2147942414LL;
LABEL_39:
    if ( (_DWORD)result )
      return result;
  }
  if ( ULongLongMult(*(_QWORD *)(a1 + 40), v5, &NumberOfBytes) >= 0 )
  {
    v19 = *(_QWORD *)(a1 + 72);
    v20 = (_QWORD *)(v19 + NumberOfBytes);
    if ( v19 + NumberOfBytes >= v19
      && ULongLongMult(*(_QWORD *)(a1 + 40), v5 + 1, &NumberOfBytes) >= 0
      && *(_QWORD *)(a1 + 72) + NumberOfBytes >= *(_QWORD *)(a1 + 72)
      && ULongLongMult(*(_QWORD *)(a1 + 48) - v5, *(_QWORD *)(a1 + 40), &NumberOfBytes) >= 0 )
    {
      memmove(v21, v20, NumberOfBytes);
      *v20 = a2;
      goto LABEL_46;
    }
  }
  return 2147483659LL;
}
