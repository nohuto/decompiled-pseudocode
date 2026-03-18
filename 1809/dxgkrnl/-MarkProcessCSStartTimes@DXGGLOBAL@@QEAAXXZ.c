/*
 * XREFs of ?MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ @ 0x1C0210190
 * Callers:
 *     ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C020FF0C (-InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z.c)
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0210550 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C002FD4C (McTemplateK0.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C020FFD8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::MarkProcessCSStartTimes(DXGGLOBAL *this, __int64 a2, const GUID *a3)
{
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0((__int64)this, &CSAccountingInProgress_Start, a3);
  DXGGLOBAL::IterateProcessAndApplyCSFn((__int64)this, 1u);
}
