/*
 * XREFs of ParseString @ 0x1C001ABC0
 * Callers:
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ParseArg @ 0x1C0012808 (ParseArg.c)
 *     ParseOpcode @ 0x1C0012CB0 (ParseOpcode.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall ParseString(__int64 a1, const void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  unsigned int v11; // r8d
  void *v12; // rax

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
    v11 = v9 + 1;
    *(_DWORD *)(a3 + 24) = v9 + 1;
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("\"%s\"");
      v11 = *(_DWORD *)(a3 + 24);
    }
    v12 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v11);
    *(_QWORD *)(a3 + 32) = v12;
    if ( v12 )
    {
      memmove(v12, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(139, 0, 0, 0, 0LL);
      v4 = -1073741670;
    }
    *a2 = (char *)*a2 + *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
