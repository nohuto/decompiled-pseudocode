/*
 * XREFs of ParseIntObj @ 0x1C00221F4
 * Callers:
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, _WORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v7; // r10d
  const char *v9; // rcx

  v4 = 0;
  v7 = *(unsigned __int8 *)*a2;
  *a2 = (_WORD *)((char *)*a2 + 1);
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( !(_BYTE)v7 )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (gDebugger & 0xD0) == 0 )
      return v4;
    v9 = "Zero";
LABEL_24:
    ConPrintf(v9);
    return v4;
  }
  switch ( v7 )
  {
    case 1:
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "One";
      goto LABEL_24;
    case 10:
      *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
      *a2 = (_WORD *)((char *)*a2 + 1);
      goto LABEL_5;
    case 11:
      *(_WORD *)(a3 + 16) = *(*a2)++;
      goto LABEL_5;
    case 12:
      *(_DWORD *)(a3 + 16) = *(_DWORD *)*a2;
      *a2 += 2;
LABEL_5:
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("0x%I64x");
      return v4;
    case 14:
      *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
      *a2 += 4;
      goto LABEL_5;
    case 255:
      *(_QWORD *)(a3 + 16) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      if ( (gDebugger & 0xD0) == 0 )
        return v4;
      v9 = "Ones";
      goto LABEL_24;
  }
  *a2 = (_WORD *)((char *)*a2 - 1);
  if ( !(_BYTE)a4 )
  {
    LogError(3222536193LL, (unsigned int)(v7 - 255), 1LL, a4);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(128, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
  }
  return (unsigned int)-1072431103;
}
