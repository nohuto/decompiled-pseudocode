/*
 * XREFs of ParseString @ 0x1C00022CC
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseString(__int64 a1, const void **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = 0;
  if ( *(_BYTE *)*a2 == 13 )
  {
    *a2 = (char *)*a2 + 1;
    *(_WORD *)(a3 + 2) = 2;
    v9 = -1LL;
    v10 = *a2;
    do
      ++v9;
    while ( v10[v9] );
    *(_DWORD *)(a3 + 24) = v9 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"");
    v11 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL);
    *(_QWORD *)(a3 + 32) = v11;
    if ( v11 )
    {
      memmove(v11, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(3221225626LL, v12, v13, v14);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(139, 0, 0, 0, 0LL);
      v4 = -1073741670;
    }
    *a2 = (char *)*a2 + *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !(_BYTE)a4 )
    {
      LogError(3222536193LL, a2, a3, a4);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
