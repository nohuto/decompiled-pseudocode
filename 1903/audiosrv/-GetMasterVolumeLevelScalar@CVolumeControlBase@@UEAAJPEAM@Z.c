/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18004E640
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004E6D8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800C896C (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  unsigned __int64 v4; // rcx
  float Wiper; // xmm0_4
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    v4 = *((unsigned int *)this + 30);
    if ( v4 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + (v4 << 6)));
    *a2 = Wiper;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        this,
        *((_DWORD *)this + 30),
        Wiper);
    }
    v6 = 0;
  }
  else
  {
    v6 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 448, -2147467261);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
