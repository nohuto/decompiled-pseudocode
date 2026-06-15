/*
 * XREFs of TS_UnregisterAudioProtocolNotification @ 0x18002ADC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_180028C94 @ 0x180028C94 (sub_180028C94.c)
 */

__int64 __fastcall TS_UnregisterAudioProtocolNotification(void *a1, void **a2)
{
  void *v2; // rdi
  __int64 result; // rax
  DWORD SessionId; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 87LL;
  result = sub_18002633C(a1, &v6, &SessionId);
  if ( !(_DWORD)result )
  {
    result = sub_180028C94(SessionId, v2);
    if ( !(_DWORD)result )
      *a2 = 0LL;
  }
  return result;
}
