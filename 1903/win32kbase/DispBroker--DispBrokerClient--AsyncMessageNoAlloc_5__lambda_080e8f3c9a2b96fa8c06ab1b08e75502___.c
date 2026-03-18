/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___ @ 0x1C0106178
 * Callers:
 *     ?DispBrokerAsyncRotationLockToggleKey@@YAJXZ @ 0x1C0106930 (-DispBrokerAsyncRotationLockToggleKey@@YAJXZ.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00A4330 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___()
{
  __int64 result; // rax
  _DWORD v1[16]; // [rsp+40h] [rbp-58h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[10] = 5;
  v1[11] = 1;
  result = DrvSampleDisplayState(&v1[12]);
  if ( (int)result >= 0 )
  {
    v1[0] = 4194328;
    LOWORD(v1[1]) = 0x8000;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0215320)(
             0x10000LL,
             v1,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
