/*
 * XREFs of ndisWdfSendPmParametersForSx @ 0x1C00A5FC0
 * Callers:
 *     ndisWdfNotifySystemPower @ 0x1C00A7128 (ndisWdfNotifySystemPower.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ndisMSendPmParametersOidForAoAc @ 0x1C00A523C (ndisMSendPmParametersOidForAoAc.c)
 */

__int64 __fastcall ndisWdfSendPmParametersForSx(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 result; // rax
  __m128i v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  v1 = *(__m128i *)(a1 + 1120);
  v5 = *(_DWORD *)(a1 + 1136);
  v4 = v1;
  v4.m128i_i32[3] = _mm_srli_si128(v1, 8).m128i_i32[1] & 0xFFFFFFFE;
  result = ndisMSendPmParametersOidForAoAc(a1, (__int64)&v4);
  if ( (_DWORD)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_Lq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               2u,
               0xEu,
               0x7Fu,
               (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
               result,
               a1);
  }
  return result;
}
