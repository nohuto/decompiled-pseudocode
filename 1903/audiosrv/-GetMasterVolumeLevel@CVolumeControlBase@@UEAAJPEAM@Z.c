/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18005FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005FC50 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     WPP_SF_qdg @ 0x1800C896C (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  unsigned int v4; // ebx
  CVolumeUnit *v5; // rax
  float DB; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v9 = 0;
  v4 = -2147467261;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    v5 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (char *)this + 88,
                          *((unsigned int *)this + 30));
    DB = CVolumeUnit::GetDB(v5);
    *a2 = DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        this,
        *((_DWORD *)this + 30),
        DB);
    }
    v4 = 0;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevel", 414, -2147467261);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
