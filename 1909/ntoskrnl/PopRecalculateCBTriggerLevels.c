/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x1408A9F88
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x14073AA8C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x14073AB38 (PopBatteryCheckTrigger.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  _BYTE *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  PopAcquirePolicyLock();
  v1 = 0;
  v7 = 0;
  v2 = 0LL;
  do
  {
    v3 = PopPolicy;
    if ( (*(&PopCB + 6 * v2 + 75) & 0x80u) == 0 )
    {
      *(&PopCB + 6 * v2 + 78) = *((_DWORD *)PopPolicy + 6 * v2 + 25);
      if ( v3[24 * v2 + 96] )
      {
        *(&PopCB + 6 * v2 + 75) |= 0x80u;
        PopDiagTraceBatteryTriggerFlags(&v7, (__int64)(&PopCB + 6 * v2 + 74));
        v1 = v7;
        v4 = 3LL * v7;
        v5 = 24LL * v7;
        if ( PopBatteryCheckTrigger((__int64)&PopCB + v5 + 296) )
        {
          *(&PopCB + 2 * v4 + 75) |= 2u;
          PopDiagTraceBatteryTriggerFlags(&v7, (__int64)&PopCB + v5 + 296);
          v1 = v7;
        }
      }
    }
    v7 = ++v1;
    v2 = v1;
  }
  while ( v1 < 4 );
  return PopReleasePolicyLock();
}
