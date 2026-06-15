/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180069F50
 * Callers:
 *     <none>
 * Callees:
 *     IsSamplingRateBitRateSupported @ 0x18000BD6C (IsSamplingRateBitRateSupported.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18000BEA4 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000BEE4 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18000BF08 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180037438 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1800454E0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x180047940 (FillHrtfDesiredFormat.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDtsxHeadphones::IsTechnologySupported(
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
  CSpatialAudioTech *v10; // rsi
  _BYTE *v11; // r14
  __int64 v12; // r13
  char v13; // bl
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // esi
  char *v20; // r14
  int *v21; // r13
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v22; // edi
  bool v24[4]; // [rsp+38h] [rbp-A9h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v25; // [rsp+3Ch] [rbp-A5h]
  __int64 v26; // [rsp+40h] [rbp-A1h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-99h]
  CSpatialAudioTech *v28; // [rsp+50h] [rbp-91h]
  _BYTE *v29; // [rsp+58h] [rbp-89h]
  __int64 v30; // [rsp+60h] [rbp-81h]
  __int64 v31; // [rsp+68h] [rbp-79h]
  __int64 v32; // [rsp+70h] [rbp-71h]
  _BYTE v33[64]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v35; // [rsp+C8h] [rbp-19h]
  __int64 v36; // [rsp+D8h] [rbp-9h]

  v31 = -2LL;
  v25 = a2;
  v10 = this;
  v28 = this;
  v32 = a5;
  v11 = a8;
  v29 = a8;
  v12 = a9;
  v30 = a9;
  v13 = 0;
  v24[0] = 0;
  *a7 = 0;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *((_QWORD *)v10 + 1) )
  {
    memset_0(&v34, 0, 0x28uLL);
    v26 = 0xAC440000BB80LL;
    if ( !a4 )
      goto LABEL_8;
    v15 = 0;
    v14 = *(unsigned int *)(a4 + 4);
    v16 = &v26;
    while ( (_DWORD)v14 != *(_DWORD *)v16 )
    {
      ++v15;
      v16 = (__int64 *)((char *)v16 + 4);
      if ( v15 >= 2 )
        goto LABEL_8;
    }
    v17 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            (__int64)v33,
            a5);
    v13 = IsSamplingRateBitRateSupported((__int16 *)a4, v17, (__int64)&v34);
    v24[0] = v13;
    if ( !v13 )
    {
LABEL_8:
      v18 = 0;
      v27 = &v26;
      while ( !v13 )
      {
        v19 = 0;
        v20 = (char *)&unk_180170780;
        v21 = (int *)v27;
        do
        {
          if ( v13 )
            break;
          FillHrtfDesiredFormat(a6, *(_WORD *)v20, *((_WORD *)v20 + 1), *v21, (__int64)&v34);
          v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v34);
          v24[0] = v13;
          if ( !v13 && DWORD1(v35) == 1599 )
          {
            DWORD1(v35) = 255;
            v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v34);
            v24[0] = v13;
          }
          ++v19;
          v20 += 4;
        }
        while ( v19 < 4 );
        ++v18;
        v27 = (__int64 *)(v21 + 1);
        v12 = v30;
        if ( v18 >= 2 )
        {
          if ( !v13 )
            goto LABEL_23;
          break;
        }
      }
      v11 = v29;
      v10 = v28;
    }
    v22 = v25;
    CSpatialAudioTech::AssignPriority(v10, (unsigned int)v25, 3LL, 2LL, a7, v24);
    v13 = v24[0];
    if ( v24[0] )
    {
      if ( *a7 )
      {
        *v11 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v10, (unsigned int)v22, 1LL, 2LL, a7, v24);
        v13 = v24[0];
      }
    }
LABEL_23:
    *(_OWORD *)v12 = v34;
    *(_OWORD *)(v12 + 16) = v35;
    *(_QWORD *)(v12 + 32) = v36;
  }
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a5, v14);
  return v13;
}
