/*
 * XREFs of TppFastAlpcAdjustConcurrencyCount @ 0x180088A94
 * Callers:
 *     TppCallbackMayRunLongProlog @ 0x180030528 (TppCallbackMayRunLongProlog.c)
 *     TpAlpcRegisterCompletionList @ 0x180088A40 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppFastAlpcAdjustConcurrencyCount(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  signed __int32 v4; // r8d
  __int64 v5; // rcx
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 288) & 3;
  if ( (*(_BYTE *)(a1 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(a1 + 284);
      v3 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a1 + 216) + 420LL);
      v4 = v3 + MEMORY[0x7FFE03C0];
      if ( (int)result >= v3 && (int)result <= v4 + MEMORY[0x7FFE03C0] )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), v4, result) )
      {
        v5 = *(_QWORD *)(a1 + 272);
        v6 = v4;
        NtAlpcSetInformation(v5, 8LL, &v6);
      }
    }
  }
  return result;
}
