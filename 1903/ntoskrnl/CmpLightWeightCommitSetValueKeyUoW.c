/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x1406E2734
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E285C (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int *v11; // rcx
  ULONG_PTR v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // r9d
  int v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+44h] [rbp+Ch]

  v17 = -1;
  v3 = a1[13];
  v18 = 0;
  v4 = a1[6];
  v6 = *(_QWORD *)(v4 + 32);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 40), &v17);
  v8 = a1[14];
  v9 = *(unsigned __int16 *)(v8 + 8);
  if ( *(_DWORD *)(v7 + 60) < v9 )
  {
    *(_DWORD *)(v7 + 60) = v9;
    *(_WORD *)(a1[6] + 178) = *(_WORD *)(a1[14] + 8);
    v8 = a1[14];
  }
  v10 = *(_DWORD *)(v8 + 12);
  if ( *(_DWORD *)(v7 + 64) < v10 )
  {
    *(_DWORD *)(v7 + 64) = v10;
    *(_DWORD *)(a1[6] + 180) = *(_DWORD *)(a1[14] + 12);
  }
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(a1[6] + 168) = *a2;
  ++*(_QWORD *)(a1[6] + 304);
  v11 = (unsigned int *)a1[14];
  v12 = v11[1];
  if ( (_DWORD)v12 != -1 )
  {
    CmpFreeValue(v6, v12);
    v11 = (unsigned int *)a1[14];
  }
  CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
  a1[14] = 0LL;
  if ( *(_DWORD *)v3 == 1 )
  {
    v13 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v3 + 4);
    *(_QWORD *)(v3 + 4) = v13;
    CmpCleanUpKcbCachedSymlink(a1[6]);
    v14 = a1[6];
    v15 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v14 + 96) = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v14 + 100) = v15;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6);
  a1[13] = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v17);
}
