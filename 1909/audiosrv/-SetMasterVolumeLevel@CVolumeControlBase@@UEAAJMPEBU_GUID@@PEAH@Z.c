/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005B690 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C070 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C170 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800BD3D4 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     WPP_SF_qg_guid_ @ 0x1800C8650 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  __int64 v7; // rax
  float v8; // xmm10_4
  float v9; // xmm8_4
  int v10; // xmm11_4
  CVolumeUnit *v11; // rax
  int v12; // r8d
  float DB; // xmm9_4
  int v14; // r14d
  CVolumeUnit *v15; // rax
  float v16; // xmm6_4
  CVolumeUnit *v17; // rax
  float v18; // xmm6_4
  __int64 v19; // rax
  CVolumeUnit *v20; // rax
  CVolumeUnit *v21; // rax
  unsigned int v22; // esi
  float i; // xmm8_4
  CVolumeUnit *v24; // rax
  float v25; // xmm0_4
  CVolumeUnit *v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // r9
  __int64 v30; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-88h] BYREF
  char v33; // [rsp+38h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v33 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
         (_QWORD *)this + 11,
         *((unsigned int *)this + 30));
  v8 = *(float *)(v7 + 8);
  v9 = *(float *)(v7 + 12);
  v10 = *(_DWORD *)(v7 + 16);
  if ( v8 > a2 || a2 > v9 )
  {
    v30 = 544LL;
    goto LABEL_24;
  }
  v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  DB = CVolumeUnit::GetDB(v11);
  v14 = 1;
  if ( DB == a2 )
    goto LABEL_17;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v12, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v16 = CVolumeUnit::GetDB(v15);
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
  *((float *)this + 54) = v16;
  *((float *)this + 55) = v8;
  *((float *)this + 56) = v9;
  *((_DWORD *)this + 57) = v10;
  v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v18 = CVolumeUnit::GetDB(v17);
  v19 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
          (_QWORD *)this + 11,
          *((unsigned int *)this + 30));
  if ( *(float *)(v19 + 8) > a2 || a2 > *(float *)(v19 + 12) )
  {
    v30 = 561LL;
LABEL_24:
    v28 = -2147024809;
    v29 = 2147942487LL;
    goto LABEL_25;
  }
  v20 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  CVolumeUnit::SetDB(v20, a2);
  v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v22 = 0;
  for ( i = CVolumeUnit::GetDB(v21) - v18; v22 < *((_DWORD *)this + 31); ++v22 )
  {
    if ( v22 != *((_DWORD *)this + 30) )
    {
      v24 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             v22);
      v25 = CVolumeUnit::GetDB(v24);
      v26 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             v22);
      CVolumeUnit::SetDB(v26, v25 + i);
    }
  }
  v27 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
  v28 = v27;
  if ( v27 < 0 )
  {
    v29 = (unsigned int)v27;
    v30 = 578LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v29);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
    *((_QWORD *)this + 17),
    0LL,
    a3);
LABEL_17:
  if ( a4 )
  {
    if ( DB != a2 )
      v14 = 0;
    *a4 = v14;
  }
  v28 = 0;
LABEL_26:
  if ( v33 )
    LeaveCriticalSection(lpCriticalSection);
  return v28;
}
