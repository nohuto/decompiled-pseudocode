/*
 * XREFs of SetAppImeCompatFlags @ 0x1C008F424
 * Callers:
 *     SetAppCompatFlags @ 0x1C008EDB0 (SetAppCompatFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SetAppImeCompatFlags(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 i; // rbx
  int v8; // edi
  const UNICODE_STRING *v9; // r14
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING String1[3]; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[80]; // [rsp+70h] [rbp-90h] BYREF

  Value = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 ? 44 : 30,
                       a2->Buffer,
                       0LL) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( (unsigned __int16)((DefaultLocaleId & 0x3FF) - 17) > 1u || *(_WORD *)(a1 + 624) > 0x30Au )
    *(_DWORD *)(*(_QWORD *)(a1 + 416) + 768LL) = Value & 0xC00000;
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 416) + 768LL) = Value;
  if ( !gpastrSetupExe )
    return 0LL;
  String1[0] = a2;
  for ( i = 0LL; i < 1; ++i )
  {
    if ( v4 )
      break;
    v8 = 0;
    if ( giSetupExe > 0 )
    {
      v9 = String1[i];
      while ( RtlCompareUnicodeString(v9, &gpastrSetupExe[v8], 1u) )
      {
        if ( ++v8 >= giSetupExe )
          goto LABEL_17;
      }
      v4 = 1;
    }
LABEL_17:
    ;
  }
  return v4;
}
