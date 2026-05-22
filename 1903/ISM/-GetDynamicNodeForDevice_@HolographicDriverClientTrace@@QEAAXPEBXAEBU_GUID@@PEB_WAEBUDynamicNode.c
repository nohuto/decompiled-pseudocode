/*
 * XREFs of ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x180155D38
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180155B90 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1801564F0 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const wchar_t *a4,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a5)
{
  __int64 v7; // rax
  int v8; // r11d
  TraceLoggingHProvider v9; // r10
  int v10; // [rsp+38h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  const void **v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+74h] [rbp-15h]
  const struct _GUID *v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+84h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-1h] BYREF
  const struct Windows::Internal::Holographic::DynamicNodeInfo *v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+A0h] [rbp+17h]
  int v22; // [rsp+A4h] [rbp+1Bh]
  int *v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+B0h] [rbp+27h]
  int v25; // [rsp+B4h] [rbp+2Bh]
  __int64 *v26; // [rsp+B8h] [rbp+2Fh]
  int v27; // [rsp+C0h] [rbp+37h]
  int v28; // [rsp+C4h] [rbp+3Bh]
  const void *v29; // [rsp+F0h] [rbp+67h] BYREF

  v29 = a2;
  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 4u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x400000000000uLL) )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v29;
      v17 = 16;
      v14 = 8;
      v16 = a3;
      TlgCreateWsz(&pDesc, a4);
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v10 = *((_DWORD *)a5 + 4);
      v23 = &v10;
      v26 = &v11;
      v20 = a5;
      v21 = v8;
      v24 = 4;
      v11 = 0x2000000LL;
      v27 = 8;
      TlgWrite(v9, &unk_1801A3B43, 0LL, 0LL, 8u, &pData);
    }
  }
}
