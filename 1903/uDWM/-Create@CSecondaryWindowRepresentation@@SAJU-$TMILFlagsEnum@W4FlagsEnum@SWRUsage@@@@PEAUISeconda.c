/*
 * XREFs of ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800108E8
 * Callers:
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18000EDBC (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18001F300 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025DCC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180030D40 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003CE40 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180040080 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x180086110 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B1D04 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800109A0 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x180010C48 (--0CSecondaryWindowRepresentation@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void *a5,
        CSecondaryWindowRepresentation **a6)
{
  CSecondaryWindowRepresentation *v7; // rax
  CSecondaryWindowRepresentation *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  void *v12; // [rsp+28h] [rbp-10h]
  void *v13; // [rsp+28h] [rbp-10h]

  v7 = (CSecondaryWindowRepresentation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                           WPF::g_pProcessHeap,
                                           560LL);
  if ( v7 )
    v8 = CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(v7);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = CSecondaryWindowRepresentation::Initialize(v8, a4, (_DWORD)a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6Du, v13);
    }
    else
    {
      *a6 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Bu, v12);
  }
  return v10;
}
