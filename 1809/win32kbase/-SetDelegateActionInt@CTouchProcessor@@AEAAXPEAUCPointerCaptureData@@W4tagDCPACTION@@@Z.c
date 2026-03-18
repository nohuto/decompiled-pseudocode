/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01430F8
 * Callers:
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0136EF4 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0147E7C (WPP_RECORDER_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  switch ( (_DWORD)a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 432) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 432) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 432) |= 4u;
      break;
    default:
      v4 = (unsigned int)(a3 - 4);
      if ( (_DWORD)a3 == 4 )
      {
        v10 = *(_DWORD *)(a2 + 432);
        if ( (v10 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
          v10 = *(_DWORD *)(a2 + 432);
        }
        if ( (v10 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
          v10 = *(_DWORD *)(a2 + 432);
        }
        if ( (v10 & 8) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v4, a3);
          v10 = *(_DWORD *)(a2 + 432);
        }
        v7 = v10 | 8;
      }
      else
      {
        v5 = (unsigned int)(a3 - 5);
        if ( (_DWORD)a3 == 5 )
        {
          v8 = *(unsigned int *)(a2 + 432);
          v9 = v8;
          if ( (v8 & 4) == 0 && (v8 & 8) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, a3);
            v9 = *(_DWORD *)(a2 + 432);
          }
          v7 = v9 | 0x10;
        }
        else
        {
          if ( (_DWORD)a3 != 6 )
          {
            LOBYTE(v5) = 2;
            WPP_RECORDER_SF_L(
              *(_QWORD *)(a1 + 8),
              v5,
              11,
              291,
              (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
              a3);
            return;
          }
          v6 = *(_DWORD *)(a2 + 432);
          if ( (v6 & 0x20) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3);
            v6 = *(_DWORD *)(a2 + 432);
          }
          v7 = v6 | 0x20;
        }
      }
      *(_DWORD *)(a2 + 432) = v7;
      break;
  }
}
