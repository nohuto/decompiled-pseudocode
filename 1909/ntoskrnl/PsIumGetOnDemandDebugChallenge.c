/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x1408CABF4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x140851B38 (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(ULONG_PTR a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         4096,
         (__int64)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         Object,
         0LL,
         0LL);
  if ( v7 >= 0 )
  {
    v7 = VslGetOnDemandDebugChallenge((__int64)Object[0], a2, a3, a4);
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
  }
  return (unsigned int)v7;
}
