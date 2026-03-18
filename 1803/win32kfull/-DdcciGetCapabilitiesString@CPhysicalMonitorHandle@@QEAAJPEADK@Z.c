/*
 * XREFs of ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C023D94C
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C023D8C4 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C023DE98 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1C023E900 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C023E918 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesString(const char **this, char *a2, unsigned int a3)
{
  SIZE_T v3; // r14
  int CapabilitiesStringInternal; // edi
  unsigned __int8 IsDDCCICapabilitiesStringInitialized; // bl
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  CapabilitiesStringInternal = 0;
  if ( (*((unsigned __int8 (__fastcall **)(const char **))*this + 2))(this) )
  {
    return (unsigned int)-1071774323;
  }
  else
  {
    CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)(this + 9));
    IsDDCCICapabilitiesStringInitialized = CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this);
    CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
    if ( IsDDCCICapabilitiesStringInitialized
      || (CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal((CPhysicalMonitorHandle *)this),
          CapabilitiesStringInternal >= 0) )
    {
      CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)(this + 9));
      if ( CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized((CPhysicalMonitorHandle *)this) )
      {
        if ( (unsigned int)v3 >= *((_DWORD *)this + 22) )
        {
          ProbeForWrite(a2, v3, 1u);
          RtlStringCbCopyA(a2, v3, this[10]);
        }
        else
        {
          CapabilitiesStringInternal = -1073741789;
        }
      }
      else
      {
        CapabilitiesStringInternal = -1071774323;
      }
      CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
    }
  }
  return (unsigned int)CapabilitiesStringInternal;
}
