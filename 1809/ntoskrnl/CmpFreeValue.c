/*
 * XREFs of CmpFreeValue @ 0x1405ADB5C
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetValueKeyNew @ 0x1405ACBBC (CmpSetValueKeyNew.c)
 *     CmpFreeKeyByCell @ 0x1405AD6F8 (CmpFreeKeyByCell.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406948EC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406950E4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406954B8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpSetValueKeyTombstone @ 0x1407F0580 (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x1407FD66C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x1407FD704 (CmpFreeKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140803964 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1405ADF04 (CmpFreeValueData.c)
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
