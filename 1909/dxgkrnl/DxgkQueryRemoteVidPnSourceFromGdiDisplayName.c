/*
 * XREFs of DxgkQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C0040620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryRemoteVidPnSourceFromGdiDisplayName(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 12) + 440LL))(a1);
  v6 = WdLogNewEntry5_WdError(v4, v3, v5);
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  *(_QWORD *)(v6 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v6);
  return 3221225485LL;
}
