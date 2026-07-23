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

LOGICAL __fastcall sub_180006E00(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  volatile signed __int32 **v7; // rcx
  PVOID *v8; // rdx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    if ( *((_QWORD *)BaseAddress + 9) )
      sub_1800078BC();
    v7 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    if ( v7[1] != BaseAddress + 2 || (v8 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v8 != BaseAddress + 2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (volatile signed __int32 *)v8;
    v9 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
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
