/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1C029CC2C
 * Callers:
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C02460BC (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     DpiGdiHandleAsyncDisplayCallout @ 0x1C029CBE0 (DpiGdiHandleAsyncDisplayCallout.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v10, 0, 0x20uLL);
  LOBYTE(v2) = 1;
  v10[0] = 8;
  v3 = SMgrGdiCallout(v10, a1, v2, 0LL, 0LL, 0LL);
  v7 = v3;
  if ( v3 < 0 || v10[6] < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
