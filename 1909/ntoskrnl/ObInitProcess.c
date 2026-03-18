/*
 * XREFs of ObInitProcess @ 0x140680D70
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406863D4 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x1406B7240 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, ULONG_PTR a2, int a3, int a4)
{
  unsigned __int64 v8; // rdi
  int v9; // ebp
  PVOID HandleTable; // rbp
  PVOID v12; // rbx
  ULONG_PTR v13; // [rsp+30h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v14; // [rsp+38h] [rbp-20h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1048) = HandleTable;
      if ( SeAuditingWithTokenForSubcategory(123, 0LL) )
      {
        v13 = a2;
        v14 = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, &v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 96);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1048) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 96);
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
  ExReleaseRundownProtection_0(a1 + 96);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v9;
}
