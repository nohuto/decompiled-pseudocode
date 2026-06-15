/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055A80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180055D5C (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055F90 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     FillHrtfDesiredFormat @ 0x180055FC8 (FillHrtfDesiredFormat.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     IsSamplingRateBitRateSupported @ 0x180125010 (IsSamplingRateBitRateSupported.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioTech *a1,
        __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        _BYTE *a7,
        _OWORD *a8)
{
  BOOL v8; // r14d
  unsigned int *v11; // r12
  char v12; // di
  int v13; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  unsigned int v21; // r14d
  unsigned __int16 *v22; // r12
  unsigned __int16 v23; // ax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v24; // esi
  CSpatialAudioTech *v25; // r14
  _OWORD *v26; // rax
  __int64 v27; // rcx
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  __int64 v31; // rax
  bool v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  BOOL v33; // [rsp+3Ch] [rbp-CCh]
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v34[2]; // [rsp+40h] [rbp-C8h]
  EVENT_DATA_DESCRIPTOR *p_pData; // [rsp+48h] [rbp-C0h]
  unsigned int *v36; // [rsp+50h] [rbp-B8h]
  _BYTE *v37; // [rsp+58h] [rbp-B0h]
  CSpatialAudioTech *v38; // [rsp+60h] [rbp-A8h]
  _OWORD *v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  _BYTE v42[64]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-38h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF

  v40 = -2LL;
  v34[1] = a2;
  v38 = a1;
  v41 = a5;
  v11 = a6;
  v36 = a6;
  v37 = a7;
  v39 = a8;
  v12 = 1;
  if ( !byte_1801B3491 )
  {
    v13 = IsHrtfApoAvailable();
    byte_1801B3490 = v13 != 0;
    byte_1801B3491 = 1;
    if ( !v13 && (unsigned int)hProvider > 4 )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801779AF, v14, v15, 2u, &pData);
  }
  v16 = 0;
  v32[0] = 0;
  LOBYTE(v8) = 0;
  v33 = v8;
  *a6 = 0;
  *v37 = 0;
  memset_0(&v43, 0, 0x28uLL);
  if ( v34[1] == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v18) )
    v33 = IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  pData.Ptr = 0xBB800000BB80LL;
  pData.Size = 44100;
  pData.Reserved = 32000;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      v19 = *(_QWORD *)(a3 + 24) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v19 )
        v19 = *(_QWORD *)(a3 + 32) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      v20 = v19 == 0;
    }
    else
    {
      v20 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v20 )
    {
      v29 = 1;
      v17 = *(unsigned int *)(a3 + 4);
      v30 = (_DWORD *)&pData.Ptr + 1;
      while ( *v30 != (_DWORD)v17 )
      {
        ++v29;
        ++v30;
        if ( v29 >= 4 )
          goto LABEL_10;
      }
      LODWORD(pData.Ptr) = *(_DWORD *)(a3 + 4);
    }
  }
LABEL_10:
  if ( a4
    && (v31 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                v42,
                a5),
        v16 = IsSamplingRateBitRateSupported(a4, v31, &v43),
        v32[0] = v16) )
  {
LABEL_22:
    v24 = v34[1];
    v25 = v38;
    CSpatialAudioTech::AssignPriority(v38, v34[1], Headphones, 0xAu, v11, v32);
    v16 = v32[0];
    if ( v32[0] )
    {
      if ( *v11 )
      {
        *v37 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v25, v24, Speakers, 0xAu, v11, v32);
        v16 = v32[0];
      }
    }
  }
  else
  {
    v34[0] = RemoteNetworkDevice;
    p_pData = &pData;
    do
    {
      if ( v16 )
        goto LABEL_21;
      v21 = 0;
      v22 = (unsigned __int16 *)&unk_18016D260;
      do
      {
        if ( v16 )
          break;
        if ( v33 && a3 )
          v23 = *(_WORD *)(a3 + 2);
        else
          v23 = 2;
        FillHrtfDesiredFormat(v23, *v22, v22[1], p_pData->Ptr, (__int64)&v43);
        v16 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v43);
        v32[0] = v16;
        if ( !v16 && DWORD1(v44) == 1599 )
        {
          DWORD1(v44) = 255;
          v16 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v43);
          v32[0] = v16;
        }
        ++v21;
        v22 += 2;
      }
      while ( v21 < 4 );
      ++v34[0];
      p_pData = (EVENT_DATA_DESCRIPTOR *)((char *)p_pData + 4);
    }
    while ( v34[0] < (unsigned int)Microphone );
    if ( v16 )
    {
LABEL_21:
      v11 = v36;
      goto LABEL_22;
    }
  }
  v26 = v39;
  *v39 = v43;
  v26[1] = v44;
  *((_QWORD *)v26 + 4) = v45;
  if ( !v16 || !byte_1801B3490 )
    v12 = 0;
  v27 = *(_QWORD *)(a5 + 56);
  if ( v27 )
  {
    LOBYTE(v17) = v27 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v17);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v12;
}
