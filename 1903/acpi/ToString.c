/*
 * XREFs of ToString @ 0x1C006A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // ecx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(191, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x85u, (__int64)&v12);
      if ( !v5 )
      {
        v6 = *(_QWORD *)(a2 + 80);
        if ( *(_QWORD *)(v6 + 56) )
        {
          v7 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          v6 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v6 + 56) != v7 )
          {
            v8 = *(unsigned int *)(v6 + 56);
            goto LABEL_14;
          }
        }
LABEL_13:
        v8 = 0LL;
LABEL_14:
        v9 = ConvertToString(v6, v8, *(_QWORD *)(a2 + 88));
        v5 = v9;
        switch ( v9 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            v10 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            PrintDebugMessage(189, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)-1072431098;
          case 0xC0140006:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            v10 = 192;
            break;
          default:
            return v5;
        }
        PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "B");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v12);
      if ( !v5 )
      {
        v6 = *(_QWORD *)(a2 + 80);
        goto LABEL_13;
      }
    }
  }
  return v5;
}
