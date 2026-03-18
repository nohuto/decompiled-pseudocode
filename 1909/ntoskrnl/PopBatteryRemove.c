/*
 * XREFs of PopBatteryRemove @ 0x1408A9890
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x140171F50 (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140443194;
    ++dword_1404431F8;
    byte_140443198 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140443190 )
  {
    PopAcquirePolicyLock();
    if ( byte_140443B9E )
    {
      byte_140443B9E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
}
