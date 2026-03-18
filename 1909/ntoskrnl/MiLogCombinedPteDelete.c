/*
 * XREFs of MiLogCombinedPteDelete @ 0x1402E63C0
 * Callers:
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall MiLogCombinedPteDelete(__int64 a1)
{
  _QWORD v1[2]; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+44h] [rbp-24h]
  _QWORD *v4; // [rsp+48h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  v3 = 0;
  v4 = v1;
  v6 = 0;
  v1[0] = a1;
  v1[1] = a1;
  v2 = -1;
  v5 = 24;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x28000001u, 0x24Fu, 0x11401B02u);
}
