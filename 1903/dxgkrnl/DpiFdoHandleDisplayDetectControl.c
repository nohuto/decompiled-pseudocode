/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C001E1F0
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0157300 (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C001E418 (DxgkQueryConnectionChanges.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C001E924 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C001E9E0 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpIndicateConnectorChange @ 0x1C004A1B0 (DpIndicateConnectorChange.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C0157358 (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C02B51CC (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // esi
  char v8; // r12
  _QWORD *v9; // rbp
  _QWORD *v10; // r13
  int v11; // edx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  int ConnectionChanges; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // rax
  int IsChildConnected; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r15
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  char v43; // [rsp+A8h] [rbp+10h] BYREF
  char v44; // [rsp+B0h] [rbp+18h] BYREF
  char v45; // [rsp+B8h] [rbp+20h]

  v5 = *a2;
  LODWORD(v6) = 0;
  v7 = v5 & 0xF000000;
  if ( (((v5 & 0xF000000) - 50331648) & 0xFEFFFFFF) != 0 )
  {
    if ( ((v7 - 0x1000000) & 0xFEFFFFFF) != 0 )
    {
      LODWORD(v6) = -1073741811;
      v24 = WdLogNewEntry5_WdError(4278190079LL, v5, a3);
      *(_QWORD *)(v24 + 24) = HIBYTE(*a2) & 0xF;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v6;
    }
    v8 = 0;
    v45 = 0;
    if ( v7 != 0x2000000 )
    {
      LOBYTE(a3) = *((_BYTE *)a2 + 17);
      IsChildConnected = DpiPdoIsChildConnected(
                           *(_QWORD *)(a1 + 24),
                           v5 & 0xFFFFFF,
                           a3,
                           (v5 & 0x10000000) != 0,
                           (__int64)&v43,
                           (__int64)&v44);
      v6 = IsChildConnected;
      if ( IsChildConnected >= 0 )
      {
        if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          v33 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *a2 & 0xFFFFFF, (_DWORD)v6 == 1075708975);
          v37 = v33;
          if ( v33 < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
            v38[5] = 0LL;
            v38[4] = (_DWORD)v6 == 1075708975;
            v38[3] = v37;
            WdLogEvent5_WdError(v38);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        }
        if ( !v44 && (!v43 || !*((_BYTE *)a2 + 16)) || (_DWORD)v6 == 1075708975 )
        {
LABEL_12:
          if ( (int)v6 >= 0 )
          {
            if ( v8 )
            {
              if ( *((_BYTE *)a2 + 18) )
              {
                LOBYTE(v15) = *((_BYTE *)a2 + 17);
                LOBYTE(a3) = *((_BYTE *)a2 + 16);
                ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, a3, v15, 0);
                v6 = ConnectionChanges;
                if ( ConnectionChanges >= 0 )
                  return (unsigned int)v6;
                v40 = WdLogNewEntry5_WdError(v18, v17, v19);
                *(_QWORD *)(v40 + 24) = v6;
                WdLogEvent5_WdError(v40);
              }
              else
              {
                LOBYTE(a3) = 1;
                LODWORD(v6) = DpiFdoQueueConnectionChangePackage(a1, 0LL, a3);
              }
            }
            if ( (int)v6 >= 0 )
              return (unsigned int)v6;
          }
          _InterlockedAnd((volatile signed __int32 *)(a1 + 3644), 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
          return (unsigned int)v6;
        }
        v39 = DpiFdoInitializeConnectionChangePackage(
                *((_QWORD *)a2 + 1),
                *a2 & 0xFFFFFF,
                v43 != 0 ? 10 : 8,
                -2,
                *((_BYTE *)a2 + 16),
                0,
                0,
                1);
        if ( v39 )
          LODWORD(v6) = DpiFdoQueueConnectionChangePackage(a1, v39, 0LL);
        else
          LODWORD(v6) = -1073741670;
        if ( (int)v6 >= 0 )
        {
          v8 = 1;
          goto LABEL_12;
        }
LABEL_51:
        v31 = WdLogNewEntry5_WdError(v23, v22, a3);
        *(_QWORD *)(v31 + 24) = (int)v6;
LABEL_52:
        WdLogEvent5_WdError(v31);
        goto LABEL_12;
      }
LABEL_34:
      v31 = WdLogNewEntry5_WdError(v14, v13, a3);
      *(_QWORD *)(v31 + 24) = v6;
      goto LABEL_52;
    }
    v9 = *(_QWORD **)(a1 + 3464);
    if ( v9 != (_QWORD *)(a1 + 3464) )
    {
      while ( 1 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 17);
        v10 = v9;
        v11 = *((_DWORD *)v9 - 2);
        v41 = v9;
        v9 = (_QWORD *)*v9;
        v12 = DpiPdoIsChildConnected(
                *(_QWORD *)(a1 + 24),
                v11,
                a3,
                (*a2 & 0x10000000) != 0,
                (__int64)&v43,
                (__int64)&v44);
        v6 = v12;
        if ( v12 < 0 )
          goto LABEL_34;
        if ( (v12 == 1075708975 || v12 == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          v25 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *((_DWORD *)v10 - 2), (_DWORD)v6 == 1075708975);
          v29 = v25;
          if ( v25 < 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
            v30[5] = 0LL;
            v30[4] = (_DWORD)v6 == 1075708975;
            v30[3] = v29;
            WdLogEvent5_WdError(v30);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
          v8 = v45;
          v10 = v41;
        }
        if ( (_DWORD)v6 != 1075708975 && (v44 || v43 && *((_BYTE *)a2 + 16)) )
        {
          v21 = DpiFdoInitializeConnectionChangePackage(
                  *((_QWORD *)a2 + 1),
                  *((_DWORD *)v10 - 2),
                  v43 != 0 ? 10 : 8,
                  -2,
                  *((_BYTE *)a2 + 16),
                  0,
                  0,
                  1);
          if ( v21 )
            LODWORD(v6) = DpiFdoQueueConnectionChangePackage(a1, v21, 0LL);
          else
            LODWORD(v6) = -1073741670;
          if ( (int)v6 < 0 )
            goto LABEL_51;
          v8 = 1;
          v45 = 1;
        }
        if ( v9 == (_QWORD *)(a1 + 3464) )
          goto LABEL_12;
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3488), &LockHandle);
    if ( v7 == 50331648 && *(_QWORD *)(a1 + 3496) != a1 + 3496 )
      LODWORD(v6) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3512) = v7 == 50331648;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return (unsigned int)v6;
}
