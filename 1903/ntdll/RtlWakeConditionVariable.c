/*
 * XREFs of RtlWakeConditionVariable @ 0x180079040
 * Callers:
 *     sub_180078F1C @ 0x180078F1C (sub_180078F1C.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int64 Ptr; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  Ptr = (signed __int64)ConditionVariable->Ptr;
  while ( Ptr )
  {
    if ( (Ptr & 8) != 0 )
    {
      if ( (Ptr & 7) == 7 )
        return;
      v4 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 1, Ptr);
      if ( v4 == Ptr )
        return;
    }
    else
    {
      v2 = Ptr + 8;
      v3 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 8, Ptr);
      if ( v3 == Ptr )
      {
        sub_180079074(ConditionVariable, v2, 1LL, ConditionVariable);
        return;
      }
    }
  }
}
