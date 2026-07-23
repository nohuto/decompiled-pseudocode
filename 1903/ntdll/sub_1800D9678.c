/*
 * XREFs of sub_1800D9678 @ 0x1800D9678
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800D977C @ 0x1800D977C (sub_1800D977C.c)
 */

int __fastcall sub_1800D9678(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  int result; // eax
  int v6; // ecx
  WCHAR *v7; // rax
  int v8; // edx
  _UNICODE_STRING Destination; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(_QWORD *)&Destination.Length = 82051072LL;
  Destination.Buffer = (PWCH)&unk_1801649C0;
  result = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\USER\\");
  if ( result >= 0 )
  {
    result = sub_1800D977C(&Destination);
    if ( result >= 0 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, &stru_180119478);
      if ( result >= 0 )
      {
        v6 = *a1;
        v7 = (WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
        if ( *a1 )
        {
          do
          {
            if ( *(v7 - 1) == 92 )
              break;
            --v7;
            v6 -= 2;
          }
          while ( v6 );
        }
        v8 = *a1 - v6;
        Source.Buffer = v7;
        Source.Length = v8;
        if ( (unsigned __int16)v8 == v8 )
        {
          result = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( result >= 0 )
          {
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return ZwOpenKey(a3, 9u, &ObjectAttributes);
          }
        }
        else
        {
          return -1073741789;
        }
      }
    }
  }
  return result;
}
