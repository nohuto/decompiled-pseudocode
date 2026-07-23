/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x1408BFCF4
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BF8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  _DWORD *v6; // r8
  const WCHAR *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int *v11; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[41]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a1 + 1000);
  if ( *(_DWORD *)(v2 + 44) )
  {
    v4 = 0;
    v9 = *(_DWORD *)(v2 + 44);
    v5 = v9;
    v11 = &v9;
    v12[0] = 4LL;
    if ( v9 )
    {
      do
      {
        v10[0] = 0;
        v6 = &v12[3 * v4 + 17];
        *v6 = *(_DWORD *)(v2 + 4LL * v4);
        if ( ((int (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))off_140401458[0])(1LL, 24LL, v6, v10) < 0 )
          v7 = L"Unknown";
        else
          v7 = (const WCHAR *)v12[3 * v4 + 19];
        ++v4;
        v8 = -1LL;
        v12[2 * v4 - 1] = v7;
        do
          ++v8;
        while ( v7[v8] );
        v5 = v9;
        LODWORD(v12[2 * v4]) = 2 * v8 + 2;
        HIDWORD(v12[2 * v4]) = 0;
      }
      while ( v4 < v5 );
    }
    EtwpLogKernelEvent((__int64)&v11, EtwpHostSiloState, a2, v5 + 1, 0xF30u, 0x401802u);
  }
}
