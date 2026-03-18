/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1408C6B80
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlQueryPackageIdentity @ 0x140084710 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(__int64 a1, __int64 a2, int *a3)
{
  bool v5; // si
  int v6; // eax
  int v7; // ebx
  bool v8; // al
  int v9; // eax
  int v10; // eax
  bool v12; // [rsp+30h] [rbp-D0h] BYREF
  bool v13; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v20; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  WCHAR v22[72]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v23[72]; // [rsp+130h] [rbp+30h] BYREF
  WCHAR SourceString[128]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR v25[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  *a3 = 0;
  v12 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  v5 = 0;
  String2.Buffer = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v20.Buffer = 0LL;
  v17 = 132LL;
  v16 = 132LL;
  v15 = 256LL;
  v14 = 256LL;
  v13 = 0;
  v6 = RtlQueryPackageIdentity(a1, (__int64)SourceString, (__int64)&v15, (__int64)v22, (__int64)&v17, &v12);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    v8 = v12;
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
      v10 = RtlQueryPackageIdentity(a2, (__int64)v25, (__int64)&v14, (__int64)v23, (__int64)&v16, &v13);
      v7 = v10;
      if ( v10 == -1073741275 || v10 == -2147483643 )
      {
        v5 = 0;
        v7 = 0;
      }
      else
      {
        v5 = v13;
      }
    }
    if ( v7 >= 0 && v5 )
    {
      if ( v15 != v14
        || v17 != v16
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            RtlInitUnicodeString(&String1, v22),
            RtlInitUnicodeString(&String2, v25),
            RtlInitUnicodeString(&v20, v23),
            !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
        || !RtlEqualUnicodeString(&String1, &v20, 1u) )
      {
        *a3 = 1;
      }
    }
  }
  return (unsigned int)v7;
}
