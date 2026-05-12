/*
 * XREFs of RaidZoneWriteGroupListRemoveRequest @ 0x1C0039C94
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidZoneWriteGroupListRemoveRequest(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx

  if ( *((_DWORD *)a2 + 14) )
  {
    if ( a3 )
      a2[5] = a2[2];
  }
  else
  {
    v4 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(a1 + 152);
    ExFreePoolWithTag(a2, 0x525A6152u);
  }
}
