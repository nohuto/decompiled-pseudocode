/*
 * XREFs of Acquire @ 0x1C00226E0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall Acquire(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v14; // r11d
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v5 )
  {
    v8 = *(_QWORD *)(a2[10] + 16LL);
    v9 = gdwfAMLI;
    a2[8] = v8;
    if ( (v9 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
      v8 = a2[8];
    }
    if ( *(_WORD *)(v8 + 66) == 9 )
    {
      v5 = PushFrame(a1, 1179730753, 64, (unsigned int)ParseAcquire, (__int64)&v15);
      if ( !v5 )
      {
        v10 = v15;
        *(_QWORD *)(v15 + 32) = *(_QWORD *)(a2[8] + 96LL);
        *(_DWORD *)(v10 + 16) = (*(_WORD *)(a2[8] + 64LL) & 2 | 8) << 15;
        *(_WORD *)(v10 + 40) = *(_WORD *)(a2[10] + 56LL);
        *(_QWORD *)(v10 + 48) = a2[11];
        *(_QWORD *)(v10 + 56) = *(_QWORD *)(a2[8] + 16LL);
      }
    }
    else
    {
      v5 = -1072431095;
      LogError(3222536201LL, v4, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(3, v14, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v5;
}
