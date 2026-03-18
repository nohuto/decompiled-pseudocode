/*
 * XREFs of ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0210550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0 @ 0x1C002FD4C (McTemplateK0.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C020FFD8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ @ 0x1C0210190 (-MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall PDCIdleResiliencyEngagedCallBackFn(
        __int64 SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // edi
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx

  v4 = *Value;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(SettingGuid) + 431) != v4 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    v10 = (__int64)Global;
    if ( v4 )
    {
      DXGGLOBAL::MarkProcessCSStartTimes(Global, v7, v9);
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0(v8, &CSAccountingInProgress_Stop, v9);
      DXGGLOBAL::IterateProcessAndApplyCSFn(v10, 2u);
    }
    *((_DWORD *)DXGGLOBAL::GetGlobal(v11) + 431) = v4;
  }
  return 0LL;
}
