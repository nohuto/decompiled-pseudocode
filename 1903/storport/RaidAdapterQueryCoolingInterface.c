/*
 * XREFs of RaidAdapterQueryCoolingInterface @ 0x1C003F53C
 * Callers:
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001F2D4 (RaidAdapterQueryInterfaceIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterQueryCoolingInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 14) )
    return 3221225659LL;
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 16) = RaidNullReference;
  *(_QWORD *)(v5 + 24) = RaidNullReference;
  *(_QWORD *)(v5 + 48) = RaidAdapterPassiveCoolingCallback;
  *(_DWORD *)v5 = 65592;
  *(_QWORD *)(v5 + 8) = a1;
  return 0LL;
}
