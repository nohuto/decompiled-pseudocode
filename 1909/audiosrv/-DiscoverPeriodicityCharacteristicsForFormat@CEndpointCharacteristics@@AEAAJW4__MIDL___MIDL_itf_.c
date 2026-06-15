/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011696C
 * Callers:
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115434 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1801177CC (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A8FC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000C354 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F4E8 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180115E04 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1801187CC (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4,
        struct PacketSizeConstraints *a5,
        bool a6,
        __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11,
        unsigned int *a12)
{
  signed int PacketSizesFromConstraints; // ebx
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  char *v18; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // ebx
  struct _GUID *AliasedDeviceConnectorMode; // rax
  unsigned int v21; // eax
  unsigned int *v22; // rcx
  unsigned int *v23; // r8
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // edi
  unsigned int v30; // edi
  unsigned int v31; // eax
  unsigned int *v32; // rcx
  int v33; // r15d
  unsigned int v34; // edi
  unsigned int v35; // r12d
  unsigned int *v36; // rcx
  unsigned int v37; // eax
  unsigned __int64 v39; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v40; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v41; // [rsp+30h] [rbp-D0h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-90h]
  unsigned int *v46; // [rsp+78h] [rbp-88h]
  unsigned int *v47; // [rsp+80h] [rbp-80h]
  signed __int64 v48; // [rsp+88h] [rbp-78h]
  struct _GUID *v49; // [rsp+90h] [rbp-70h]
  char *v50; // [rsp+98h] [rbp-68h]
  const struct tWAVEFORMATEX *v51; // [rsp+A0h] [rbp-60h]
  CEndpointCharacteristics *v52; // [rsp+A8h] [rbp-58h]
  unsigned int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  struct _GUID v56; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v57; // [rsp+E0h] [rbp-20h] BYREF

  v54 = -2LL;
  v51 = a4;
  v49 = a3;
  v43 = a2;
  v52 = this;
  v47 = a9;
  v46 = a10;
  v53 = a12;
  PacketSizesFromConstraints = 0;
  v15 = 100000LL;
  if ( a7 )
    v15 = a7;
  v48 = v15;
  v16 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v15 / 10000000.0 + 0.5);
  *a11 = v16;
  *a10 = v16;
  *a9 = v16;
  *a8 = v16;
  if ( !*((_DWORD *)this + 8) )
  {
    v50 = 0LL;
    pv = 0LL;
    v55 = 0LL;
    PacketSizesFromConstraints = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                   *((_QWORD *)this + 2),
                                   &pv);
    if ( PacketSizesFromConstraints < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_6:
      v17 = 0LL;
LABEL_7:
      CoTaskMemFree(v17);
      return (unsigned int)PacketSizesFromConstraints;
    }
    v45 = a4->cbSize + 64;
    v18 = (char *)CoTaskMemAlloc(v45);
    CoTaskMemFree(0LL);
    v50 = v18;
    if ( !v18 )
    {
      PacketSizesFromConstraints = -2147024882;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_6;
    }
    *(_DWORD *)v18 = a4->cbSize + 64;
    *((_DWORD *)v18 + 1) = GetSessionIdFromEndpointId(pv);
    v19 = v43;
    *((_DWORD *)v18 + 2) = v43;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v19) )
    {
      v56 = *v49;
      AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
                                     (__int64)this,
                                     &v57,
                                     v19,
                                     &v56,
                                     1);
    }
    else
    {
      v56 = GUID_00000000_0000_0000_0000_000000000000;
      AliasedDeviceConnectorMode = &v56;
    }
    *(struct _GUID *)(v18 + 12) = *AliasedDeviceConnectorMode;
    memcpy_0(v18 + 44, a4, a4->cbSize + 18LL);
    PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                   *((_QWORD *)this + 2),
                                   *((_DWORD *)this + 39),
                                   (__int64)v18,
                                   v45,
                                   v48,
                                   &v44);
    if ( PacketSizesFromConstraints < 0 )
    {
LABEL_14:
      CoTaskMemFree(pv);
      pv = 0LL;
      v17 = v18;
      goto LABEL_7;
    }
    v21 = v44;
    *a11 = v44;
    v22 = v46;
    *v46 = v21;
    v23 = v47;
    *v47 = v21;
    *a8 = v21;
    if ( v43 == eHostProcessConnector && !a7 )
    {
      if ( *((_DWORD *)this + 39) == 1 && (unsigned int)g_MaxCapturePeriodicityInHns > v48 && (!a5 || !*(_BYTE *)a5) )
      {
        v24 = CheckConnectorSupportForPeriodicity(
                *((_QWORD *)this + 2),
                1,
                (__int64)v18,
                v45,
                (unsigned int)g_MaxCapturePeriodicityInHns,
                &v43);
        v22 = v46;
        v23 = v47;
        if ( v24 >= 0 )
          *a11 = v43;
      }
      if ( a5 )
      {
        v56 = *v49;
        PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                       a5,
                                       a4->nAvgBytesPerSec,
                                       a4->nBlockAlign,
                                       &v56,
                                       v39,
                                       v40,
                                       v41,
                                       a8,
                                       v23,
                                       v22,
                                       (unsigned int *)&v43);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)this + 39) != 1 || (v25 = v43, !*(_BYTE *)a5) )
          v25 = *a8;
        *a11 = v25;
      }
      else if ( a6 )
      {
        v26 = 25000LL * a4->nAvgBytesPerSec;
        if ( !is_mul_ok(0x61A8uLL, a4->nAvgBytesPerSec) )
        {
          PacketSizesFromConstraints = -2147024362;
          goto LABEL_14;
        }
        if ( v26 )
        {
          v27 = (v26 - 1) / (unsigned __int64)(10000000 * (unsigned int)a4->nBlockAlign);
          v28 = v27 + 1;
          PacketSizesFromConstraints = -2147024362;
          if ( v27 + 1 < v27 )
            goto LABEL_14;
          v29 = -1;
          if ( v28 <= 0xFFFFFFFF )
            v29 = v27 + 1;
          PacketSizesFromConstraints = v28 > 0xFFFFFFFF ? 0x80070216 : 0;
        }
        else
        {
          v29 = 0;
          PacketSizesFromConstraints = 0;
        }
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        v30 = (v29 - 1) & 0xFFFFFFE0;
        do
        {
          v31 = *a8;
          v30 += 32;
          if ( v30 >= *a8 )
          {
            v32 = v46;
            goto LABEL_44;
          }
        }
        while ( (int)CheckConnectorSupportForPeriodicity(
                       *((_QWORD *)this + 2),
                       *((_DWORD *)this + 39),
                       (__int64)v18,
                       v45,
                       (unsigned int)(int)((double)(int)v30 * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                       &v44) < 0
             || v30 != v44 );
        v32 = v46;
        *v46 = v44;
        v31 = *a8;
LABEL_44:
        if ( *v32 < v31 )
        {
          v33 = 0;
          while ( 1 )
          {
            v34 = 32 * (1 << v33);
            v35 = v34 * ((*v46 - 1) / v34 + 1);
            if ( v35 < *a8
              && (int)CheckConnectorSupportForPeriodicity(
                        *((_QWORD *)v52 + 2),
                        *((_DWORD *)v52 + 39),
                        (__int64)v18,
                        v45,
                        (unsigned int)(int)((double)(int)v35 * 10000000.0 / (double)(int)v51->nSamplesPerSec + 0.5),
                        &v44) >= 0
              && v44 == v35 )
            {
              break;
            }
            if ( ++v33 >= 3 )
            {
              v36 = v47;
              v34 = *v47;
              goto LABEL_51;
            }
          }
          v36 = v47;
          *v47 = v34;
LABEL_51:
          v37 = *a8;
          if ( v34 == *a8 )
          {
            *v36 = v37;
            *v46 = v37;
          }
        }
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v18);
  }
  *v53 = *a11;
  if ( *a11 > *a8 )
    *a11 = *a8;
  return (unsigned int)PacketSizesFromConstraints;
}
