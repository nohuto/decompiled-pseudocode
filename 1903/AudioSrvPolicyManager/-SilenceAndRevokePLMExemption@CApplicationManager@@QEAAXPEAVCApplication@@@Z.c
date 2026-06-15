/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001C87C
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x180011F60 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001BB80 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA1C (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000FBAC (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001BD24 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)a2 + 141) = 0;
  *((_DWORD *)a2 + 142) = 0;
  *((_DWORD *)a2 + 143) = 0;
  *((_DWORD *)a2 + 144) = 0;
  *((_DWORD *)a2 + 145) = 0;
  *((_DWORD *)a2 + 146) = 0;
  *((_DWORD *)a2 + 147) = 1;
  CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
  CApplicationManager::ApplyPBMPolicy(this, a2, 209, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
