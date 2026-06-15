/*
 * XREFs of IsSamplingRateBitRateSupported @ 0x1800380A0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180068A20 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180068C90 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180068EF0 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180069150 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800693B0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180038218 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     FillHrtfDesiredFormat @ 0x1800433A0 (FillHrtfDesiredFormat.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsSamplingRateBitRateSupported(__int16 *a1, __int64 a2, __int64 a3)
{
  char v5; // r14
  __int16 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v11; // esi
  _WORD *v12; // rdi

  v5 = 0;
  v6 = *a1;
  v7 = 65533LL;
  if ( ((*a1 - 1) & 0xFFFD) == 0 )
  {
    if ( v6 != -2 )
    {
      FillHrtfDesiredFormat(
        (unsigned __int16)a1[1],
        (unsigned __int16)a1[7],
        (unsigned __int16)a1[7],
        *((_DWORD *)a1 + 1),
        a3);
LABEL_11:
      v11 = 0;
      v12 = &unk_1801718D2;
      do
      {
        if ( v5 )
          break;
        if ( *(v12 - 1) == *(_WORD *)(a3 + 14) && (v6 != -2 || *v12 == *(_WORD *)(a3 + 18)) )
        {
          *(_WORD *)(a3 + 18) = *v12;
          v5 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a2, a3);
          if ( !v5 && *(_DWORD *)(a3 + 20) == 1599 )
          {
            *(_DWORD *)(a3 + 20) = 255;
            v5 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a2, a3);
          }
        }
        ++v11;
        v12 += 2;
      }
      while ( v11 < 4 );
      goto LABEL_6;
    }
LABEL_10:
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *((_OWORD *)a1 + 1);
    *(_QWORD *)(a3 + 32) = *((_QWORD *)a1 + 4);
    goto LABEL_11;
  }
  if ( v6 == -2 )
  {
    v8 = *((_QWORD *)a1 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)a1 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
      goto LABEL_10;
  }
LABEL_6:
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    LOBYTE(v7) = v9 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v5;
}
