/*
 * XREFs of Acquire @ 0x1C001F460
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

__int64 __fastcall Acquire(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  _QWORD *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v11; // r11d
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      v5 = a2[8];
    }
    if ( *(_WORD *)(v5 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179730753, 64, (unsigned int)ParseAcquire, (__int64)&v12);
      if ( !v4 )
      {
        v7 = v12;
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(a2[8] + 96);
        *(_DWORD *)(v7 + 16) = (*(_WORD *)(a2[8] + 64) & 2 | 8) << 15;
        *(_WORD *)(v7 + 40) = *(_WORD *)(a2[10] + 56);
        *(_QWORD *)(v7 + 48) = a2[11];
        *(_QWORD *)(v7 + 56) = *(_QWORD *)(a2[8] + 16);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(3, v11, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
