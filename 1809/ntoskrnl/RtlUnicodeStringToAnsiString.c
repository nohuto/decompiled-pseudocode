/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x14067CC90
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400F4AFC (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     EtwpBuildProcessEvent @ 0x14066DBEC (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x14067CA50 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x14067CAD0 (ExpQueryModuleInformation.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067D5AC (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140749A88 (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x140849DEC (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D6B80 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140937C04 (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x14094DB74 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x1409DC7D0 (IopReassignSystemRoot.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x14013233C (CountUnicodeToUTF8.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x1406C08F0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r14d
  unsigned int *Buffer; // r11
  int v8; // r10d
  int v9; // r9d
  SIZE_T v10; // rcx
  unsigned __int16 MaximumLength; // cx
  ULONG UnicodeStringByteCount; // r9d
  wchar_t *v13; // r11
  ULONG Length; // edx
  char *v15; // r10
  ULONG v16; // r9d
  __int64 v17; // rbx
  ULONG i; // eax
  int v19; // ebx
  __int16 v20; // r8
  unsigned int v21; // eax
  char *StringRoutine; // rax
  __int16 v24; // dx
  int v25; // [rsp+98h] [rbp+10h] BYREF
  BOOLEAN v26; // [rsp+A0h] [rbp+18h]
  ULONG UTF8StringActualByteCount; // [rsp+A8h] [rbp+20h] BYREF

  v26 = AllocateDestinationString;
  v6 = 0;
  Buffer = (unsigned int *)SourceString->Buffer;
  v8 = 0;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    if ( SourceString->Length )
    {
      if ( Buffer )
        CountUnicodeToUTF8(Buffer, SourceString->Length, (unsigned int *)&v25);
      v8 = v25;
    }
  }
  else
  {
    v9 = SourceString->Length >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      for ( ; v9; --v9 )
      {
        v24 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * *(unsigned __int16 *)Buffer);
        Buffer = (unsigned int *)((char *)Buffer + 2);
        v8 += (HIBYTE(v24) != 0) + 1;
      }
    }
    else
    {
      v8 = SourceString->Length >> 1;
    }
  }
  v10 = (unsigned int)(v8 + 1);
  if ( (unsigned int)v10 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v8;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v8 + 1;
    StringRoutine = (char *)ExpAllocateStringRoutine(v10);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( (unsigned __int16)v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  UnicodeStringByteCount = SourceString->Length;
  v13 = SourceString->Buffer;
  Length = DestinationString->Length;
  v15 = DestinationString->Buffer;
  if ( BYTE1(NlsMbCodePageTag) )
  {
    if ( SourceString->Length )
      RtlUnicodeToUTF8N(v15, Length, &UTF8StringActualByteCount, v13, UnicodeStringByteCount);
    else
      UTF8StringActualByteCount = 0;
  }
  else
  {
    v16 = UnicodeStringByteCount >> 1;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      v19 = (int)DestinationString->Buffer;
      while ( v16 && Length )
      {
        v20 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * *v13);
        LOWORD(v25) = v20;
        ++v13;
        if ( HIBYTE(v20) )
        {
          v21 = Length--;
          if ( v21 < 2 )
            break;
          *v15++ = HIBYTE(v20);
        }
        *v15++ = v20;
        --Length;
        --v16;
      }
      UTF8StringActualByteCount = (_DWORD)v15 - v19;
    }
    else
    {
      if ( v16 >= Length )
        v16 = DestinationString->Length;
      UTF8StringActualByteCount = v16;
      v17 = NlsUnicodeToAnsiData;
      for ( i = 0; i < v16; ++i )
        v15[i] = *(_BYTE *)(v13[i] + v17);
    }
  }
  DestinationString->Buffer[UTF8StringActualByteCount] = 0;
  return v6;
}
