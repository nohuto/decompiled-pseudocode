/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 * Callees:
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 *     sub_1800289DC @ 0x1800289DC (sub_1800289DC.c)
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180029690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180080B6C @ 0x180080B6C (sub_180080B6C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
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
  __int64 v13; // r9
  char v14; // r15
  char v15; // r14
  int CharInUnicodeString; // ebx
  int v17; // edx
  ULONG v18; // r14d
  PWCH Buffer; // rax
  WCHAR *v20; // rcx
  __int128 v22; // xmm1
  USHORT v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v24; // [rsp+34h] [rbp-CCh] BYREF
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v26; // [rsp+3Ch] [rbp-C4h]
  _UNICODE_STRING StringToSearch; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING v28; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING v34; // [rsp+B8h] [rbp-48h] BYREF
  WCHAR *v35; // [rsp+C8h] [rbp-38h]
  WCHAR *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  _UNICODE_STRING v39[6]; // [rsp+F0h] [rbp-10h] BYREF
  _WORD v40[16]; // [rsp+150h] [rbp+50h] BYREF
  char v41; // [rsp+170h] [rbp+70h] BYREF

  v26 = Flags;
  *(_QWORD *)&v29.Length = Extension;
  *(_DWORD *)&v28.Length = 0;
  v28.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (PWCH)&v41;
  v30 = 0LL;
  v23[0] = 0;
  v24 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
  {
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->Buffer = 0LL;
  }
  v35 = v40;
  v37 = 32LL;
  v36 = v40;
  v38 = 32LL;
  v40[0] = 0;
  v34.Buffer = v40;
  *(_DWORD *)&v34.Length = 0x200000;
  sub_1800289DC(v39, StaticString, DynamicString, NewName);
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    CharInUnicodeString = -1073741811;
    goto LABEL_31;
  }
  v14 = 0;
  if ( !OriginalName )
    goto LABEL_69;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_13;
LABEL_69:
    CharInUnicodeString = -1073741811;
    goto LABEL_31;
  }
  if ( DynamicString && !v13 )
    goto LABEL_69;
LABEL_13:
  StringToSearch = *OriginalName;
  if ( Extension && Extension->Length )
  {
    v15 = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            &StringToSearch,
                            (PUNICODE_STRING)&CharSet,
                            NonInclusivePrefixLength);
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString != -1073741275 )
      {
LABEL_18:
        if ( CharInUnicodeString < 0 )
          goto LABEL_31;
        if ( !v15 )
        {
          v22 = *(_OWORD *)*(_QWORD *)&v29.Length;
          v33[0] = StringToSearch;
          v33[1] = v22;
          CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v34, 2LL, v33);
          if ( CharInUnicodeString < 0 )
            goto LABEL_31;
          v14 = 1;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v15 = 1;
    }
    CharInUnicodeString = 0;
    goto LABEL_18;
  }
LABEL_20:
  if ( v14 )
    StringToSearch = v34;
  CharInUnicodeString = sub_180027528(&StringToSearch, &StaticStringa, &v28);
  if ( CharInUnicodeString >= 0 )
  {
    if ( (v26 & 1) == 0
      || !NtCurrentPeb()->ProcessParameters
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (CharInUnicodeString = sub_1800DE690(&StringToSearch, v39, &v24), CharInUnicodeString >= 0) )
    {
      v18 = v24;
      if ( (v24 & 1) != 0 )
        goto LABEL_63;
      if ( StaticString || (LOBYTE(v17) = 1, DynamicString) )
        LOBYTE(v17) = 0;
      CharInUnicodeString = sub_1800267DC(
                              (unsigned int)&StringToSearch,
                              v17,
                              (unsigned int)&v30,
                              (_DWORD)NewFlags,
                              (__int64)v39);
      if ( CharInUnicodeString >= 0 )
      {
LABEL_63:
        if ( !DynamicString && StaticString && v39[0].Buffer != StaticString->Buffer )
        {
          CharInUnicodeString = -1073741789;
          goto LABEL_31;
        }
        if ( FileNameSize )
        {
          CharInUnicodeString = RtlFindCharInUnicodeString(1u, v39, (PUNICODE_STRING)&stru_1801180B0, v23);
          if ( CharInUnicodeString < 0 )
            goto LABEL_31;
          *FileNameSize = ((unsigned __int64)v23[0] >> 1) + 1;
        }
        CharInUnicodeString = sub_180080B6C(v39);
        if ( CharInUnicodeString >= 0 )
        {
          if ( NewFlags )
            *NewFlags = v18;
          CharInUnicodeString = 0;
        }
      }
    }
  }
LABEL_31:
  if ( CharInUnicodeString < 0 )
  {
    if ( LOBYTE(v39[5].Length) )
    {
      Buffer = v39[1].Buffer;
      if ( *(_QWORD *)&v39[1].Length && *(PWCH *)&v39[1].Length != v39[1].Buffer )
      {
        v29.Buffer = *(PWCH *)&v39[1].Length;
        RtlFreeUnicodeString(&v29);
        Buffer = v39[1].Buffer;
      }
      if ( Buffer )
        *Buffer = 0;
    }
    memset(v39, 0, 0x58uLL);
  }
  if ( v28.Buffer )
  {
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v28.Buffer);
    *(_QWORD *)&v28.Length = 0LL;
    v28.Buffer = 0LL;
  }
  v20 = v36;
  if ( v35 )
  {
    if ( v35 != v36 )
    {
      UnicodeString.Buffer = v35;
      RtlFreeUnicodeString(&UnicodeString);
      v20 = v36;
    }
    v37 = v38;
    v35 = v20;
  }
  v34.Buffer = v20;
  if ( v20 )
    *v20 = 0;
  v34.MaximumLength = v38;
  v34.Length = 0;
  if ( CharInUnicodeString == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return CharInUnicodeString;
}
