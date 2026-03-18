/*
 * XREFs of DpiPdoDispatchInternalIoctl @ 0x1C0153900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C015109C (DpiPdoHandleOpmIoctls.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C0151B00 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C0151B90 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiPdoSetDevicePower @ 0x1C0154060 (DpiPdoSetDevicePower.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0170900 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02A7EF8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  struct DXGMONITOR *VideoOutputTechnology; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *UserBuffer; // r14
  bool v8; // zf
  struct _DEVICE_OBJECT *v9; // r8
  __int64 Length; // rcx
  __int64 Options; // rdx
  __int64 LowPart; // r12
  PVOID DeviceExtension; // rbp
  unsigned int *p_NamedPipeType; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  struct _FAST_MUTEX *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct _ERESOURCE *v27; // rcx
  unsigned __int64 Information; // rbx
  int v29; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  void *v55; // [rsp+28h] [rbp-70h]
  unsigned __int64 v56[11]; // [rsp+40h] [rbp-58h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v57; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v58; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+18h]
  struct DXGMONITOR *v60; // [rsp+B8h] [rbp+20h] BYREF

  v59 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(VideoOutputTechnology) = -1073741637;
  v56[0] = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  UserBuffer = a2->UserBuffer;
  v8 = *(_DWORD *)(v4 + 496) == 1;
  v9 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  DeviceExtension = v9->DeviceExtension;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v57 = CurrentStackLocation->Parameters.Read.Length;
  v58 = Options;
  if ( !v8 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(Length, Options, v9);
    v35[3] = -1073741637LL;
    v35[4] = *(int *)(v4 + 496);
    v35[5] = LowPart;
LABEL_47:
    WdLogEvent5_WdError(v35);
    goto LABEL_48;
  }
  if ( (unsigned int)LowPart <= 0x23248B )
  {
    switch ( (_DWORD)LowPart )
    {
      case 0x23248B:
        goto LABEL_30;
      case 0x232407:
        if ( UserBuffer )
        {
          if ( (unsigned int)Length >= 0x28 )
          {
            LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology < 0 )
              goto LABEL_48;
            *UserBuffer = *((_QWORD *)DeviceExtension + 487);
            UserBuffer[1] = *((_QWORD *)DeviceExtension + 334);
            *((_DWORD *)UserBuffer + 4) = *(_DWORD *)(v4 + 504);
            *((_DWORD *)UserBuffer + 6) = *(_DWORD *)(*(_QWORD *)(v4 + 936) + 68LL);
            *((_BYTE *)UserBuffer + 28) = *(_BYTE *)(*(_QWORD *)(v4 + 936) + 66LL);
            *((_DWORD *)UserBuffer + 8) = UserBuffer[4] & 0xFFFFFFFE | (*(_DWORD *)(*((_QWORD *)DeviceExtension + 5)
                                                                                  + 28LL) >= 0x7006u);
            VideoOutputTechnology = (struct DXGMONITOR *)(int)DmmGetVideoOutputTechnology(
                                                                *((DXGADAPTER **)DeviceExtension + 487),
                                                                *(unsigned int *)(v4 + 504),
                                                                &v57,
                                                                0LL);
            DpiReleaseCoreSyncAccessSafe(a1, 0);
            if ( (int)VideoOutputTechnology >= 0 )
            {
              Information = 40LL;
              *((_DWORD *)UserBuffer + 5) = v57;
              LODWORD(VideoOutputTechnology) = 0;
              goto LABEL_31;
            }
            v36 = WdLogNewEntry5_WdError(v32, v31, v33);
            *(_QWORD *)(v36 + 24) = VideoOutputTechnology;
            goto LABEL_46;
          }
          goto LABEL_57;
        }
        break;
      case 0x23242F:
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v4 + 484) )
              DpiCheckForOutstandingD3Requests(v4);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
            LODWORD(VideoOutputTechnology) = DpiPdoSetDevicePower(a1, *p_NamedPipeType, 0LL);
            if ( *(_BYTE *)(v4 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_48;
          }
          goto LABEL_57;
        }
        break;
      case 0x232437:
LABEL_48:
        Information = v59;
        goto LABEL_31;
      case 0x232443:
        if ( !*((_QWORD *)DeviceExtension + 375) )
          goto LABEL_48;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( p_NamedPipeType[1] - 1 <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_48;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 487), v45, v46);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 487), 1LL);
              VideoOutputTechnology = (struct DXGMONITOR *)(*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DeviceExtension
                                                            + 375))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             *((_QWORD *)p_NamedPipeType + 1));
              DxgkReleaseAdapterDdiSync(*((_QWORD *)DeviceExtension + 487));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 487), v47, v48);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
                goto LABEL_48;
              goto LABEL_64;
            }
            break;
          }
          goto LABEL_57;
        }
        break;
      case 0x232447:
        if ( !*((_QWORD *)DeviceExtension + 376) )
          goto LABEL_48;
        if ( p_NamedPipeType )
        {
          if ( (unsigned int)Options >= 8 )
          {
            if ( UserBuffer && (unsigned int)(Length - 1) <= 0x3F )
            {
              LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology < 0 )
                goto LABEL_48;
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 487), v37, v38);
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)DeviceExtension + 487), 1LL);
              v55 = UserBuffer;
              v39 = v57;
              VideoOutputTechnology = (struct DXGMONITOR *)(*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY, void *))DeviceExtension
                                                            + 376))(
                                                             *(_QWORD *)(v4 + 48),
                                                             *(unsigned int *)(v4 + 504),
                                                             *p_NamedPipeType,
                                                             p_NamedPipeType[1],
                                                             v57,
                                                             v55);
              DxgkReleaseAdapterDdiSync(*((_QWORD *)DeviceExtension + 487));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)DeviceExtension + 487), v40, v41);
              DpiReleaseCoreSyncAccessSafe(a1, 0);
              if ( (int)VideoOutputTechnology >= 0 )
              {
                Information = (unsigned int)v39;
                goto LABEL_31;
              }
LABEL_64:
              v49 = WdLogNewEntry5_WdWarning(v43, v42, v44);
              *(_QWORD *)(v49 + 24) = VideoOutputTechnology;
              WdLogEvent5_WdWarning(v49);
              goto LABEL_48;
            }
            break;
          }
LABEL_57:
          LODWORD(VideoOutputTechnology) = -1073741789;
          v36 = WdLogNewEntry5_WdError(Length, Options, v9);
          *(_QWORD *)(v36 + 24) = -1073741789LL;
          goto LABEL_46;
        }
        break;
      case 0x232483:
      case 0x232487:
LABEL_30:
        v29 = DpiPdoHandleOpmIoctls(a1, (__int64)a2, (__int64)v9);
        Information = a2->IoStatus.Information;
        LODWORD(VideoOutputTechnology) = v29;
        goto LABEL_31;
      default:
        goto LABEL_11;
    }
    LODWORD(VideoOutputTechnology) = -1073741811;
    v36 = WdLogNewEntry5_WdError(Length, Options, v9);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
LABEL_46:
    v35 = (_QWORD *)v36;
    goto LABEL_47;
  }
  if ( (_DWORD)LowPart == 2303119
    || (_DWORD)LowPart == 2303123
    || (_DWORD)LowPart == 2303127
    || (_DWORD)LowPart == 2303131
    || (_DWORD)LowPart == 2303135
    || (_DWORD)LowPart == 2303139 )
  {
    goto LABEL_30;
  }
  if ( (_DWORD)LowPart == 2303195 )
  {
    LODWORD(VideoOutputTechnology) = DpiBrightnessSetUncalibratedBrightness3Fallback(v9, *(_DWORD *)(v4 + 504));
    goto LABEL_48;
  }
LABEL_11:
  LODWORD(VideoOutputTechnology) = DpiAcquireCoreSyncAccessSafe(a1, 0);
  if ( (int)VideoOutputTechnology < 0 )
    goto LABEL_48;
  VideoOutputTechnology = (struct DXGMONITOR *)*((_QWORD *)DeviceExtension + 487);
  if ( !VideoOutputTechnology || (v18 = *(unsigned int *)(v4 + 504), (_DWORD)v18 == -1) )
  {
    LODWORD(VideoOutputTechnology) = -1073741811;
  }
  else
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(VideoOutputTechnology) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v50);
    }
    v22 = *((_QWORD *)VideoOutputTechnology + 319);
    if ( !v22 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v51);
      v22 = *((_QWORD *)VideoOutputTechnology + 319);
    }
    v23 = *(struct _FAST_MUTEX **)(v22 + 96);
    if ( !v23 )
    {
      v52 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v52 + 24) = VideoOutputTechnology;
      WdLogEvent5_WdError(v52);
      Information = v59;
      LODWORD(VideoOutputTechnology) = -1073741811;
      goto LABEL_38;
    }
    v60 = 0LL;
    LODWORD(VideoOutputTechnology) = MONITOR_MGR::_GetMonitorInstance(v23, (unsigned int)v18, 1, &v60);
    if ( (int)VideoOutputTechnology >= 0 )
    {
      VideoOutputTechnology = v60;
      if ( !v60 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v54);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)VideoOutputTechnology + 296), 1u);
      v26 = DXGMONITOR::_DispatchInternalIOCtrl(
              VideoOutputTechnology,
              LowPart,
              v58,
              p_NamedPipeType,
              v57,
              UserBuffer,
              v56);
      v27 = (struct _ERESOURCE *)((char *)VideoOutputTechnology + 296);
      LODWORD(VideoOutputTechnology) = v26;
      ExReleaseResourceLite(v27);
      KeLeaveCriticalRegion();
      Information = v56[0];
      goto LABEL_23;
    }
    v53 = WdLogNewEntry5_WdDmmEvent(v25, v24);
    *(_QWORD *)(v53 + 24) = v18;
    *(_QWORD *)(v53 + 32) = v23;
    WdLogEvent5_WdDmmEvent(v53);
  }
  Information = v59;
LABEL_23:
  if ( (_DWORD)VideoOutputTechnology == -1073741637 )
  {
    v34 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v34 + 24) = -1073741637LL;
    goto LABEL_39;
  }
  if ( (int)VideoOutputTechnology >= 0
    || (_DWORD)VideoOutputTechnology == -2147483643
    || (_DWORD)VideoOutputTechnology == -1073741789 )
  {
    goto LABEL_26;
  }
LABEL_38:
  v34 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v34 + 24) = (int)VideoOutputTechnology;
LABEL_39:
  WdLogEvent5_WdWarning(v34);
LABEL_26:
  DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_31:
  a2->IoStatus.Status = (int)VideoOutputTechnology;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)VideoOutputTechnology;
}
