/*
 * XREFs of VrpIoctlDeviceDispatch @ 0x140840BD0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010A760 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     VRegEnabledInJob @ 0x14084121C (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408414DC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140841848 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140841AC0 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140841F84 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408422C8 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408424D8 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140842634 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14084280C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 */

__int64 __fastcall VrpIoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // r8
  int v8; // r9d
  unsigned int LevelPlus1; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // ebx
  unsigned int v18; // eax
  unsigned int DifferencingHive; // eax
  void *cData; // [rsp+28h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-21h]
  unsigned int v23; // [rsp+38h] [rbp-19h] BYREF
  GUID pActivityId; // [rsp+40h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR Object; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int *v27; // [rsp+80h] [rbp+2Fh]
  int v28; // [rsp+88h] [rbp+37h]
  int v29; // [rsp+8Ch] [rbp+3Bh]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)&pActivityId.Data1 = 0LL;
  *(_QWORD *)pActivityId.Data4 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v5 = *(_DWORD *)(v2 + 24);
  if ( (unsigned int)VRegEnabledInJob(&v23) && !VrpAllowContainerNesting )
  {
    v6 = -1073741808;
    if ( stru_140425BF8.LevelPlus1 > 2 )
    {
      v29 = 0;
      v27 = &v23;
      v23 = v5;
      v28 = 4;
      TlgWrite(&stru_140425BF8, &unk_14038C605, &pActivityId, 0LL, 3u, &Object);
    }
    goto LABEL_29;
  }
  EtwActivityIdControl(1u, &ActivityId);
  LevelPlus1 = stru_140425BF8.LevelPlus1;
  if ( stru_140425BF8.LevelPlus1 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v5;
    v28 = 4;
    TlgWrite(&stru_140425BF8, &unk_14038C690, &pActivityId, &ActivityId, 3u, &Object);
    LevelPlus1 = stru_140425BF8.LevelPlus1;
  }
  v10 = v5 - 2228228;
  if ( !v10 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         cData,
                         pData);
    goto LABEL_28;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHive(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v7);
    goto LABEL_28;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         (__int64)cData,
                         pData);
    goto LABEL_28;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlModifyFlags(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         (__int64)cData,
                         (__int64)pData);
    goto LABEL_28;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         (_DWORD)cData,
                         (__int64)pData);
    goto LABEL_28;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         (__int64)cData,
                         pData);
    goto LABEL_28;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v7,
                         v8,
                         *(_QWORD *)(a2 + 24),
                         v3);
    goto LABEL_28;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v7);
    goto LABEL_28;
  }
  if ( v17 == 4 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v7);
LABEL_28:
    v6 = DifferencingHive;
    goto LABEL_29;
  }
  if ( LevelPlus1 > 2 )
  {
    v18 = *(_DWORD *)(v2 + 24);
    v29 = 0;
    v23 = v18;
    v27 = &v23;
    v28 = 4;
    TlgWrite(&stru_140425BF8, &unk_14038C664, &pActivityId, 0LL, 3u, &Object);
  }
  v6 = -1073741808;
LABEL_29:
  *(_DWORD *)(a2 + 48) = v6;
  IofCompleteRequest((PIRP)a2, 0);
  if ( stru_140425BF8.LevelPlus1 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v6;
    v28 = 4;
    TlgWrite(&stru_140425BF8, &unk_14038C6B5, &pActivityId, 0LL, 3u, &Object);
  }
  return v6;
}
