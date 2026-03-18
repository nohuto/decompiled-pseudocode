/*
 * XREFs of ACPIBuildIssueInvalidateRelationsWorker @ 0x1C002A574
 * Callers:
 *     ACPIBuildIssueInvalidateRelations @ 0x1C002A530 (ACPIBuildIssueInvalidateRelations.c)
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C002A574 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPITableUnloadCallBack @ 0x1C005D930 (ACPITableUnloadCallBack.c)
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C002A574 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPIPendingInvalidate @ 0x1C002A6AC (ACPIPendingInvalidate.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelationsWorker(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // r9

  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x208) == 0x200 )
  {
    if ( (v2 & 0x40000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFBFFFFFFFFFFuLL);
      if ( !(unsigned __int8)ACPIPendingInvalidate(a1) )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 736), BusRelations);
    }
    else
    {
      v3 = (_QWORD *)(a1 + 752);
      v4 = *(_QWORD **)(a1 + 752);
      while ( v4 != v3 )
      {
        v5 = v4 - 96;
        v4 = (_QWORD *)*v4;
        if ( (v5[1] & 0x208) == 0x200LL )
          ACPIBuildIssueInvalidateRelationsWorker(v5);
      }
    }
  }
}
