/*
 * XREFs of PspSetJobRateControl @ 0x1408C7D20
 * Callers:
 *     PspSetNetRateControl @ 0x1408C7F2C (PspSetNetRateControl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x1406BD29C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1406BD2E8 (PspAllocateRateControl.c)
 *     PspModifyAncestorBits @ 0x1408C75EC (PspModifyAncestorBits.c)
 *     PspRemoveRateControl @ 0x1408C7898 (PspRemoveRateControl.c)
 */

__int64 __fastcall PspSetJobRateControl(volatile signed __int32 *Object, __int64 a2, char a3)
{
  int v5; // esi
  char **v6; // rbp
  int v7; // eax
  int v8; // r14d
  char **RateControl; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v13[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, 0x28uLL);
  v5 = 0;
  v6 = 0LL;
  v7 = Object[326] & 0x4000000;
  v8 = Object[326] & 0x2000000;
  if ( (a3 & 1) != 0 )
  {
    if ( !v7 )
    {
      if ( v8 )
      {
        v5 = -1073741637;
        goto LABEL_15;
      }
      RateControl = (char **)PspAllocateRateControl(0LL);
      v6 = RateControl;
      if ( !RateControl )
      {
        v5 = -1073741801;
        goto LABEL_15;
      }
      *((_QWORD *)Object + 162) = RateControl;
      _InterlockedOr(Object + 326, 0x4000000u);
      PspModifyAncestorBits((__int64)Object, 0x2000000u, 1);
    }
    LODWORD(v13[4]) = 0;
    v13[3] = (__int64)Object;
    BYTE4(v13[4]) = 1;
    v5 = PspEnumJobsAndProcessesInJobHierarchy(
           Object,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           (__int64)v13,
           5);
  }
  else
  {
    if ( !v7 )
    {
      v5 = -1073741811;
      goto LABEL_15;
    }
    PspRemoveRateControl(Object);
  }
  if ( v5 >= 0 )
    return (unsigned int)v5;
  if ( v6 )
    PspFreeRateControl(v6, 0);
LABEL_15:
  *((_QWORD *)Object + 162) = 0LL;
  _InterlockedAnd(Object + 326, 0xFBFFFFFF);
  if ( !v8 )
  {
    PspModifyAncestorBits((__int64)Object, 0x2000000u, 0);
    v13[0] &= v10;
    v13[1] &= v10;
    LODWORD(v13[4]) &= v10;
    *(_OWORD *)&v13[2] = 0LL;
    BYTE4(v13[4]) = v10;
    PspEnumJobsAndProcessesInJobHierarchy(
      v11,
      (int)PspSetRateControlJobPreCallback,
      v10,
      (int)PspSetRateControlProcessCallback,
      (__int64)v13,
      5);
  }
  return (unsigned int)v5;
}
