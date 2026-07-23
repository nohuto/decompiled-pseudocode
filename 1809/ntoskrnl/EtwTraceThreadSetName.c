/*
 * XREFs of EtwTraceThreadSetName @ 0x14067BBC8
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceThreadSetName(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned __int16 *v2; // rax
  void *v3; // rcx
  unsigned __int16 v4; // dx
  unsigned __int64 v5; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-40h] BYREF
  void *v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  void *v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v6[0] = *(_DWORD *)(a1 + 1592);
  v1 = 2;
  v6[1] = *(_DWORD *)(a1 + 1600);
  v7[0] = v6;
  v2 = *(unsigned __int16 **)(a1 + 2000);
  v7[1] = 8LL;
  if ( v2 && (v3 = (void *)*((_QWORD *)v2 + 1)) != 0LL )
  {
    v4 = *v2;
    v5 = 2048LL;
    if ( v4 < 0x800u )
      v5 = v4;
    v8 = v3;
    v9 = (unsigned int)v5;
    if ( !(_DWORD)v5 || *((_WORD *)v3 + (v5 >> 1) - 1) )
    {
      v11 = 2LL;
      v10 = &EtwpNull;
      v1 = 3;
    }
  }
  else
  {
    v9 = 2LL;
    v8 = &EtwpNull;
  }
  EtwTraceKernelEvent((__int64)v7, v1, 2u, 0x548u, 0x501802u);
}
