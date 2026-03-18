/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x14071E6C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408BD824 (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v6; // r8
  unsigned int v8; // [rsp+20h] [rbp-30h] BYREF
  char v9; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-28h] BYREF
  int v11; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0;
  memset(v10, 0, sizeof(v10));
  if ( PsWin32CalloutsEstablished )
  {
    v6 = 1LL;
    v8 = a1;
    if ( TtmpEnabled == 1 )
    {
      LOBYTE(v6) = a3;
      TtmNotifySessionDisplayRequiredChange(a1, a2, v6);
    }
    else
    {
      v10[0] = 2LL;
      v10[1] = 4LL;
      v10[3] = 4LL;
      v11 = a3 != 0 ? 1 : -1;
      v10[2] = &v11;
      v10[4] = &v9;
      PopInvokeWin32Callout(5, (__int64)v10, 1, (int *)&v8);
    }
  }
  return 0LL;
}
