/*
 * XREFs of ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000FBAC
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD24 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001C87C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1D4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180029030 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(CApplication *this)
{
  if ( *((_DWORD *)this + 141) != 1 )
  {
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 145) = 0;
    *((_DWORD *)this + 141) = 1;
    *((_DWORD *)this + 142) = 1;
    *((_DWORD *)this + 144) = 1;
    *((_DWORD *)this + 146) = 1;
    *((_DWORD *)this + 147) = 1;
  }
}
