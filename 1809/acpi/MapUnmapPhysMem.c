/*
 * XREFs of MapUnmapPhysMem @ 0x1C0029590
 * Callers:
 *     OpRegion @ 0x1C0029440 (OpRegion.c)
 * Callees:
 *     MapPhysMem @ 0x1C0029604 (MapPhysMem.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = 0;
  v5 = a3;
  v6 = (int)a2;
  if ( (_DWORD)a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      v4 = -1072431098;
      LogError(3222536198LL, a2, a3, a4);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(77, KeGetCurrentIrql(), 0, 0, 0LL);
    }
    else if ( a4 )
    {
      v4 = MapPhysMem(a2, (unsigned int)a3, a4);
      if ( v4 < 0 )
      {
        LogError(3222536204LL, v8, v9, v10);
        AcpiDiagTraceAmlError(a1, 3222536204LL);
        PrintDebugMessage(102, v6, v5, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, (unsigned int)a3);
    }
  }
  else
  {
    v4 = -1072431089;
    LogError(3222536207LL, a2, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536207LL);
    PrintDebugMessage(216, 0, 0, 0, 0LL);
  }
  return (unsigned int)v4;
}
