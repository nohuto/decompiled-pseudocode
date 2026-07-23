/*
 * XREFs of sub_140587D3C @ 0x140587D3C
 * Callers:
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401BADD0 (ZwQuerySymbolicLinkObject.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall sub_140587D3C(UNICODE_STRING *a1, _DWORD *a2, _QWORD *a3)
{
  NTSTATUS NameStringMode; // ebx
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // rdi
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+2A0h] [rbp+1A0h] BYREF

  ObjectAttributes.ObjectName = a1;
  LinkHandle = 0LL;
  *(_DWORD *)&LinkTarget.Length = 34078720;
  ObjectAttributes.Length = 48;
  LinkTarget.Buffer = (wchar_t *)&v15;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  NameStringMode = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( NameStringMode >= 0 )
  {
    NameStringMode = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    if ( NameStringMode >= 0 )
    {
      v6 = 0;
      if ( *a2 )
      {
        while ( 1 )
        {
          v7 = v6;
          v10 = 0;
          NameStringMode = ObQueryNameStringMode(
                             *(_QWORD *)&a2[2 * v6 + 2],
                             (unsigned int)&String2,
                             538,
                             (unsigned int)&v10,
                             0);
          if ( NameStringMode < 0 )
            break;
          if ( RtlEqualUnicodeString(&LinkTarget, &String2, 1u) )
          {
            v8 = *(_QWORD *)&a2[2 * v6 + 2];
            ObfReferenceObject(*(PVOID *)&a2[2 * v7 + 2]);
            if ( !v8 )
              goto LABEL_7;
            *a3 = v8;
            break;
          }
          if ( ++v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        NameStringMode = -1073741772;
      }
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)NameStringMode;
}
