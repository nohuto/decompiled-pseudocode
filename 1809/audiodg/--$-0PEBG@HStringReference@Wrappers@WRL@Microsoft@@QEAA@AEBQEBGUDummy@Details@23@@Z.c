/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1400460B4
 * Callers:
 *     ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14004E9B0 (-TraceOperationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devi.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140049944 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2)
{
  unsigned __int64 v3; // rax
  const WCHAR *v4; // rdx

  v3 = -1LL;
  a1[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  do
    ++v3;
  while ( v4[v3] );
  if ( v3 > 0xFFFFFFFF )
  {
    RaiseException(v3 > 0xFFFFFFFF ? 0x80070216 : 0, 1u, 0, 0LL);
    __debugbreak();
  }
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
  }
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, v4, v3 + 1, v3);
  return a1;
}
