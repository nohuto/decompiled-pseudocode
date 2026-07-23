/*
 * XREFs of PfSnParsePrefetchParam @ 0x140668C44
 * Callers:
 *     PfSnScanCommandLine @ 0x140668BB4 (PfSnScanCommandLine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wtol @ 0x140195DE0 (_wtol.c)
 *     iswdigit @ 0x140196190 (iswdigit.c)
 *     PfSnFindString @ 0x140668D9C (PfSnFindString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnParsePrefetchParam(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 String; // rax
  wint_t *v8; // rdi
  unsigned __int64 v9; // r14
  wchar_t *i; // rsi
  unsigned int v12; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  wchar_t Str[15]; // [rsp+48h] [rbp-50h] BYREF
  wchar_t v15; // [rsp+66h] [rbp-32h] BYREF

  RtlInitUnicodeString(&DestinationString, L"/prefetch:");
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
  String = PfSnFindString(a1, &DestinationString);
  if ( String )
  {
    v8 = (wint_t *)(String + DestinationString.Length);
    v9 = *((_QWORD *)a1 + 1) + *a1;
    for ( i = Str; (unsigned __int64)v8 < v9 && i < &v15 && *v8 != 32; ++i )
    {
      if ( !iswdigit(*v8) )
        return (unsigned int)-1073741811;
      *i = *v8++;
    }
    *i = 0;
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
