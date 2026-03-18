/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C0265BE4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001E720 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0146674 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C0266AA0 (DpiFdoRemoveChildDescriptor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0281FAC (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0282068 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C028212C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int *PoolWithTag; // r15
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v13; // r11d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // r9d
  int v25; // r10d
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D0h]
  int v30; // [rsp+38h] [rbp-C8h]
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v33; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v34[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v35[10]; // [rsp+C0h] [rbp-40h] BYREF

  v33 = (_DXGK_CHILD_CAPABILITIES)0LL;
  v31 = 0;
  v4 = 1;
  LODWORD(v5) = 0;
  v32 = 1;
  PoolWithTag = 0LL;
  memset(v34, 0, 0x48uLL);
  v7 = a2[2];
  memset(&v34[1], 0, 36);
  HIDWORD(v34[6]) = HIBYTE(v7) & 0xF;
  HIDWORD(v34[7]) = a2[4];
  v8 = *(_QWORD *)(a1 + 2600);
  LODWORD(v34[7]) = v7 & 0xFFFFFF;
  v34[8] = v8;
  v34[0] = 0x480000001ELL;
  LODWORD(v34[6]) = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34);
  v9 = a2[2] & 0xFFFFFF;
  v33.Type.Other.MustBeZero = a2[3];
  v33.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v33.Type.VideoOutput.SupportsSdtvModes = 0;
  v33.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v9);
  if ( !ChildDescriptor )
  {
    LODWORD(v5) = -1073741810;
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v14);
LABEL_33:
    memset(v35, 0, 0x48uLL);
    v35[0] = 0x480000001ELL;
    memset(&v35[1], 0, 36);
    v35[8] = *(_QWORD *)(a1 + 2600);
    LODWORD(v35[6]) = 93;
    HIDWORD(v35[6]) = v4;
    v35[7] = (unsigned int)v5;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35);
    return (unsigned int)v5;
  }
  if ( (((v12 & 0xF000000) - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( (v12 & 0xF000000) != 0x4000000 )
      return (unsigned int)v5;
    v32 = *(_DWORD *)(a1 + 3408);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v32, 0x74727044u);
    if ( !PoolWithTag )
    {
      v4 = 0x80000000;
      LODWORD(v5) = -1073741801;
      v16 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v16 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v16);
      goto LABEL_33;
    }
    LODWORD(v5) = DmmBuildDynamicVideoPresentTargetChildRelations(
                    *(void **)(a1 + 3792),
                    a2[2] & 0xFFFFFF,
                    &v32,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v31);
    if ( (int)v5 >= 0 )
    {
      v17 = v32;
      while ( v17 )
      {
        v18 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v17]);
        v19 = v18;
        if ( v18[6] )
        {
          LOBYTE(v30) = 0;
          LOBYTE(v29) = 0;
          LOBYTE(v28) = 0;
          LOBYTE(v27) = 0;
          v20 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((unsigned int *)v18 + 6),
                  *((unsigned int *)v18 + 1),
                  0LL,
                  v27,
                  v28,
                  v29,
                  v30,
                  a2 + 6);
          v5 = v20;
          if ( v20 < 0 )
          {
            v4 = 2;
            v22 = WdLogNewEntry5_WdError(v21);
            *(_QWORD *)(v22 + 24) = v5;
            WdLogEvent5_WdError(v22);
            goto LABEL_30;
          }
        }
        LODWORD(v5) = DmmDestroyDynamicVideoPresentTarget(
                        *(void **)(a1 + 3792),
                        *((_DWORD *)v19 + 6),
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v31);
        if ( (int)v5 < 0 )
          goto LABEL_29;
        DpiFdoRemoveChildDescriptor(a1, v19);
      }
    }
    goto LABEL_29;
  }
  if ( ChildDescriptor[6] )
  {
    v4 = 2;
LABEL_19:
    LODWORD(v5) = -1073741811;
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    goto LABEL_3;
  }
  if ( IsInternalVideoOutput(v13) )
  {
    v4 = 4;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, a2[4]) )
  {
    if ( v24 == 83886080 )
    {
      v4 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v5) = DpiFdoCreateChildDescriptor(a1, v23, 0, &v32, (__int128 *)&v33, 0);
    if ( (int)v5 < 0 )
    {
      v4 = 0x80000000;
      goto LABEL_32;
    }
    v25 = a2[2];
    LOBYTE(v4) = 0;
    v23 = a2[4];
  }
  LODWORD(v5) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3792),
                  v23,
                  v25 & 0xFFFFFF,
                  &v33,
                  v4,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v31);
LABEL_29:
  v4 = v31;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v5 < 0 )
    goto LABEL_33;
  return (unsigned int)v5;
}
