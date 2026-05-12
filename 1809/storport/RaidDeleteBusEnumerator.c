/*
 * XREFs of RaidDeleteBusEnumerator @ 0x1C00178EC
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0017760 (RaidAdapterRescanBus.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaUnitWaitForRemoveLock @ 0x1C0016D78 (RaUnitWaitForRemoveLock.c)
 *     RaidBusEnumeratorFreeUnitResources @ 0x1C001797C (RaidBusEnumeratorFreeUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0019B18 (StorDeleteScsiIdentity.c)
 *     RaidDeleteUnit @ 0x1C001A750 (RaidDeleteUnit.c)
 */

void __fastcall RaidDeleteBusEnumerator(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    RaUnitWaitForRemoveLock(*(_QWORD *)(a1 + 56));
    RaidDeleteUnit(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  RaidBusEnumeratorFreeUnitResources(a1);
  v3 = (_QWORD **)(a1 + 120);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    StorDeleteScsiIdentity(v4 + 2);
    ExFreePoolWithTag(v4 - 2, 0x74456152u);
  }
}
