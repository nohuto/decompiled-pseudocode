/*
 * XREFs of PpmParkApplyForcedMask @ 0x14087D794
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A338 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x14075050C (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rbp
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  char v6; // r8
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = *((_WORD *)a1 + 4);
  v3 = *a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v1 > 0x14u )
    goto LABEL_11;
  v4 = 0;
  if ( *((_WORD *)a1 + 5) )
    goto LABEL_11;
  if ( *((_WORD *)a1 + 6) )
    goto LABEL_11;
  if ( *((_WORD *)a1 + 7) )
    goto LABEL_11;
  v5 = PpmParkNumNodes;
  v6 = 0;
  v7 = 0;
  if ( !PpmParkNumNodes )
    goto LABEL_11;
  do
  {
    v8 = PpmParkNodes + 264LL * v7;
    if ( *(_WORD *)(v8 + 4) == v1 )
    {
      v6 = 1;
      v9 = v3 & *(_QWORD *)(v8 + 8);
      *(_BYTE *)(v8 + 138) |= 1u;
      *(_QWORD *)(v8 + 32) = v9;
    }
    ++v7;
  }
  while ( v7 < v5 );
  if ( !v6 )
  {
LABEL_11:
    PpmReleaseLock(&PpmPerfPolicyLock);
    return (unsigned int)-1073741811;
  }
  else
  {
    PpmParkApplyPolicy();
    PpmParkParkingAvailable();
    PpmCheckApplyParkConstraints();
  }
  return v4;
}
