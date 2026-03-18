/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026DEA0
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026E348 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026E80C (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026E8B8 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ @ 0x1C026EEFC (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEBAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C026EF14 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  unsigned int v1; // ebx
  char *v2; // r12
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  int v6; // ebx
  unsigned __int8 v7; // si
  unsigned int v8; // r13d
  char *PoolWithTag; // rax
  char *v10; // rbx
  unsigned int v11; // edi
  char *v12; // rax
  void *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v16[4]; // [rsp+28h] [rbp-38h] BYREF
  __int16 v17; // [rsp+2Ch] [rbp-34h]
  _BYTE v18[40]; // [rsp+30h] [rbp-30h] BYREF

  LOWORD(v1) = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v15 = 0;
  v4 = 0;
  while ( 1 )
  {
    *(_DWORD *)v16 = 15958865;
    v17 = (unsigned __int8)v1;
    v16[3] = BYTE1(v1);
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v16, 6u);
    if ( v6 < 0 )
      break;
    memset(v18, 0, 0x26uLL);
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, v18, 0x26u);
    if ( v6 < 0 )
      break;
    if ( (v18[1] & 0x7Fu) < 3 || (v7 = (v18[1] & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (v18[1] & 0x7F) == 3 )
      goto LABEL_18;
    v8 = v4 + v7;
    if ( v8 < v4 )
    {
LABEL_21:
      v6 = -1073741675;
      break;
    }
    if ( (unsigned int)v3 <= v8 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_21;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x63326947u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v6 = -1073741801;
        break;
      }
      if ( v2 )
      {
        memmove(PoolWithTag, v2, v4);
        ExFreePoolWithTag(v2, 0x63326947u);
      }
      v2 = v10;
    }
    memmove(&v2[v15], &v18[5], v7);
    v4 += v7;
    v1 = v7 + v15;
    v15 = v1;
    if ( v1 > 0xFFE0 )
    {
      v6 = 0;
LABEL_18:
      if ( v4 )
      {
        if ( (unsigned int)v3 > v4 )
        {
          v11 = v4 + 1;
          v2[v11 - 1] = 0;
          OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v15, (CPhysicalMonitorHandle *)((char *)this + 72));
          if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
          {
            v12 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x63326947u);
            *((_QWORD *)this + 10) = v12;
            if ( v12 )
            {
              v6 = RtlStringCbCopyA(v12, v11, v2);
              if ( v6 >= 0 )
              {
                *((_DWORD *)this + 22) = v11;
              }
              else
              {
                v13 = (void *)*((_QWORD *)this + 10);
                if ( v13 )
                  ExFreePoolWithTag(v13, 0x63326947u);
                *((_QWORD *)this + 10) = 0LL;
                *((_DWORD *)this + 22) = 0;
              }
            }
            else
            {
              v6 = -1073741801;
            }
          }
          OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v15);
        }
        else
        {
          v6 = -1071774328;
        }
      }
      else
      {
        v6 = -1071774329;
      }
      break;
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  return (unsigned int)v6;
}
