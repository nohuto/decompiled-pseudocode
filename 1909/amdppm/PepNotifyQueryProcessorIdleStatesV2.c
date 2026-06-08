/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00312B8
 * Callers:
 *     InitPepIdleStates @ 0x1C003093C (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     PepQueryName @ 0x1C0031150 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  char v9; // r8
  unsigned int *v10; // r12
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned __int16 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int16 v18; // r9
  PVOID v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // edi
  __int64 v22; // rsi
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1116);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v2 + 4, 0x72637250u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 12 * v2 + 4);
    *v5 = v2;
    v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 18LL, v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
          v7);
      goto LABEL_65;
    }
    v8 = 0;
    v9 = 0;
    v6 = -1073741811;
    if ( !v2 )
      goto LABEL_62;
    v10 = v5 + 1;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 264);
      if ( (v11 & 0x200000000LL) == 0 && (*v10 & 0x78) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 14;
          goto LABEL_42;
        }
        goto LABEL_65;
      }
      if ( (v11 & 0x200) == 0 && (*v10 & 0x78) != 0 )
        break;
      v12 = *v10;
      if ( (*v10 & 0x78) != 0 )
      {
        v13 = *v10 & 1;
        if ( (v12 & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 16;
          goto LABEL_42;
        }
        if ( (v12 & 2) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 17;
          goto LABEL_42;
        }
        if ( (v12 & 4) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 18;
          goto LABEL_42;
        }
        LOBYTE(v14) = v12 >> 7;
        if ( (v12 & 0x80) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 19;
LABEL_42:
          LODWORD(v24) = v8;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v15,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v24);
          goto LABEL_65;
        }
      }
      else
      {
        if ( v10[1] == -1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v15 = 20;
          goto LABEL_42;
        }
        v14 = v12 >> 7;
        v13 = *v10 & 1;
      }
      if ( (v14 & 1) != 0 && !v13 )
      {
        v6 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_65;
        v15 = 21;
        goto LABEL_42;
      }
      if ( v13 )
        v9 = 1;
      v26 = v9;
      if ( v8 )
      {
        v16 = v10[1];
        v17 = v5[3 * v8 - 1];
        if ( v16 == -1 )
        {
          if ( v17 != -1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_65;
            v18 = 22;
            goto LABEL_30;
          }
        }
        else
        {
          if ( v16 < v17 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_65;
            v18 = 23;
            goto LABEL_30;
          }
          if ( v17 == -1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = v8 - 1;
            LODWORD(v24) = v8;
            WPP_RECORDER_SF_DD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x18u,
              (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
              v24,
              v25);
            v9 = v26;
          }
        }
        if ( v10[2] < v5[3 * v8] )
        {
          v6 = -1073741637;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_65;
          v18 = 25;
LABEL_30:
          LODWORD(v25) = v8 - 1;
          LODWORD(v24) = v8;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v18,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids,
            v24,
            v25);
          goto LABEL_65;
        }
      }
      ++v8;
      v10 += 3;
      if ( v8 >= v2 )
      {
        if ( v9 )
        {
          v19 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
          v20 = (__int64)v19;
          if ( v19 )
          {
            memset(v19, 0, 16 * v2);
            v21 = 0;
            v22 = v20;
            do
            {
              PepQueryName(a1, v21++, 0x1Cu, v22);
              v22 += 16LL;
            }
            while ( v21 < v2 );
            *(_QWORD *)(a1 + 1144) = v20;
            *a2 = v5;
            v5 = 0LL;
            v6 = 0;
          }
          else
          {
            v6 = -1073741670;
          }
          goto LABEL_65;
        }
LABEL_62:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Au,
            (__int64)&WPP_079bbb48f67639f170f28876308ce3ee_Traceguids);
        v6 = -1073741637;
        goto LABEL_65;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 15;
      goto LABEL_42;
    }
LABEL_65:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
