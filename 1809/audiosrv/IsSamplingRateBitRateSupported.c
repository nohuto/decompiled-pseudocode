/*
 * XREFs of IsSamplingRateBitRateSupported @ 0x180125010
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055180 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800553B0 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800555E0 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055830 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055A80 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055F90 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     FillHrtfDesiredFormat @ 0x180055FC8 (FillHrtfDesiredFormat.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsSamplingRateBitRateSupported(__int16 *a1, __int64 a2, __int64 a3)
{
  char v5; // r14
  __int16 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // esi
  _WORD *v10; // rdi
  __int64 v11; // rcx

  v5 = 0;
  v6 = *a1;
  v7 = 65533LL;
  if ( ((*a1 - 1) & 0xFFFD) == 0 )
  {
    if ( v6 != -2 )
    {
      FillHrtfDesiredFormat(a1[1], a1[7], a1[7], *((_DWORD *)a1 + 1), a3);
LABEL_10:
      v9 = 0;
      v10 = &unk_18016D262;
      do
      {
        if ( v5 )
          break;
        if ( *(v10 - 1) == *(_WORD *)(a3 + 14) && (v6 != -2 || *v10 == *(_WORD *)(a3 + 18)) )
        {
          *(_WORD *)(a3 + 18) = *v10;
          v5 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a2, a3);
          if ( !v5 && *(_DWORD *)(a3 + 20) == 1599 )
          {
            *(_DWORD *)(a3 + 20) = 255;
            v5 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a2, a3);
          }
        }
        ++v9;
        v10 += 2;
      }
      while ( v9 < 4 );
      goto LABEL_19;
    }
LABEL_8:
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *((_OWORD *)a1 + 1);
    *(_QWORD *)(a3 + 32) = *((_QWORD *)a1 + 4);
    goto LABEL_10;
  }
  if ( v6 == -2 )
  {
    v8 = *((_QWORD *)a1 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)a1 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
      goto LABEL_8;
  }
LABEL_19:
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    LOBYTE(v7) = v11 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v5;
}
