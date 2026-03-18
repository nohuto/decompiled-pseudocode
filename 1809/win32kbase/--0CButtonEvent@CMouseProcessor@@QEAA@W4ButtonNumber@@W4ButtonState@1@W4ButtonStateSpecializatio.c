/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C006FD24
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C006EA90 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C006FDD4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v6; // r10
  void *v7; // rax

  v6 = *a5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  if ( !(_DWORD)a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    a2 = *(unsigned int *)(a1 + 8);
  }
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect only ONE value to be set right now: At this point are must be dealing with single button action!");
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expected button state either break or make");
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 88LL) & 0x800) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 16) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 8), a2) )
      *(_DWORD *)(a1 + 8) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 1:
      v7 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      break;
    case 2:
      v7 = &unk_1C0193BE8;
      break;
    case 4:
      v7 = &unk_1C0193C00;
      break;
    case 8:
      v7 = &unk_1C0193C18;
      break;
    case 0x10:
      v7 = &unk_1C0193C30;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected button value");
      return a1;
  }
  *(_QWORD *)(a1 + 24) = v7;
  return a1;
}
