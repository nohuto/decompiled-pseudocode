/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0158494
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int16 v4; // cx
  int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredMsgKM("Must have valid MOUSE_INPUT_DATA at the time interception feature invoked");
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Why are we being called when original report specified absolute?");
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x10000) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Intercept should not have happened when original mouse report came with MIDPO_SYNTHETIC_WHEEL_WITH_POSITION");
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v4 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v4;
    *((_DWORD *)this + 4) = v5;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v4 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4) )
      MicrosoftTelemetryAssertTriggeredMsgKM("Intercept should not have happened when original mouse report came with MIDPO_USE_COORDINATES_EXPLICITLY");
  }
  else
  {
    if ( (*((_DWORD *)a2 + 5) & 0x10) == 0 )
      goto LABEL_15;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 14) |= 4u;
  }
  *((_DWORD *)this + 14) &= ~8u;
LABEL_15:
  HIDWORD(v7) = *((_DWORD *)a2 + 4);
  LODWORD(v7) = 2;
  *((_QWORD *)this + 8) = v7;
  v6 = *((_DWORD *)a2 + 5);
  if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x800u;
    v6 = *((_DWORD *)a2 + 5);
  }
  if ( (v6 & 4) != 0 )
  {
    *((_DWORD *)this + 14) |= 2u;
    v6 = *((_DWORD *)a2 + 5);
  }
  if ( (v6 & 0x20) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x2000u;
    v6 = *((_DWORD *)a2 + 5);
  }
  if ( (v6 & 0x40) != 0 )
    *((_DWORD *)this + 14) |= 0x8000u;
}
