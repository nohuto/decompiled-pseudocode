/*
 * XREFs of CmpLightWeightCommitSetSecDescUoW @ 0x14083D528
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14012F9D0 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpAssignSecurityToKcb @ 0x140656884 (CmpAssignSecurityToKcb.c)
 */

void __fastcall CmpLightWeightCommitSetSecDescUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r15
  ULONG_PTR v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rsi
  int v10; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+6Ch] [rbp+14h]

  v14 = 0;
  v12 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 104);
  v13 = -1;
  v11 = -1;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 40), &v13);
  v8 = *(_DWORD *)(v7 + 44);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, v8, &v11);
  *(_DWORD *)(v7 + 44) = *v5;
  v10 = *(_DWORD *)(v9 + 12);
  if ( v10 == 1 )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v11);
    v9 = 0LL;
    CmpRemoveSecurityCellList(v6, v8);
    HvFreeCell(v6, v8);
  }
  else
  {
    *(_DWORD *)(v9 + 12) = v10 - 1;
  }
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v7 + 44), 0LL, 0, 0);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v13);
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v11);
  ExFreePoolWithTag(v5, 0x77554D43u);
  *(_QWORD *)(a1 + 104) = 0LL;
}
