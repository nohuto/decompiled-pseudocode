/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x18010D9D0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 */

signed __int16 __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        volatile signed __int64 *a5)
{
  signed __int16 result; // ax
  __int16 v7; // r10
  signed __int16 v8; // cx
  __int16 v9; // dx
  signed __int16 v10; // tt

  result = *a2;
  while ( 1 )
  {
    v7 = result & 0x4000;
    v8 = result;
    if ( (result & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v9 = 0x8000;
      else
        v9 = 0;
      v8 = v9 | result & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v8 += a3;
    }
    else if ( !a4 )
    {
      v8 -= a3;
    }
    if ( v8 == result )
      break;
    v10 = result;
    result = _InterlockedCompareExchange16(a2, v8, result);
    if ( v10 == result )
    {
      if ( v7 )
        return RtlReleaseSRWLockExclusive(a5);
      return result;
    }
  }
  return result;
}
