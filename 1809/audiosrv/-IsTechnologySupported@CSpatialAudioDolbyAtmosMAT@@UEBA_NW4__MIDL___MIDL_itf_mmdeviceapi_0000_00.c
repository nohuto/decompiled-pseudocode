/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055E10
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055F90 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        __int64 a8)
{
  char v10; // r15
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // edi
  _OWORD *v15; // r14
  __int64 v16; // rcx
  unsigned int i; // r14d
  __int64 v19; // rax
  __int64 v20; // xmm2_8
  _BYTE v21[40]; // [rsp+40h] [rbp-41h] BYREF
  _OWORD v22[2]; // [rsp+68h] [rbp-19h] BYREF

  v10 = 0;
  *a6 = 0;
  *a7 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *(_QWORD *)(a1 + 8) || !byte_1801B27D4 )
  {
    memset_0(v21, 0, sizeof(v21));
    v22[0] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
    v22[1] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
    v12 = 2;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v13)
      && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
    {
      v12 = 1;
    }
    v11 = 8LL;
    if ( !a4
      || *(_WORD *)a4 != 0xFFFE
      || *(_WORD *)(a4 + 16) != 22
      || *(_DWORD *)(a4 + 4) != 192000
      || *(_WORD *)(a4 + 2) != 8
      || *(_WORD *)(a4 + 14) != 16
      || *(_WORD *)(a4 + 18) != 16
      || *(_DWORD *)(a4 + 20) != 1599 && *(_DWORD *)(a4 + 20) != 255 )
    {
      goto LABEL_4;
    }
    for ( i = 0; i < v12; ++i )
    {
      v19 = *(_QWORD *)(a4 + 24) - *(_QWORD *)&v22[i];
      if ( !v19 )
        v19 = *(_QWORD *)(a4 + 32) - *((_QWORD *)&v22[i] + 1);
      if ( !v19 )
      {
        v10 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, a4);
        if ( v10 )
        {
          *(_OWORD *)v21 = *(_OWORD *)a4;
          *(_OWORD *)&v21[16] = *(_OWORD *)(a4 + 16);
          v20 = *(_QWORD *)(a4 + 32);
          goto LABEL_31;
        }
      }
    }
    v20 = *(_QWORD *)&v21[32];
LABEL_31:
    if ( !v10 )
    {
LABEL_4:
      v14 = 0;
      v15 = v22;
      while ( 1 )
      {
        *(_QWORD *)v21 = 0x2EE000008FFFELL;
        *(_DWORD *)&v21[14] = 1441808;
        *(_OWORD *)&v21[24] = *v15;
        *(_WORD *)&v21[18] = 16;
        *(_DWORD *)&v21[20] = 1599;
        *(_WORD *)&v21[12] = 16;
        *(_DWORD *)&v21[8] = 3072000;
        v10 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, v21);
        if ( v10 )
          break;
        ++v14;
        ++v15;
        if ( v14 >= v12 )
          goto LABEL_7;
      }
      v20 = *(_QWORD *)&v21[32];
    }
    *a6 = 1;
    *a7 = 0;
    *(_OWORD *)a8 = *(_OWORD *)v21;
    *(_OWORD *)(a8 + 16) = *(_OWORD *)&v21[16];
    *(_QWORD *)(a8 + 32) = v20;
  }
LABEL_7:
  v16 = *(_QWORD *)(a5 + 56);
  if ( v16 )
  {
    LOBYTE(v11) = v16 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v11);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v10;
}
