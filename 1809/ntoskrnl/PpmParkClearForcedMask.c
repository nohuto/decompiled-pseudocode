/*
 * XREFs of PpmParkClearForcedMask @ 0x14087D868
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A338 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x14075050C (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1)
{
  unsigned int v2; // ebx
  unsigned int v4; // r9d
  char v5; // r8
  unsigned __int16 i; // cx
  __int64 v7; // rdx
  char v8; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( *a1 < 0x14u )
  {
    v4 = PpmParkNumNodes;
    v2 = 0;
    v5 = 0;
    for ( i = 0; i < v4; ++i )
    {
      v7 = PpmParkNodes + 264LL * i;
      if ( *(_WORD *)(v7 + 4) == *a1 )
      {
        v8 = *(_BYTE *)(v7 + 138);
        if ( (v8 & 1) != 0 )
        {
          v5 = 1;
          *(_BYTE *)(v7 + 138) = v8 & 0xFE;
        }
      }
    }
    if ( v5 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v2;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v2;
}
