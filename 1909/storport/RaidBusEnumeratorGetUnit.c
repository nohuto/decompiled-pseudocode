/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C0014834
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0013398 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C001375C (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013A00 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0014934 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C0014AEC (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C0014C98 (RaidAdapterFindZombieUnit.c)
 *     RaidCreateUnit @ 0x1C00152E8 (RaidCreateUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0016D90 (RaUnitSetQueueDepth.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 Unit; // rdi
  __int64 ZombieUnit; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, a2);
    if ( Unit )
      goto LABEL_7;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, a2);
    v13 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 448) & 4) != 0);
      v13 = Unit;
      if ( Unit )
        goto LABEL_7;
    }
    Unit = v3[6];
    v10 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 516LL),
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 512LL));
LABEL_6:
      v11 = *(_QWORD *)(Unit + 24);
      *(_DWORD *)(Unit + 96) = a2;
      *(_WORD *)(Unit + 88) = 1;
      *(_DWORD *)(Unit + 92) = 4;
      *(_WORD *)(Unit + 90) = *(_WORD *)(v11 + 56);
      RaidAdapterInsertUnit(v10, Unit);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_7:
      *(_QWORD *)(a3 + 8) = Unit;
      v12 = *(_DWORD *)(Unit + 96);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 1) = v12;
      return 0LL;
    }
    result = RaidCreateUnit(v10, &v13);
    if ( (int)result >= 0 )
    {
      Unit = v13;
      v3[6] = v13;
      *(_BYTE *)(Unit + 448) |= 8u;
      *(_BYTE *)(Unit + 693) = 0;
      goto LABEL_6;
    }
  }
  return result;
}
