/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     RtlDosSearchPath_Ustr @ 0x180029E60 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x180002A5C (sxsisol_RespectDotLocal.c)
 *     RtlFindCharInUnicodeString @ 0x18000AA60 (RtlFindCharInUnicodeString.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_InitUnicodeStringBufferAroundUnicodeStrings @ 0x18000C084 (sxsisol_InitUnicodeStringBufferAroundUnicodeStrings.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x18002B310 (RtlGetFullPathName_UstrEx.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075930 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084B78 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  char v9; // r14
  _UNICODE_STRING *v14; // rdx
  __int64 v15; // r9
  char v16; // si
  NTSTATUS CharInUnicodeString; // ebx
  bool v18; // si
  RTL_PATH_TYPE v19; // r11d
  _UNICODE_STRING v20; // xmm0
  unsigned __int16 Length; // cx
  unsigned __int16 v22; // ax
  ULONG v23; // r14d
  PULONG v24; // rsi
  wchar_t *Buffer; // rax
  wchar_t *v26; // rcx
  USHORT v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToSearch; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v31[3]; // [rsp+64h] [rbp-9Ch] BYREF
  PUNICODE_STRING StringUsed[2]; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING v33; // [rsp+80h] [rbp-80h] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONG v35; // [rsp+94h] [rbp-6Ch]
  PULONG v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING v39; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v41[2]; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING v42; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t *v43; // [rsp+108h] [rbp+8h]
  wchar_t *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  _UNICODE_STRING v47[6]; // [rsp+130h] [rbp+30h] BYREF
  _WORD v48[16]; // [rsp+190h] [rbp+90h] BYREF
  char v49; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = 0;
  v35 = Flags;
  v36 = NewFlags;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (wchar_t *)&v49;
  v37 = 0LL;
  v28[0] = 0;
  v31[0] = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
  {
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->MaximumLength = 0;
    DynamicString->Buffer = 0LL;
  }
  v43 = v48;
  v45 = 32LL;
  v44 = v48;
  v46 = 32LL;
  v42.Buffer = v48;
  v48[0] = 0;
  *(_DWORD *)&v42.Length = 0x200000;
  sxsisol_InitUnicodeStringBufferAroundUnicodeStrings(v47, StaticString, DynamicString, NewName);
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_80;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_13;
LABEL_80:
    CharInUnicodeString = -1073741811;
    goto LABEL_42;
  }
  if ( DynamicString && !v15 )
    goto LABEL_80;
LABEL_13:
  StringToSearch = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_20;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          &StringToSearch,
                          (PUNICODE_STRING)&CharSet,
                          NonInclusivePrefixLength);
  if ( CharInUnicodeString >= 0 )
  {
    v16 = 1;
LABEL_17:
    CharInUnicodeString = 0;
    goto LABEL_18;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_17;
LABEL_18:
  if ( CharInUnicodeString < 0 )
    goto LABEL_42;
  if ( !v16 )
  {
    v41[1] = *Extension;
    v42.Length = 0;
    v41[0] = StringToSearch;
    CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v42, 2LL, v41);
    if ( CharInUnicodeString < 0 )
      goto LABEL_42;
    v9 = 1;
  }
LABEL_20:
  if ( v9 )
    StringToSearch = v42;
  v18 = 0;
  StringUsed[0] = 0LL;
  if ( v33.Buffer )
  {
    CharInUnicodeString = -1073741811;
  }
  else
  {
    v19 = (unsigned int)RtlDetermineDosPathNameType_Ustr(&StringToSearch);
    InputPathType = v19;
    if ( ((v19 - 1) & 0xFFFFFFFA) != 0 || v19 == RtlPathTypeRelative )
      goto LABEL_30;
    CharInUnicodeString = RtlGetFullPathName_UstrEx(
                            &StringToSearch,
                            &StaticStringa,
                            &v33,
                            StringUsed,
                            0LL,
                            0LL,
                            &InputPathType,
                            0LL);
    if ( CharInUnicodeString >= 0 )
    {
      v14 = StringUsed[0];
      v20 = *StringUsed[0];
      *(_UNICODE_STRING *)StringUsed = *StringUsed[0];
      if ( InputPathType == RtlPathTypeLocalDevice && StringToSearch.Buffer[5] == 58 && StringToSearch.Buffer[6] == 92 )
      {
        StringUsed[1] = (PUNICODE_STRING)((char *)StringUsed[1] + 8);
        StringToSearch.MaximumLength -= 8;
        Length = StringToSearch.Length - 8;
        StringToSearch.Buffer += 4;
        v22 = LOWORD(StringUsed[0]) - 8;
        StringToSearch.Length -= 8;
        WORD1(StringUsed[0]) -= 8;
        LOWORD(StringUsed[0]) -= 8;
        v20 = *(_UNICODE_STRING *)StringUsed;
      }
      else
      {
        Length = StringToSearch.Length;
        v22 = (unsigned __int16)StringUsed[0];
      }
      if ( Length > v22 )
      {
        StringToSearch = v20;
        v18 = v14 == &v33;
      }
LABEL_30:
      CharInUnicodeString = 0;
      if ( v18 )
        goto LABEL_33;
    }
  }
  if ( v33.Buffer )
  {
    NtdllpFreeStringRoutine();
    *(_QWORD *)&v33.Length = 0LL;
    v33.Buffer = 0LL;
  }
LABEL_33:
  if ( CharInUnicodeString >= 0 )
  {
    if ( (v35 & 1) != 0 )
    {
      if ( NtCurrentPeb()->ProcessParameters )
      {
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
        {
          CharInUnicodeString = sxsisol_RespectDotLocal(&StringToSearch, &v47[0].Length, v31);
          if ( CharInUnicodeString < 0 )
            goto LABEL_42;
        }
      }
    }
    v23 = v31[0];
    if ( (v31[0] & 1) != 0 )
    {
      v24 = v36;
    }
    else
    {
      if ( StaticString || (LOBYTE(v14) = 1, DynamicString) )
        LOBYTE(v14) = 0;
      v24 = v36;
      CharInUnicodeString = sxsisol_SearchActCtxForDllName(
                              (unsigned int)&StringToSearch,
                              (_DWORD)v14,
                              (unsigned int)&v37,
                              (_DWORD)v36,
                              (__int64)v47);
      if ( CharInUnicodeString < 0 )
        goto LABEL_42;
    }
    if ( !DynamicString && StaticString && v47[0].Buffer != StaticString->Buffer )
    {
      CharInUnicodeString = -1073741789;
      goto LABEL_42;
    }
    if ( FileNameSize )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(1u, v47, &RtlDosPathSeperatorsString, v28);
      if ( CharInUnicodeString < 0 )
        goto LABEL_42;
      *FileNameSize = ((unsigned __int64)v28[0] >> 1) + 1;
    }
    CharInUnicodeString = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v47);
    if ( CharInUnicodeString >= 0 )
    {
      if ( v24 )
        *v24 = v23;
      CharInUnicodeString = 0;
    }
