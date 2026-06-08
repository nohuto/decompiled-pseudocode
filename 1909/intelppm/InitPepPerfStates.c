/*
 * XREFs of InitPepPerfStates @ 0x1C00377A4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009A50 (WPP_RECORDER_SF_d.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002B044 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C0032134 (InitPepProcessorDomain.c)
 *     PepNotifyQueryDiscretePerfStates @ 0x1C0037F14 (PepNotifyQueryDiscretePerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0037F9C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C00380AC (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rsi
  _DWORD *v3; // r12
  unsigned __int16 v4; // r9
  int FeedbackCounters; // ebx
  unsigned int v6; // r15d
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  unsigned int v12; // ecx
  int v13; // r10d
  unsigned int v14; // r8d
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  unsigned int *v17; // r13
  unsigned int *v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned int v22; // r8d
  unsigned __int8 v23; // dl
  SIZE_T v24; // rbx
  _DWORD *v25; // rax
  __int64 v26; // rdx
  char v27; // cl
  char v28; // bl
  char v29; // r15
  char v30; // r13
  __int64 v31; // r8
  unsigned int v32; // edx
  unsigned int v33; // r10d
  bool v34; // zf
  unsigned int v35; // eax
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // r9
  unsigned int v39; // eax
  int v40; // r8d
  int v41; // edx
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  char v45; // [rsp+80h] [rbp+8h]
  int v46; // [rsp+88h] [rbp+10h] BYREF
  int v47; // [rsp+90h] [rbp+18h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)(a1 + 1121) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      FeedbackCounters = -1073741823;
      goto LABEL_105;
    }
    v4 = 10;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v4,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_5;
  }
  v6 = *(_DWORD *)(a1 + 1112);
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v4 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1168) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xCu,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_12;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 56, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    FeedbackCounters = -1073741670;
    goto LABEL_105;
  }
  memset(PoolWithTag, 0, 8 * v6 + 56);
  v9 = v2 + 14;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v6, v2 + 14);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 13;
      goto LABEL_17;
    }
    goto LABEL_105;
  }
  v12 = 0;
  v13 = -1;
  v14 = -1;
  do
  {
    if ( !v9[1] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v38 = 14;
      goto LABEL_100;
    }
    v15 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v37 = 15;
      goto LABEL_96;
    }
    v16 = *v9 & 0x78;
    if ( v16 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v37 = 16;
LABEL_96:
      LODWORD(v44) = (*v9 >> 1) & 3;
      LODWORD(v43) = v12;
LABEL_97:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v37,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v43,
        v44);
      goto LABEL_102;
    }
    if ( (v15 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v38 = 17;
      goto LABEL_100;
    }
    if ( v15 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v38 = 18;
LABEL_100:
      LODWORD(v43) = v12;
LABEL_101:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v38,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v43);
      goto LABEL_102;
    }
    if ( (v15 & 0x78) == 0 && v14 == -1 )
      v14 = v12;
    if ( v16 == 8 && v13 == -1 )
      v13 = v12;
    ++v12;
    v9 += 2;
  }
  while ( v12 < v6 );
  if ( v14 == -1 )
  {
    FeedbackCounters = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_105;
  }
  v17 = v2 + 1;
  v18 = v2 + 3;
  v2[4] = v2[2 * v14 + 15];
  v2[12] = v14;
  v2[13] = v13;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v47,
                       (__int64)&v46);
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_105;
    v10 = 20;
    goto LABEL_17;
  }
  v19 = *v2;
  v20 = *v17;
  if ( *v2 < *v17 || (v21 = v2[2], v20 < v21) || (v22 = *v18, v21 < *v18) || !v22 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_102;
    v36 = 21;
    goto LABEL_84;
  }
  v23 = *(_BYTE *)(a1 + 1120);
  if ( !v23 )
  {
LABEL_76:
    v2[5] = 100 * v19 / v20;
    v2[6] = 100 * v21 / v20;
    v39 = 100 * v22;
    v40 = v46;
    v41 = v47;
    v2[7] = v39 / v20;
    FeedbackCounters = InitPepProcessorDomain(a1, v41, v40);
    if ( FeedbackCounters >= 0 )
    {
      *(_QWORD *)(a1 + 1176) = v2;
      v3 = 0LL;
      v2 = 0LL;
      FeedbackCounters = 0;
      ProcLibTracePepPerfCapabilities(a1, 0);
      goto LABEL_105;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_105;
    v10 = 30;
    v11 = 2;
    goto LABEL_18;
  }
  v24 = 24LL * v23;
  v25 = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x72637250u);
  v3 = v25;
  if ( !v25 )
    goto LABEL_12;
  memset(v25, 0, v24);
  LOBYTE(v26) = *(_BYTE *)(a1 + 1120);
  FeedbackCounters = PepNotifyQueryDiscretePerfStates(a1, v26, v3);
  if ( FeedbackCounters >= 0 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v45 = 0;
    v30 = 0;
    v31 = 0LL;
    if ( *(_BYTE *)(a1 + 1120) )
    {
      v20 = v2[1];
      do
      {
        v3[6 * v31 + 2] = 100 * v3[6 * v31] / v20;
        v32 = v3[6 * v31];
        v33 = v2[3];
        if ( v32 < v33 || v32 > *v2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_102;
          v38 = 23;
          goto LABEL_81;
        }
        if ( (_DWORD)v31 )
        {
          if ( v32 >= v3[6 * (unsigned int)(v31 - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_102;
            v37 = 24;
            LODWORD(v44) = v31 - 1;
            LODWORD(v43) = v31;
            goto LABEL_97;
          }
          v27 = v45;
        }
        v20 = v2[1];
        if ( v32 == *v2 )
          v28 = 1;
        v34 = v32 == v33;
        v21 = v2[2];
        if ( v34 )
          v29 = 1;
        if ( v32 == v21 )
          v30 = 1;
        if ( v32 == v20 )
        {
          v27 = 1;
          v45 = 1;
          if ( v3[6 * v31 + 1] != v2[4] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_102;
            v38 = 25;
LABEL_81:
            LODWORD(v43) = v31;
            goto LABEL_101;
          }
        }
        v35 = *(unsigned __int8 *)(a1 + 1120);
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 < v35 );
      if ( !v28 )
        goto LABEL_82;
      if ( v29 )
      {
        if ( v30 )
        {
          if ( v27 )
          {
            v22 = v2[3];
            *((_BYTE *)v2 + 32) = v35;
            v19 = *v2;
            *((_QWORD *)v2 + 5) = v3;
            goto LABEL_76;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_102;
          v36 = 29;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_102;
          v36 = 28;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_102;
        v36 = 27;
      }
    }
    else
    {
LABEL_82:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_102:
        FeedbackCounters = -1073741811;
        goto LABEL_105;
      }
      v36 = 26;
    }
LABEL_84:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v36,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_102;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_105;
  v10 = 22;
LABEL_17:
  v11 = 3;
LABEL_18:
  LODWORD(v43) = FeedbackCounters;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    3u,
    v10,
    (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
    v43);
LABEL_105:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)FeedbackCounters;
}
