/*
 * XREFs of SecureDmaEnabler_Unmap @ 0x1C0046C00
 * Callers:
 *     SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x1C006B280 (SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void *__fastcall SecureDmaEnabler_Unmap(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  __int64 v16; // [rsp+58h] [rbp-20h]

  v11 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v13 = v3;
  v6 = a2[2];
  v14 = 6;
  v16 = v6;
  SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (unsigned int)&v11, 48, 0, 0);
  v7 = a2[3];
  if ( v7 )
  {
    v8 = VslDeleteSecureSection(v7);
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0x13u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v10);
    }
  }
  return memset(a2, 0, 0x20uLL);
}
