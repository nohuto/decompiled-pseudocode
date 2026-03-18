/*
 * XREFs of WriteBuffField @ 0x1C0020674
 * Callers:
 *     WriteFieldObj @ 0x1C001F6A0 (WriteFieldObj.c)
 * Callees:
 *     WriteSystemMem @ 0x1C0020714 (WriteSystemMem.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v8; // ebx

  v4 = 0;
  v6 = (a3[3] & 0xF) - 1;
  v8 = 1;
  if ( v6 <= 3 )
    v8 = 1 << v6;
  if ( *a3 + v8 > *(_DWORD *)(a2 + 8) )
  {
    LogError(3222536196LL);
    AcpiDiagTraceAmlError(a1, 3222536196LL);
    PrintDebugMessage(211, *a3, *(_DWORD *)(a2 + 8), v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + *a3), v8);
  }
  return v4;
}
