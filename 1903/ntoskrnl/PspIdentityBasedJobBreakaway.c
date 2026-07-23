/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1408C72A0
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlQueryPackageIdentity @ 0x140084310 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(void *a1, void *a2, int *a3)
{
  BOOLEAN v5; // si
  NTSTATUS v6; // eax
  int v7; // ebx
  BOOLEAN v8; // al
  int v9; // eax
  NTSTATUS v10; // eax
  BOOLEAN Packaged; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v13[7]; // [rsp+31h] [rbp-CFh] BYREF
  ULONG_PTR v14; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v16; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v20; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  WCHAR AppId[72]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v23[72]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR PackageFullName[128]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR SourceString[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  *a3 = 0;
  Packaged = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  v5 = 0;
  String2.Buffer = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v20.Buffer = 0LL;
  AppIdSize = 132LL;
  v16 = 132LL;
  PackageSize = 256LL;
  v14 = 256LL;
  v13[0] = 0;
  v6 = RtlQueryPackageIdentity(a1, PackageFullName, &PackageSize, AppId, &AppIdSize, &Packaged);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    v8 = Packaged;
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      v9 = *a3;
    }
    else
    {
      *a3 = 1;
      v9 = 1;
    }
    if ( !v9 )
    {
      v10 = RtlQueryPackageIdentity(a2, SourceString, &v14, v23, &v16, v13);
      v7 = v10;
      if ( v10 == -1073741275 || v10 == -2147483643 )
      {
        v5 = 0;
        v7 = 0;
      }
      else
      {
        v5 = v13[0];
      }
    }
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        if ( PackageSize != v14
          || AppIdSize != v16
          || (RtlInitUnicodeString(&DestinationString, PackageFullName),
              RtlInitUnicodeString(&String1, AppId),
              RtlInitUnicodeString(&String2, SourceString),
              RtlInitUnicodeString(&v20, v23),
              !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
          || !RtlEqualUnicodeString(&String1, &v20, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
