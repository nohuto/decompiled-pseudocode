/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x180088F98
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180086E00 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087000 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180085D20 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800890F8 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800891EC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x180089574 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x180089DBC (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A40C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        unsigned int a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5)
{
  struct _RTL_GENERIC_TABLE *v5; // r15
  __int64 v7; // rdx
  unsigned int v11; // ebx
  int v12; // r9d
  CProjectionBorderManager *v13; // rcx
  int updated; // eax
  CProjectionBorderManager *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]
  int v24; // [rsp+60h] [rbp-10h]

  v5 = this + 7;
  v19 = 0;
  v7 = *(_QWORD *)a4;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  Buffer = 0LL;
  v20 = 0LL;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(this + 7, v7) )
  {
    v11 = -2147418113;
    v17 = 953;
LABEL_3:
    v12 = v11;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v17);
    goto LABEL_18;
  }
  Buffer = *(_QWORD *)a4;
  *(_QWORD *)&v20 = a2;
  v19 = a3;
  if ( !RtlInsertElementGenericTable(v5, &Buffer, 0x38u, 0LL) )
  {
    v11 = -2147024882;
    v17 = 959;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a5 )
  {
    if ( a2 )
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForDisplay((CProjectionBorderManager *)this, a2, a4);
      v11 = updated;
      if ( updated < 0 )
      {
        v17 = 966;
LABEL_16:
        v12 = updated;
        goto LABEL_17;
      }
    }
    else
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays((CProjectionBorderManager *)this, a4);
      v11 = updated;
      if ( updated < 0 )
      {
        v17 = 970;
        goto LABEL_16;
      }
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v13, a2, a3);
  v11 = updated;
  if ( updated < 0 )
  {
    v17 = 974;
    goto LABEL_16;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v15, a2, a3);
  v11 = updated;
  if ( updated < 0 )
  {
    v17 = 975;
    goto LABEL_16;
  }
LABEL_18:
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)&v20 + 1);
  return v11;
}
