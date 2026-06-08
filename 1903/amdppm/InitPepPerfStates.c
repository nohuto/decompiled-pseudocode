/*
 * XREFs of InitPepPerfStates @ 0x1C0032C74
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001EBEC (ProcLibTracePepPerfCapabilities.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003345C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003356C (PepNotifyQueryPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  unsigned int *v2; // r14
  _DWORD *v3; // r13
  unsigned __int16 v4; // r9
  int v5; // ebx
  unsigned int v6; // edi
  PIO_WORKITEM WorkItem; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // rsi
  int FeedbackCounters; // eax
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  unsigned int *v18; // rdi
  unsigned __int16 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  unsigned __int8 v24; // dl
  SIZE_T v25; // rbx
  _DWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  char v30; // r11
  __int64 v31; // r8
  char v32; // bl
  unsigned int v33; // eax
  unsigned int v34; // edx
  bool v35; // zf
  char v36; // al
  unsigned int v37; // eax
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // r9
  _DWORD *v40; // rax
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h]
  int v44; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v45[2]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD *v46; // [rsp+50h] [rbp-48h]
  char v47; // [rsp+A0h] [rbp+8h]
  char v48; // [rsp+A8h] [rbp+10h]
  int v49; // [rsp+B8h] [rbp+20h] BYREF

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
      v5 = -1073741823;
      goto LABEL_109;
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
    v5 = -1073741670;
    goto LABEL_109;
  }
  memset(PoolWithTag, 0, 8 * v6 + 56);
  v9 = v2 + 14;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v6, v2 + 14);
  v5 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
      goto LABEL_17;
    }
    goto LABEL_109;
  }
  v13 = 0;
  v14 = -1;
  v15 = -1;
  do
  {
    if ( !v9[1] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v19 = 14;
      goto LABEL_104;
    }
    v16 = *v9;
    if ( ((*v9 >> 1) & 3) > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v39 = 15;
      goto LABEL_100;
    }
    v17 = *v9 & 0x78;
    if ( v17 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v39 = 16;
LABEL_100:
      LODWORD(v43) = (*v9 >> 1) & 3;
      LODWORD(v42) = v13;
LABEL_101:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v39,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v42,
        v43);
      goto LABEL_106;
    }
    if ( (v16 & 0x80u) != 0 && (v16 & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v19 = 17;
LABEL_104:
      LODWORD(v42) = v13;
LABEL_105:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v19,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v42);
      goto LABEL_106;
    }
    if ( v16 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v19 = 18;
      goto LABEL_104;
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    goto LABEL_109;
  }
  v18 = v2 + 3;
  v2[4] = v2[2 * v15 + 15];
  v2[12] = v15;
  v2[13] = v14;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (_DWORD)v2,
                       (int)v2 + 4,
                       (int)v2 + 8,
                       (__int64)(v2 + 3),
                       (__int64)&v49,
                       (__int64)&v44);
  v5 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v20 = *v2;
    v21 = v2[1];
    if ( *v2 < v21 || (v22 = v2[2], v21 < v22) || (v23 = *v18, v22 < *v18) || !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_106;
      v38 = 21;
      goto LABEL_90;
    }
    v24 = *(_BYTE *)(a1 + 1120);
    if ( !v24 )
    {
LABEL_82:
      v2[5] = 100 * v20 / v21;
      v2[6] = 100 * v22 / v21;
      v2[7] = 100 * v23 / v21;
      v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
      if ( v40 )
      {
        *v40 = 1;
        v40[2] = 0;
        v40[1] = 5;
        v40[3] = v49;
        v40[5] = v44;
        v40[4] = 1;
        *(_QWORD *)(a1 + 1192) = v40;
        *(_QWORD *)(a1 + 1176) = v2;
        v3 = 0LL;
        v2 = 0LL;
        v5 = 0;
        ProcLibTracePepPerfCapabilities(a1, 0);
        goto LABEL_109;
      }
      v5 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v11 = 30;
      LODWORD(v42) = -1073741670;
      v12 = 2;
      goto LABEL_19;
    }
    v25 = 24LL * v24;
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x72637250u);
    v3 = v26;
    if ( !v26 )
      goto LABEL_12;
    memset(v26, 0, v25);
    v27 = *(unsigned __int8 *)(a1 + 1120);
    v28 = *(_QWORD *)(a1 + 1104);
    v45[1] = 0;
    v45[0] = v27;
    v46 = v3;
    v29 = PoFxProcessorNotification(v28, 41LL, v45);
    v5 = v29;
    if ( v29 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_109;
      v11 = 22;
      LODWORD(v42) = v5;
      goto LABEL_18;
    }
    v47 = 0;
    v30 = 0;
    v31 = 0LL;
    v48 = 0;
    v32 = 0;
    if ( *(_BYTE *)(a1 + 1120) )
    {
      v21 = v2[1];
      do
      {
        v3[6 * v31 + 2] = 100 * v3[6 * v31] / v21;
        v33 = v2[3];
        v34 = v3[6 * v31];
        if ( v34 < v33 || v34 > *v2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_106;
          v19 = 23;
          goto LABEL_87;
        }
        if ( (_DWORD)v31 && v34 >= v3[6 * (unsigned int)(v31 - 1)] )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_106;
          v39 = 24;
          LODWORD(v43) = v31 - 1;
          LODWORD(v42) = v31;
          goto LABEL_101;
        }
        v21 = v2[1];
        v22 = v2[2];
        if ( v34 == *v2 )
          v30 = 1;
        v35 = v34 == v33;
        v36 = v48;
        if ( v35 )
          v32 = 1;
        if ( v34 == v22 )
          v36 = 1;
        v48 = v36;
        if ( v34 == v21 )
        {
          v47 = 1;
          if ( v3[6 * v31 + 1] != v2[4] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_106;
            v19 = 25;
LABEL_87:
            LODWORD(v42) = v31;
            goto LABEL_105;
          }
        }
        v37 = *(unsigned __int8 *)(a1 + 1120);
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 < v37 );
      if ( !v30 )
        goto LABEL_88;
      if ( v32 )
      {
        if ( v48 )
        {
          if ( v47 )
          {
            v23 = v2[3];
            *((_BYTE *)v2 + 32) = v37;
            v20 = *v2;
            *((_QWORD *)v2 + 5) = v3;
            goto LABEL_82;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_106;
          v38 = 29;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_106;
          v38 = 28;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_106;
        v38 = 27;
      }
      goto LABEL_90;
    }
LABEL_88:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 26;
LABEL_90:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v38,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
    }
LABEL_106:
    v5 = -1073741811;
    goto LABEL_109;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_109;
  v11 = 20;
LABEL_17:
  LODWORD(v42) = FeedbackCounters;
LABEL_18:
  v12 = 3;
LABEL_19:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v12,
    3u,
    v11,
    (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
    v42);
LABEL_109:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
