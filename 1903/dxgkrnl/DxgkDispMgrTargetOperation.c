/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1C028D7B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00CAA34 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028C6B0 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C028C8D8 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C028CD2C (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028CF38 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C028D258 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int OwnedSourceFromTarget; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  struct DXGFASTMUTEX *const *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  HANDLE *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int v20; // eax
  HANDLE Handle[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v24; // [rsp+A8h] [rbp+20h] BYREF

  memset(Handle, 0, 0x38uLL);
  if ( a1 + 56 < a1 || a1 + 56 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&Handle[2] = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&Handle[4] = *(_OWORD *)(a1 + 32);
  Handle[6] = *(HANDLE *)(a1 + 48);
  Object = 0LL;
  OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                            Handle[1],
                            0x20000u,
                            g_pDxgkDisplayManagerObjectType,
                            1,
                            0x4B677844u,
                            &Object,
                            0LL);
  if ( OwnedSourceFromTarget < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v3, v2, v5);
    *(HANDLE *)(v7 + 24) = Handle[1];
LABEL_14:
    WdLogEvent5_WdWarning(v7);
    goto LABEL_25;
  }
  v8 = *(struct DXGFASTMUTEX *const **)Object;
  if ( !*(_QWORD *)Object )
  {
    v9 = WdLogNewEntry5_WdWarning(v3, v2, v5);
    *(_QWORD *)(v9 + 24) = 933LL;
    WdLogEvent5_WdWarning(v9);
    goto LABEL_24;
  }
  switch ( LODWORD(Handle[0]) )
  {
    case 1:
      v20 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
              (__int64)v8,
              (void (__fastcall **)(_QWORD, __int64))Handle[2],
              LODWORD(Handle[3]),
              v6,
              (int)Handle[4]);
      goto LABEL_29;
    case 2:
      v20 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
              *(struct DXGFASTMUTEX *const **)Object,
              (struct _LUID)Handle[2],
              (unsigned int)Handle[3]);
LABEL_29:
      OwnedSourceFromTarget = v20;
      goto LABEL_25;
    case 3:
      v24 = 0LL;
      OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                                Handle[4],
                                0x20000u,
                                g_pDxgkDisplayManagerObjectType,
                                1,
                                0x4B677844u,
                                &v24,
                                0LL);
      if ( OwnedSourceFromTarget >= 0 )
      {
        if ( !*(_QWORD *)v24 )
        {
          v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
          *(_QWORD *)(v18 + 24) = 956LL;
          WdLogEvent5_WdWarning(v18);
          NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v24);
          goto LABEL_24;
        }
        OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                  *(struct DXGFASTMUTEX *const **)Object,
                                  (struct _LUID)Handle[2],
                                  (unsigned int)Handle[3],
                                  *(struct DXGFASTMUTEX *const **)v24);
      }
      else
      {
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(HANDLE *)(v17 + 24) = Handle[1];
        WdLogEvent5_WdWarning(v17);
      }
      NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v24);
      goto LABEL_25;
  }
  if ( LODWORD(Handle[0]) != 4 )
  {
LABEL_24:
    OwnedSourceFromTarget = -1073741811;
    goto LABEL_25;
  }
  v22 = -1;
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
                            v8,
                            (struct _LUID)Handle[2],
                            (unsigned int)Handle[3],
                            &v22);
  if ( OwnedSourceFromTarget < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v7 + 24) = 969LL;
    goto LABEL_14;
  }
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                            *(DXGDISPLAYMANAGEROBJECT **)Object,
                            (struct _LUID)Handle[2],
                            v22,
                            (struct _OBJECT_ATTRIBUTES *)Handle[4],
                            (ACCESS_MASK)Handle[5],
                            &Handle[6]);
  if ( OwnedSourceFromTarget >= 0 )
  {
    v13 = (HANDLE *)(a1 + 48);
    if ( a1 + 48 >= MmUserProbeAddress )
      v13 = (HANDLE *)MmUserProbeAddress;
    *v13 = Handle[6];
  }
LABEL_25:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceFromTarget;
}
