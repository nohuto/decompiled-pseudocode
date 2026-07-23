/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x140696678
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140696790 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int *v11; // rcx
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+44h] [rbp+Ch]

  v17 = -1;
  v2 = a1[13];
  v18 = 0;
  v4 = a1[6];
  v6 = *(_QWORD *)(v4 + 24);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 32), &v17);
  v8 = a1[14];
  v9 = *(unsigned __int16 *)(v8 + 8);
  if ( *(_DWORD *)(v7 + 60) < v9 )
  {
    *(_DWORD *)(v7 + 60) = v9;
    *(_WORD *)(a1[6] + 170) = *(_WORD *)(a1[14] + 8);
    v8 = a1[14];
  }
  v10 = *(_DWORD *)(v8 + 12);
  if ( *(_DWORD *)(v7 + 64) < v10 )
  {
    *(_DWORD *)(v7 + 64) = v10;
    *(_DWORD *)(a1[6] + 172) = *(_DWORD *)(a1[14] + 12);
  }
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(a1[6] + 160) = *a2;
  ++*(_QWORD *)(a1[6] + 296);
  v11 = (unsigned int *)a1[14];
  v12 = v11[1];
  if ( (_DWORD)v12 != -1 )
  {
    CmpFreeValue(v6, v12);
    v11 = (unsigned int *)a1[14];
  }
  CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
  a1[14] = 0LL;
  if ( *(_DWORD *)v2 == 1 )
  {
    v13 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v13;
    CmpCleanUpKcbValueCache(a1[6]);
    v14 = a1[6];
    v15 = *(unsigned int *)(v7 + 40);
    *(_DWORD *)(v14 + 88) = *(_DWORD *)(v7 + 36);
    *(_QWORD *)(v14 + 96) = v15;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, v2);
  a1[13] = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v17);
}
