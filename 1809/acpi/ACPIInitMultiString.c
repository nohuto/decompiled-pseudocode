/*
 * XREFs of ACPIInitMultiString @ 0x1C00ABF24
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1C00A83B0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 ACPIInitMultiString(struct _UNICODE_STRING *a1, ...)
{
  const char **v1; // rdi
  int v2; // ebx
  const char *v3; // rax
  unsigned int v4; // ebx
  wchar_t *Buffer; // rcx
  wchar_t *v7; // rcx
  PCSZ *v8; // rbx
  struct _UNICODE_STRING v9; // [rsp+28h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  PUNICODE_STRING v11; // [rsp+80h] [rbp+28h]
  const char *v12; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, const char *);
  v11 = a1;
  va_copy((va_list)v1, va);
  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  v2 = 0;
  v3 = v12;
  if ( v12 )
  {
    do
    {
      RtlInitAnsiString(&DestinationString, v3);
      v2 += RtlxAnsiStringToUnicodeSize(&DestinationString);
      v3 = *++v1;
    }
    while ( *v1 );
    a1 = v11;
  }
  if ( v2 )
  {
    v4 = v2 + 2;
    a1->MaximumLength = v4;
    v11->Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4, 0x53706341u);
    Buffer = v11->Buffer;
    if ( !Buffer )
      return 3221225626LL;
    memset(Buffer, 0, v4);
    v7 = v11->Buffer;
    v9.MaximumLength = v4;
    va_copy((va_list)v8, va);
    while ( 1 )
    {
      v9.Buffer = v7;
      if ( !*v8 )
        break;
      RtlInitAnsiString(&DestinationString, *v8);
      RtlAnsiStringToUnicodeString(&v9, &DestinationString, 0);
      ++v8;
      v7 = &v9.Buffer[((unsigned __int64)v9.Length >> 1) + 1];
      v9.MaximumLength += -2 - v9.Length;
      v9.Length = 0;
    }
    *v7 = 0;
    v11->Length = v11->MaximumLength;
  }
  else
  {
    RtlInitUnicodeString(a1, 0LL);
  }
  return 0LL;
}
