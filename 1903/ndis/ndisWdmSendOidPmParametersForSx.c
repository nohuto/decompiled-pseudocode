/*
 * XREFs of ndisWdmSendOidPmParametersForSx @ 0x1C00A6078
 * Callers:
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012ADF8 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ndisMSendPmParametersOidForAoAc @ 0x1C00A523C (ndisMSendPmParametersOidForAoAc.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForSx(__int64 a1)
{
  __m128i v1; // xmm0
  int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v7[16]; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v1 = *(__m128i *)(a1 + 1120);
  v8 = *(_DWORD *)(a1 + 1136);
  *(__m128i *)v7 = v1;
  *(_DWORD *)&v7[12] = _mm_srli_si128(v1, 8).m128i_i32[1] & 0xFFFFFFFE;
  v5 = ndisMSendPmParametersOidForAoAc(a1, (__int64)v7);
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        14,
        126,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a1,
        v7[4]);
    }
    if ( (byte_1C00E8042 & 0x40) != 0 )
      McTemplateK0jqxq(
        v4,
        &PowerPolicyError,
        (const GUID *)(a1 + 4008),
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        1);
  }
  else if ( *(_DWORD *)&v7[4] )
  {
    *(_DWORD *)(a1 + 124) |= 0x400u;
  }
  return v5;
}
