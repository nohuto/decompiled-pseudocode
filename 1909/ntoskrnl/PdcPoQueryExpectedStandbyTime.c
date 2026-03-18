/*
 * XREFs of PdcPoQueryExpectedStandbyTime @ 0x1408AB0F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoQueryExpectedStandbyTime(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = 0LL;
  result = (unsigned int)(PopPdcLastCsEnterReason - 5);
  if ( (unsigned int)result <= 1 || PopPdcLastCsEnterReason == 12 )
  {
    PopAcquirePolicyLock();
    if ( dword_140442F0C == -1 || dword_140442F08 >= (unsigned int)dword_140442F0C )
    {
      if ( ((dword_140442F0C + 1) & 0xFFFFFFFE) == 0 )
        v1 = -1LL;
    }
    else
    {
      v1 = (unsigned int)PopIdleScanInterval + (unsigned __int64)(unsigned int)(dword_140442F0C - dword_140442F08);
    }
    result = PopReleasePolicyLock();
  }
  *a1 = v1;
  return result;
}
