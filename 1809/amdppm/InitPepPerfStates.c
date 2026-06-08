/*
 * XREFs of InitPepPerfStates @ 0x1C002BD0C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002ABB0 (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C002C384 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C002C480 (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // r14
  _DWORD *v3; // r12
  unsigned __int16 v4; // r9
  int v5; // ebx
  unsigned int v6; // edi
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  unsigned int *v18; // r13
  unsigned int *v19; // rdi
  unsigned __int16 v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned __int8 v25; // dl
  SIZE_T v26; // rbx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  char v30; // bl
  char v31; // r11
  char v32; // r13
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned int v35; // edx
  char v36; // dl
  unsigned int v37; // eax
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // r9
  _DWORD *v40; // rax
  __int64 v42; // [rsp+28h] [rbp-60h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  _QWORD v44[9]; // [rsp+40h] [rbp-48h] BYREF
  char v45; // [rsp+90h] [rbp+8h]
  int v46; // [rsp+A0h] [rbp+18h] BYREF
  int v47; // [rsp+A8h] [rbp+20h] BYREF

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
    goto LABEL_87;
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
    goto LABEL_87;
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
    goto LABEL_12;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  do
  {
    if ( !v9[1] )
    {
      v20 = 14;
LABEL_83:
      LODWORD(v42) = v13;
LABEL_84:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v20,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v42);
      goto LABEL_85;
    }
    v16 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      v39 = 15;
LABEL_80:
      LODWORD(v43) = (*v9 >> 1) & 3;
      LODWORD(v42) = v13;
LABEL_81:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v39,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v42,
        v43);
      goto LABEL_85;
    }
    v17 = *v9 & 0x78;
    if ( v17 > 8 )
    {
      v39 = 16;
      goto LABEL_80;
    }
    if ( (v16 & 0x80u) != 0 && (v16 & 1) == 0 )
    {
      v20 = 17;
      goto LABEL_83;
    }
    if ( v16 >= 0x100 )
    {
      v20 = 18;
      goto LABEL_83;
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
    goto LABEL_87;
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
                       (__int64)&v46,
                       (__int64)&v47);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    v11 = 20;
LABEL_12:
    LODWORD(v42) = FeedbackCounters;
LABEL_13:
    v12 = 3;
    goto LABEL_14;
  }
  v21 = *v2;
  v22 = *v18;
  if ( *v2 < *v18 || (v23 = v2[2], v22 < v23) || (v24 = *v19, v23 < *v19) || !v24 )
  {
    v38 = 21;
    goto LABEL_74;
  }
  v25 = *(_BYTE *)(a1 + 1104);
  if ( !v25 )
    goto LABEL_69;
  v26 = 24LL * v25;
  v27 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x72637250u);
  v3 = v27;
  if ( !v27 )
    goto LABEL_8;
  memset(v27, 0, v26);
  v28 = *(_QWORD *)(a1 + 1088);
  v44[1] = v3;
  v44[0] = 0LL;
  LODWORD(v44[0]) = *(unsigned __int8 *)(a1 + 1104);
  v29 = PoFxProcessorNotification(v28, 41LL, v44);
  v5 = v29;
  if ( v29 < 0 )
  {
    LODWORD(v42) = v29;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x22u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v42);
  }
  if ( v5 < 0 )
  {
    v11 = 22;
    LODWORD(v42) = v5;
    goto LABEL_13;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v45 = 0;
  v33 = 0LL;
  if ( !*(_BYTE *)(a1 + 1104) )
  {
LABEL_73:
    v38 = 26;
LABEL_74:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v38,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
LABEL_85:
    v5 = -1073741811;
    goto LABEL_87;
  }
  v22 = v2[1];
  while ( 2 )
  {
    v3[6 * v33 + 2] = 100 * v3[6 * v33] / v22;
    v34 = v2[3];
    v35 = v3[6 * v33];
    if ( v35 < v34 || v35 > *v2 )
    {
      v20 = 23;
      goto LABEL_72;
    }
    if ( (_DWORD)v33 && v35 >= v3[6 * (unsigned int)(v33 - 1)] )
    {
      v39 = 24;
      LODWORD(v43) = v33 - 1;
      LODWORD(v42) = v33;
      goto LABEL_81;
    }
    v22 = v2[1];
    v23 = v2[2];
    if ( v35 == *v2 )
      v31 = 1;
    if ( v35 == v34 )
      v30 = 1;
    if ( v35 == v23 )
      v32 = 1;
    if ( v35 == v22 )
    {
      v36 = 1;
      v45 = 1;
      if ( v3[6 * v33 + 1] != v2[4] )
      {
        v20 = 25;
LABEL_72:
        LODWORD(v42) = v33;
        goto LABEL_84;
      }
    }
    else
    {
      v36 = v45;
    }
    v37 = *(unsigned __int8 *)(a1 + 1104);
    v33 = (unsigned int)(v33 + 1);
    if ( (unsigned int)v33 < v37 )
      continue;
    break;
  }
  if ( !v31 )
    goto LABEL_73;
  if ( !v30 )
  {
    v38 = 27;
    goto LABEL_74;
  }
  if ( !v32 )
  {
    v38 = 28;
    goto LABEL_74;
  }
  if ( !v36 )
  {
    v38 = 29;
    goto LABEL_74;
  }
  v24 = v2[3];
  *((_BYTE *)v2 + 32) = v37;
  v21 = *v2;
  *((_QWORD *)v2 + 5) = v3;
LABEL_69:
  v2[5] = 100 * v21 / v22;
  v2[6] = 100 * v23 / v22;
  v2[7] = 100 * v24 / v22;
  v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
  if ( v40 )
  {
    *v40 = 1;
    v40[2] = 0;
    v40[1] = 5;
    v40[3] = v46;
    v40[5] = v47;
    v40[4] = 1;
    *(_QWORD *)(a1 + 1176) = v40;
    *(_QWORD *)(a1 + 1160) = v2;
    v3 = 0LL;
    v2 = 0LL;
    v5 = 0;
    ProcLibTracePepPerfCapabilities(a1, 0);
  }
  else
  {
    v5 = -1073741670;
    v11 = 30;
    LODWORD(v42) = -1073741670;
    v12 = 2;
LABEL_14:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      3u,
      v11,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v42);
  }
LABEL_87:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
