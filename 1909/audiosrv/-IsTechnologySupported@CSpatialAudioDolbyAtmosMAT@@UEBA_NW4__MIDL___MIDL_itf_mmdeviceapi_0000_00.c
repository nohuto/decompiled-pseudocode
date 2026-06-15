/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180069840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18000BEA4 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000BEE4 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180037438 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // esi
  __int64 v15; // xmm2_8
  unsigned int v16; // edi
  _OWORD *v17; // rsi
  _BYTE v19[40]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp-21h] BYREF

  v11 = 0;
  *a7 = 0;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *(_QWORD *)(a1 + 8) || !byte_1801B6910 )
  {
    memset_0(v19, 0, sizeof(v19));
    v20[0] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
    v20[1] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
    v13 = 2;
    if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
      v13 = 1;
    v12 = 8LL;
    if ( !a4
      || *(_WORD *)a4 != 0xFFFE
      || *(_WORD *)(a4 + 16) != 22
      || *(_DWORD *)(a4 + 4) != 192000
      || *(_WORD *)(a4 + 2) != 8
      || *(_WORD *)(a4 + 14) != 16
      || *(_WORD *)(a4 + 18) != 16
      || *(_DWORD *)(a4 + 20) != 1599 && *(_DWORD *)(a4 + 20) != 255 )
    {
      goto LABEL_21;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( *(_OWORD *)(a4 + 24) == __PAIR128__(*((_QWORD *)&v20[v14] + 1), *(_QWORD *)&v20[v14]) )
      {
        v11 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, a4);
        if ( v11 )
          break;
      }
      if ( ++v14 >= v13 )
      {
        v15 = *(_QWORD *)&v19[32];
        goto LABEL_20;
      }
    }
    *(_OWORD *)v19 = *(_OWORD *)a4;
    *(_OWORD *)&v19[16] = *(_OWORD *)(a4 + 16);
    v15 = *(_QWORD *)(a4 + 32);
LABEL_20:
    if ( !v11 )
    {
LABEL_21:
      v16 = 0;
      v17 = v20;
      while ( 1 )
      {
        *(_QWORD *)v19 = 0x2EE000008FFFELL;
        *(_DWORD *)&v19[14] = 1441808;
        *(_OWORD *)&v19[24] = *v17;
        *(_WORD *)&v19[18] = 16;
        *(_DWORD *)&v19[20] = 1599;
        *(_WORD *)&v19[12] = 16;
        *(_DWORD *)&v19[8] = 3072000;
        v11 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)v19);
        if ( v11 )
          break;
        ++v16;
        ++v17;
        if ( v16 >= v13 )
          goto LABEL_28;
      }
      v15 = *(_QWORD *)&v19[32];
    }
    *a7 = 1;
    *a8 = 0;
    *(_OWORD *)a9 = *(_OWORD *)v19;
    *(_OWORD *)(a9 + 16) = *(_OWORD *)&v19[16];
    *(_QWORD *)(a9 + 32) = v15;
  }
LABEL_28:
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a5, v12);
  return v11;
}
