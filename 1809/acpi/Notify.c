/*
 * XREFs of Notify @ 0x1C0024BD0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "OI");
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v7 + 56) > 0xFFuLL )
    {
      v4 = -1072431089;
      LogError(3222536207LL, v7, v5, v6);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      PrintDebugMessage(115, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0, 0, 0LL);
    }
    else if ( ghNotify )
    {
      v8 = *(_QWORD *)(v7 + 16);
      v9 = gdwfAMLI;
      *(_QWORD *)(a2 + 64) = v8;
      if ( (v9 & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
        v8 = *(_QWORD *)(a2 + 64);
        v7 = *(_QWORD *)(a2 + 80);
      }
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64), __int64))ghNotify)(
              2LL,
              *(unsigned int *)(v7 + 56),
              v8 + 120,
              qword_1C0081108,
              RestartCtxtCallback,
              a1 + 328);
      v4 = v10;
      if ( v10 == 259 )
      {
        return 32772;
      }
      else if ( v10 )
      {
        LogError(3222536198LL, v11, v12, v13);
        AcpiDiagTraceAmlError(a1, 3222536198LL);
        PrintDebugMessage(114, v4, 0, 0, 0LL);
        return (unsigned int)-1072431098;
      }
    }
  }
  return v4;
}
