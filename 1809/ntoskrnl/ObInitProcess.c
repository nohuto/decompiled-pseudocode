/*
 * XREFs of ObInitProcess @ 0x14060A2E4
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     ExEnumHandleTable @ 0x140690C90 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x1406975C0 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x140697740 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x140698C50 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AE7A0 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  int v9; // ebp
  PVOID HandleTable; // rbp
  _QWORD *v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1048) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL, 0LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 95);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1048) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 95);
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&P);
  if ( v9 >= 0 )
  {
    HandleTable = P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection_0(a1 + 95);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
