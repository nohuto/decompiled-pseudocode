/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C00433B4
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0043520 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0043CE4 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  NTSTATUS result; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  int RemlockSize; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    RemlockSize = v2;
    McTemplateK0xq(v5, &Dxgk_DpiRequestDevicePowerIrp, v6, *(_QWORD *)(a1 + 3792), RemlockSize);
  }
  v7 = *(unsigned int *)(a1 + 4188);
  if ( (unsigned int)v7 >= 3 )
  {
    *(_DWORD *)(a1 + 4188) = 0;
    v7 = 0LL;
  }
  v8 = a1 + 8 * (v7 + 2 * (v7 + 262));
  *(_DWORD *)(v8 + 20) = 0;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 16) = v2;
  *(_QWORD *)v8 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(a1 + 24),
               2u,
               (POWER_STATE)v2,
               (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
               (PVOID)v8,
               0LL);
    v10 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v8 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v8 + 20) = v10;
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v10;
      result = WdLogEvent5_WdError(v12);
    }
    ++*(_DWORD *)(a1 + 4188);
  }
  return result;
}
