/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180028E40
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180027528 (sxsisol_CanonicalizeFullPathFileName.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UstrEx(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *StringUsed,
        SIZE_T *FilePartPrefixCch,
        PBOOLEAN NameInvalid,
        RTL_PATH_TYPE *InputPathType,
        SIZE_T *BytesRequired)
{
  wchar_t *v11; // r12
  SIZE_T *v12; // r13
  SIZE_T *v13; // r15
  wchar_t *StringRoutine; // rsi
  unsigned __int16 MaximumLength; // bx
  wchar_t *Buffer; // r8
  unsigned int FullPathName_Ustr; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  NTSTATUS v20; // ebx
  unsigned __int16 v22; // bx
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v11 = 0LL;
  if ( StringUsed )
    *StringUsed = 0LL;
  v12 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  v13 = FilePartPrefixCch;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  StringRoutine = 0LL;
  SLODWORD(FilePartPrefixCch) = *InputPathType;
  if ( StaticString )
  {
    if ( DynamicString && !StringUsed )
    {
      v20 = -1073741811;
      goto LABEL_22;
    }
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    v31 = MaximumLength;
LABEL_11:
    LODWORD(BytesRequired) = MaximumLength;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &FileName->Length,
                          MaximumLength,
                          Buffer,
                          &v30,
                          NameInvalid,
                          (__int64)&FilePartPrefixCch);
    LOWORD(v19) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( StaticString && FullPathName_Ustr < (unsigned int)BytesRequired )
      {
        StaticString->Length = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v30 )
            v25 = (signed __int64)(v30 - (unsigned __int64)StaticString->Buffer) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( StringUsed )
          *StringUsed = StaticString;
        v20 = 0;
      }
      else if ( DynamicString )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v31;
          DynamicString->Length = FullPathName_Ustr;
          v11[(unsigned __int64)FullPathName_Ustr >> 1] = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - (__int64)v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( StringUsed )
            *StringUsed = DynamicString;
          DynamicString->Buffer = v11;
          v20 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)FullPathName_Ustr + 2 > 0xFFFE )
        {
LABEL_56:
          v20 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v22 = v19 + 2;
            v23 = v22;
            StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v22, v18);
            if ( !StringRoutine )
            {
              v20 = -1073741801;
              goto LABEL_18;
            }
            v24 = RtlGetFullPathName_Ustr(
                    &FileName->Length,
                    (unsigned int)v22 - 2,
                    StringRoutine,
                    &v30,
                    NameInvalid,
                    (__int64)&FilePartPrefixCch);
            v19 = v24;
            if ( !v24 )
              goto LABEL_47;
            if ( v24 <= (unsigned __int64)(v23 - 2) )
              break;
            NtdllpFreeStringRoutine(StringRoutine);
            if ( (unsigned __int64)(v19 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v30 )
              v28 = (v30 - (__int64)StringRoutine) >> 1;
            else
              v28 = 0LL;
            *v13 = v28;
          }
          StringRoutine[(unsigned __int64)(unsigned int)v19 >> 1] = 0;
          DynamicString->Buffer = StringRoutine;
          DynamicString->Length = v19;
          DynamicString->MaximumLength = v23;
          if ( StringUsed )
            *StringUsed = DynamicString;
          v20 = 0;
        }
        StringRoutine = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v20 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v20 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v20;
  }
  MaximumLength = 520;
  v31 = 520LL;
  v26 = NtdllpAllocateStringRoutine(520LL, 0LL);
  v11 = (wchar_t *)v26;
  if ( v26 )
  {
    Buffer = (wchar_t *)v26;
    goto LABEL_11;
  }
  return -1073741801;
}
