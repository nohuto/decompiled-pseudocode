/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025DCC
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003634 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180025AE0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180027B24 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180091A2C (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180091B24 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800108E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18002B30C (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // edi
  CSecondaryWindowRepresentation **v3; // rsi
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
  v3 = (CSecondaryWindowRepresentation **)((char *)this + 376);
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
          (__int64)this + 360,
          *(_QWORD *)(v10 + 24),
          v11,
          v16,
          v3);
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
