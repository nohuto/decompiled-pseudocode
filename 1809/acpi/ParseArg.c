/*
 * XREFs of ParseArg @ 0x1C0021B5C
 * Callers:
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 * Callees:
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ParseInteger @ 0x1C002C338 (ParseInteger.c)
 */

__int64 __fastcall ParseArg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int v5; // ebp
  __int64 v6; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r8
  const void **v12; // r14
  __int64 v13; // r9
  unsigned __int8 v14; // cl

  v4 = a2;
  v5 = a4;
  v6 = a3;
  switch ( (char)a2 )
  {
    case 'B':
      v11 = 1LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11, a4);
    case 'C':
      return (unsigned int)ParseOpcode(a1, a4);
    case 'D':
      v11 = 4LL;
      return (unsigned int)ParseInteger(a1 + 120, v6, v11, a4);
    case 'N':
      return (unsigned int)ParseObjName(a1, (char **)(a1 + 120), a3, 0LL);
  }
  if ( (char)a2 != 79 )
  {
    if ( (char)a2 == 83 )
    {
      a3 = 0LL;
      return (unsigned int)ParseSuperName((_QWORD *)a1, v6, a3, a4);
    }
    if ( (char)a2 != 87 )
    {
      if ( (char)a2 != 115 )
      {
        v9 = -1072431101;
        LogError(3222536195LL, a2, a3, a4);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, v4, 0, 0, 0LL);
        return v9;
      }
      LOBYTE(a3) = 1;
      return (unsigned int)ParseSuperName((_QWORD *)a1, v6, a3, a4);
    }
    v11 = 2LL;
    return (unsigned int)ParseInteger(a1 + 120, v6, v11, a4);
  }
  v12 = (const void **)(a1 + 120);
  LOBYTE(a4) = 1;
  v9 = ParseIntObj(a1, a1 + 120, a3, a4);
  if ( v9 == -1072431103 )
  {
    LOBYTE(v13) = 1;
    v9 = ParseString(a1, v12, v6, v13);
    if ( v9 == -1072431103 )
    {
      v14 = *(_BYTE *)*v12;
      if ( (unsigned __int8)(v14 - 17) <= 2u )
      {
        v8 = PushTerm(a1, (unsigned int)*v12, v5, (unsigned int)*(&OpcodeTable + v14), v6);
        *v12 = (char *)*v12 + 1;
        return v8;
      }
    }
  }
  return v9;
}
