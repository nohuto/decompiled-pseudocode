/*
 * XREFs of ParseName @ 0x1C0020F94
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C0021208 (ParseAndGetNameSpaceObject.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x1C0021070 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C002292C (RtlStringCchCopyA.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char *v4; // rdi
  char **v5; // rbx
  char v6; // cl
  unsigned int v7; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax

  v4 = a3;
  v5 = a2;
  v6 = **a2;
  if ( v6 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*v5;
LABEL_9:
    a3 = v4;
    a2 = v5;
    goto LABEL_4;
  }
  if ( v6 == 94 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*v5;
    v11 = v4 + 1;
    v12 = *v5;
    v13 = 1LL;
    do
    {
      if ( *v12 != 94 )
        break;
      *v11 = 94;
      v13 = (unsigned int)(v13 + 1);
      ++*v5;
      ++v11;
      v12 = *v5;
    }
    while ( (unsigned int)v13 < 0xFF );
    v4[v13] = 0;
    if ( **v5 == 94 )
    {
      v7 = -1073741562;
      LogError(3221225734LL, v12, v9, v10);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)v4, 0, 0, 0LL);
      return v7;
    }
    goto LABEL_9;
  }
  *a3 = 0;
LABEL_4:
  v7 = ParseNameTail(a1, a2, a3);
  if ( !v7 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v7;
}
