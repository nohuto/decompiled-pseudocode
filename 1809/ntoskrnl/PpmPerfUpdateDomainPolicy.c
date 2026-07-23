/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x14071AE2C
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x14071ADD0 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x14086C540 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x140141C74 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140141FD4 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14016C924 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140174170 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmEventQosSupport @ 0x14071AFA0 (PpmEventQosSupport.c)
 */

void __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v2; // bp
  char v3; // r14
  char v4; // r15
  char v5; // di
  int v6; // esi
  unsigned int v7; // edx
  int *v8; // r8
  char v9; // r9
  __int64 v10; // r10
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  bool v14; // cl
  int v15; // eax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v5 = 1;
      v15 = 0;
    }
    else
    {
      v5 = 0;
      v15 = 128;
    }
    v17 = v15;
  }
  else
  {
    v17 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( (*(_BYTE *)(v1 + 492) & 0xF) == 0 )
        v4 = 1;
      if ( *(_BYTE *)(v1 + 504) )
      {
        v5 = 1;
      }
      else
      {
        v7 = 0;
        v8 = (int *)(v1 + 484);
        v9 = 1;
        v10 = 3LL;
        do
        {
          v11 = *v8;
          v12 = *v8++;
          v7 |= v11;
          v9 = (v12 & 2) != 0 ? v9 : 0;
          --v10;
        }
        while ( v10 );
        v13 = v7 & 0xFFFFFFFD;
        if ( v9 )
          v13 = v7;
        v6 |= v13;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v2 = a1;
    if ( v5 )
      v6 = 0;
    v17 = v6;
  }
  v14 = PpmPerfUpdateQosDisableReasons(&v17) != 0;
  if ( v5 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v5;
    v2 = 1;
    v14 = 1;
  }
  PpmPerfMultimediaQosSupported = v4;
  if ( v14 )
    PpmEventQosSupport(0LL);
  if ( v3 || v2 )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckCustomRun((v2 != 0) + 1);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
