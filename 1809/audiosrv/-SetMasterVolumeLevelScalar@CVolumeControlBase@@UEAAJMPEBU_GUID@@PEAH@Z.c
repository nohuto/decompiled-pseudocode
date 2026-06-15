/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800B9380
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180049C18 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005BA20 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005C020 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C1E4 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C2E4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800AEE6C (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     WPP_SF_qdg @ 0x1800BA14C (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800BA1A4 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x1800BA2E0 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x1800BA3A4 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  CVolumeUnit *v7; // rax
  int v8; // r8d
  float Wiper; // xmm12_4
  int v10; // r14d
  CVolumeUnit *v11; // rax
  float DB; // xmm11_4
  CVolumeUnit *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  _DWORD *v17; // rax
  int v18; // xmm9_4
  int v19; // xmm8_4
  int v20; // xmm7_4
  CVolumeUnit *v21; // rax
  float v22; // xmm0_4
  CVolumeUnit *v23; // rax
  float v24; // xmm8_4
  CVolumeUnit *v25; // rax
  double v26; // xmm2_8
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int i; // ebx
  CVolumeUnit *v30; // rax
  float v31; // xmm7_4
  CVolumeUnit *v32; // rax
  double v33; // xmm2_8
  CVolumeUnit *v34; // rax
  __int64 v35; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+48h] [rbp-A0h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v15 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      673LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v15;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v38 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                        (_QWORD *)this + 11,
                        *((unsigned int *)this + 30));
  Wiper = CVolumeUnit::GetWiper(v7);
  v10 = 1;
  if ( a2 == Wiper )
    goto LABEL_34;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v8, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  DB = CVolumeUnit::GetDB(v11);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
      this,
      *((_DWORD *)this + 30),
      a2);
  }
  v13 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 11,
                         *((unsigned int *)this + 30));
  v14 = CVolumeUnit::SetWiper(v13, a2);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v17 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 11,
                      *((unsigned int *)this + 30));
    v18 = v17[4];
    v19 = v17[3];
    v20 = v17[2];
    v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           *((unsigned int *)this + 30));
    v22 = CVolumeUnit::GetDB(v21);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
    *((float *)this + 54) = v22;
    *((_DWORD *)this + 55) = v20;
    *((_DWORD *)this + 56) = v19;
    *((_DWORD *)this + 57) = v18;
    v23 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 11,
                           *((unsigned int *)this + 30));
    v24 = CVolumeUnit::GetDB(v23) - DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v25 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 11,
                             *((unsigned int *)this + 30));
      v26 = CVolumeUnit::GetDB(v25);
      WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v27, v28, this, v24, *(_QWORD *)&v26, DB);
    }
    for ( i = 0; i < *((_DWORD *)this + 31); ++i )
    {
      if ( i != *((_DWORD *)this + 30) )
      {
        v30 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 11,
                               i);
        v31 = CVolumeUnit::GetDB(v30) + v24;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v32 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 11,
                                 i);
          v33 = CVolumeUnit::GetDB(v32);
          WPP_SF_qdgg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            26LL,
            &WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
            this,
            i,
            *(_QWORD *)&v33,
            v31);
        }
        v34 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 11,
                               i);
        CVolumeUnit::SetDB(v34, v31);
      }
    }
    v14 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 721LL;
      goto LABEL_28;
    }
    if ( !a3 )
      goto LABEL_33;
    v35 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
    if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
      v35 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
    if ( v35 )
LABEL_33:
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
        *((_QWORD *)this + 17),
        0LL,
        a3);
LABEL_34:
    if ( a4 )
    {
      if ( Wiper != a2 )
        v10 = 0;
      *a4 = v10;
    }
    v15 = 0;
    goto LABEL_39;
  }
  v16 = 692LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v16,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v14);
LABEL_39:
  if ( v38 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
