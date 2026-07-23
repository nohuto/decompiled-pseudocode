/*
 * XREFs of AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall AuthzBasepUnicodeStringFromOperandValue(__int64 a1, char a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // r14d
  __int64 v9; // rax
  int v10; // eax
  POOL_TYPE v11; // ecx
  PVOID PoolWithTag; // rax
  size_t v13; // r8
  const void *v14; // rdx
  unsigned int v16; // ebx
  WCHAR *v17; // rdi
  unsigned __int16 *v18; // rdx

  v4 = 0;
  *a4 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    a3[1] = *(_WORD *)(a1 + 24);
    *a3 = *(_WORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    a3[1] = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2LL);
    *a3 = **(_WORD **)(*(_QWORD *)(a1 + 16) + 48LL);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v9;
  if ( !*a3 || !v9 )
    return (unsigned int)-1073741406;
  v10 = *(_DWORD *)(a1 + 12);
  if ( v10 == 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      goto LABEL_7;
LABEL_13:
    if ( a2 )
    {
      v16 = 0;
      if ( (*a3 & 0xFFFE) != 0 )
      {
        do
        {
          v17 = (WCHAR *)(*((_QWORD *)a3 + 1) + 2LL * v16);
          *v17 = RtlUpcaseUnicodeChar(*v17);
          ++v16;
        }
        while ( v16 < *a3 >> 1 );
      }
    }
    return v4;
  }
  if ( v10 != 2 )
    goto LABEL_13;
  if ( !a2 )
    return v4;
LABEL_7:
  v11 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v11 = NonPagedPoolNx;
  PoolWithTag = ExAllocatePoolWithTag(v11, a3[1], 0x61476553u);
  *((_QWORD *)a3 + 1) = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v13 = *(unsigned int *)(a1 + 24);
      v14 = *(const void **)(a1 + 32);
    }
    else
    {
      v18 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
      v13 = *v18;
      v14 = (const void *)*((_QWORD *)v18 + 1);
    }
    memmove(PoolWithTag, v14, v13);
    *a4 = 1;
    goto LABEL_13;
  }
  return 3221225495LL;
}
