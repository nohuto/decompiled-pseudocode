/*
 * XREFs of RtlPublishWnfStateData @ 0x18007CED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1800A0780 (ZwUpdateWnfStateData.c)
 *     RtlpWnfETWEventPublish @ 0x1800DD9D8 (RtlpWnfETWEventPublish.c)
 */

__int64 __fastcall RtlPublishWnfStateData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int updated; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF

  v9 = a1;
  updated = ZwUpdateWnfStateData(&v9, a3, a4, a2, a5, 0, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486LL;
  if ( *(_BYTE *)v7 && updated >= 0 )
    RtlpWnfETWEventPublish(v9, a4);
  return (unsigned int)updated;
}
