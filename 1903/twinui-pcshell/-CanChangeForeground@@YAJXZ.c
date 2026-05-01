/*
 * XREFs of ?CanChangeForeground@@YAJXZ @ 0x180068760
 * Callers:
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x180068690 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180076D70 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x18010EE70 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x18011B4FC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x18014ECC0 (-s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 CanChangeForeground(void)
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)CanBrokerForceForeground(&v1) )
    return v1 == 0 ? 0x8007139F : 0;
  result = ResultFromKnownLastError();
  if ( (int)result >= 0 )
    return v1 == 0 ? 0x8007139F : 0;
  return result;
}
