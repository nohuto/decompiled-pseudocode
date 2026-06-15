/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180068C90
 * Callers:
 *     <none>
 * Callees:
 *     IsSamplingRateBitRateSupported @ 0x1800380A0 (IsSamplingRateBitRateSupported.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x1800381D8 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180038218 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003823C (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180040FC0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x1800433A0 (FillHrtfDesiredFormat.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180046948 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyStereo::IsTechnologySupported(
        CSpatialAudioTech *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        unsigned int *a7,
        _BYTE *a8,
        __int64 a9)
{
  CSpatialAudioTech *v10; // r14
  unsigned int *v11; // rsi
  _BYTE *v12; // r13
  char v13; // bl
  __int64 v14; // rdx
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edi
  int *v19; // r13
  unsigned int v20; // esi
  char *v21; // r14
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v22; // edi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v24[2]; // [rsp+38h] [rbp-B9h] BYREF
  unsigned int *v25; // [rsp+40h] [rbp-B1h]
  CSpatialAudioTech *v26; // [rsp+48h] [rbp-A9h]
  _BYTE *v27; // [rsp+50h] [rbp-A1h]
  __int64 v28; // [rsp+58h] [rbp-99h]
  __int64 v29; // [rsp+60h] [rbp-91h]
  __int64 v30; // [rsp+70h] [rbp-81h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-41h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-31h]
  __int64 v33; // [rsp+D0h] [rbp-21h]
  _DWORD v34[4]; // [rsp+D8h] [rbp-19h] BYREF

  v28 = -2LL;
  v24[1] = a2;
  v10 = this;
  v26 = this;
  v29 = a5;
  v11 = a7;
  v25 = a7;
  v12 = a8;
  v27 = a8;
  v13 = 0;
  LOBYTE(v24[0]) = 0;
  *a7 = 0;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *((_QWORD *)v10 + 1) || !byte_1801B7910 )
  {
    memset_0(&v31, 0, 0x28uLL);
    v34[0] = 48000;
    v34[1] = 44100;
    v34[2] = 32000;
    if ( !a4 )
      goto LABEL_9;
    v15 = 0;
    v14 = *(unsigned int *)(a4 + 4);
    v16 = v34;
    while ( (_DWORD)v14 != *v16 )
    {
      ++v15;
      ++v16;
      if ( v15 >= 3 )
        goto LABEL_9;
    }
    v17 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            (__int64)&v30,
            a5);
    v13 = IsSamplingRateBitRateSupported((__int16 *)a4, v17, (__int64)&v31);
    LOBYTE(v24[0]) = v13;
    if ( !v13 )
    {
LABEL_9:
      v18 = 0;
      v19 = v34;
      while ( !v13 )
      {
        v20 = 0;
        v21 = (char *)&unk_1801718D0;
        do
        {
          if ( v13 )
            break;
          FillHrtfDesiredFormat(a6, *(_WORD *)v21, *((_WORD *)v21 + 1), *v19, (__int64)&v31);
          v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v31);
          LOBYTE(v24[0]) = v13;
          if ( !v13 && DWORD1(v32) == 1599 )
          {
            DWORD1(v32) = 255;
            v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v31);
            LOBYTE(v24[0]) = v13;
          }
          ++v20;
          v21 += 4;
        }
        while ( v20 < 4 );
        ++v18;
        ++v19;
        if ( v18 >= 3 )
        {
          if ( !v13 )
            goto LABEL_24;
          break;
        }
      }
      v12 = v27;
      v10 = v26;
      v11 = v25;
    }
    v22 = v24[1];
    CSpatialAudioTech::AssignPriority(v10, (unsigned int)v24[1], 1LL, 2LL, v11, (bool *)v24);
    v13 = v24[0];
    if ( LOBYTE(v24[0]) )
    {
      if ( *v11 )
      {
        *v12 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v10, (unsigned int)v22, 3LL, 2LL, v11, (bool *)v24);
        v13 = v24[0];
      }
    }
LABEL_24:
    *(_OWORD *)a9 = v31;
    *(_OWORD *)(a9 + 16) = v32;
    *(_QWORD *)(a9 + 32) = v33;
  }
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a5, v14);
  return v13;
}
