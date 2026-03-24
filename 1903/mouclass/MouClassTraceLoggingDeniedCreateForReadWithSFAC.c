/*
 * XREFs of MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041D0
 * Callers:
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002900 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0006B58 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0006B8C (_TlgWrite.c)
 */

void __fastcall MouClassTraceLoggingDeniedCreateForReadWithSFAC(const struct _TlgProvider_t *a1, ULONGLONG a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0009010 > 5 )
  {
    if ( TlgKeywordOn(a1, a2) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = (int)v2;
      v8 = 4;
      TlgWrite(v2, &unk_1C00075CA, v3, v4, 3u, &pData);
    }
  }
}
