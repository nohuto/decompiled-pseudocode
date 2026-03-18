/*
 * XREFs of PopFxGenerateFriendlyName @ 0x14076F1EC
 * Callers:
 *     PopFxRegisterDevice @ 0x14076F080 (PopFxRegisterDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B888 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140191794 (RtlUnicodeStringCatString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405BF670 (IoGetDeviceProperty.c)
 */

void __fastcall PopFxGenerateFriendlyName(UNICODE_STRING *a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // r14
  PVOID v5; // r15
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v7; // ebx
  const UNICODE_STRING *v8; // r12
  ULONG v9; // edi
  PVOID v10; // rsi
  __int64 v11; // r9
  _WORD *v12; // rax
  __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int16 Length; // ax
  PVOID v16; // r11
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  const wchar_t *v19; // rdx
  __int16 v20; // cx
  unsigned __int64 v21; // r8
  __int64 v22; // r11
  unsigned __int16 v23; // bx
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a2 + 32);
  v5 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  DeviceProperty = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
  v7 = DeviceProperty;
  if ( DeviceProperty != -1073741789 )
  {
    if ( DeviceProperty != -1073741772 )
      goto LABEL_37;
    v23 = *(_WORD *)(a2 + 280);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v23, 0x4D584650u);
    if ( !PoolWithTag )
      goto LABEL_52;
    DestinationString.Buffer = PoolWithTag;
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v23;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a2 + 280));
LABEL_34:
    v10 = 0LL;
    v7 = 0;
    a1[74] = DestinationString;
    goto LABEL_35;
  }
  if ( BufferLength > 0xFFFF )
    goto LABEL_52;
  v8 = (const UNICODE_STRING *)(a2 + 280);
  v9 = *(unsigned __int16 *)(a2 + 280) + BufferLength + 6;
  if ( v9 > 0xFFFF )
    goto LABEL_52;
  v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x4D584650u);
  if ( !v10 )
    goto LABEL_52;
  v7 = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, BufferLength, v10, &BufferLength);
  if ( v7 < 0 )
    goto LABEL_35;
  v11 = 0x7FFFLL;
  v12 = v10;
  v13 = 0x7FFFLL;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v13;
  }
  while ( v13 );
  v7 = v13 == 0 ? 0xC000000D : 0;
  v14 = v13 ? 0x7FFF - v13 : 0;
  if ( v13 )
  {
    Length = 2 * v14;
    DestinationString.Buffer = (wchar_t *)v10;
    DestinationString.Length = Length;
    v5 = v10;
  }
  else
  {
    Length = DestinationString.Length;
  }
  DestinationString.MaximumLength = v9;
  if ( !v13 )
    goto LABEL_35;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v7 = 0;
  if ( (DestinationString.Length & 1) != 0 || (v9 & 1) != 0 || Length > (unsigned __int16)v9 || (_WORD)v9 == 0xFFFF )
  {
    v7 = -1073741811;
  }
  else
  {
    if ( !v5 && (Length || (_WORD)v9) )
    {
      v7 = -1073741811;
    }
    else
    {
      v16 = v5;
      v17 = (unsigned __int64)(unsigned __int16)v9 >> 1;
      v18 = (unsigned __int64)Length >> 1;
    }
    if ( v7 < 0 )
      goto LABEL_35;
    v19 = L" (";
    v7 = 0;
    v20 = 0;
    v21 = v17 - v18;
    if ( !v21 )
      goto LABEL_47;
    v22 = (__int64)v16 + 2 * v18 - (_QWORD)L" (";
    do
    {
      if ( !v11 )
        break;
      if ( !*v19 )
        break;
      *(const wchar_t *)((char *)v19 + v22) = *v19;
      --v11;
      ++v19;
      ++v20;
      --v21;
    }
    while ( v21 );
    if ( !v21 && v11 && *v19 )
LABEL_47:
      v7 = -2147483643;
    DestinationString.Length = 2 * (v18 + v20);
  }
  if ( v7 >= 0 )
  {
    v7 = RtlUnicodeStringCat(&DestinationString, v8);
    if ( v7 >= 0 )
    {
      v7 = RtlUnicodeStringCatString(&DestinationString, L")");
      if ( v7 >= 0 )
      {
        if ( DestinationString.Length > (unsigned __int64)DestinationString.MaximumLength - 2 )
          v7 = -2147483643;
        else
          DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1] = 0;
        if ( v7 >= 0 )
          goto LABEL_34;
      }
    }
  }
LABEL_35:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4D584650u);
LABEL_37:
  if ( v7 < 0 )
  {
LABEL_52:
    *(_QWORD *)&a1[74].Length = 0LL;
    a1[74].Buffer = 0LL;
  }
}
