/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180035BB0
 * Callers:
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_18010FB10 @ 0x18010FB10 (sub_18010FB10.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // rax
  __int64 v3; // rbx
  void *SubProcessTag; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v6; // rcx
  char v8[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+26h] [rbp-32h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v3 = 2147353488LL;
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
  else
    v6 = 2147353488LL;
  if ( *(_BYTE *)v6 && a1 != SubProcessTag )
  {
    v10 = (int)SubProcessTag;
    v9 = 1349;
    v11 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
      v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
    ZwTraceEvent(*(unsigned __int8 *)v3, 1026LL, 8LL, v8);
  }
  return SubProcessTag;
}
