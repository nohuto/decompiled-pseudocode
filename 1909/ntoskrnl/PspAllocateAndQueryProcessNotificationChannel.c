/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1401C2530 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1401C26D0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  _WNF_STATE_NAME *v6; // rdi
  char v7; // r13
  char v8; // r14
  char v9; // al
  NTSTATUS result; // eax
  unsigned int v11; // ecx
  int *v12; // rdx
  int v13; // r8d
  int v14; // eax
  unsigned __int8 v15; // cf
  char v16; // [rsp+40h] [rbp-E8h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-E0h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-B8h] BYREF
  ACL Acl; // [rsp+80h] [rbp-A8h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v6 = (_WNF_STATE_NAME *)(a2 + 2080);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v16 = 0;
  StateName = 0LL;
  if ( !*(_QWORD *)(a2 + 2080) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
    if ( result < 0 )
      return result;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2 + 736, 0LL);
    if ( *v6 )
    {
      v7 = 1;
    }
    else
    {
      *v6 = StateName;
      *(_QWORD *)(a2 + 2116) = *(_QWORD *)(a3 + 36);
      v16 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 736));
    KeAbPostRelease(a2 + 736);
    KeLeaveCriticalRegionThread(a1);
    v9 = v16;
  }
  v11 = 0;
  v12 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v6->Data;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 2096);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a2 + 2112);
  do
  {
    v13 = *v12 & 0x7FFFFFFF;
    *v12 = v13;
    if ( v9 )
    {
      v14 = *(_DWORD *)(a3 + 36);
      v15 = _bittest(&v14, v11);
      v9 = v16;
      if ( v15 )
      {
        if ( v13 )
          v8 = 1;
      }
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 7 );
  if ( v8 )
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a2 + 2080), 0LL, 0, 0LL, 0LL, 0, 0);
  if ( v7 )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
