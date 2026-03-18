/*
 * XREFs of SleepStall @ 0x1C001BC80
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     SleepQueueRequest @ 0x1C006707C (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  int v7; // ecx

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( v5 <= 0xFF )
      {
        KeStallExecutionProcessor(v5);
        return v4;
      }
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 178;
LABEL_12:
      PrintDebugMessage(v7, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
      return v4;
    }
    if ( v5 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v7 = 177;
      goto LABEL_12;
    }
    if ( v5 )
    {
      v4 = SleepQueueRequest(a1);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
