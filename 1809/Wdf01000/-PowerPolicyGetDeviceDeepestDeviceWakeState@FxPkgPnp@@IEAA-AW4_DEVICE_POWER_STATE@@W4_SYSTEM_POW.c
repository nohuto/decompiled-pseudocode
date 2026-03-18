/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00848EC
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0017188 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0084A24 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     WPP_IFR_SF_LL @ 0x1C00861C8 (WPP_IFR_SF_LL.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned int id; // ebx
  unsigned __int8 v6; // al
  const _GUID *v8; // [rsp+20h] [rbp-68h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  unsigned int v10; // [rsp+50h] [rbp-38h]
  unsigned int v11; // [rsp+54h] [rbp-34h]
  __m128i v12; // [rsp+58h] [rbp-30h]
  unsigned int v13; // [rsp+68h] [rbp-20h]
  unsigned int v14; // [rsp+6Ch] [rbp-1Ch]

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    if ( v2 - 1 > v3 - 7 )
    {
      id = 1;
    }
    else
    {
      _mm_lfence();
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v10 = v3 - 7;
      v11 = v3 - 7;
      LOBYTE(v2) = *(_BYTE *)(v2 + v4 + 1019);
      if ( (unsigned __int8)v2 >= 6u )
      {
        id = 0;
LABEL_12:
        WPP_IFR_SF_LL(*(_FX_DRIVER_GLOBALS **)(v4 + 16), v2, v3, v4, v8, *(unsigned __int8 *)(v4 + 1025), id);
        return id;
      }
      id = si128.m128i_u32[(unsigned __int8)v2];
    }
  }
  else
  {
    v6 = *(_BYTE *)(v4 + 1020);
    v13 = v3 - 7;
    v14 = v3 - 7;
    v12 = _mm_load_si128((const __m128i *)&_xmm);
    if ( v6 >= 6u )
      id = 0;
    else
      id = v12.m128i_u32[v6];
  }
  if ( !id || !*(_BYTE *)(v4 + 1025) )
    goto LABEL_12;
  return id;
}
