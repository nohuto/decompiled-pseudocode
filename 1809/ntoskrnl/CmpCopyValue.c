/*
 * XREFs of CmpCopyValue @ 0x1407FE584
 * Callers:
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpSetValueDataNew @ 0x1405ADE10 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1405AEF04 (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, int a4)
{
  __int64 (__fastcall *v5)(__int64, __int64, ULONG_PTR *); // rax
  unsigned int v7; // r14d
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  unsigned int v15; // eax
  bool ValueData; // al
  ULONG_PTR v17; // rcx
  PVOID v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rax
  int *v22; // rax
  unsigned int v23; // ebx
  int v24; // ebx
  __int64 v25; // rax
  unsigned int v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-1Ch] BYREF
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+48h]

  v32 = a2;
  HIDWORD(BugCheckParameter3_4) = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR *))(a1 + 8);
  LODWORD(BugCheckParameter3_4) = -1;
  v7 = a2;
  v9 = v5(a1, a2, &BugCheckParameter3_4);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1;
  v12 = *(_DWORD *)(v9 + 4);
  v29 = v9 + 8;
  v13 = v12 + 0x80000000;
  v14 = *(_DWORD *)(v9 + 8);
  if ( v12 < 0x80000000 )
    v13 = v12;
  v26 = v13;
  v31 = v14;
  v11 = CmpCopyCell(a1, v7, a3, a4);
  if ( v11 == -1 || !v13 )
    goto LABEL_14;
  if ( v13 <= 4 )
  {
    v22 = (int *)v29;
    if ( v12 < 0x80000000
      && (v23 = *(_DWORD *)v29,
          (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4),
          (v22 = (int *)(*(__int64 (__fastcall **)(__int64, _QWORD, ULONG_PTR *))(a1 + 8))(
                          a1,
                          v23,
                          &BugCheckParameter3_4)) == 0LL)
      || (v24 = *v22,
          (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4),
          (v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v11, &BugCheckParameter3_4)) == 0) )
    {
      HvFreeCell(a3, v11);
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(v25 + 8) = v24;
    *(_DWORD *)(v25 + 4) = v13 + 0x80000000;
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
    v10 = 0LL;
LABEL_14:
    if ( v10 )
      (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
    return v11;
  }
  v15 = v13 - 16345;
  if ( (*(_DWORD *)(a1 + 212) < 4u || v15 > 0x7FFFC026) && (*(_DWORD *)(a3 + 212) < 4u || v15 > 0x7FFFC026) )
  {
    v20 = CmpCopyCell(a1, v31, a3, a4);
  }
  else
  {
    v29 = 0xFFFFFFFFLL;
    ValueData = CmpGetValueData(a1, v32, v10, &v26, (__int64)&P, (__int64)&v31, (__int64)&v29);
    v17 = a3;
    if ( !ValueData )
    {
LABEL_13:
      HvFreeCell(v17, v11);
      v11 = -1;
      goto LABEL_14;
    }
    v19 = P;
    v13 = v26;
    if ( (int)CmpSetValueDataNew(a3, (char *)P, v26, a4, &BugCheckParameter3) < 0 )
    {
      if ( (_BYTE)v31 == 1 )
        ExFreePoolWithTag(v19, 0);
      else
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v29);
      v17 = a3;
      goto LABEL_13;
    }
    if ( (_BYTE)v31 == 1 )
      ExFreePoolWithTag(v19, 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v29);
    v20 = BugCheckParameter3;
  }
  if ( v20 == -1 )
  {
    HvFreeCell(a3, v11);
    v11 = -1;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
  v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v11, &BugCheckParameter3_4);
  if ( v21 )
  {
    *(_DWORD *)(v21 + 8) = v20;
    *(_DWORD *)(v21 + 4) = v13;
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
    return v11;
  }
  HvFreeCell(a3, v11);
  CmpFreeValueData(a3, v20, v13);
  return 0xFFFFFFFFLL;
}
