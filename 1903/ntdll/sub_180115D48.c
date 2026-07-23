/*
 * XREFs of sub_180115D48 @ 0x180115D48
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 */

__int64 __fastcall sub_180115D48(ACCESS_MASK DesiredAccess, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v8; // r14d
  __int64 *Heap; // rsi
  NTSTATUS InformationToken; // ebx
  unsigned __int8 v11; // al
  USHORT v12; // bx
  WCHAR *v13; // rdi
  HANDLE KeyHandle; // [rsp+38h] [rbp-29h] BYREF
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-21h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-1h] BYREF
  __int64 ReturnLength; // [rsp+D0h] [rbp+6Fh] BYREF

  ReturnLength = a2;
  v5 = 0LL;
  v8 = 0;
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x54uLL);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Heap, 0x54u, (PULONG)&ReturnLength);
    if ( InformationToken < 0 )
      goto LABEL_25;
    v5 = *Heap;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v11 = *(_BYTE *)(v5 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v5 + 8) == 21 && *(_DWORD *)(v5 + 24) == 503 )
    {
      *a4 = 0;
      InformationToken = -1073741514;
      v8 = 1;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 1u);
      if ( InformationToken >= 0 )
      {
        v12 = UnicodeString.Length + 62;
        v13 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)(UnicodeString.Length + 62));
        if ( v13 )
        {
          Destination.Buffer = v13;
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v12;
          InformationToken = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString(&Destination, L"\\International");
              if ( InformationToken >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
                {
                  v8 = 1;
                  *a4 = 1;
                }
                else
                {
                  ZwClose(KeyHandle);
                  *a4 = 2;
                  InformationToken = ZwOpenKey(a3, DesiredAccess, &ObjectAttributes);
                }
              }
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        else
        {
          InformationToken = -1073741801;
        }
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    if ( v8 )
      InformationToken = sub_180115F88(DesiredAccess, a3);
  }
LABEL_25:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)InformationToken;
}
