/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C018E490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C018E170 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C018FA58 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0198AA8 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  int MouseWheelRoutingMode; // ebx
  CMouseProcessor *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+48h] [rbp-10h]
  int v14; // [rsp+4Ch] [rbp-Ch]

  v5 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v5 + 104) & 8) != 0 )
    goto LABEL_10;
  if ( *(_DWORD *)(v5 + 96) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(v7) )
      goto LABEL_10;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
    if ( MouseWheelRoutingMode )
      goto LABEL_10;
  }
  if ( !gpqForeground )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 6, 38, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    return;
  }
LABEL_10:
  v8 = *((_QWORD *)a2 + 1);
  if ( (*(_WORD *)(v8 + 28) & 0xC00) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, 3072LL, a3);
    v8 = *((_QWORD *)a2 + 1);
  }
  v9 = *(_WORD *)(v8 + 28);
  v11[1] = v8;
  v11[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v10 = v9;
  LOWORD(v10) = ~v9;
  v13 = MouseWheelRoutingMode;
  v12 = 3;
  v14 = (v10 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v11);
}
