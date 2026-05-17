/*
 * XREFs of sub_180032198 @ 0x180032198
 * Callers:
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180031F48 @ 0x180031F48 (sub_180031F48.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

void __fastcall sub_180032198(__int64 a1, _WORD *a2, _WORD *a3, unsigned __int16 a4)
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
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = (unsigned int)RtlGetCurrentServiceSessionId(v7)
       ? (char *)NtCurrentPeb()->HotpatchInformation + 555
       : (char *)2147353477;
    if ( (*v8 & 0x20) != 0 )
    {
      if ( !a2 )
        a2 = &unk_18011C2FC;
      v9 = RtlCreateUnicodeString((__int64)&v12, a2);
      v10 = RtlCreateUnicodeString((__int64)&UnicodeString, a3);
      if ( v9 )
      {
        if ( v10 )
        {
          sub_1800CFA48(a4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v12);
          RtlFreeUnicodeString(&UnicodeString);
        }
        RtlFreeUnicodeString(&v12);
      }
    }
  }
}
