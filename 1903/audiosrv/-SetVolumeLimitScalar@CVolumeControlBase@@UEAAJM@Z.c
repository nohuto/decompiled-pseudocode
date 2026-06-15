/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800C7FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800C808C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetVolumeLimitScalar(CVolumeControlBase *this, float a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  CVolumeUnit *v5; // rax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v3 = 0;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( *((_DWORD *)this + 31) )
  {
    while ( 1 )
    {
      v5 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 11,
                            v4);
      v6 = CVolumeUnit::SetVolumeLimitScalar(v5, a2);
      v3 = v6;
      if ( v6 < 0 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 31) )
        goto LABEL_6;
    }
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetVolumeLimitScalar", 871, v6);
  }
LABEL_6:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
