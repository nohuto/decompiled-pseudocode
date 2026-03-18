/*
 * XREFs of XilUsbDevice_DestroySecureObject @ 0x1C003462C
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0035B90 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_DestroySecureObject(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1[7] + 8) + 112LL);
    memset(v5, 0, sizeof(v5));
    v5[3] = v1;
    LODWORD(v5[4]) = 31;
    result = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v5, 40, 0, 0);
    *a1 = 0LL;
  }
  return result;
}
