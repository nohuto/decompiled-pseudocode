/*
 * XREFs of SeSetMandatoryPolicyToken @ 0x1406E4688
 * Callers:
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     SeMakeSystemToken @ 0x140A01A5C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A02014 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A022A8 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SeSetMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v6, 0);
  *(_DWORD *)(a1 + 212) = *a2;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v6, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
