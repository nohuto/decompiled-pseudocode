/*
 * XREFs of CmpLightWeightCommitAddKeyUoW @ 0x1408047F0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140805E80 (CmpLightWeightSwapParentSubKeyList.c)
 */

__int64 __fastcall CmpLightWeightCommitAddKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int *v5; // rbp
  ULONG_PTR v6; // rdi
  __int64 v7; // r14
  ULONG_PTR v8; // rdx
  __int64 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v16 = 0;
  v14 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned int **)(a1 + 104);
  v15 = -1;
  v13 = -1;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 32), &v15);
  v8 = *(unsigned int *)(v7 + 44);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), v8, 0LL, 0, 0);
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
         v6,
         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
         &v13);
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 160LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 296LL);
  v10 = 2 * *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
    v10 = *(_WORD *)(v7 + 72);
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v10 )
  {
    *(_WORD *)(v9 + 52) = v10;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 168LL) = v10;
  }
  v11 = *(unsigned __int16 *)(v7 + 74);
  if ( *(_DWORD *)(v9 + 56) < v11 )
    *(_DWORD *)(v9 + 56) = v11;
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), v5);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v13);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v15);
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v5);
  result = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(result + 232) = 0LL;
  return result;
}
