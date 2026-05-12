/*
 * XREFs of RaidDeleteBusEnumerator @ 0x1C0013018
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012E90 (RaidAdapterRescanBus.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidDeleteUnit @ 0x1C001242C (RaidDeleteUnit.c)
 *     RaidBusEnumeratorFreeUnitResources @ 0x1C00130A8 (RaidBusEnumeratorFreeUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C00151E0 (StorDeleteScsiIdentity.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001736C (RaUnitWaitForRemoveLock.c)
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
