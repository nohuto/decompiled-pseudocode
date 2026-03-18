/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0077D6C
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void TraceLoggingMouseWheelRoutingValueAtStartup(void)
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-68h] BYREF
  __int64 v2; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  UPDWORDPointer(8220LL);
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &v2;
      v7 = &v1;
      v2 = 0x1000000LL;
      v5 = 8;
      v1 = v0;
      v8 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5235, 0LL, 0LL, 4u, &pData);
    }
  }
}
