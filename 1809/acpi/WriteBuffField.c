/*
 * XREFs of WriteBuffField @ 0x1C00244AC
 * Callers:
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 * Callees:
 *     WriteSystemMem @ 0x1C002454C (WriteSystemMem.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v7; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rdx

  v5 = 0;
  v7 = (a3[3] & 0xF) - 1;
  v9 = 1;
  if ( v7 <= 3 )
    v9 = 1 << v7;
  v10 = *a3;
  if ( (unsigned int)v10 + v9 > *(_DWORD *)(a2 + 8) )
  {
    LogError(3222536196LL, v10, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(211, *a3, *(_DWORD *)(a2 + 8), v9, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + (unsigned int)v10), v9);
  }
  return v5;
}
