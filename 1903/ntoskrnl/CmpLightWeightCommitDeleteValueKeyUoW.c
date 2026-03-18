/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083D208
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E285C (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v12 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v13 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 40), &v12);
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v2 == 1 )
  {
    v8 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v8;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v9 + 96) = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v9 + 100) = v10;
    if ( !*(_DWORD *)(v7 + 36) )
    {
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, (unsigned int *)v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v12);
}
