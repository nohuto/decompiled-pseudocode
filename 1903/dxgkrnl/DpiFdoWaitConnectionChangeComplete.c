/*
 * XREFs of DpiFdoWaitConnectionChangeComplete @ 0x1C02A35BC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01F69D4 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiFdoWaitConnectionChangeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( a1 && (v3 = *(_QWORD *)(a1 + 64)) != 0 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    if ( DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v3 + 3896), 1LL, a3)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168)) )
    {
      v6 = -1073741811;
      v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v7[3] = 275LL;
      v7[4] = 21LL;
      v7[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v7);
    }
    else
    {
      Object[0] = (PVOID)(v3 + 3528);
      Object[1] = (PVOID)(v3 + 3696);
      return (unsigned int)KeWaitForMultipleObjects(2u, Object, WaitAll, Executive, 0, 0, 0LL, 0LL);
    }
  }
  else
  {
    v6 = -1073741811;
    v8 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  return v6;
}
