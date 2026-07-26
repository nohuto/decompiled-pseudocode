/*
 * XREFs of WPP_SF_qqZ @ 0x1C004F958
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F12C (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZ(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  const wchar_t *v2; // rax
  __int64 v5; // r8
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va1; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v11 = va_arg(va2, unsigned __int16 *);
  v2 = v11;
  if ( v11 )
    v5 = *v11;
  else
    v5 = 8LL;
  if ( v11 && *v11 )
    v6 = (const wchar_t *)*((_QWORD *)v11 + 1);
  else
    v6 = L"NULL";
  if ( !v11 )
    v2 = L"\b";
  ndisWppFastTraceMessage(a2, a1, va, 8LL, va1, 8LL, v2, 2LL, v6, v5, 0LL);
}
