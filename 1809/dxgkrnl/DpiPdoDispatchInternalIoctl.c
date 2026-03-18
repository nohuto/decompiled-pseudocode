/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C013E690
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C01C7C30 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C01C8474 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoSetDevicePower @ 0x1C027766C (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  struct DXGMONITOR *VideoOutputTechnology; // rdi
  _QWORD *UserBuffer; // r14
  __int64 v7; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 Length; // rcx
  unsigned int Options; // edx
  __int64 LowPart; // r12
  unsigned int *p_NamedPipeType; // r15
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct _FAST_MUTEX *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  struct _ERESOURCE *v27; // rcx
  unsigned __int64 Information; // rbx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v32; // r14d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  void *v45; // [rsp+28h] [rbp-70h]
  unsigned __int64 v46[11]; // [rsp+40h] [rbp-58h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v47; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v48; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v49; // [rsp+B0h] [rbp+18h]
  struct DXGMONITOR *v50; // [rsp+B8h] [rbp+20h] BYREF

  v49 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  v46[0] = 0LL;
  UserBuffer = a2->UserBuffer;
  v13 = *(_DWORD *)(v4 + 496) == 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v47 = CurrentStackLocation->Parameters.Read.Length;
  v48 = Options;
  if ( !v13 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(Length);
    v30[3] = -1073741637LL;
    v30[4] = *(int *)(v4 + 496);
    v30[5] = LowPart;
LABEL_31:
    WdLogEvent5_WdError(v30);
    goto LABEL_32;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
LABEL_76:
        v44 = DpiPdoHandleOpmIoctls(a1, a2);
        Information = a2->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v44;
        goto LABEL_27;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_32;
            *UserBuffer = *(_QWORD *)(v7 + 3792);
            UserBuffer[1] = *(_QWORD *)(v7 + 2600);
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v4 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 28LL) >= 0x7006u);
            VideoOutputTechnology = (struct DXGMONITOR *)(int)DmmGetVideoOutputTechnology(
                                                                *(DXGADAPTER **)(v7 + 3792),
                                                                *(_DWORD *)(v4 + 504),
                                                                &v47,
                                                                0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 40LL;
              *((_DWORD *)UserBuffer + 5) = v47;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_27;
            }
            v31 = WdLogNewEntry5_WdError(v37);
            *(_QWORD *)(v31 + 24) = VideoOutputTechnology;
            goto LABEL_30;
          }
          goto LABEL_41;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 483) )
            {
              DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
              DpiCheckForOutstandingD3Requests(v4);
            }
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 483) )
            {
              DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            }
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_32;
          }
          goto LABEL_41;
        }
        break;
      case 0x232437:
LABEL_32:
        Information = v49;
        goto LABEL_27;
      case 0x232443:
        if ( !*(_QWORD *)(v7 + 2928) )
          goto LABEL_32;
        if ( p_NamedPipeType )
        {
          if ( Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_32;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3792));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3792), 1LL);
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v7 + 2928))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3792));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3792));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_32;
              goto LABEL_48;
            }
            break;
          }
          goto LABEL_41;
        }
        break;
      case 0x232447:
        if ( !*(_QWORD *)(v7 + 2936) )
          goto LABEL_32;
        if ( p_NamedPipeType )
        {
          if ( Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_32;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v7 + 3792));
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3792), 1LL);
              v45 = UserBuffer;
              v32 = v47;
              VideoOutputTechnology = (struct DXGMONITOR *)(*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))(v7 + 2936))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             v47,
                                                             v45);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(v7 + 3792));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v7 + 3792));
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v32;
                goto LABEL_27;
              }
LABEL_48:
              v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v36 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v36);
              goto LABEL_32;
            }
            break;
          }
LABEL_41:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v31 = WdLogNewEntry5_WdError(Length);
          *(_QWORD *)(v31 + 24) = -1073741789LL;
          goto LABEL_30;
        }
        break;
      default:
        v13 = (_DWORD)LowPart == 2303107;
        v14 = LowPart - 2303107;
        goto LABEL_10;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v31 = WdLogNewEntry5_WdError(Length);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
LABEL_30:
    v30 = (_QWORD *)v31;
    goto LABEL_31;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131 )
  {
    goto LABEL_76;
  }
  v14 = LowPart - 2303135;
  v13 = (_DWORD)LowPart == 2303135;
LABEL_10:
  if ( v13 || v14 == 4 )
    goto LABEL_76;
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_32;
  VideoOutputTechnology = *(struct DXGMONITOR **)(v7 + 3792);
  if ( !VideoOutputTechnology || (v18 = *(unsigned int *)(v4 + 504), (_DWORD)v18 == -1) )
  {
    LODWORD(VideoOutputTechnology) = -1073741811;
    goto LABEL_70;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(VideoOutputTechnology) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v38);
  }
  v20 = *((_QWORD *)VideoOutputTechnology + 315);
  if ( !v20 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v39);
    v20 = *((_QWORD *)VideoOutputTechnology + 315);
  }
  v21 = *(struct _FAST_MUTEX **)(v20 + 96);
  if ( !v21 )
  {
    v40 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v40 + 24) = VideoOutputTechnology;
    WdLogEvent5_WdError(v40);
    Information = v49;
    LODWORD(VideoOutputTechnology) = -1073741811;
LABEL_74:
    v43 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v43 + 24) = (int)VideoOutputTechnology;
    goto LABEL_75;
  }
  v50 = 0LL;
  LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v21, v18, 1, &v50);
  if ( (int)VideoOutputTechnology < 0 )
  {
    v41 = WdLogNewEntry5_WdDmmEvent(v23, v22, v24, v25);
    *(_QWORD *)(v41 + 24) = v18;
    *(_QWORD *)(v41 + 32) = v21;
    WdLogEvent5_WdDmmEvent(v41);
LABEL_70:
    Information = v49;
    goto LABEL_24;
  }
  VideoOutputTechnology = v50;
  if ( !v50 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v23);
    WdLogEvent5_WdAssertion(v42);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)VideoOutputTechnology + 296), 1u);
  v26 = DXGMONITOR::_DispatchInternalIOCtrl(VideoOutputTechnology, LowPart, v48, p_NamedPipeType, v47, UserBuffer, v46);
  v27 = (struct _ERESOURCE *)((char *)VideoOutputTechnology + 296);
  LODWORD(VideoOutputTechnology) = v26;
  ExReleaseResourceLite(v27);
  KeLeaveCriticalRegion();
  Information = v46[0];
LABEL_24:
  if ( (_DWORD)VideoOutputTechnology != -1073741637 )
  {
    if ( (int)VideoOutputTechnology >= 0
      || (_DWORD)VideoOutputTechnology == -1073741789
      || (_DWORD)VideoOutputTechnology == -2147483643 )
    {
      goto LABEL_26;
    }
    goto LABEL_74;
  }
  v43 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v43 + 24) = -1073741637LL;
LABEL_75:
  WdLogEvent5_WdWarning(v43);
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_27:
  a2->IoStatus.Status = (int)VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
