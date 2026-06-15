/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C6498
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5800 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800600EC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180060400 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180060550 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180060730 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C3FA4 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800C896C (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  float *v8; // r15
  unsigned int v9; // esi
  float v10; // xmm6_4
  unsigned __int16 i; // cx
  __int64 j; // rbx
  float v13; // xmm7_4
  __int64 v14; // rdx
  float v15; // xmm3_4
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-E0h]
  __int64 v20; // [rsp+40h] [rbp-D8h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-C8h]
  float *v23; // [rsp+58h] [rbp-C0h]
  float *v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  ATL::CAtlException *v26; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v27[104]; // [rsp+80h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  float v30; // [rsp+128h] [rbp+10h]
  int v31; // [rsp+130h] [rbp+18h]
  int v32; // [rsp+138h] [rbp+20h]

  v25 = -2LL;
  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  v20 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v20);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_42;
  }
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, &v18);
  v3 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, v1);
  }
  pvar = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
         v18,
         &PKEY_APO_MasterVolumeLevel,
         &pvar);
  v3 = v5;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 1739LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v6);
    PropVariantClear(&pvar);
    goto LABEL_9;
  }
  if ( (_WORD)pvar == 65 && (unsigned int)v22 >= 4 )
  {
    v8 = v23;
    v24 = v23;
    v9 = (unsigned int)v22 >> 2;
    v19 = (unsigned int)v22 >> 2;
    v10 = *v23;
    v30 = *v23;
    if ( (unsigned int)v22 >> 2 != *((_DWORD *)v1 + 31) )
    {
      for ( i = 1; i < v9; ++i )
      {
        v10 = fmaxf(v23[i], v10);
        v30 = v10;
      }
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v31 = j;
      if ( (unsigned int)j >= *((_DWORD *)v1 + 31) )
        break;
      if ( v9 == *((_DWORD *)v1 + 31) )
        v13 = v8[j];
      else
        v13 = v10;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          48LL,
          &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
          v1,
          j,
          v13);
      }
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v27);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v15 = FLOAT_30_0;
      else
        v15 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v27, v14, -96.0, v15, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v27, v13);
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
          (_QWORD *)v1 + 11,
          (unsigned int)j,
          (__int64)v27);
      }
      catch ( ATL::CAtlException *v26 )
      {
        v17 = v26;
        if ( *(_DWORD *)v26 == -1073741571 )
          _o__resetstkoflw();
        v32 = *(_DWORD *)v17;
        v3 = *(_DWORD *)v17;
        if ( v32 < 0 )
        {
          v6 = (unsigned int)v32;
          v7 = 1778LL;
          goto LABEL_16;
        }
        v1 = this;
        v8 = v24;
        v9 = v19;
        v10 = v30;
        LODWORD(j) = v31;
      }
    }
    PropVariantClear(&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    v3 = 0;
  }
  else
  {
    PropVariantClear(&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    v3 = -2147023728;
  }
LABEL_42:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  return v3;
}
