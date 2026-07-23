/*
 * XREFs of PopFxGenerateFriendlyName @ 0x1407265A0
 * Callers:
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140179EA4 (RtlUnicodeStringCatString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 */

void __fastcall PopFxGenerateFriendlyName(UNICODE_STRING *a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rdi
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v6; // esi
  const UNICODE_STRING *v7; // r12
  ULONG v8; // ebx
  PVOID PoolWithTag; // r15
  PVOID v10; // r8
  __int64 v11; // r11
  __int64 v12; // rcx
  _WORD *v13; // rax
  PVOID v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  const wchar_t *v17; // rcx
  __int16 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  unsigned __int16 Length; // ax
  unsigned __int16 v22; // di
  wchar_t *v23; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(a2 + 32);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  DeviceProperty = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
  v6 = DeviceProperty;
  if ( DeviceProperty == -1073741789 )
  {
    if ( BufferLength > 0xFFFF )
      goto LABEL_41;
    v7 = (const UNICODE_STRING *)(a2 + 280);
    v8 = *(unsigned __int16 *)(a2 + 280) + BufferLength + 6;
    if ( v8 > 0xFFFF )
      goto LABEL_41;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x4D584650u);
    if ( !PoolWithTag )
      goto LABEL_41;
    v6 = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, BufferLength, PoolWithTag, &BufferLength);
    if ( v6 >= 0 )
    {
      v10 = 0LL;
      v11 = 0x7FFFLL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      v6 = 0;
      DestinationString.Buffer = 0LL;
      v12 = 0x7FFFLL;
      v13 = PoolWithTag;
      while ( *v13 )
      {
        ++v13;
        if ( !--v12 )
        {
          Length = DestinationString.Length;
          v6 = -1073741811;
          goto LABEL_11;
        }
      }
      DestinationString.Buffer = (wchar_t *)PoolWithTag;
      v10 = PoolWithTag;
      Length = 2 * (0x7FFF - v12);
      DestinationString.Length = Length;
LABEL_11:
      DestinationString.MaximumLength = v8;
      if ( v6 >= 0 )
      {
        v14 = 0LL;
        v15 = 0LL;
        v16 = 0LL;
        v6 = 0;
        if ( (DestinationString.Length & 1) != 0
          || (v8 & 1) != 0
          || Length > (unsigned __int16)v8
          || (_WORD)v8 == 0xFFFF
          || !v10 && (Length || (_WORD)v8) )
        {
          v6 = -1073741811;
        }
        else
        {
          v14 = v10;
          v15 = (unsigned __int64)(unsigned __int16)v8 >> 1;
          v16 = (unsigned __int64)Length >> 1;
        }
        if ( v6 >= 0 )
        {
          v17 = L" (";
          v6 = 0;
          v18 = 0;
          v19 = v15 - v16;
          if ( v19 )
          {
            v20 = (__int64)v14 + 2 * v16 - (_QWORD)L" (";
            while ( v11 && *v17 )
            {
              *(const wchar_t *)((char *)v17 + v20) = *v17;
              --v11;
              ++v17;
              ++v18;
              if ( !--v19 )
              {
                if ( !v11 || !*v17 )
                  break;
                goto LABEL_37;
              }
            }
          }
          else
          {
LABEL_37:
            v6 = -2147483643;
          }
          DestinationString.Length = 2 * (v16 + v18);
          if ( v6 >= 0 )
          {
            v6 = RtlUnicodeStringCat(&DestinationString, v7);
            if ( v6 >= 0 )
            {
              v6 = RtlUnicodeStringCatString(&DestinationString, L")");
              if ( v6 >= 0 )
              {
                if ( DestinationString.Length <= (unsigned __int64)DestinationString.MaximumLength - 2 )
                {
                  DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1] = 0;
LABEL_30:
                  a1[61] = DestinationString;
                  return;
                }
                v6 = -2147483643;
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0x4D584650u);
  }
  else if ( DeviceProperty == -1073741772 )
  {
    v22 = *(_WORD *)(a2 + 280);
    v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x4D584650u);
    if ( v23 )
    {
      DestinationString.Buffer = v23;
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v22;
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a2 + 280));
      goto LABEL_30;
    }
LABEL_41:
    *(_QWORD *)&a1[61].Length = 0LL;
    a1[61].Buffer = 0LL;
    return;
  }
  if ( v6 < 0 )
    goto LABEL_41;
}
