/*
 * XREFs of EtwTraceJobAssignProcess @ 0x1408B8828
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140606E30 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x14088BCFC (PspAssignProcessToJobList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408B9270 (EtwpCopyJobGuidSafe.c)
 */

void __fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // r9d
  _BYTE v4[16]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+44h] [rbp-34h]
  int v7; // [rsp+48h] [rbp-30h]
  _BYTE *v8; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v4, a1);
  if ( v1 )
    v5 = *(_DWORD *)(v1 + 1220);
  else
    v5 = 0;
  v10 = 0;
  v6 = v3;
  v7 = v2;
  v8 = v4;
  v9 = 28;
  EtwTraceKernelEvent((__int64)&v8, 1u, 0x80000u, 0x723u, 0x501904u);
}
