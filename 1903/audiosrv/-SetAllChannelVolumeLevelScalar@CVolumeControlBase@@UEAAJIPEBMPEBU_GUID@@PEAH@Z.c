/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C7420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004E6D8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180060254 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180060450 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebp
  unsigned int v13; // esi
  float v14; // xmm6_4
  CVolumeUnit *v15; // rax
  CVolumeUnit *v16; // rax
  int v17; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v9 = -2147024809;
    v10 = 816LL;
    v11 = 2147942487LL;
    goto LABEL_11;
  }
  v12 = 0;
  v13 = 0;
  if ( !a2 )
  {
LABEL_8:
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    v17 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v9 = v17;
    if ( v17 < 0 )
    {
      v10 = 843LL;
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      0LL,
      a4);
    if ( a5 )
      *a5 = v12 == 0;
    v9 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v14 = *a3;
    v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           v13);
    if ( CVolumeUnit::GetWiper(v15) != v14 )
      break;
LABEL_7:
    ++v13;
    ++a3;
    if ( v13 >= a2 )
      goto LABEL_8;
  }
  v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         v13);
  v17 = CVolumeUnit::SetWiper(v16, v14);
  v9 = v17;
  if ( v17 >= 0 )
  {
    ++v12;
    goto LABEL_7;
  }
  v10 = 827LL;
LABEL_10:
  v11 = (unsigned int)v17;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v11);
LABEL_16:
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
