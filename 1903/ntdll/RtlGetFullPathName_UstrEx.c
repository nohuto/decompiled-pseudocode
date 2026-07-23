/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180028E40
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
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
  WCHAR *v11; // r12
  SIZE_T *v12; // r13
  SIZE_T *v13; // r15
  WCHAR *v14; // rsi
  USHORT MaximumLength; // bx
  WCHAR *Buffer; // r8
  unsigned int v17; // eax
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
  v14 = 0LL;
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
    v17 = sub_180027B70(&FileName->Length, MaximumLength, Buffer, &v30, NameInvalid, (__int64)&FilePartPrefixCch);
    LOWORD(v19) = v17;
    if ( v17 )
    {
      if ( StaticString && v17 < (unsigned int)BytesRequired )
      {
        StaticString->Length = v17;
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
        if ( v11 && v17 < (unsigned int)BytesRequired )
        {
          DynamicString->MaximumLength = v31;
          DynamicString->Length = v17;
          v11[(unsigned __int64)v17 >> 1] = 0;
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
        if ( (unsigned __int64)v17 + 2 > 0xFFFE )
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
            v14 = (WCHAR *)sub_18006D6B8(v22, v18);
            if ( !v14 )
            {
              v20 = -1073741801;
              goto LABEL_18;
            }
            v24 = sub_180027B70(
                    &FileName->Length,
                    (unsigned int)v22 - 2,
                    v14,
                    &v30,
                    NameInvalid,
                    (__int64)&FilePartPrefixCch);
            v19 = v24;
            if ( !v24 )
              goto LABEL_47;
            if ( v24 <= (unsigned __int64)(v23 - 2) )
              break;
            RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v14);
            if ( (unsigned __int64)(v19 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v30 )
              v28 = (v30 - (__int64)v14) >> 1;
            else
              v28 = 0LL;
            *v13 = v28;
          }
          v14[(unsigned __int64)(unsigned int)v19 >> 1] = 0;
          DynamicString->Buffer = v14;
          DynamicString->Length = v19;
          DynamicString->MaximumLength = v23;
          if ( StringUsed )
            *StringUsed = DynamicString;
          v20 = 0;
        }
        v14 = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = v17;
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
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v11);
    if ( v14 )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v14);
LABEL_22:
    *InputPathType = (int)FilePartPrefixCch;
    return v20;
  }
  MaximumLength = 520;
  v31 = 520LL;
  v26 = sub_18006D6B8(520LL, 0LL);
  v11 = (WCHAR *)v26;
  if ( v26 )
  {
    Buffer = (WCHAR *)v26;
    goto LABEL_11;
  }
  return -1073741801;
}
