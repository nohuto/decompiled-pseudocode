/*
 * XREFs of DxgkSetHwProtectionTeardownRecovery @ 0x1C0040530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetHwProtectionTeardownRecovery(__int64 *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v7 = *a1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Current + 12) + 432LL))(&v7);
  v5 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
