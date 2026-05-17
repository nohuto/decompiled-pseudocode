/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180054588
 * Callers:
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpGetDllPath @ 0x180054338 (LdrpGetDllPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, _WORD *a2, _WORD *a3, unsigned __int16 a4)
{
  __int64 v7; // rcx
  char *v8; // rcx
  char v9; // bl
  char v10; // al
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      if ( !a2 )
        a2 = &unk_18011CB50;
      v9 = RtlCreateUnicodeString((__int64)&v12, a2);
      v10 = RtlCreateUnicodeString((__int64)&UnicodeString, a3);
      if ( v9 )
      {
        if ( v10 )
        {
          LdrpLogEtwEvent(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v12);
          RtlFreeAnsiString(&UnicodeString);
        }
        RtlFreeAnsiString(&v12);
      }
    }
  }
}
