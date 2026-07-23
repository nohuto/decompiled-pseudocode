/*
 * XREFs of sub_180004B28 @ 0x180004B28
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 *     sub_18010D898 @ 0x18010D898 (sub_18010D898.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800DCF0C @ 0x1800DCF0C (sub_1800DCF0C.c)
 *     sub_1800DCF94 @ 0x1800DCF94 (sub_1800DCF94.c)
 */

__int64 __fastcall sub_180004B28(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  wchar_t *v4; // r8
  wchar_t *v5; // rdx
  __int64 result; // rax
  wchar_t Buffer[1024]; // [rsp+30h] [rbp-818h] BYREF

  *(_QWORD *)&a3->Length = 0LL;
  a3->Buffer = 0LL;
  v4 = *(wchar_t **)(a1 + 136);
  *(_DWORD *)(a1 + 100) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( a2 == 1 )
  {
    v5 = v4;
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = sub_1800DCF0C(Buffer, 1024LL, v4);
    else
      LODWORD(result) = sub_1800DCF94(Buffer);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v5 = Buffer;
  }
  if ( RtlCreateUnicodeString(a3, v5) )
    return 0LL;
  else
    return 8LL;
}
