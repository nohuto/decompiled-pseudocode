/*
 * XREFs of ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1C026F62C
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C026E4B8 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026E5D0 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C026EBA8 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(CPhysicalMonitorHandle *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 22) )
    return *((_QWORD *)this + 10) != 0LL;
  return result;
}
