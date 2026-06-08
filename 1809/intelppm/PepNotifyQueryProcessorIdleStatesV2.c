/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033FAC
 * Callers:
 *     InitPepIdleStates @ 0x1C003330C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009500 (WPP_RECORDER_SF_d.c)
 *     PepQueryName @ 0x1C00344BC (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edi
  char v9; // dl
  int *v10; // rbp
  __int64 v11; // rcx
  int v12; // ecx
  unsigned __int16 v13; // r9
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int16 v17; // r9
  char *v18; // rax
  char *v19; // rbx
  unsigned int v20; // edi
  char *v21; // rsi
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+80h] [rbp+8h]

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
    goto LABEL_49;
  }
  v8 = 0;
  v9 = 0;
  v6 = -1073741811;
  if ( !v2 )
    goto LABEL_48;
  v10 = (int *)(v5 + 1);
  do
  {
    v11 = *(_QWORD *)(a1 + 264);
    if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
    {
      v13 = 14;
      goto LABEL_36;
    }
    if ( (v11 & 0x200) == 0 && (*v10 & 0x78) != 0 )
    {
      v13 = 15;
      goto LABEL_36;
    }
    v12 = *v10;
    if ( (*v10 & 0x78) != 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
        {
          if ( (v12 & 4) != 0 )
          {
            if ( (v12 & 0x80u) == 0 )
            {
              v13 = 19;
              goto LABEL_36;
            }
            goto LABEL_18;
          }
          v13 = 18;
        }
        else
        {
          v13 = 17;
        }
      }
      else
      {
        v13 = 16;
      }
LABEL_36:
      LODWORD(v23) = v8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v13,
        (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
        v23);
      goto LABEL_49;
    }
    if ( v10[1] == -1 )
    {
      v13 = 20;
      goto LABEL_36;
    }
LABEL_18:
    if ( (v12 & 0x81) == 0x80 )
    {
      v6 = -1073741637;
      v13 = 21;
      goto LABEL_36;
    }
    if ( (v12 & 1) != 0 )
      v9 = 1;
    v25 = v9;
    if ( v8 )
    {
      v14 = v10[1];
      v15 = v5[3 * v8 - 1];
      if ( v14 == -1 )
      {
        if ( v15 != -1 )
        {
          v16 = v8 - 1;
          v17 = 22;
LABEL_25:
          LODWORD(v24) = v16;
          LODWORD(v23) = v8;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v17,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v23,
            v24);
          goto LABEL_49;
        }
      }
      else
      {
        if ( v14 < v15 )
        {
          v16 = v8 - 1;
          v17 = 23;
          goto LABEL_25;
        }
        if ( v15 == -1 )
        {
          LODWORD(v24) = v8 - 1;
          LODWORD(v23) = v8;
          WPP_RECORDER_SF_dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x18u,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v23,
            v24);
        }
      }
      if ( v10[2] < v5[3 * v8] )
      {
        v6 = -1073741637;
        v16 = v8 - 1;
        v17 = 25;
        goto LABEL_25;
      }
      v9 = v25;
    }
    ++v8;
    v10 += 3;
  }
  while ( v8 < v2 );
  if ( v9 )
  {
    v18 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 16 * v2);
      v20 = 0;
      v21 = v19;
      do
      {
        PepQueryName(a1, v20++, 28LL, v21);
        v21 += 16;
      }
      while ( v20 < v2 );
      *(_QWORD *)(a1 + 1128) = v19;
      *a2 = v5;
      v5 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    goto LABEL_49;
  }
LABEL_48:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    0x1Au,
    (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids);
  v6 = -1073741637;
LABEL_49:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  return v6;
}
