/*
 * XREFs of ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x1801563D0
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1801562F0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x18015FD38 (-TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetErrorStatuses_(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        _DWORD *a4)
{
  __int64 v7; // rax
  const CHAR *v8; // rax
  int v9; // eax
  int v10; // r11d
  TraceLoggingHProvider v11; // r10
  __int64 v12; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp-9h] BYREF
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  _DWORD *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh]
  int v20; // [rsp+9Ch] [rbp+23h]
  __int64 *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  if ( *a4 < 0xFFFFu )
  {
    v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           a1,
           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v7 + 8) > 4u )
    {
      if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x400000000000uLL) )
      {
        v8 = (const CHAR *)TraceDriverTypeToString(a2);
        TlgCreateSz(&pDesc, v8);
        TlgCreateWsz(&v15, a3);
        v16 = a4;
        v18 = a4 + 1;
        v9 = 16 * *a4 + 4;
        v17 = 2LL;
        v19 = v9;
        v21 = &v12;
        v20 = v10;
        v12 = 0x1000000LL;
        v22 = 8LL;
        TlgWrite(v11, &unk_1801A3722, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
