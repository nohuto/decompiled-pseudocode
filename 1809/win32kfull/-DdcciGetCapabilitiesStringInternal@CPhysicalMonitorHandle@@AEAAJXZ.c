/*
 * XREFs of ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0255444
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C0254E7C (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C0255574 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0254F94 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0255260 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(CPhysicalMonitorHandle *this)
{
  void *v2; // rcx
  struct OPM::CMutex *v3; // rdx
  unsigned int CapabilitiesStringFromRegistry; // edi
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v7, (CPhysicalMonitorHandle *)((char *)this + 72));
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  v3 = (struct OPM::CMutex *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v6, v3);
  CapabilitiesStringFromRegistry = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((PDEVICE_OBJECT *)this);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v6);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v7);
  if ( CapabilitiesStringFromRegistry == 1612644351 )
    return (unsigned int)CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(this);
  return CapabilitiesStringFromRegistry;
}
