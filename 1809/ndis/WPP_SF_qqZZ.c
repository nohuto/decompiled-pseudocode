/*
 * XREFs of WPP_SF_qqZZ @ 0x1C005E910
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010F82C (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  const wchar_t *v2; // rax
  __int64 v5; // r8
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r9
  const wchar_t *v8; // rcx
  __int64 v9; // r10
  bool v10; // zf
  __int64 v11; // [rsp+B0h] [rbp+18h] BYREF
  va_list va; // [rsp+B0h] [rbp+18h]
  __int64 v13; // [rsp+B8h] [rbp+20h] BYREF
  va_list va1; // [rsp+B8h] [rbp+20h]
  unsigned __int16 *v15; // [rsp+C0h] [rbp+28h]
  unsigned __int16 *v16; // [rsp+C8h] [rbp+30h]
  va_list va2; // [rsp+D0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, unsigned __int16 *);
  v16 = va_arg(va2, unsigned __int16 *);
  v2 = v16;
  if ( v16 )
    v5 = *v16;
  else
    v5 = 8LL;
  v6 = L"NULL";
  if ( v16 && *v16 )
    v7 = (const wchar_t *)*((_QWORD *)v16 + 1);
  else
    v7 = L"NULL";
  v8 = v15;
  if ( !v16 )
    v2 = L"\b";
  if ( v15 )
    v9 = *v15;
  else
    v9 = 8LL;
  v10 = v15 == 0LL;
  if ( v15 )
  {
    if ( *v15 )
      v6 = (const wchar_t *)*((_QWORD *)v15 + 1);
    v10 = v15 == 0LL;
  }
  if ( v10 )
    v8 = L"\b";
  ndisWppFastTraceMessage(a2, a1, va, 8LL, va1, 8LL, v8, 2LL, v6, v9, v2, 2LL, v7, v5, 0LL);
}
