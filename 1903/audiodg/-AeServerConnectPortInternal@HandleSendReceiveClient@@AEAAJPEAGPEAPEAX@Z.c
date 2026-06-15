/*
 * XREFs of ?AeServerConnectPortInternal@HandleSendReceiveClient@@AEAAJPEAGPEAPEAX@Z @ 0x140041A28
 * Callers:
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140041BF0 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

NTSTATUS __fastcall HandleSendReceiveClient::AeServerConnectPortInternal(
        HandleSendReceiveClient *this,
        unsigned __int16 *a2,
        void **a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v6[4]; // [rsp+70h] [rbp-68h] BYREF
  int v7; // [rsp+74h] [rbp-64h]
  int v8; // [rsp+78h] [rbp-60h]
  __int16 v9; // [rsp+7Ch] [rbp-5Ch]
  __int64 v10; // [rsp+80h] [rbp-58h]

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    memset_0(v6, 0, 0x48uLL);
    *a3 = 0LL;
    v8 = 0;
    v10 = 48LL;
    v7 = 12;
    v9 = 257;
    return NtAlpcConnectPort(a3, &DestinationString, 0LL, v6, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
