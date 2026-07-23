/*
 * XREFs of sub_180027528 @ 0x180027528
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall sub_180027528(PUNICODE_STRING FileName, PUNICODE_STRING StaticString, PUNICODE_STRING DynamicString)
{
  bool v3; // r14
  RTL_PATH_TYPE v7; // r11d
  NTSTATUS FullPathName_Ustr; // ebx
  PUNICODE_STRING v9; // rcx
  _UNICODE_STRING v10; // xmm0
  USHORT v11; // ax
  _OBJECT_BOUNDARY_DESCRIPTOR *v12; // rcx
  PWCH Buffer; // rax
  _UNICODE_STRING v15; // [rsp+40h] [rbp-10h]
  RTL_PATH_TYPE InputPathType; // [rsp+70h] [rbp+20h] BYREF
  PUNICODE_STRING StringUsed; // [rsp+88h] [rbp+38h] BYREF

  StringUsed = 0LL;
  v3 = 0;
  if ( !FileName || DynamicString && DynamicString->Buffer )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v7 = (unsigned int)sub_18002891C(FileName);
    InputPathType = v7;
    if ( ((v7 - 1) & 0xFFFFFFFA) != 0 || v7 == RtlPathTypeRelative )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          FileName,
                          StaticString,
                          DynamicString,
                          &StringUsed,
                          0LL,
                          0LL,
                          &InputPathType,
                          0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v9 = StringUsed;
      v10 = *StringUsed;
      v15 = *StringUsed;
      if ( InputPathType == RtlPathTypeLocalDevice && (Buffer = FileName->Buffer, Buffer[5] == 58) && Buffer[6] == 92 )
      {
        v15.Buffer += 4;
        FileName->Buffer = Buffer + 4;
        FileName->Length -= 8;
        v11 = v15.Length - 8;
        FileName->MaximumLength -= 8;
        v15.MaximumLength -= 8;
        v15.Length -= 8;
        v10 = v15;
      }
      else
      {
        v11 = (USHORT)*StringUsed;
      }
      if ( FileName->Length > v11 )
      {
        v3 = v9 == DynamicString;
        *FileName = v10;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v3 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  v12 = (_OBJECT_BOUNDARY_DESCRIPTOR *)DynamicString->Buffer;
  if ( v12 )
  {
    RtlDeleteBoundaryDescriptor(v12);
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->Buffer = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
