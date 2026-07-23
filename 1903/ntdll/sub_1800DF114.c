/*
 * XREFs of sub_1800DF114 @ 0x1800DF114
 * Callers:
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800DF114(void *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  const CHAR *v6; // r8
  unsigned int v7; // ecx
  PVOID v8; // rax
  __int64 Length; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v16; // [rsp+84h] [rbp-7Ch]
  unsigned int Size; // [rsp+88h] [rbp-78h]
  size_t Size_4; // [rsp+8Ch] [rbp-74h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v11 = a2;
  if ( a1 && a2 && a3 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n";
LABEL_6:
      LODWORD(Length) = v4;
      DbgPrintEx(0x33u, 0, v6, &v11, Length);
      goto LABEL_22;
    }
    v4 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1801194E8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x218u,
           &ResultLength);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n";
      goto LABEL_6;
    }
    if ( v16 != 1 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_11:
      v5 = -1073741766;
      goto LABEL_22;
    }
    v7 = Size;
    if ( (Size & 1) != 0 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location value has non-even size\n");
      goto LABEL_11;
    }
    if ( Size > *(unsigned __int16 *)(a3 + 2) )
    {
      if ( Size > 0xFFFE )
      {
        DbgPrintEx(0x33u, 0, "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n", &v11);
        v5 = -1073741562;
        goto LABEL_22;
      }
      *(_WORD *)(a3 + 2) = Size;
      v8 = sub_18006D6B8((unsigned __int16)v7);
      *(_QWORD *)(a3 + 8) = v8;
      if ( !v8 )
      {
        v5 = -1073741801;
        goto LABEL_22;
      }
      v7 = Size;
    }
    memmove(*(void **)(a3 + 8), &Size_4, v7);
    v5 = 0;
    *(_WORD *)a3 = Size;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_22:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
