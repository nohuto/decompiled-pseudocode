/*
 * XREFs of PdcPoQueryExpectedStandbyTime @ 0x14086FFA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
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
    if ( dword_1404186CC == -1 || dword_1404186C8 >= (unsigned int)dword_1404186CC )
    {
      if ( ((dword_1404186CC + 1) & 0xFFFFFFFE) == 0 )
        v1 = -1LL;
    }
    else
    {
      v1 = (unsigned int)PopIdleScanInterval + (unsigned __int64)(unsigned int)(dword_1404186CC - dword_1404186C8);
    }
    result = PopReleasePolicyLock();
  }
  *a1 = v1;
  return result;
}
