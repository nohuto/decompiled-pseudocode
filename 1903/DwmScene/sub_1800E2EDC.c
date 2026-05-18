/*
 * XREFs of sub_1800E2EDC @ 0x1800E2EDC
 * Callers:
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2EDC(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h]

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  v1 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)&v3 = 0xBF800000BF800000uLL;
  *(_OWORD *)(a1 + 20) = *(_OWORD *)a1;
  *((_QWORD *)&v3 + 1) = 2LL;
  *(_DWORD *)(a1 + 36) = v1;
  result = 2LL;
  *(_OWORD *)a1 = v3;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 2LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
