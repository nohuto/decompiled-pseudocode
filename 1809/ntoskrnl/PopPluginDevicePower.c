/*
 * XREFs of PopPluginDevicePower @ 0x1400FF334
 * Callers:
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140100168 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400FF5B4 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401721B4 (PopPepUpdateConstraints.c)
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginDevicePower(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(v3, 4LL, a3);
    }
  }
  else
  {
    v5 = 4;
  }
  result = PopPepProcessEvent(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !v4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
