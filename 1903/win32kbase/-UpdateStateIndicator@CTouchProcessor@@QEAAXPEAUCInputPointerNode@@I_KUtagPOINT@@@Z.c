/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0176894
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C016E73C (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v6; // edi
  struct CInputPointerNode *v7; // rbx
  int v9; // r8d
  bool v10; // zf
  int v11; // r9d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // r9d

  v6 = a3;
  v7 = a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      67,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  v9 = *((_DWORD *)v7 + 72);
  if ( (v6 & 0x10000) != 0 )
  {
    LODWORD(a2) = a5.y;
    *((_QWORD *)v7 + 26) = a4;
    v10 = *((_DWORD *)v7 + 14) == 3;
    *((_DWORD *)v7 + 72) = v9 & 0xFFFFFFFC;
    v11 = 300;
    if ( !v10 )
      v11 = 270;
    *((_DWORD *)v7 + 54) = a5.x - v11;
    *((_DWORD *)v7 + 55) = a5.y - v11;
    *((_DWORD *)v7 + 56) = v11 + a5.x;
    *((_DWORD *)v7 + 57) = v11 + a5.y;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 68;
LABEL_26:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          v12->DeviceExtension,
          (_DWORD)a2,
          7,
          v13,
          (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      }
    }
  }
  else if ( (v6 & 0x40004) != 0 )
  {
    LOBYTE(v14) = *((_DWORD *)v7 + 72);
    if ( (v9 & 2) == 0 && !PtInRect((_DWORD *)v7 + 54, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)v7 + 72) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((unsigned int *)v7 + 14), *((_QWORD *)v7 + 26), a4).LowPart )
    {
      *((_DWORD *)v7 + 72) |= 1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 70;
        goto LABEL_26;
      }
    }
  }
  else
  {
    *((_QWORD *)v7 + 26) = 0LL;
    *((_DWORD *)v7 + 72) = v9 & 0xFFFFFFFC;
    *((_QWORD *)v7 + 27) = 0LL;
    *((_QWORD *)v7 + 28) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 69;
        goto LABEL_26;
      }
    }
  }
}
