/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x18014310C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180144560 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18007B470 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18008683C (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1801442F8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        __int64 a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 32));
  v3 = *(wil::details **)(a1 + 296);
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40), v4);
  v6 = *(wil::details **)(a1 + 24);
  if ( v6 )
    wil::details::CloseHandle(v6, v5);
  v7 = *(wil::details **)(a1 + 16);
  if ( v7 )
    wil::details::CloseHandle(v7, v5);
  v8 = *(wil::details **)(a1 + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v5);
  return a1;
}
