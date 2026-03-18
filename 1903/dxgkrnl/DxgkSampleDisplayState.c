/*
 * XREFs of DxgkSampleDisplayState @ 0x1C0234330
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C003F870 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v5 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 12) + 392LL))(a1);
  v9 = v5;
  if ( v5 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    CurrentProcess = PsGetCurrentProcess(v12, v11);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v9;
}
