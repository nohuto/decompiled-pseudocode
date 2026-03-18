/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C02A1890
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001E468 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001A8D8 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C015B758 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C017B9A4 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C02A2780 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BA3FC (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BA4B8 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BA57C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  unsigned int *PoolWithTag; // r15
  __int64 v10; // rdx
  int v11; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r10d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v16; // r11d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // edi
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r9d
  int v33; // r10d
  __int64 v34; // rdx
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v38; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+A0h] [rbp-60h]
  int v45; // [rsp+A4h] [rbp-5Ch]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _DWORD v49[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int128 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+F0h] [rbp-10h]
  unsigned int v55; // [rsp+F4h] [rbp-Ch]
  int v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+FCh] [rbp-4h]
  __int64 v58; // [rsp+100h] [rbp+0h]

  v39[0] = 30;
  v38 = (_DXGK_CHILD_CAPABILITIES)0LL;
  v4 = *(_DWORD *)(a2 + 8);
  v40 = 0LL;
  v41 = 0uLL;
  v6 = 1;
  LODWORD(v7) = 0;
  v37 = 1;
  v46 = v4 & 0xFFFFFF;
  v45 = HIBYTE(v4) & 0xF;
  v8 = *(_DWORD *)(a2 + 16);
  PoolWithTag = 0LL;
  v10 = *(_QWORD *)(a1 + 5760);
  v47 = v8;
  v48 = *(_QWORD *)(a1 + 2672);
  v36 = 0;
  v43 = 0LL;
  v39[1] = 72;
  v42 = 0LL;
  v44 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v39, v10, a3);
  v11 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v38.Type.Other.MustBeZero = *(_DWORD *)(a2 + 12);
  v38.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v38.Type.VideoOutput.SupportsSdtvModes = 0;
  v38.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v11);
  if ( !ChildDescriptor )
  {
    LODWORD(v7) = -1073741810;
    v17 = WdLogNewEntry5_WdError(v13, 0LL, v14);
    *(_QWORD *)(v17 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v17);
LABEL_33:
    v34 = *(_QWORD *)(a1 + 5760);
    v53 = 0LL;
    v50 = 0LL;
    v51 = 0uLL;
    v58 = *(_QWORD *)(a1 + 2672);
    v49[0] = 30;
    v49[1] = 72;
    v52 = 0LL;
    v54 = 93;
    v55 = v6;
    v56 = v7;
    v57 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v49, v34, v18);
    return (unsigned int)v7;
  }
  if ( (((v15 & 0xF000000) - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( (v15 & 0xF000000) != 0x4000000 )
      return (unsigned int)v7;
    v37 = *(_DWORD *)(a1 + 3480);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v37, 0x74727044u);
    if ( !PoolWithTag )
    {
      v6 = 0x80000000;
      LODWORD(v7) = -1073741801;
      v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
      goto LABEL_33;
    }
    LODWORD(v7) = DmmBuildDynamicVideoPresentTargetChildRelations(
                    *(void **)(a1 + 3896),
                    *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                    &v37,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v36);
    if ( (int)v7 >= 0 )
    {
      v24 = v37;
      while ( v24 )
      {
        v25 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v24]);
        v26 = v25;
        if ( v25[6] )
        {
          v27 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v25 + 6),
                  *((unsigned int *)v25 + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a2 + 24));
          v7 = v27;
          if ( v27 < 0 )
          {
            v6 = 2;
            v31 = WdLogNewEntry5_WdError(v29, v28, v30);
            *(_QWORD *)(v31 + 24) = v7;
            WdLogEvent5_WdError(v31);
            goto LABEL_30;
          }
        }
        LODWORD(v7) = DmmDestroyDynamicVideoPresentTarget(
                        *(void **)(a1 + 3896),
                        *((_DWORD *)v26 + 6),
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v36);
        if ( (int)v7 < 0 )
          goto LABEL_29;
        DpiFdoRemoveChildDescriptor(a1, v26);
      }
    }
    goto LABEL_29;
  }
  if ( ChildDescriptor[6] )
  {
    v6 = 2;
LABEL_19:
    LODWORD(v7) = -1073741811;
    v17 = WdLogNewEntry5_WdError(v13, ChildDescriptor, v14);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    goto LABEL_3;
  }
  if ( IsInternalVideoOutput(v16) )
  {
    v6 = 4;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a2 + 16)) )
  {
    if ( v32 == 83886080 )
    {
      v6 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v7) = DpiFdoCreateChildDescriptor(a1, (__int64)ChildDescriptor, 0LL, &v37, (__int128 *)&v38, 0);
    if ( (int)v7 < 0 )
    {
      v6 = 0x80000000;
      goto LABEL_32;
    }
    v33 = *(_DWORD *)(a2 + 8);
    LOBYTE(v6) = 0;
    LODWORD(ChildDescriptor) = *(_DWORD *)(a2 + 16);
  }
  LODWORD(v7) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3896),
                  (unsigned int)ChildDescriptor,
                  v33 & 0xFFFFFF,
                  &v38,
                  v6,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v36);
LABEL_29:
  v6 = v36;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v7 < 0 )
    goto LABEL_33;
  return (unsigned int)v7;
}
