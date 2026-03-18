/*
 * XREFs of MapUnmapPhysMem @ 0x1C0028D40
 * Callers:
 *     OpRegion @ 0x1C0028BF0 (OpRegion.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     MapPhysMem @ 0x1C0028DB4 (MapPhysMem.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  const void *v4; // rbx
  unsigned __int64 v5; // rdi
  int v8; // eax

  LODWORD(v4) = 0;
  v5 = a3;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      LODWORD(v4) = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(77, (const void *)KeGetCurrentIrql(), 0LL, 0LL, 0LL);
    }
    else if ( a4 )
    {
      v8 = MapPhysMem(a2, a3, a4);
      v4 = (const void *)v8;
      if ( v8 < 0 )
      {
        LogError(-1072431092);
        AcpiDiagTraceAmlError(a1, -1072431092);
        PrintDebugMessage(102, a2, (const void *)v5, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, a3);
    }
  }
  else
  {
    LODWORD(v4) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    PrintDebugMessage(216, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v4;
}
