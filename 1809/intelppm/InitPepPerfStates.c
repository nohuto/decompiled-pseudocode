/*
 * XREFs of InitPepPerfStates @ 0x1C0034B10
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009500 (WPP_RECORDER_SF_d.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0029084 (ProcLibTracePepPerfCapabilities.c)
 *     InitPepProcessorDomain @ 0x1C002F918 (InitPepProcessorDomain.c)
 *     PepNotifyQueryDiscretePerfStates @ 0x1C00350E4 (PepNotifyQueryDiscretePerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003515C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0035258 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // rsi
  _DWORD *v3; // r15
  unsigned __int16 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // r10d
  unsigned int v17; // r9d
  unsigned int *v18; // r13
  unsigned int *v19; // r12
  unsigned int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r8d
  unsigned __int8 v24; // dl
  SIZE_T v25; // rbx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  char v28; // cl
  char v29; // bl
  char v30; // r12
  char v31; // r13
  __int64 v32; // r8
  unsigned int v33; // edx
  unsigned int v34; // r10d
  bool v35; // zf
  unsigned int v36; // eax
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // r9
  unsigned int v40; // eax
  int v41; // r8d
  int v42; // edx
  __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]
  char v46; // [rsp+80h] [rbp+8h]
  int v47; // [rsp+88h] [rbp+10h] BYREF
  int v48; // [rsp+90h] [rbp+18h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)(a1 + 1105) )
  {
    v4 = 10;
LABEL_3:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v4,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    v5 = -1073741823;
    goto LABEL_83;
  }
  v6 = *(_DWORD *)(a1 + 1096);
  if ( !v6 )
  {
    v4 = 11;
    goto LABEL_3;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1152) = WorkItem;
  if ( !WorkItem )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xCu,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
LABEL_8:
    v5 = -1073741670;
    goto LABEL_83;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 56, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_8;
  memset(PoolWithTag, 0, 8 * v6 + 56);
  v9 = v2 + 14;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v6, v2 + 14);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 13;
LABEL_12:
    v12 = 3;
LABEL_13:
    LODWORD(v44) = FeedbackCounters;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3u,
      v11,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v44);
    goto LABEL_83;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  do
  {
    if ( !v9[1] )
    {
      v39 = 14;
LABEL_79:
      LODWORD(v44) = v13;
LABEL_80:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v39,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v44);
      goto LABEL_81;
    }
    v16 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      v38 = 15;
LABEL_76:
      LODWORD(v45) = (*v9 >> 1) & 3;
      LODWORD(v44) = v13;
LABEL_77:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v38,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v44,
        v45);
      goto LABEL_81;
    }
    v17 = *v9 & 0x78;
    if ( v17 > 8 )
    {
      v38 = 16;
      goto LABEL_76;
    }
    if ( (v16 & 0x81) == 0x80 )
    {
      v39 = 17;
      goto LABEL_79;
    }
    if ( v16 >= 0x100 )
    {
      v39 = 18;
      goto LABEL_79;
    }
    if ( (v16 & 0x78) == 0 && v15 == -1 )
      v15 = v13;
    if ( v17 == 8 && v14 == -1 )
      v14 = v13;
    ++v13;
    v9 += 2;
  }
  while ( v13 < v6 );
  if ( v15 == -1 )
  {
    v5 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_83;
  }
  v18 = v2 + 1;
  v19 = v2 + 3;
  v2[4] = v2[2 * v15 + 15];
  v2[12] = v15;
  v2[13] = v14;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v48,
                       (__int64)&v47);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 20;
    goto LABEL_12;
  }
  v20 = *v2;
  v21 = *v18;
  if ( *v2 < *v18 || (v22 = v2[2], v21 < v22) || (v23 = *v19, v22 < *v19) || !v23 )
  {
    v37 = 21;
    goto LABEL_69;
  }
  v24 = *(_BYTE *)(a1 + 1104);
  if ( !v24 )
    goto LABEL_64;
  v25 = 24LL * v24;
  v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x72637250u);
  v3 = v26;
  if ( !v26 )
    goto LABEL_8;
  memset(v26, 0, v25);
  LOBYTE(v27) = *(_BYTE *)(a1 + 1104);
  FeedbackCounters = PepNotifyQueryDiscretePerfStates(a1, v27, v3);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 22;
    goto LABEL_12;
  }
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v46 = 0;
  v31 = 0;
  v32 = 0LL;
  if ( !*(_BYTE *)(a1 + 1104) )
  {
LABEL_68:
    v37 = 26;
LABEL_69:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v37,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
LABEL_81:
    v5 = -1073741811;
    goto LABEL_83;
  }
  v21 = v2[1];
  do
  {
    v3[6 * v32 + 2] = 100 * v3[6 * v32] / v21;
    v33 = v3[6 * v32];
    v34 = v2[3];
    if ( v33 < v34 || v33 > *v2 )
    {
      v39 = 23;
      goto LABEL_67;
    }
    if ( (_DWORD)v32 )
    {
      if ( v33 >= v3[6 * (unsigned int)(v32 - 1)] )
      {
        v38 = 24;
        LODWORD(v45) = v32 - 1;
        LODWORD(v44) = v32;
        goto LABEL_77;
      }
      v28 = v46;
    }
    v21 = v2[1];
    if ( v33 == *v2 )
      v29 = 1;
    v35 = v33 == v34;
    v22 = v2[2];
    if ( v35 )
      v30 = 1;
    if ( v33 == v22 )
      v31 = 1;
    if ( v33 == v21 )
    {
      v28 = 1;
      v46 = 1;
      if ( v3[6 * v32 + 1] != v2[4] )
      {
        v39 = 25;
LABEL_67:
        LODWORD(v44) = v32;
        goto LABEL_80;
      }
    }
    v36 = *(unsigned __int8 *)(a1 + 1104);
    v32 = (unsigned int)(v32 + 1);
  }
  while ( (unsigned int)v32 < v36 );
  if ( !v29 )
    goto LABEL_68;
  if ( !v30 )
  {
    v37 = 27;
    goto LABEL_69;
  }
  if ( !v31 )
  {
    v37 = 28;
    goto LABEL_69;
  }
  if ( !v28 )
  {
    v37 = 29;
    goto LABEL_69;
  }
  v23 = v2[3];
  *((_BYTE *)v2 + 32) = v36;
  v20 = *v2;
  *((_QWORD *)v2 + 5) = v3;
LABEL_64:
  v2[5] = 100 * v20 / v21;
  v2[6] = 100 * v22 / v21;
  v40 = 100 * v23;
  v41 = v47;
  v42 = v48;
  v2[7] = v40 / v21;
  FeedbackCounters = InitPepProcessorDomain(a1, v42, v41);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 30;
    v12 = 2;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1160) = v2;
  v3 = 0LL;
  v2 = 0LL;
  v5 = 0;
  ProcLibTracePepPerfCapabilities(a1, 0);
LABEL_83:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return v5;
}
