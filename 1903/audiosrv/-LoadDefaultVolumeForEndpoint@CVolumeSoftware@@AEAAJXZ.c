/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C61B0
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5800 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800600EC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180060400 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180060550 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180060730 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C3FA4 (WPP_SF_qS.c)
 *     WPP_SF_qg @ 0x1800C8AAC (WPP_SF_qg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  float v5; // xmm6_4
  unsigned int i; // esi
  __int64 v7; // rdx
  float v8; // xmm3_4
  ATL::CAtlException *v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-B0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-A0h]
  __int64 v15; // [rsp+50h] [rbp-98h]
  __int64 v16; // [rsp+58h] [rbp-90h]
  ATL::CAtlException *v17; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v18[64]; // [rsp+70h] [rbp-78h] BYREF
  int v20; // [rsp+100h] [rbp+18h]
  float v21; // [rsp+108h] [rbp+20h]

  v16 = -2LL;
  v1 = this;
  v12 = 0LL;
  v11 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v12);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v11);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x32u,
          (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
          v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_AudioEndpoint_Default_VolumeInDb,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 19 )
        {
          v5 = (float)(int)v14 * 0.000015258789;
          v21 = v5;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v1, v5);
          }
          for ( i = 0; i < *((_DWORD *)v1 + 31); ++i )
          {
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v18);
            if ( *((_DWORD *)v1 + 74) == 4 )
              v8 = FLOAT_30_0;
            else
              v8 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v18, v7, -96.0, v8, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
            CVolumeUnit::SetDB((CVolumeUnit *)v18, v5);
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (_QWORD *)v1 + 11,
                i,
                (__int64)v18);
            }
            catch ( ATL::CAtlException *v17 )
            {
              v10 = v17;
              if ( *(_DWORD *)v17 == -1073741571 )
                _o__resetstkoflw();
              v20 = *(_DWORD *)v10;
              v2 = *(_DWORD *)v10;
              if ( v20 < 0 )
                break;
              v1 = this;
              v5 = v21;
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
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1852, v2);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v2;
}
