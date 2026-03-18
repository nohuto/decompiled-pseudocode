/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140653F20
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x140154E04 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     ExpQueryModuleInformation @ 0x1406533E0 (ExpQueryModuleInformation.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x1406E39B0 (MmGetSystemRoutineAddress.c)
 *     AslStringUpcaseToMultiByteN @ 0x14070CA34 (AslStringUpcaseToMultiByteN.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140714B68 (ExpConvertLdrEntryToModuleInfo.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     KsepGetModuleInfoByName @ 0x14088405C (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x140912840 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140913170 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140976304 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x14098CB80 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140A1E38C (IopReassignSystemRoot.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x140132010 (CountUnicodeToUTF8.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlpIsUtf8Process @ 0x1406541F0 (RtlpIsUtf8Process.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x1406DF2B0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r13d
  unsigned int Length; // ebx
  unsigned int *Buffer; // r15
  unsigned int v9; // edi
  unsigned int v10; // ebx
  SIZE_T v11; // rcx
  unsigned __int16 MaximumLength; // cx
  ULONG UnicodeStringByteCount; // ebx
  wchar_t *v14; // rsi
  ULONG v15; // r14d
  char *v16; // rdi
  ULONG v17; // ebx
  __int64 v18; // r9
  __int64 i; // rax
  int v20; // r8d
  __int16 v21; // dx
  unsigned int v22; // eax
  char *StringRoutine; // rax
  __int16 v25; // dx
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v27; // [rsp+B0h] [rbp+18h]
  ULONG UTF8StringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  v27 = AllocateDestinationString;
  v6 = 0;
  Length = SourceString->Length;
  Buffer = (unsigned int *)SourceString->Buffer;
  v9 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( Length )
    {
      if ( Buffer )
        CountUnicodeToUTF8(Buffer, Length, &v26);
      v9 = v26;
    }
  }
  else
  {
    v10 = Length >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( ; v10; --v10 )
      {
        v25 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * *(unsigned __int16 *)Buffer);
        Buffer = (unsigned int *)((char *)Buffer + 2);
        v9 += (HIBYTE(v25) != 0) + 1;
      }
    }
    else
    {
      v9 = v10;
    }
  }
  v11 = v9 + 1;
  if ( (unsigned int)v11 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v9;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v9 + 1;
    StringRoutine = (char *)ExpAllocateStringRoutine(v11);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( (unsigned __int16)v9 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  UnicodeStringByteCount = SourceString->Length;
  v14 = SourceString->Buffer;
  v15 = DestinationString->Length;
  v16 = DestinationString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( UnicodeStringByteCount )
      RtlUnicodeToUTF8N(v16, v15, &UTF8StringActualByteCount, v14, UnicodeStringByteCount);
    else
      UTF8StringActualByteCount = 0;
  }
  else
  {
    v17 = UnicodeStringByteCount >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v20 = (int)v16;
      while ( v17 && v15 )
      {
        v21 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * *v14);
        LOWORD(v26) = v21;
        ++v14;
        if ( HIBYTE(v21) )
        {
          v22 = v15--;
          if ( v22 < 2 )
            break;
          *v16++ = HIBYTE(v21);
        }
        *v16++ = v21;
        --v15;
        --v17;
      }
      UTF8StringActualByteCount = (_DWORD)v16 - v20;
    }
    else
    {
      if ( v17 >= v15 )
        v17 = v15;
      UTF8StringActualByteCount = v17;
      v18 = NlsUnicodeToAnsiData;
      for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
        v16[i] = *(_BYTE *)(v14[i] + v18);
    }
  }
  DestinationString->Buffer[UTF8StringActualByteCount] = 0;
  return v6;
}
