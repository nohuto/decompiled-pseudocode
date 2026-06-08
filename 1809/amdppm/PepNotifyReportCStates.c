/*
 * XREFs of PepNotifyReportCStates @ 0x1C002D5FC
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0026C00 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x1C002C6F8 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     PepTranslateCstState @ 0x1C002D788 (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // edx
  char v4; // r14
  unsigned int v5; // eax
  SIZE_T v6; // rdi
  char *PoolWithTag; // rax
  char *v8; // rbx
  unsigned int v9; // ebx
  unsigned int *v10; // rdx
  unsigned int i; // r10d
  int v12; // r10d
  PVOID v13; // rdi
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 496);
  v3 = *(_DWORD *)v1;
  v4 = *(_BYTE *)(v1 + 16);
  v5 = *(_DWORD *)v1 + 1;
  if ( v4 == 1 )
    v5 = v3;
  v16 = v5;
  P = 0LL;
  v6 = 24LL * v5;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    P = v8;
    if ( v4 != 1 )
    {
      v19 = 0;
      v18[1] = 0x100000000LL;
      v18[0] = 127LL;
      PepTranslateCstState(v18, v8);
      v8 += 24;
    }
    v10 = *(unsigned int **)(a1 + 496);
    for ( i = 0; i < *v10; i = v12 + 1 )
    {
      PepTranslateCstState(&v10[4 * i + 1 + i], v8);
      v10 = *(unsigned int **)(a1 + 496);
      v8 += 24;
    }
    v13 = P;
    v14 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 15LL, &v16);
    v9 = v14;
    if ( v14 < 0 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x23u,
        (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
        v14,
        v16);
      v9 = 0;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
