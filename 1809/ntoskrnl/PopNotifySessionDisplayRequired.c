/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x1406DD140
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInvokeWin32Callout @ 0x1405B1C84 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140880EE0 (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  int v4; // [rsp+20h] [rbp-30h] BYREF
  char v5; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD v6[5]; // [rsp+28h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF

  if ( PsWin32CalloutsEstablished )
  {
    v4 = a1;
    if ( TtmpEnabled == 1 )
    {
      TtmNotifySessionDisplayRequiredChange(a1);
    }
    else
    {
      v7 = a3 != 0 ? 1 : -1;
      memset(v6, 0, sizeof(v6));
      LODWORD(v6[0]) = 2;
      LODWORD(v6[1]) = 4;
      v6[2] = &v7;
      LODWORD(v6[3]) = 4;
      BYTE4(v6[0]) = 0;
      v6[4] = &v5;
      PopInvokeWin32Callout(5u, (__int64)v6, 1u, &v4);
    }
  }
  return 0LL;
}
