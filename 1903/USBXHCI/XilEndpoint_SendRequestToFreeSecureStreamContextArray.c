/*
 * XREFs of XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017544
 * Callers:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

_UNKNOWN **__fastcall XilEndpoint_SendRequestToFreeSecureStreamContextArray(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _UNKNOWN **result; // rax
  _QWORD v6[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
  *(_OWORD *)&v6[1] = 0LL;
  v6[4] = 38LL;
  v6[3] = a2;
  result = (_UNKNOWN **)SecureChannel_SendRequestSynchronously(v4, (unsigned int)v6, 40, 0, 0);
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_dd(
                            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL),
                            2u,
                            0xDu,
                            0xEu,
                            (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
                            *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 135LL),
                            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 144LL));
  }
  return result;
}
