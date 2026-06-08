/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C002D030
 * Callers:
 *     InitPepIdleStates @ 0x1C002C6F8 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     PepQueryName @ 0x1C002CEC8 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edi
  char v9; // r8
  unsigned int *v10; // rbp
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned __int16 v19; // r9
  PVOID v20; // rax
  __int64 v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rsi
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1100);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v2 + 4, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 12 * v2 + 4);
  *v5 = v2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 18LL, v5);
  v6 = v7;
  if ( v7 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xDu,
      (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
      v7);
    goto LABEL_50;
  }
  v8 = 0;
  v9 = 0;
  v6 = -1073741811;
  if ( !v2 )
    goto LABEL_49;
  v10 = v5 + 1;
  do
  {
    v11 = *(_QWORD *)(a1 + 264);
    if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
    {
      v15 = 14;
      goto LABEL_37;
    }
    if ( (v11 & 0x200) == 0 && (*v10 & 0x78) != 0 )
    {
      v15 = 15;
      goto LABEL_37;
    }
    v12 = *v10;
    if ( (*v10 & 0x78) != 0 )
    {
      v13 = *v10 & 1;
      if ( (v12 & 1) == 0 )
      {
        v15 = 16;
        goto LABEL_37;
      }
      if ( (v12 & 2) == 0 )
      {
        v15 = 17;
        goto LABEL_37;
      }
      if ( (v12 & 4) == 0 )
      {
        v15 = 18;
        goto LABEL_37;
      }
      LOBYTE(v14) = v12 >> 7;
      if ( (v12 & 0x80) == 0 )
      {
        v15 = 19;
        goto LABEL_37;
      }
    }
    else
    {
      if ( v10[1] == -1 )
      {
        v15 = 20;
LABEL_37:
        LODWORD(v25) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v15,
          (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
          v25);
        goto LABEL_50;
      }
      v14 = v12 >> 7;
      v13 = *v10 & 1;
    }
    if ( (v14 & 1) != 0 && !v13 )
    {
      v6 = -1073741637;
      v15 = 21;
      goto LABEL_37;
    }
    if ( v13 )
      v9 = 1;
    v27 = v9;
    if ( v8 )
    {
      v16 = v10[1];
      v17 = v5[3 * v8 - 1];
      if ( v16 == -1 )
      {
        if ( v17 != -1 )
        {
          v18 = v8 - 1;
          v19 = 22;
LABEL_27:
          LODWORD(v26) = v18;
          LODWORD(v25) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v19,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v25,
            v26);
          goto LABEL_50;
        }
      }
      else
      {
        if ( v16 < v17 )
        {
          v18 = v8 - 1;
          v19 = 23;
          goto LABEL_27;
        }
        if ( v17 == -1 )
        {
          LODWORD(v26) = v8 - 1;
          LODWORD(v25) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x18u,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v25,
            v26);
          v9 = v27;
        }
      }
      if ( v10[2] < v5[3 * v8] )
      {
        v6 = -1073741637;
        v18 = v8 - 1;
        v19 = 25;
        goto LABEL_27;
      }
    }
    ++v8;
    v10 += 3;
  }
  while ( v8 < v2 );
  if ( v9 )
  {
    v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
    v21 = (__int64)v20;
    if ( v20 )
    {
      memset(v20, 0, 16 * v2);
      v22 = 0;
      v23 = v21;
      do
      {
        PepQueryName(a1, v22++, 0x1Cu, v23);
        v23 += 16LL;
      }
      while ( v22 < v2 );
      *(_QWORD *)(a1 + 1128) = v21;
      *a2 = v5;
      v5 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    goto LABEL_50;
  }
LABEL_49:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    0x1Au,
    (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids);
  v6 = -1073741637;
LABEL_50:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return v6;
}
