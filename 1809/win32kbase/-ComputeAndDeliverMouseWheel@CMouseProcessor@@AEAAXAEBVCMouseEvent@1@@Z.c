/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0157840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0157630 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0160BDC (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  int MouseWheelRoutingMode; // ebx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v5 = *(_QWORD *)a2;
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v5 + 88) & 8) == 0 )
  {
    if ( *(_DWORD *)(v5 + 80) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
    {
      MouseWheelRoutingMode = 0;
    }
    else
    {
      MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
      if ( MouseWheelRoutingMode )
        goto LABEL_8;
    }
    if ( !gpqForeground )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        3u,
        0xAu,
        0x23u,
        (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
      return;
    }
  }
LABEL_8:
  v7 = *(_QWORD *)a2;
  if ( (*(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xC00) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, 3072LL, a3);
    v7 = *(_QWORD *)a2;
  }
  v8 = *(unsigned __int16 *)(v7 + 16);
  LOWORD(v8) = ~(_WORD)v8;
  v9 = v7;
  v10 = MouseWheelRoutingMode;
  v11 = (v8 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)&v9);
}
