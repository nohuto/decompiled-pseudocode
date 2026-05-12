/*
 * XREFs of StorCreateDictionary @ 0x1C001D3CC
 * Callers:
 *     RaidCreateAdapter @ 0x1C001D14C (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateDictionary(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = 0;
  v2 = 20LL;
  *(_DWORD *)(a1 + 4) = 20;
  *(_QWORD *)(a1 + 24) = RaidGetKeyFromUnit;
  *(_QWORD *)(a1 + 32) = StorCompareUlongKey;
  *(_DWORD *)(a1 + 8) = 512;
  *(_QWORD *)(a1 + 40) = StorHashUlongKey;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x74636944u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  do
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    PoolWithTag += 2;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)(a1 + 16) = v4;
  return 0LL;
}
