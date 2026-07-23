/*
 * XREFs of CmpLightWeightCommitSetUserFlagsUoW @ 0x140804FAC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // r8d
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(v4 + 32), &v9);
  v7 = *(_DWORD *)(v6 + 52) ^ (*(_DWORD *)(v6 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
  *(_DWORD *)(v6 + 52) = v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^ HIWORD(v7)) & 0xF;
  *(_QWORD *)(v6 + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
  return (*(__int64 (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v9);
}
