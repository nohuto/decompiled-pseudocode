/*
 * XREFs of sub_180115F88 @ 0x180115F88
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180115F88(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  WCHAR *Heap; // rsi
  HANDLE v7; // rax
  HANDLE v8; // rax
  _UNICODE_STRING v10; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING v14; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING ValueName; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES v18; // [rsp+C8h] [rbp-38h] BYREF
  _OBJECT_ATTRIBUTES v19; // [rsp+F8h] [rbp-8h] BYREF
  ULONG ResultLength; // [rsp+160h] [rbp+60h] BYREF
  HANDLE KeyHandlea; // [rsp+168h] [rbp+68h] BYREF

  if ( dword_18016A32C )
  {
    RtlInitUnicodeString(&DestinationString, &word_180166890);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  KeyHandlea = 0LL;
  RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v18.RootDirectory = 0LL;
  v18.ObjectName = &v14;
  v18.Length = 48;
  v18.Attributes = 576;
  *(_OWORD *)&v18.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandlea, DesiredAccess, &v18);
  if ( v4 >= 0 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v5 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v5 != -1073741789 && v5 != -2147483643 )
    {
      *(_QWORD *)&v11.Length = 11141120LL;
      v11.Buffer = &word_180166890;
      if ( v14.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&v11, &v14);
        dword_18016A32C = 1;
      }
      v8 = KeyHandlea;
      KeyHandlea = 0LL;
      v4 = 0;
      *KeyHandle = v8;
      goto LABEL_21;
    }
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
    if ( Heap )
    {
      v4 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)Heap + 1) != 1 )
        {
          v7 = KeyHandlea;
          KeyHandlea = 0LL;
LABEL_15:
          *KeyHandle = v7;
          goto LABEL_16;
        }
        RtlInitUnicodeString(&SourceString, Heap + 6);
        v19.RootDirectory = 0LL;
        v19.ObjectName = &SourceString;
        v19.Length = 48;
        v19.Attributes = 576;
        *(_OWORD *)&v19.SecurityDescriptor = 0LL;
        v4 = ZwOpenKey(&v12, DesiredAccess, &v19);
        if ( v4 >= 0 )
        {
          *(_QWORD *)&v10.Length = 11141120LL;
          v10.Buffer = &word_180166890;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&v10, &SourceString);
            dword_18016A32C = 1;
          }
          v7 = v12;
          goto LABEL_15;
        }
      }
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)v4;
}
