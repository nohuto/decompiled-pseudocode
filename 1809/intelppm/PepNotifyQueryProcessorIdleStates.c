/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C0033D84
 * Callers:
 *     InitPepIdleStates @ 0x1C003330C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009500 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  char v10; // dl
  unsigned int v11; // eax
  unsigned __int16 v12; // r9

  v2 = *(_DWORD *)(a1 + 1100);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 + 8, 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 4 * v2 + 8);
  *v6 = v2;
  v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 2LL, v6);
  v7 = v8;
  if ( v8 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x1Bu,
      (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
      v8);
    goto LABEL_28;
  }
  v7 = -1073741811;
  if ( v6[1] > 0x500 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x1Cu,
      (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids);
    goto LABEL_28;
  }
  v9 = 0LL;
  v10 = 0;
  if ( !v2 )
  {
LABEL_27:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x22u,
      (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids);
    v7 = -1073741637;
    goto LABEL_28;
  }
  do
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x100000000LL) == 0 && (v6[v9 + 2] & 0x78) == 0 )
    {
      v12 = 29;
LABEL_22:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v12,
        (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
        v9);
      goto LABEL_28;
    }
    if ( (*(_QWORD *)(a1 + 264) & 0x100LL) == 0 && (v6[v9 + 2] & 0x78) != 0 )
    {
      v12 = 30;
      goto LABEL_22;
    }
    v11 = v6[v9 + 2];
    if ( (v11 & 0x78) == 0 )
      goto LABEL_16;
    if ( (v11 & 1) == 0 )
    {
      v12 = 31;
      goto LABEL_22;
    }
    if ( (v11 & 2) == 0 )
    {
      v12 = 32;
      goto LABEL_22;
    }
    if ( (v11 & 4) == 0 )
    {
      v12 = 33;
      goto LABEL_22;
    }
LABEL_16:
    if ( (v11 & 1) != 0 )
      v10 = 1;
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v2 );
  if ( !v10 )
    goto LABEL_27;
  *a2 = v6;
  v6 = 0LL;
  v7 = 0;
LABEL_28:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return v7;
}
