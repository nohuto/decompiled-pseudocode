/*
 * XREFs of PpmPerfResizeHistory @ 0x1408A7468
 * Callers:
 *     PpmPerfResizeHistoryAll @ 0x1408A7548 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14010CFF8 (PpmGetPerfPolicyClass.c)
 *     PpmPerfResetHistory @ 0x1401946B8 (PpmPerfResetHistory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int8 PerfPolicyClass; // al
  _DWORD *v4; // rcx
  int v5; // edi
  int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass(a1);
  v4 = *(_DWORD **)(a1 + 24216);
  v5 = *((unsigned __int8 *)&PpmCurrentProfile[341 * dword_140443ACC + 8] + PerfPolicyClass);
  v6 = v5;
  if ( v4 )
  {
    if ( *v4 == v5 )
      return v2;
    ExFreePoolWithTag(v4, 0x704D5050u);
    *(_QWORD *)(a1 + 24216) = 0LL;
  }
  if ( (unsigned __int8)v5 > 1u )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * v5 + 28), 0x704D5050u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * v6 + 28));
      *v8 = v6;
      *(_QWORD *)(a1 + 24216) = v8;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
