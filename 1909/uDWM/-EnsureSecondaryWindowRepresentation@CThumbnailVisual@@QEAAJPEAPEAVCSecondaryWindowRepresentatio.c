/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800108FC
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003834 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000DD38 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180010610 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800916CC (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x1800917C4 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000A428 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800110E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // edi
  struct CSecondaryWindowRepresentation **v3; // rsi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edi
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  HMONITOR v15; // rax
  void *v16; // [rsp+20h] [rbp-18h]
  void *v17; // [rsp+28h] [rbp-10h]
  enum DEVICE_SCALE_FACTOR v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 46);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v18 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v15 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v15, &v18);
    v9 = v18;
  }
  v10 = *((_QWORD *)this + 46);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 44);
    v13 = v12;
  }
  else
  {
    v13 = MEMORY[0x2C];
    LOBYTE(v12) = 0;
  }
  if ( (v12 & 1) != 0 && *(_DWORD *)(v10 + 56) - *(_DWORD *)(v10 + 48) >= 0 )
    v11 = *(_DWORD *)(v10 + 56) - *(_DWORD *)(v10 + 48);
  LODWORD(v16) = v9;
  v14 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v10 + 85) != 0 ? 6 : 2) | (*(_BYTE *)(v10 + 40) != 0 ? 0x120 : 0) | ((v13 & 0x100000 | (v13 >> 1) & 0x400000) >> 11),
          (int)this + 360,
          *(_QWORD *)(v10 + 24),
          v11,
          v16,
          (__int64)v3);
  v2 = v14;
  if ( v14 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x20Bu, v17);
  }
  return v2;
}
