/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18006A410
 * Callers:
 *     <none>
 * Callees:
 *     IsSamplingRateBitRateSupported @ 0x18000BD6C (IsSamplingRateBitRateSupported.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18000BEA4 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18000BEE4 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18000BF08 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1800454E0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x180047940 (FillHrtfDesiredFormat.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        unsigned int *a7,
        _BYTE *a8,
        _OWORD *a9)
{
  unsigned int *v11; // r15
  _BYTE *v12; // r12
  char v13; // bl
  int v14; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  char v17; // di
  __int64 v18; // rdx
  bool v19; // zf
  unsigned int v20; // ecx
  _DWORD *v21; // rax
  bool v22; // zf
  __int16 v23; // cx
  _WORD *v24; // rax
  unsigned int v25; // ecx
  int *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r14d
  int *v29; // r12
  unsigned int v30; // r15d
  EVENT_DATA_DESCRIPTOR *p_pData; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v32; // r14d
  CSpatialAudioTech *v33; // rsi
  _OWORD *v34; // rax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int *v37; // [rsp+40h] [rbp-C8h]
  _BYTE *v38; // [rsp+48h] [rbp-C0h]
  CSpatialAudioTech *v39; // [rsp+50h] [rbp-B8h]
  _OWORD *v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+78h] [rbp-90h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v48[3]; // [rsp+E4h] [rbp-24h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-18h] BYREF
  int v50; // [rsp+100h] [rbp-8h]

  v41 = -2LL;
  v36[1] = a2;
  v39 = a1;
  v42 = a5;
  v11 = a7;
  v37 = a7;
  v12 = a8;
  v38 = a8;
  v40 = a9;
  v13 = 1;
  if ( !byte_1801B7254 )
  {
    v14 = IsHrtfApoAvailable();
    byte_1801B7254 = 1;
    if ( v14 )
    {
      byte_1801B7255 = 1;
    }
    else
    {
      byte_1801B7255 = 0;
      if ( (unsigned int)hProvider > 4 )
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BC42, v15, v16, 2u, &pData);
    }
  }
  v17 = 0;
  LOBYTE(v36[0]) = 0;
  *a7 = 0;
  *a8 = 0;
  memset_0(&v44, 0, 0x28uLL);
  v47 = 48000;
  v48[0] = 48000;
  v48[1] = 44100;
  v48[2] = 32000;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      if ( *(_QWORD *)(a3 + 24) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
        goto LABEL_17;
      v19 = *(_QWORD *)(a3 + 32) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    }
    else
    {
      v19 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v19 )
    {
      v20 = 1;
      v18 = *(unsigned int *)(a3 + 4);
      v21 = v48;
      while ( *v21 != (_DWORD)v18 )
      {
        ++v20;
        ++v21;
        if ( v20 >= 4 )
          goto LABEL_17;
      }
      v47 = *(_DWORD *)(a3 + 4);
    }
  }
LABEL_17:
  pData.Ptr = 0x10001000100010LL;
  pData.Size = 1572896;
  pData.Reserved = 1572888;
  v50 = 524296;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      if ( *(_QWORD *)(a3 + 24) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
        goto LABEL_32;
      v22 = *(_QWORD *)(a3 + 32) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    }
    else
    {
      v22 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v22 )
    {
      if ( *(_WORD *)a3 == 0xFFFE )
        v23 = *(_WORD *)(a3 + 18);
      else
        v23 = *(_WORD *)(a3 + 14);
      v18 = 1LL;
      v24 = (_WORD *)&pData.Ptr + 3;
      while ( *(v24 - 1) != *(_WORD *)(a3 + 14) || *v24 != v23 )
      {
        v18 = (unsigned int)(v18 + 1);
        v24 += 2;
        if ( (unsigned int)v18 >= 5 )
          goto LABEL_32;
      }
      LOWORD(pData.Ptr) = *(_WORD *)(a3 + 14);
      WORD1(pData.Ptr) = v23;
    }
  }
LABEL_32:
  if ( !a4 )
    goto LABEL_38;
  v25 = 0;
  v18 = *(unsigned int *)(a4 + 4);
  v26 = &v47;
  while ( (_DWORD)v18 != *v26 )
  {
    ++v25;
    ++v26;
    if ( v25 >= 4 )
      goto LABEL_38;
  }
  v27 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)&v43,
          a5);
  v17 = IsSamplingRateBitRateSupported((__int16 *)a4, v27, (__int64)&v44);
  LOBYTE(v36[0]) = v17;
  if ( !v17 )
  {
LABEL_38:
    v28 = 0;
    v29 = &v47;
    while ( !v17 )
    {
      v30 = 0;
      p_pData = &pData;
      do
      {
        if ( v17 )
          break;
        FillHrtfDesiredFormat(a6, p_pData->Ptr, WORD1(p_pData->Ptr), *v29, (__int64)&v44);
        v17 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v44);
        LOBYTE(v36[0]) = v17;
        if ( !v17 && DWORD1(v45) == 1599 )
        {
          DWORD1(v45) = 255;
          v17 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, (__int64)&v44);
          LOBYTE(v36[0]) = v17;
        }
        ++v30;
        p_pData = (EVENT_DATA_DESCRIPTOR *)((char *)p_pData + 4);
      }
      while ( v30 < 5 );
      ++v28;
      ++v29;
      if ( v28 >= 4 )
      {
        if ( !v17 )
          goto LABEL_53;
        break;
      }
    }
    v12 = v38;
    v11 = v37;
  }
  v32 = v36[1];
  v33 = v39;
  CSpatialAudioTech::AssignPriority(v39, (unsigned int)v36[1], 3LL, 10LL, v11, (bool *)v36);
  v17 = v36[0];
  if ( LOBYTE(v36[0]) )
  {
    if ( *v11 )
    {
      *v12 = 1;
    }
    else
    {
      CSpatialAudioTech::AssignPriority(v33, (unsigned int)v32, 1LL, 10LL, v11, (bool *)v36);
      v17 = v36[0];
    }
  }
LABEL_53:
  v34 = v40;
  *v40 = v44;
  v34[1] = v45;
  *((_QWORD *)v34 + 4) = v46;
  if ( !v17 || !byte_1801B7255 )
    v13 = 0;
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a5, v18);
  return v13;
}
