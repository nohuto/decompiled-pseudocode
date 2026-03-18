/*
 * XREFs of CmpFreeValue @ 0x14062ED1C
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E20D8 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E2734 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x14082AD8C (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x140836ABC (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140836B54 (CmpFreeKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083D208 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14062ED98 (CmpFreeValueData.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  bool v5; // zf
  void (__fastcall *v6)(ULONG_PTR, int *); // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = BugCheckParameter3;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  if ( v4 )
  {
    v5 = (unsigned __int8)CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(v4 + 8)) == 0;
    v6 = *(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16);
    if ( !v5 )
    {
      v6(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, v2);
      return 1;
    }
    v6(BugCheckParameter2, &v8);
  }
  return 0;
}
