/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800C5140
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005B690 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C070 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevel(CVolumeControlBase *this, unsigned int a2, float *a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // ebx
  CVolumeUnit *v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 31) )
  {
    v6 = -2147024809;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevel", 514, v6);
    goto LABEL_7;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_5;
  }
  v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 11, v3);
  *a3 = CVolumeUnit::GetDB(v7);
  v6 = 0;
LABEL_7:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
