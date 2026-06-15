/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800B7D68
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800B70D0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005BCBC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005BFD0 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005C0BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C2E4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800BA14C (WPP_SF_qdg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 v3; // r15
  __int64 i; // rsi
  __int64 v5; // rdx
  float v6; // xmm3_4
  unsigned __int64 v7; // rdx
  ATL::CAtlException *v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-A8h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-98h]
  __int64 v13; // [rsp+48h] [rbp-90h]
  __int64 v14; // [rsp+50h] [rbp-88h]
  __int64 v15; // [rsp+58h] [rbp-80h]
  ATL::CAtlException *v16; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v17[104]; // [rsp+70h] [rbp-68h] BYREF
  int v19; // [rsp+F0h] [rbp+18h]
  __int64 v20; // [rsp+F8h] [rbp+20h] BYREF

  v15 = -2LL;
  v1 = this;
  v10 = 0LL;
  v20 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v10);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v20);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Fu,
          (__int64)&WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
          v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
             v20,
             &PKEY_APO_MasterVolumeLevel,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 65 && (unsigned int)v12 == 4LL * *((unsigned int *)v1 + 31) )
        {
          v3 = v13;
          v14 = v13;
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v1 + 31); i = (unsigned int)(i + 1) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                48LL,
                &WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
                v1,
                i,
                *(float *)(v3 + 4 * i));
            }
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v17);
            if ( *((_DWORD *)v1 + 74) == 4 )
              v6 = FLOAT_30_0;
            else
              v6 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v17, v5, -96.0, v6, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
            CVolumeUnit::SetDB((CVolumeUnit *)v17, *(float *)(v3 + 4 * i));
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (_QWORD *)v1 + 11,
                v7,
                (__int64)v17);
            }
            catch ( ATL::CAtlException *v16 )
            {
              v9 = v16;
              if ( *(_DWORD *)v16 == -1073741571 )
                _o__resetstkoflw();
              v19 = *(_DWORD *)v9;
              v2 = *(_DWORD *)v9;
              if ( v19 < 0 )
                break;
              v1 = this;
              v3 = v14;
            }
          }
        }
        else
        {
          v2 = -2147023728;
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadVolumeState", 1778, v2);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v2;
}
