/*
 * XREFs of PepDifferentialFrequencyRead @ 0x1C000A2F0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x1C0009EE8 (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 */

__int64 __fastcall PepDifferentialFrequencyRead(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v10) = *(_DWORD *)(v6 + 48);
  v8 = PoFxProcessorNotification(v7, 10LL, &v10);
  if ( v8 < 0 )
    PepNotifyFeedbackRead(v8);
  *a3 = v11;
  result = v12;
  *a4 = v12;
  return result;
}
