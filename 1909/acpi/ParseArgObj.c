/*
 * XREFs of ParseArgObj @ 0x1C002A218
 * Callers:
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     CopyObjData @ 0x1C002A298 (CopyObjData.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 */

__int64 __fastcall ParseArgObj(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r14

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned int)**(unsigned __int8 **)(a1 + 120) - 104;
  v7 = (unsigned int)v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 60) )
  {
    LogError(-1072431099);
    AcpiDiagTraceAmlError(a1, -1072431099);
    PrintDebugMessage(122, (const void *)v7, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    CopyObjData(a2, *(_QWORD *)(v5 + 64) + 40 * v6);
    ++*(_QWORD *)(a1 + 120);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Arg%d=");
      PrintObject(a2);
    }
  }
  return v2;
}
