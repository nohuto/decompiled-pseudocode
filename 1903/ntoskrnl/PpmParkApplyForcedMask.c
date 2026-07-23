/*
 * XREFs of PpmParkApplyForcedMask @ 0x1408A91F8
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x140194168 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x140194510 (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x140773AA0 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1, __int64 *a2)
{
  unsigned __int16 v2; // bp
  __int64 v4; // r14
  unsigned int v6; // ebx
  unsigned int v8; // r9d
  char v9; // cl
  unsigned __int16 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 4);
  v4 = *a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v2 > 0x14u )
    goto LABEL_10;
  v6 = 0;
  if ( *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_10;
  if ( !a2 )
  {
    v14 = 0LL;
    a2 = &v14;
    goto LABEL_14;
  }
  if ( !*a2 || PoSoftParkingAllowed )
  {
    if ( (~v4 & *a2) != 0 )
    {
LABEL_10:
      v6 = -1073741811;
      goto LABEL_11;
    }
LABEL_14:
    v8 = PpmParkNumNodes;
    v9 = 0;
    v10 = 0;
    if ( PpmParkNumNodes )
    {
      do
      {
        v11 = PpmParkNodes + 272LL * v10;
        if ( *(_WORD *)(v11 + 4) == v2 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          *(_QWORD *)(v11 + 32) = v4 & v12;
          v13 = *a2 & v12;
          *(_BYTE *)(v11 + 146) |= 1u;
          *(_QWORD *)(v11 + 48) = v13;
          v9 = 1;
        }
        ++v10;
      }
      while ( v10 < v8 );
      if ( v9 )
      {
        PpmParkApplyPolicy();
        PpmParkParkingAvailable();
        PpmCheckApplyParkConstraints();
        return v6;
      }
    }
    goto LABEL_10;
  }
  v6 = -1073741637;
LABEL_11:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v6;
}
