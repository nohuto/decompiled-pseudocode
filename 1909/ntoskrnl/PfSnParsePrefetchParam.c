/*
 * XREFs of PfSnParsePrefetchParam @ 0x14066C560
 * Callers:
 *     PfSnScanCommandLine @ 0x14066C4C8 (PfSnScanCommandLine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wtol @ 0x1401A0B90 (_wtol.c)
 *     iswdigit @ 0x1401A0F60 (iswdigit.c)
 *     PfSnFindString @ 0x14066C6C4 (PfSnFindString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnParsePrefetchParam(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 String; // rax
  wint_t *v8; // rdi
  unsigned __int64 v9; // r14
  wchar_t *v10; // rsi
  unsigned int v12; // eax
  UNICODE_STRING v13; // [rsp+28h] [rbp-70h] BYREF
  wint_t *v14; // [rsp+38h] [rbp-60h]
  wchar_t *v15; // [rsp+40h] [rbp-58h]
  wchar_t Str[15]; // [rsp+48h] [rbp-50h] BYREF
  wchar_t v17; // [rsp+66h] [rbp-32h] BYREF

  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  RtlInitUnicodeString(&v13, L"/prefetch:");
  v4 = 0;
  if ( *a1 )
  {
    v5 = *((_QWORD *)a1 + 1);
    if ( (v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = v5 + *a1;
    if ( v6 > 0x7FFFFFFF0000LL || v6 < v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  String = PfSnFindString(a1, &v13);
  if ( String )
  {
    v8 = (wint_t *)(String + v13.Length);
    v14 = v8;
    v9 = *((_QWORD *)a1 + 1) + *a1;
    v10 = Str;
    v15 = Str;
    while ( (unsigned __int64)v8 < v9 && v10 < &v17 && *v8 != 32 )
    {
      if ( !iswdigit(*v8) )
        return (unsigned int)-1073741811;
      *v10 = *v8++;
      v14 = v8;
      v15 = ++v10;
    }
    *v10 = 0;
    v12 = wtol(Str);
    if ( v12 > 8 )
      return (unsigned int)-1073741811;
    else
      *a2 = v12;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
