/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180100080
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180103284 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180100220 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180100B4C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18010133C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1801022BC (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        __int64 a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  void *v4; // rdx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(a1 + 32));
  v3 = *(wil::details **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40));
  v5 = *(wil::details **)(a1 + 24);
  if ( v5 )
    wil::details::CloseHandle(v5, v4);
  v6 = *(wil::details **)(a1 + 16);
  if ( v6 )
    wil::details::CloseHandle(v6, v4);
  v7 = *(wil::details **)(a1 + 8);
  if ( v7 )
    wil::details::CloseHandle(v7, v4);
}
