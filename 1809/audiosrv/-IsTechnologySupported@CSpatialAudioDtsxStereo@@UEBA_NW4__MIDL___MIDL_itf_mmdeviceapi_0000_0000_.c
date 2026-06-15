/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800553B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180055D5C (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055F90 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     FillHrtfDesiredFormat @ 0x180055FC8 (FillHrtfDesiredFormat.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     IsSamplingRateBitRateSupported @ 0x180125010 (IsSamplingRateBitRateSupported.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioDtsxStereo::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        _BYTE *a7,
        _OWORD *a8)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v9; // r15d
  unsigned int *v11; // r12
  _BYTE *v12; // r13
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // r14
  _DWORD *v17; // r13
  unsigned int v18; // esi
  unsigned __int16 *v19; // r12
  unsigned __int16 v20; // ax
  CSpatialAudioTech *v21; // rsi
  _OWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rax
  bool v28[4]; // [rsp+38h] [rbp-C9h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v29; // [rsp+3Ch] [rbp-C5h]
  __int64 v30; // [rsp+40h] [rbp-C1h]
  unsigned int *v31; // [rsp+48h] [rbp-B9h]
  _BYTE *v32; // [rsp+50h] [rbp-B1h]
  __int64 v33; // [rsp+58h] [rbp-A9h]
  CSpatialAudioTech *v34; // [rsp+60h] [rbp-A1h]
  _OWORD *v35; // [rsp+68h] [rbp-99h]
  __int64 v36; // [rsp+70h] [rbp-91h]
  __int64 v37; // [rsp+78h] [rbp-89h]
  __int64 v38; // [rsp+80h] [rbp-81h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-41h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-31h]
  __int64 v41; // [rsp+E0h] [rbp-21h]
  _DWORD v42[4]; // [rsp+E8h] [rbp-19h] BYREF

  v36 = -2LL;
  v33 = a3;
  v9 = a2;
  v29 = a2;
  v34 = a1;
  v37 = a5;
  v11 = a6;
  v31 = a6;
  v12 = a7;
  v32 = a7;
  v35 = a8;
  v13 = 0;
  v28[0] = 0;
  *a6 = 0;
  *a7 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *((_QWORD *)a1 + 1) )
  {
    memset_0(&v39, 0, 0x28uLL);
    v16 = 0;
    if ( v9 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v15) )
      v16 = (unsigned int)IsVirtualSurroundSoundAllowedToZeroFill() != 0;
    v42[0] = 48000;
    v42[1] = 44100;
    v42[2] = 32000;
    if ( !a4 )
      goto LABEL_4;
    v25 = 0;
    v14 = *(unsigned int *)(a4 + 4);
    v26 = v42;
    while ( (_DWORD)v14 != *v26 )
    {
      ++v25;
      ++v26;
      if ( v25 >= 3 )
        goto LABEL_4;
    }
    v27 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            &v38,
            a5);
    v13 = IsSamplingRateBitRateSupported(a4, v27, &v39);
    v28[0] = v13;
    if ( v13 )
    {
LABEL_15:
      v21 = v34;
      CSpatialAudioTech::AssignPriority(v34, v9, Speakers, 2u, v11, v28);
      v13 = v28[0];
      if ( v28[0] )
      {
        if ( *v11 )
        {
          *v12 = 1;
        }
        else
        {
          CSpatialAudioTech::AssignPriority(v21, v9, Headphones, 2u, v11, v28);
          v13 = v28[0];
        }
      }
    }
    else
    {
LABEL_4:
      LODWORD(v30) = 0;
      v17 = v42;
      do
      {
        if ( v13 )
          goto LABEL_14;
        v18 = 0;
        v19 = (unsigned __int16 *)&unk_18016D260;
        do
        {
          if ( v13 )
            break;
          if ( v16 && v33 )
            v20 = *(_WORD *)(v33 + 2);
          else
            v20 = 2;
          FillHrtfDesiredFormat(v20, *v19, v19[1], *v17, (__int64)&v39);
          v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v39);
          v28[0] = v13;
          if ( !v13 && DWORD1(v40) == 1599 )
          {
            DWORD1(v40) = 255;
            v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v39);
            v28[0] = v13;
          }
          ++v18;
          v19 += 2;
        }
        while ( v18 < 4 );
        LODWORD(v30) = v30 + 1;
        ++v17;
      }
      while ( (unsigned int)v30 < 3 );
      if ( v13 )
      {
LABEL_14:
        v12 = v32;
        v9 = v29;
        v11 = v31;
        goto LABEL_15;
      }
    }
    v22 = v35;
    *v35 = v39;
    v22[1] = v40;
    *((_QWORD *)v22 + 4) = v41;
  }
  v23 = *(_QWORD *)(a5 + 56);
  if ( v23 )
  {
    LOBYTE(v14) = v23 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v14);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v13;
}
