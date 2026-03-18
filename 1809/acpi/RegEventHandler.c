/*
 * XREFs of RegEventHandler @ 0x1C002B9E8
 * Callers:
 *     AMLIRegEventHandler @ 0x1C002B7F4 (AMLIRegEventHandler.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(-1072431090);
    AcpiDiagTraceAmlError(0LL, -1072431090);
    PrintDebugMessage(165, 0, 0, 0, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
