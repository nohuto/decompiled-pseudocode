/*
 * XREFs of DxgkOpenAdapterFromHdc @ 0x1C013F160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromHdc(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 12) + 456LL))(a1);
  v8 = WdLogNewEntry5_WdError(v5, v4, v6);
  *(_QWORD *)(v8 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
