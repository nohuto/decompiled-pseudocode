/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0191C74
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0191AD4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int16 v8; // cx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000LL, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v8 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v9 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v8;
    *((_DWORD *)this + 4) = v9;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v8 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4LL, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    *((_DWORD *)this + 18) &= ~8u;
  }
  else if ( (*((_DWORD *)a2 + 5) & 0x10) != 0 )
  {
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
  }
  HIDWORD(v14) = *((_DWORD *)a2 + 4);
  LODWORD(v14) = 2;
  *((_QWORD *)this + 10) = v14;
  v13 = *((_DWORD *)a2 + 5);
  if ( (v13 & 2) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x800u;
    v13 = *((_DWORD *)a2 + 5);
  }
  if ( (v13 & 4) != 0 )
  {
    *((_DWORD *)this + 18) |= 2u;
    v13 = *((_DWORD *)a2 + 5);
  }
  if ( (v13 & 0x20) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x2000u;
    v13 = *((_DWORD *)a2 + 5);
  }
  if ( (v13 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
