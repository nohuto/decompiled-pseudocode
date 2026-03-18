/*
 * XREFs of SleepStall @ 0x1C0021550
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C006508C (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  int v10; // ecx

  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v5 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( v8 <= 0xFF )
      {
        KeStallExecutionProcessor(v8);
        return v5;
      }
      v5 = -1072431089;
      LogError(3222536207LL, v4, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v10 = 178;
LABEL_12:
      PrintDebugMessage(v10, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
      return v5;
    }
    if ( v8 > 0xFFFF )
    {
      v5 = -1072431089;
      LogError(3222536207LL, v4, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      v10 = 177;
      goto LABEL_12;
    }
    if ( v8 )
    {
      v5 = SleepQueueRequest(a1, (unsigned int)v8);
      if ( !v5 )
        return 32772;
    }
  }
  return v5;
}
