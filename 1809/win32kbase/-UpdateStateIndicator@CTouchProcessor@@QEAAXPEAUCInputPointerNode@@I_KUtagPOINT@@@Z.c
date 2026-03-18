/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01478D0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0146A94 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C013FD0C (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v6; // edi
  int v9; // r8d
  bool v10; // zf
  int v11; // r10d
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // r9d

  v6 = a3;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Fu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v9 = *((_DWORD *)a2 + 82);
  if ( (v6 & 0x10000) != 0 )
  {
    *((_QWORD *)a2 + 31) = a4;
    v10 = *((_DWORD *)a2 + 10) == 3;
    *((_DWORD *)a2 + 82) = v9 & 0xFFFFFFFC;
    v11 = 300;
    if ( !v10 )
      v11 = 270;
    *((_DWORD *)a2 + 64) = a5.x - v11;
    *((_DWORD *)a2 + 65) = a5.y - v11;
    *((_DWORD *)a2 + 66) = v11 + a5.x;
    *((_DWORD *)a2 + 67) = v11 + a5.y;
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 64;
LABEL_22:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  else
  {
    if ( (v6 & 0x40004) == 0 )
    {
      *((_QWORD *)a2 + 31) = 0LL;
      *((_DWORD *)a2 + 82) = v9 & 0xFFFFFFFC;
      *((_QWORD *)a2 + 32) = 0LL;
      *((_QWORD *)a2 + 33) = 0LL;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return;
      v13 = 65;
      goto LABEL_22;
    }
    LOBYTE(v14) = *((_DWORD *)a2 + 82);
    if ( (v9 & 2) == 0 && !PtInRect((_DWORD *)a2 + 64, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)a2 + 82) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((unsigned int *)a2 + 10), *((_QWORD *)a2 + 31), a4).LowPart )
    {
      *((_DWORD *)a2 + 82) |= 1u;
    }
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 66;
      goto LABEL_22;
    }
  }
}
