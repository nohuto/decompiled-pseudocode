/*
 * XREFs of DpiSriovEventComplete @ 0x1C02A4294
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C540 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DpiSriovEventComplete(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void *v4; // rdi
  unsigned int v5; // ebx
  int v8; // esi
  __int64 v9; // rax

  v4 = *(void **)(a1 + 64);
  v5 = 0;
  v8 = a2;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, v4, L"DpiSriovEventComplete", 0LL);
  if ( a4 >= 4 && a3 )
  {
    if ( *((_BYTE *)v4 + (v8 != 0 ? 0x20 : 0) + 5444) )
      goto LABEL_9;
    v5 = -1073741811;
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
  }
  else
  {
    v5 = -1073741789;
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = -1073741789LL;
  }
  WdLogEvent5_WdError(v9);
LABEL_9:
  if ( bTracingEnabled )
    VgpuTrace(0, v5, v4, L"DpiSriovEventComplete", 0LL);
  return v5;
}
