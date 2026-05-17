/*
 * XREFs of RtlSetSystemBootStatus @ 0x1800887C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1800887F0 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v6 = a3;
  v4 = a1;
  v5 = a2;
  return RtlpSystemBootStatusRequest(32LL, &v4);
}
