/*
 * XREFs of BmlInternalTryPinningScaling @ 0x1C00D2CD4
 * Callers:
 *     BmlPinPathContentScaling @ 0x1C00D2B70 (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00D2D84 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C012ECA0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlInternalTryPinningScaling(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a4)
{
  __int64 v4; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rax
  char v14; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(a2 + 48);
  AdapterDefaultScaling = a3;
  if ( a3 == D3DKMDT_VPPS_RESERVED1 )
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(a2 + 48));
  if ( BmlIsSupportedPathScaling(AdapterDefaultScaling, a4) )
  {
    v14 = 1;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(v4 + 432) + 64LL))(
               (a2 + 96) & -(__int64)(a2 != -289),
               *(unsigned int *)(*(_QWORD *)a1 + 24LL),
               *(unsigned int *)(*(_QWORD *)a1 + 28LL),
               (unsigned int)AdapterDefaultScaling,
               v14);
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = AdapterDefaultScaling;
    WdLogEvent5_WdWarning(v13);
    return 3223192326LL;
  }
  return result;
}
