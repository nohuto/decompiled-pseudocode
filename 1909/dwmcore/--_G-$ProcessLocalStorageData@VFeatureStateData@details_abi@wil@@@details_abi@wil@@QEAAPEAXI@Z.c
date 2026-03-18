/*
 * XREFs of ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180153728
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800B03C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??_G?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800E7D3C (--_G-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800B2148 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D8438 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800D869C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18015483C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
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
  *(_QWORD *)(a1 + 296) = 0LL;
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
