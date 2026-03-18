/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C001E590
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0144DA8 (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpIndicateConnectorChange @ 0x1C0042D60 (DpIndicateConnectorChange.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C00444DC (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0044628 (DpiFdoQueueConnectionChangePackage.c)
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForcableState@@YAJQEAXIE@Z @ 0x1C027CF40 (-DmmSetTargetForcableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, int *a2)
{
  unsigned int v4; // edx
  __int64 v5; // rbx
  int v6; // esi
  char v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  int v10; // edx
  int IsChildConnected; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r15
  _QWORD *v28; // rax
  __int64 v29; // rax
  int ConnectionChanges; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  char v35; // [rsp+A8h] [rbp+10h] BYREF
  char v36; // [rsp+B0h] [rbp+18h] BYREF
  char v37; // [rsp+B8h] [rbp+20h]

  v4 = *a2;
  LODWORD(v5) = 0;
  v6 = v4 & 0xF000000;
  if ( (((v4 & 0xF000000) - 50331648) & 0xFEFFFFFF) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3416), &LockHandle);
    if ( v6 == 50331648 && *(_QWORD *)(a1 + 3424) != a1 + 3424 )
      LODWORD(v5) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3440) = v6 == 50331648;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)v5;
  }
  if ( ((v6 - 0x1000000) & 0xFEFFFFFF) != 0 )
  {
    LODWORD(v5) = -1073741811;
    v16 = WdLogNewEntry5_WdError(4278190079LL);
    *(_QWORD *)(v16 + 24) = HIBYTE(*a2) & 0xF;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v5;
  }
  v7 = 0;
  v37 = 0;
  if ( v6 == 0x2000000 )
  {
    v8 = *(_QWORD **)(a1 + 3392);
    if ( v8 == (_QWORD *)(a1 + 3392) )
      return (unsigned int)v5;
    while ( 1 )
    {
      v9 = v8;
      v10 = *((_DWORD *)v8 - 2);
      v33 = v8;
      v8 = (_QWORD *)*v8;
      IsChildConnected = DpiPdoIsChildConnected(
                           *(_QWORD *)(a1 + 24),
                           v10,
                           *((_BYTE *)a2 + 17),
                           (*a2 & 0x10000000) != 0,
                           (__int64)&v35,
                           (__int64)&v36);
      v5 = IsChildConnected;
      if ( IsChildConnected < 0 )
        goto LABEL_31;
      if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
        && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v17 = DmmSetTargetForcableState(*(void *const *)(a1 + 3792), *((_DWORD *)v9 - 2), (_DWORD)v5 == 1075708975);
        v19 = v17;
        if ( v17 < 0 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v20[5] = 0LL;
          v20[4] = (_DWORD)v5 == 1075708975;
          v20[3] = v19;
          WdLogEvent5_WdError(v20);
        }
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        v7 = v37;
        v9 = v33;
      }
      if ( (_DWORD)v5 != 1075708975 && (v36 || v35 && *((_BYTE *)a2 + 16)) )
      {
        v21 = DpiFdoInitializeConnectionChangePackage(
                *((_QWORD *)a2 + 1),
                *((_DWORD *)v9 - 2),
                v35 != 0 ? 10 : 8,
                -2,
                *((_BYTE *)a2 + 16),
                0,
                0,
                1);
        if ( v21 )
          LODWORD(v5) = DpiFdoQueueConnectionChangePackage(a1, v21, 0LL);
        else
          LODWORD(v5) = -1073741670;
        if ( (int)v5 < 0 )
          goto LABEL_48;
        v7 = 1;
        v37 = 1;
      }
      if ( v8 == (_QWORD *)(a1 + 3392) )
        goto LABEL_12;
    }
  }
  v24 = DpiPdoIsChildConnected(
          *(_QWORD *)(a1 + 24),
          v4 & 0xFFFFFF,
          *((_BYTE *)a2 + 17),
          (v4 & 0x10000000) != 0,
          (__int64)&v35,
          (__int64)&v36);
  v5 = v24;
  if ( v24 < 0 )
  {
LABEL_31:
    v23 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v23 + 24) = v5;
LABEL_49:
    WdLogEvent5_WdError(v23);
    goto LABEL_12;
  }
  if ( (v24 == 1075708975 || v24 == 1075708988) && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
  {
    v25 = DmmSetTargetForcableState(*(void *const *)(a1 + 3792), *a2 & 0xFFFFFF, (_DWORD)v5 == 1075708975);
    v27 = v25;
    if ( v25 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[5] = 0LL;
      v28[4] = (_DWORD)v5 == 1075708975;
      v28[3] = v27;
      WdLogEvent5_WdError(v28);
    }
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
  }
  if ( !v36 && (!v35 || !*((_BYTE *)a2 + 16)) || (_DWORD)v5 == 1075708975 )
    goto LABEL_12;
  v29 = DpiFdoInitializeConnectionChangePackage(
          *((_QWORD *)a2 + 1),
          *a2 & 0xFFFFFF,
          v35 != 0 ? 10 : 8,
          -2,
          *((_BYTE *)a2 + 16),
          0,
          0,
          1);
  if ( v29 )
    LODWORD(v5) = DpiFdoQueueConnectionChangePackage(a1, v29, 0LL);
  else
    LODWORD(v5) = -1073741670;
  if ( (int)v5 < 0 )
  {
LABEL_48:
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = (int)v5;
    goto LABEL_49;
  }
  v7 = 1;
LABEL_12:
  if ( (int)v5 < 0 )
    goto LABEL_54;
  if ( v7 )
  {
    if ( *((_BYTE *)a2 + 18) )
    {
      LOBYTE(v14) = *((_BYTE *)a2 + 17);
      LOBYTE(v13) = *((_BYTE *)a2 + 16);
      ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, v13, v14, 0);
      v5 = ConnectionChanges;
      if ( ConnectionChanges >= 0 )
        return (unsigned int)v5;
      v32 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v32 + 24) = v5;
      WdLogEvent5_WdError(v32);
    }
    else
    {
      LOBYTE(v13) = 1;
      LODWORD(v5) = DpiFdoQueueConnectionChangePackage(a1, 0LL, v13);
    }
  }
  if ( (int)v5 < 0 )
  {
LABEL_54:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 3540), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
  }
  return (unsigned int)v5;
}
