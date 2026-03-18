/*
 * XREFs of RegOpcodeHandler @ 0x1C00656A8
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0005980 (AMLIRegEventHandler.c)
 * Callees:
 *     FindOpcodeTerm @ 0x1C000CDF0 (FindOpcodeTerm.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall RegOpcodeHandler(unsigned int a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 OpcodeTerm; // rax

  v4 = 0;
  v5 = a2;
  if ( (_BYTE)a1 == 91 )
    OpcodeTerm = FindOpcodeTerm(a1 >> 8);
  else
    OpcodeTerm = (__int64)*(&OpcodeTable + a1);
  if ( OpcodeTerm )
  {
    if ( *(_QWORD *)(OpcodeTerm + 32) && v5 )
    {
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      PrintDebugMessage(166, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)-1072431090;
    }
    else
    {
      *(_DWORD *)(OpcodeTerm + 28) |= a4;
      *(_QWORD *)(OpcodeTerm + 32) = v5;
      *(_DWORD *)(OpcodeTerm + 40) = a3;
    }
  }
  else
  {
    LogError(-1072431072);
    AcpiDiagTraceAmlError(0LL, -1072431072);
    PrintDebugMessage(167, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431072;
  }
  return v4;
}
