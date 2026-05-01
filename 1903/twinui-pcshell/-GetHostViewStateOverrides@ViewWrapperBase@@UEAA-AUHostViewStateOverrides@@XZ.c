/*
 * XREFs of ?GetHostViewStateOverrides@ViewWrapperBase@@UEAA?AUHostViewStateOverrides@@XZ @ 0x180297DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x18029D240 (-s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA-AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewSt.c)
 */

_DWORD *__fastcall ViewWrapperBase::GetHostViewStateOverrides(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r10
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = ViewWrapperBase::s_ComputeAggregatedViewData(a1, v4, a1 + 212, a1 + 256);
  *v2 = 1;
  v2[1] = *(_DWORD *)(v1 + 24);
  return v2;
}
