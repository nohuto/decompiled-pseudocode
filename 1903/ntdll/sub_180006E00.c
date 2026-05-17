/*
 * XREFs of sub_180006E00 @ 0x180006E00
 * Callers:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 * Callees:
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     sub_1800078BC @ 0x1800078BC (sub_1800078BC.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180006E00(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      sub_1800078BC();
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v7 + 8) != a1 + 8 || (v8 = *(_QWORD **)(a1 + 16), *v8 != a1 + 8) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(v10, 0);
      return sub_180006FCC(v9, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
