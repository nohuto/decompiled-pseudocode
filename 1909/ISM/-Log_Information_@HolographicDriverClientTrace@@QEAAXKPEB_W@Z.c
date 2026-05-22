/*
 * XREFs of ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x180159AD8
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180154B58 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x18015C840 (-PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::Log_Information_(
        HolographicDriverClientTrace *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v4; // rax
  int v5; // r11d
  TraceLoggingHProvider v6; // r10
  UINT32 cData; // r11d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v4 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v4 + 8) > 4u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v4 + 8), 2uLL) )
    {
      v11 = 0;
      v9 = &v13;
      v10 = v5;
      TlgCreateWsz(&pDesc, a3);
      TlgWrite(v6, &unk_1801A410F, 0LL, 0LL, cData, &pData);
    }
  }
}
