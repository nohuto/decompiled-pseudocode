/*
 * XREFs of ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082A14
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180080BF0 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x18007F5FC (--4-$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007FA18 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x180082B64 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083910 (-_UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083AE0 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddTabGroupCaptureEntry(
        CProjectionBorderManager *this,
        HWND a2,
        struct CapturedWindowSWRVisual *a3,
        unsigned int a4,
        const struct DWM_CAPTURE_TOKEN *a5)
{
  struct _RTL_GENERIC_TABLE *v5; // rbx
  __int64 v8; // rdx
  unsigned int v11; // ebx
  int v12; // r9d
  int updated; // eax
  unsigned int v15; // [rsp+20h] [rbp-48h]
  __int64 Buffer; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF

  v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 440);
  Buffer = 0LL;
  v17 = 0;
  v8 = *(_QWORD *)a5;
  v18 = 0LL;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         (struct _RTL_GENERIC_TABLE *)((char *)this + 440),
         v8) )
  {
    v11 = -2147418113;
    v15 = 624;
LABEL_3:
    v12 = v11;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v15);
    goto LABEL_14;
  }
  Buffer = *(_QWORD *)a5;
  *(_QWORD *)&v18 = a2;
  v17 = a4;
  Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=((CBaseObject **)&v18 + 1, (volatile signed __int32 *)a3);
  if ( !RtlInsertElementGenericTable(v5, &Buffer, 0x20u, 0LL) )
  {
    v11 = -2147024882;
    v15 = 632;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture(this);
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(this, a2, a4);
  v11 = updated;
  if ( updated < 0 )
  {
    v15 = 635;
LABEL_12:
    v12 = updated;
    goto LABEL_13;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow(this, a2, a4);
  v11 = updated;
  if ( updated < 0 )
  {
    v15 = 636;
    goto LABEL_12;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerSourceOffset(this, a2, a4);
  v11 = updated;
  if ( updated < 0 )
  {
    v15 = 637;
    goto LABEL_12;
  }
LABEL_14:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&v18 + 1);
  return v11;
}
