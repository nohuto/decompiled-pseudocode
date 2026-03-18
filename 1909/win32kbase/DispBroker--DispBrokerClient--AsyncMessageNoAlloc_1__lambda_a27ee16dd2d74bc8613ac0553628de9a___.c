/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C0063A5C
 * Callers:
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0063A40 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C0063E60 (xxxRemoteConnect.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00A3270 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD v4[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v4, 0, 0x48uLL);
  v4[10] = 1;
  v4[11] = 1;
  result = DrvSampleDisplayState(&v4[12]);
  if ( (int)result >= 0 )
  {
    v4[0] = 4718624;
    LOWORD(v4[1]) = 0x8000;
    v4[16] = gbConnected;
    v4[17] = IsRemoteConnection(v2, v1, v3);
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0212320)(
             0x10000LL,
             v4,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
