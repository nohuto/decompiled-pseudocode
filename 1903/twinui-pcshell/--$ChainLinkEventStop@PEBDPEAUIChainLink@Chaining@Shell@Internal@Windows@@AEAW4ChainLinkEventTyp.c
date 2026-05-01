/*
 * XREFs of ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18013F9A0
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180146D30 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAPEAVChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014BC84 (-get@-$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAPEA.c)
 */

int __fastcall Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
        LPCSTR *a1,
        __int64 *a2,
        int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  TraceLoggingHProvider v8; // r10
  int v10; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+17h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  int *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  v6 = wil::details::static_lazy<Windows::Internal::Shell::Chaining::ChainLinkTraceLogging>::get(
         a1,
         lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 5u )
  {
    TlgCreateSz(&pDesc, *a1);
    v7 = *a2;
    v16 = 0;
    v19 = 0;
    v14 = &v11;
    v10 = *a3;
    v17 = &v10;
    v11 = v7;
    v15 = 8;
    v18 = 4;
    LODWORD(v6) = TlgWrite(v8, &unk_1804B9AC1, 0LL, 0LL, 5u, &pData);
  }
  return v6;
}
