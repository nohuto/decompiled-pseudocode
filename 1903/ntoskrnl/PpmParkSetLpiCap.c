/*
 * XREFs of PpmParkSetLpiCap @ 0x1402F8BB4
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 *     PpmParkApplyPolicy @ 0x140194168 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, int a2, unsigned int *a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  _BYTE *v10; // rdx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  _BYTE *v14; // r8
  char v15; // al

  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v7 = (unsigned __int8)PpmParkGranularity
     + a1
     - 1
     - ((unsigned int)(unsigned __int8)PpmParkGranularity + a1 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v7 )
  {
    v8 = 0;
    if ( PpmParkNumNodes )
    {
      v9 = (unsigned int)PpmParkNumNodes;
      v10 = (_BYTE *)(PpmParkNodes + 6);
      do
      {
        if ( *v10 > (unsigned __int8)PpmParkGranularity )
          v8 += (unsigned __int8)*v10 - (unsigned __int8)PpmParkGranularity;
        v10 += 272;
        --v9;
      }
      while ( v9 );
    }
    if ( v7 > v8 )
      v7 = v8;
  }
  v11 = (unsigned __int8)PpmParkGranularity
      + a2
      - 1
      - ((unsigned int)(unsigned __int8)PpmParkGranularity + a2 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v11 )
  {
    v12 = 0;
    if ( PpmParkNumNodes )
    {
      v13 = (unsigned int)PpmParkNumNodes;
      v14 = (_BYTE *)(PpmParkNodes + 6);
      do
      {
        if ( *v14 > (unsigned __int8)PpmParkGranularity )
          v12 += (unsigned __int8)*v14 - (unsigned __int8)PpmParkGranularity;
        v14 += 272;
        --v13;
      }
      while ( v13 );
    }
    if ( v11 > v12 )
      v11 = v12;
  }
  v15 = 0;
  if ( v7 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v7;
    v15 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( v11 != PpmParkThermalCap )
  {
    PpmParkThermalCap = v11;
    v15 = 1;
  }
  if ( v15 )
  {
    PpmParkApplyPolicy();
    PpmCheckReInit();
    PpmCheckCustomRun(4);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  *a3 = v7;
  return 0LL;
}
