/*
 * XREFs of ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005F2C4
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060758 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18005F39C (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18005F500 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005FC78 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(CVolumeHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  signed int VolumeControlForEndpoint; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 264));
  VolumeControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      VolumeControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    VolumeControlForEndpoint = CVolumeHardware::FindVolumeControlForEndpoint(this, a2, a3);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_13;
    VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 32) + 24LL))(
                                 *((_QWORD *)this + 32),
                                 (char *)this + 284);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_13;
    VolumeControlForEndpoint = CVolumeControlBase::Initialize(this, a2);
    if ( VolumeControlForEndpoint >= 0 )
    {
      VolumeHardwareLogger::Initialize((char *)this + 288, this);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
      }
    }
  }
  if ( VolumeControlForEndpoint < 0 )
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::Initialize", 1371, VolumeControlForEndpoint);
  return (unsigned int)VolumeControlForEndpoint;
}
