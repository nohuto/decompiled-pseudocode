/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C6DB8
 * Callers:
 *     ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C6D60 (-OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800C7100 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 * Callees:
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18005FC50 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800C8810 (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeSoftware::PersistVolumeState(const wchar_t **this)
{
  unsigned int i; // esi
  CVolumeUnit *v3; // rax
  const wchar_t *v4; // rbx
  CVolumeUnit *v5; // rax
  double DB; // [rsp+28h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  float *v9; // [rsp+48h] [rbp-8h]
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this[8]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[8],
         &v11) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 1LL, &v10) >= 0 )
  {
    pvar = (PROPVARIANT)65;
    v8 = 0LL;
    v9 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        this[8]);
    }
    LODWORD(v8) = 4 * *((_DWORD *)this + 31);
    v9 = (float *)CoTaskMemAlloc((unsigned int)v8);
    if ( v9 )
    {
      for ( i = 0; i < *((_DWORD *)this + 31); ++i )
      {
        v3 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](this + 11, i);
        v9[i] = CVolumeUnit::GetDB(v3);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v4 = this[8];
          v5 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](this + 11, i);
          DB = CVolumeUnit::GetDB(v5);
          WPP_SF_Sdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            45,
            (unsigned int)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
            (_DWORD)v4,
            i,
            SLOBYTE(DB));
        }
      }
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 48LL))(
        v10,
        &PKEY_APO_MasterVolumeLevel,
        &pvar);
      PropVariantClear(&pvar);
      *((_BYTE *)this + 300) = 0;
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
