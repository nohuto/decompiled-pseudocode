/*
 * XREFs of ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800407D0
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003CBAC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1800406BC (CDelayIAMOperations--AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180051700 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18006A888 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180080590 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     CDelayIAMOperations::AddOperation__lambda_3eaa8416a18b3d4d2003ae87be4de258___ @ 0x18008E9CC (CDelayIAMOperations--AddOperation__lambda_3eaa8416a18b3d4d2003ae87be4de258___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x18012944C (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x18012954C (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x180129648 (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x18012977C (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x18016DDBC (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180294488 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsValidWindow(CApplicationManagerUtility *this, HWND a2)
{
  int v3; // eax
  char v4; // bl

  SetLastError(0);
  v3 = IsWindowInDestroy(this);
  v4 = 0;
  if ( !v3 )
    return GetLastError() != 1400;
  return v4;
}
