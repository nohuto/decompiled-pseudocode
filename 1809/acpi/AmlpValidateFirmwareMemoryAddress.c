/*
 * XREFs of AmlpValidateFirmwareMemoryAddress @ 0x1C00296A8
 * Callers:
 *     MapPhysMem @ 0x1C0029604 (MapPhysMem.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C00613D4 (AMLIValidateFirmwareMemoryAddress.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall AmlpValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = *a1;
  v7 = a2 + *a1;
  if ( v7 <= 4096 )
  {
    return 0;
  }
  else
  {
    v8 = MemoryInfo;
    if ( v4 < 4096 )
      v4 = 4096LL;
    v9 = 0;
    v10 = 0;
    if ( *(_QWORD *)(MemoryInfo + 8) )
    {
      v11 = 0LL;
      do
      {
        v12 = *(_QWORD *)(v8 + 24 * v11 + 16);
        if ( v7 > v12 && v4 < *(_QWORD *)(v8 + 24 * v11 + 24) + v12 )
        {
          if ( *(_DWORD *)(v8 + 24 * v11 + 32) == 1 )
            return (unsigned int)-1073741788;
          if ( *(_DWORD *)(v8 + 24 * v11 + 32) == 3 && gAllowInvalidReclaimMemoryMap )
          {
            LogError(3222536208LL, v8, 3 * v11, a4);
            AcpiDiagTraceAmlError(0LL, 3222536208LL);
            PrintDebugMessage(103, *a1, a2 + *a1, 0, 0LL);
          }
        }
        v8 = MemoryInfo;
        v11 = ++v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(MemoryInfo + 8) );
    }
  }
  return v9;
}
