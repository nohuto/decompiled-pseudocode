/*
 * XREFs of PdcPoResiliencyClient @ 0x1408700A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, __int64 a2, unsigned int a3)
{
  char v3; // di
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ebx

  v3 = a2;
  v4 = a1 - 1;
  if ( !v4 )
    return (unsigned int)PopPdcIdleResiliencyCallback(a3, a2);
  v5 = v4 - 1;
  if ( !v5 )
  {
    PopAcquirePolicyLock();
    v6 = 0;
    if ( !PopDeepIoCoalescingEnabled )
    {
LABEL_8:
      PopPdcIoCoalescing = v3;
      PopCheckResiliencyScenarios();
    }
LABEL_9:
    PopReleasePolicyLock();
    return v6;
  }
  if ( v5 == 1 )
  {
    PopAcquirePolicyLock();
    v6 = 0;
    if ( PopDeepIoCoalescingEnabled )
      goto LABEL_8;
    goto LABEL_9;
  }
  return 0;
}
