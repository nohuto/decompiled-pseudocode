/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180109778
 * Callers:
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x180107FF8 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18010D19C (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18004D3FC (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180108F5C (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x18010B290 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x18010D5D4 (-ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z.c)
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
  int PacketSizesFromConstraints; // r14d
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  char *v18; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // r14d
  struct _GUID *AliasedDeviceConnectorMode; // rax
  unsigned int v21; // eax
  unsigned int *v22; // rcx
  unsigned int *v23; // rdx
  int v24; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // eax
  unsigned __int32 v26; // edi
  unsigned int v27; // eax
  unsigned int *v28; // rcx
  int v29; // r15d
  unsigned int v30; // edi
  unsigned int v31; // r12d
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v35; // [rsp+28h] [rbp-D9h]
  unsigned __int64 v36; // [rsp+30h] [rbp-D1h]
  unsigned __int64 v37; // [rsp+38h] [rbp-C9h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v38[2]; // [rsp+68h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-91h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-89h] BYREF
  unsigned int v41; // [rsp+7Ch] [rbp-85h]
  unsigned int *v42; // [rsp+80h] [rbp-81h]
  unsigned int *v43; // [rsp+88h] [rbp-79h]
  signed __int64 v44; // [rsp+90h] [rbp-71h]
  struct _GUID *v45; // [rsp+98h] [rbp-69h]
  char *v46; // [rsp+A0h] [rbp-61h]
  const struct tWAVEFORMATEX *v47; // [rsp+A8h] [rbp-59h]
  CEndpointCharacteristics *v48; // [rsp+B0h] [rbp-51h]
  unsigned int *v49; // [rsp+B8h] [rbp-49h]
  __int64 v50; // [rsp+C0h] [rbp-41h]
  __int64 v51; // [rsp+C8h] [rbp-39h]
  struct _GUID v52; // [rsp+D8h] [rbp-29h] BYREF
  struct _GUID v53; // [rsp+E8h] [rbp-19h] BYREF

  v50 = -2LL;
  v47 = a4;
  v45 = a3;
  v38[0] = a2;
  v48 = this;
  v43 = a9;
  v42 = a10;
  v49 = a12;
  PacketSizesFromConstraints = 0;
  v15 = 100000LL;
  if ( a7 )
    v15 = a7;
  v44 = v15;
  v16 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v15 / 10000000.0 + 0.5);
  *a11 = v16;
  *a10 = v16;
  *a9 = v16;
  *a8 = v16;
  if ( !*((_DWORD *)this + 8) )
  {
    v46 = 0LL;
    pv = 0LL;
    v51 = 0LL;
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
    v41 = a4->cbSize + 64;
    v18 = (char *)CoTaskMemAlloc(v41);
    CoTaskMemFree(0LL);
    v46 = v18;
    if ( !v18 )
    {
      PacketSizesFromConstraints = -2147024882;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_6;
    }
    *(_DWORD *)v18 = a4->cbSize + 64;
    *((_DWORD *)v18 + 1) = GetSessionIdFromEndpointId(pv);
    v19 = v38[0];
    *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v18 + 2) = v38[0];
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v19) )
    {
      v52 = *v45;
      AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
                                     (__int64)this,
                                     &v53,
                                     v19,
                                     &v52,
                                     1);
    }
    else
    {
      v52 = GUID_00000000_0000_0000_0000_000000000000;
      AliasedDeviceConnectorMode = &v52;
    }
    *(struct _GUID *)(v18 + 12) = *AliasedDeviceConnectorMode;
    memcpy_0(v18 + 44, a4, a4->cbSize + 18LL);
    PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                   *((_QWORD *)this + 2),
                                   *((_DWORD *)this + 39),
                                   (__int64)v18,
                                   v41,
                                   v44,
                                   &v40);
    if ( PacketSizesFromConstraints < 0 )
    {
LABEL_14:
      CoTaskMemFree(pv);
      pv = 0LL;
      v17 = v18;
      goto LABEL_7;
    }
    v21 = v40;
    *a11 = v40;
    v22 = v42;
    *v42 = v21;
    v23 = v43;
    *v43 = v21;
    *a8 = v21;
    if ( v38[0] == eHostProcessConnector && !a7 )
    {
      if ( *((_DWORD *)this + 39) == 1 && (unsigned int)g_MaxCapturePeriodicityInHns > v44 && (!a5 || !*(_BYTE *)a5) )
      {
        v24 = CheckConnectorSupportForPeriodicity(
                *((_QWORD *)this + 2),
                1,
                (__int64)v18,
                v41,
                (unsigned int)g_MaxCapturePeriodicityInHns,
                v38);
        v22 = v42;
        v23 = v43;
        if ( v24 >= 0 )
          *a11 = v38[0];
      }
      if ( a5 )
      {
        v52 = *v45;
        PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                       a5,
                                       a4->nAvgBytesPerSec,
                                       a4->nBlockAlign,
                                       &v52,
                                       v35,
                                       v36,
                                       v37,
                                       a8,
                                       v23,
                                       v22,
                                       (unsigned int *)v38);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)this + 39) != 1 || (v25 = v38[0], !*(_BYTE *)a5) )
          v25 = *a8;
        *a11 = v25;
      }
      else if ( a6 )
      {
        PacketSizesFromConstraints = ULongLongMultDivToUlongRU(
                                       0x61A8uLL,
                                       a4->nAvgBytesPerSec,
                                       10000000 * (unsigned int)a4->nBlockAlign,
                                       (unsigned int *)v38);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        v26 = (v38[0] - 1) & 0xFFFFFFE0;
        do
        {
          v27 = *a8;
          v26 += 32;
          if ( v26 >= *a8 )
          {
            v28 = v42;
            goto LABEL_36;
          }
        }
        while ( (int)CheckConnectorSupportForPeriodicity(
                       *((_QWORD *)this + 2),
                       *((_DWORD *)this + 39),
                       (__int64)v18,
                       v41,
                       (unsigned int)(int)((double)(int)v26 * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                       &v40) < 0
             || v26 != v40 );
        v28 = v42;
        *v42 = v40;
        v27 = *a8;
LABEL_36:
        if ( *v28 < v27 )
        {
          v29 = 0;
          while ( 1 )
          {
            v30 = 32 * (1 << v29);
            v31 = v30 * ((*v42 - 1) / v30 + 1);
            if ( v31 < *a8
              && (int)CheckConnectorSupportForPeriodicity(
                        *((_QWORD *)v48 + 2),
                        *((_DWORD *)v48 + 39),
                        (__int64)v18,
                        v41,
                        (unsigned int)(int)((double)(int)v31 * 10000000.0 / (double)(int)v47->nSamplesPerSec + 0.5),
                        &v40) >= 0
              && v40 == v31 )
            {
              break;
            }
            if ( ++v29 >= 3 )
            {
              v32 = v43;
              v30 = *v43;
              goto LABEL_43;
            }
          }
          v32 = v43;
          *v43 = v30;
LABEL_43:
          v33 = *a8;
          if ( v30 == *a8 )
          {
            *v32 = v33;
            *v42 = v33;
          }
        }
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v18);
  }
  *v49 = *a11;
  if ( *a11 > *a8 )
    *a11 = *a8;
  return (unsigned int)PacketSizesFromConstraints;
}
