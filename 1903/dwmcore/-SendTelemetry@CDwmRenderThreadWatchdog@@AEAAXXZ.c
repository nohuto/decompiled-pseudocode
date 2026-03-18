/*
 * XREFs of ?SendTelemetry@CDwmRenderThreadWatchdog@@AEAAXXZ @ 0x18018D6C4
 * Callers:
 *     ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x18018D620 (-OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CDwmRenderThreadWatchdog::SendTelemetry(CDwmRenderThreadWatchdog *this)
{
  const struct _TlgProvider_t *v1; // rcx
  __int64 v2; // r9
  int v3; // eax
  int v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_18033A1D0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
    {
      v9 = 0;
      v7 = &v5;
      v3 = *(_DWORD *)(v2 + 40);
      v5 = 0x1000000LL;
      v8 = 8;
      v12 = 0;
      v4 = v3;
      v10 = &v4;
      v11 = 4;
      TlgWrite(v1, &unk_1802D9434, 0LL, 0LL, 4u, &pData);
    }
  }
}
