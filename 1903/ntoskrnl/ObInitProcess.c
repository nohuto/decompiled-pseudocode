/*
 * XREFs of ObInitProcess @ 0x140671FD0
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpFreeHandleTable @ 0x140692CBC (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140692E64 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x1406BBA20 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
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
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
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
