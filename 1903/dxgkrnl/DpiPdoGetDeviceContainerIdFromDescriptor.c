/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0171834
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0171B28 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C0171BCC (MonitorGetContainerIDFromDescriptor.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0172B38 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  char v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGADAPTER *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct _FAST_MUTEX *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int MonitorEldInformation; // eax
  struct _ERESOURCE *v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  GUID *p_Guid; // rcx
  NTSTATUS v46; // eax
  __int64 v47; // rax
  struct DXGMONITOR *v48; // [rsp+30h] [rbp-50h] BYREF
  GUID Guid; // [rsp+38h] [rbp-48h] BYREF
  __int64 v50; // [rsp+48h] [rbp-38h] BYREF
  int v51; // [rsp+50h] [rbp-30h]
  _OWORD v52[2]; // [rsp+58h] [rbp-28h] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v50 = 0LL;
  v51 = 0;
  memset(v52, 0, sizeof(v52));
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  v8 = *(_QWORD **)(*(_QWORD *)(v6 + 32) + 64LL);
  v9 = v8[5];
  if ( *(_DWORD *)(v6 + 496) != 1 )
  {
LABEL_18:
    if ( *(_DWORD *)(v9 + 28) >= 0x3005u && *(_QWORD *)(v9 + 768) )
    {
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v6 + 936) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(v8[487], 1LL, v24);
      ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                v9,
                                v8[6],
                                *(unsigned int *)(*(_QWORD *)(v6 + 936) + 24LL),
                                v52);
      DxgkReleaseAdapterDdiSync((DXGADAPTER *)v8[487], v25, v26);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v6 + 936) + 72LL), 0);
      if ( (_DWORD)ChildContainerId == -1071841279 )
      {
        if ( *(_DWORD *)(v6 + 496) != 1 )
          goto LABEL_22;
        v36 = WdLogNewEntry5_WdEvent(v4);
        *(_QWORD *)(v36 + 24) = a1;
        WdLogEvent5_WdEvent(v36);
        LODWORD(ChildContainerId) = 0;
        v52[0] = Guid;
      }
      else if ( (int)ChildContainerId < 0 )
      {
        goto LABEL_22;
      }
    }
    if ( v7 )
    {
      v37 = *(_QWORD *)&v52[0] - *(_QWORD *)&Guid.Data1;
      if ( *(_QWORD *)&v52[0] == *(_QWORD *)&Guid.Data1 )
        v37 = *((_QWORD *)&v52[0] + 1) - *(_QWORD *)Guid.Data4;
      if ( v37 )
      {
        v38 = WdLogNewEntry5_WdError(v4, v3, v5);
        *(_QWORD *)(v38 + 24) = *(_QWORD *)(v9 + 768);
        *(_QWORD *)(v38 + 32) = (int)ChildContainerId;
        WdLogEvent5_WdError(v38);
        v42 = WdLogNewEntry5_WdError(v40, v39, v41);
        *(GUID *)(v42 + 24) = Guid;
        *(_OWORD *)(v42 + 40) = v52[0];
        WdLogEvent5_WdError(v42);
        v52[0] = Guid;
      }
    }
    goto LABEL_23;
  }
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v6 + 936) + 4LL)) )
    return (unsigned int)ChildContainerId;
  ChildContainerId = *(unsigned int *)(v6 + 504);
  v12 = (DXGADAPTER *)v8[487];
  v13 = WdLogNewEntry5_WdTrace(v11, v10);
  *(_QWORD *)(v13 + 24) = ChildContainerId;
  *(_QWORD *)(v13 + 32) = v12;
  if ( !v12 || (_DWORD)ChildContainerId == -1 )
  {
    LODWORD(ChildContainerId) = -1073741811;
  }
  else
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v29);
    }
    v17 = *((_QWORD *)v12 + 319);
    if ( !v17 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v30);
      v17 = *((_QWORD *)v12 + 319);
    }
    v18 = *(struct _FAST_MUTEX **)(v17 + 96);
    if ( !v18 )
    {
      v31 = WdLogNewEntry5_WdError(0LL, v14, v16);
      *(_QWORD *)(v31 + 24) = v12;
      WdLogEvent5_WdError(v31);
      LODWORD(ChildContainerId) = -1073741811;
      return (unsigned int)ChildContainerId;
    }
    v48 = 0LL;
    LODWORD(ChildContainerId) = MONITOR_MGR::_GetMonitorInstance(v18, (unsigned int)ChildContainerId, 1, &v48);
    if ( (int)ChildContainerId >= 0 )
    {
      ChildContainerId = (__int64)v48;
      if ( !v48 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v32);
        v35 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v35);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(ChildContainerId + 296), 1u);
      MonitorEldInformation = DXGMONITOR::_GetMonitorEldInformation(
                                (DXGMONITOR *)ChildContainerId,
                                (struct _MONITOR_PACKED_ELD_INFORMATION *)&v50);
      v22 = (struct _ERESOURCE *)(ChildContainerId + 296);
      LODWORD(ChildContainerId) = MonitorEldInformation;
      ExReleaseResourceLite(v22);
      KeLeaveCriticalRegion();
    }
  }
  if ( (int)ChildContainerId < 0 )
    return (unsigned int)ChildContainerId;
  LODWORD(ChildContainerId) = MonitorGetContainerIDFromDescriptor(v8[487], *(unsigned int *)(v6 + 504), &Guid);
  if ( (int)ChildContainerId >= 0 )
  {
    v7 = 1;
    goto LABEL_17;
  }
  v23 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v50, 12LL, &Guid);
  ChildContainerId = v23;
  if ( v23 >= 0 )
  {
LABEL_17:
    *(_QWORD *)&v52[1] = v50;
    DWORD2(v52[1]) = v51;
    v52[0] = Guid;
    goto LABEL_18;
  }
LABEL_22:
  v27 = WdLogNewEntry5_WdError(v4, v3, v5);
  *(_QWORD *)(v27 + 24) = *(_QWORD *)(v9 + 768);
  *(_QWORD *)(v27 + 32) = ChildContainerId;
  WdLogEvent5_WdError(v27);
LABEL_23:
  if ( (int)ChildContainerId < 0 && !v7 )
    return (unsigned int)ChildContainerId;
  v43 = *(_QWORD *)&v52[0];
  v44 = 0LL;
  if ( !*(_QWORD *)&v52[0] )
    v43 = *((_QWORD *)&v52[0] + 1);
  if ( !v43 )
  {
    ChildContainerId = -1073741823LL;
LABEL_43:
    v47 = WdLogNewEntry5_WdError(v44, v3, v5);
    *(_QWORD *)(v47 + 24) = *(_QWORD *)(v9 + 768);
    *(_QWORD *)(v47 + 32) = ChildContainerId;
    WdLogEvent5_WdError(v47);
    return (unsigned int)ChildContainerId;
  }
  p_Guid = (GUID *)v52;
  if ( v7 )
    p_Guid = &Guid;
  v46 = RtlStringFromGUID(p_Guid, (PUNICODE_STRING)(v6 + 960));
  ChildContainerId = v46;
  if ( v46 < 0 )
    goto LABEL_43;
  return (unsigned int)ChildContainerId;
}
