/*
 * XREFs of EtwpAllocatePayloadFilterData @ 0x1408C2BB0
 * Callers:
 *     EtwpAllocateFilter @ 0x1408C2A1C (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpValidatePayloadFilter @ 0x1408CBFE0 (EtwpValidatePayloadFilter.c)
 */

__int64 __fastcall EtwpAllocatePayloadFilterData(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v7; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  size_t v10; // r8
  const void *v11; // rdx

  v3 = *(_DWORD *)(a2 + 8);
  result = EtwpValidatePayloadFilter(a1, *(_QWORD *)a2, v3);
  v7 = result;
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 8, 0x46777445u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = *(unsigned int *)(a2 + 8);
      v11 = *(const void **)a2;
      *PoolWithTag = 1;
      memmove(PoolWithTag + 2, v11, v10);
      result = v7;
      *a3 = v9;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