LABEL_42:
    if ( CharInUnicodeString >= 0 )
      goto LABEL_50;
  }
  if ( LOBYTE(v47[5].Length) )
  {
    Buffer = v47[1].Buffer;
    if ( *(_QWORD *)&v47[1].Length && *(wchar_t **)&v47[1].Length != v47[1].Buffer )
    {
      v39.Buffer = *(wchar_t **)&v47[1].Length;
      RtlFreeAnsiString(&v39);
      Buffer = v47[1].Buffer;
    }
    if ( Buffer )
      *Buffer = 0;
  }
  memset(v47, 0, 0x58uLL);
LABEL_50:
  if ( v33.Buffer )
  {
    NtdllpFreeStringRoutine();
    *(_QWORD *)&v33.Length = 0LL;
    v33.Buffer = 0LL;
  }
  v26 = v44;
  if ( v43 )
  {
    if ( v43 != v44 )
    {
      UnicodeString.Buffer = v43;
      RtlFreeAnsiString(&UnicodeString);
      v26 = v44;
    }
    v45 = v46;
    v43 = v26;
  }
  v42.Buffer = v26;
  if ( v26 )
    *v26 = 0;
  v42.MaximumLength = v46;
  v42.Length = 0;
  if ( CharInUnicodeString == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return CharInUnicodeString;
}
