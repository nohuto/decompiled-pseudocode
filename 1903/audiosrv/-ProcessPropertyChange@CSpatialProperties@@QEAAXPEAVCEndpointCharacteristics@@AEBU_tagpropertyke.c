/*
 * XREFs of ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800378D0
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000A5F0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180002AB4 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000AE28 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180035448 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180037648 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x180037FF8 (IsSpatialOnlyFormat.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003823C (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18012EC74 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSpatialProperties::ProcessPropertyChange(
        __int64 a1,
        LPCWSTR *this,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _DWORD *a8)
{
  LPCWSTR *v9; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, EVENT_DATA_DESCRIPTOR *, __int64, _QWORD); // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax
  int DeviceFormatAndSpatialSettings; // eax
  __int64 v21; // rdx
  struct tWAVEFORMATEX *v22; // rbx
  _WORD *p_wFormatTag; // rcx
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rcx
  WAVEFORMATEXTENSIBLE *v28; // rbx
  int v29; // r9d
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  __int64 v34; // rax
  bool v35; // bl
  bool v36; // al
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  __int64 v39; // rax
  char *v40; // rax
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  int v43; // eax
  WAVEFORMATEXTENSIBLE *v44; // rbx
  LPCGUID v45; // r8
  LPCGUID v46; // r9
  LPCGUID v47; // r8
  LPCGUID v48; // r9
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  __int64 v51; // rax
  LPCGUID v52; // r8
  LPCGUID v53; // r9
  __int64 v54; // rax
  LPCGUID v55; // r8
  LPCGUID v56; // r9
  int v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *v60; // [rsp+60h] [rbp-A8h]
  int Ptr_high; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  __int64 v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  _DWORD *v65; // [rsp+88h] [rbp-80h]
  __int64 v66; // [rsp+90h] [rbp-78h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  struct tWAVEFORMATEX *v68[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  struct WAVEFORMATEXTENSIBLE v70; // [rsp+C8h] [rbp-40h] BYREF
  GUID v71; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v72; // [rsp+108h] [rbp+0h] BYREF
  int v73; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+128h] [rbp+20h] BYREF
  LPVOID *v75; // [rsp+138h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  int *p_nChannels; // [rsp+178h] [rbp+70h]
  __int64 v80; // [rsp+180h] [rbp+78h]
  __int64 *p_Ptr_high; // [rsp+188h] [rbp+80h]
  __int64 v82; // [rsp+190h] [rbp+88h]
  __int64 *p_Size; // [rsp+198h] [rbp+90h]
  __int64 v84; // [rsp+1A0h] [rbp+98h]
  char *p_Samples; // [rsp+1A8h] [rbp+A0h]
  __int64 v86; // [rsp+1B0h] [rbp+A8h]
  __int64 *p_pv; // [rsp+1B8h] [rbp+B0h]
  __int64 v88; // [rsp+1C0h] [rbp+B8h]
  char *p_Type; // [rsp+1C8h] [rbp+C0h]
  __int64 v90; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR *v91; // [rsp+1D8h] [rbp+D0h]
  __int64 v92; // [rsp+1E0h] [rbp+D8h]
  int *v93; // [rsp+1E8h] [rbp+E0h]
  __int64 v94; // [rsp+1F0h] [rbp+E8h]
  ULONG *v95; // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+200h] [rbp+F8h]
  char *v97; // [rsp+208h] [rbp+100h]
  __int64 v98; // [rsp+210h] [rbp+108h]
  int *v99; // [rsp+218h] [rbp+110h]
  __int64 v100; // [rsp+220h] [rbp+118h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+228h] [rbp+120h]
  __int64 v102; // [rsp+230h] [rbp+128h]

  v66 = -2LL;
  v64 = a4;
  v9 = this;
  v60 = a6;
  v63 = a7;
  v67 = a7;
  v65 = a8;
  LODWORD(v62) = 0;
  *a8 = 0;
  if ( a4 )
  {
    v11 = *(_QWORD *)a3 - *(_QWORD *)(a1 + 84);
    if ( *(_QWORD *)a3 == *(_QWORD *)(a1 + 84) )
      v11 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(a1 + 92);
    if ( v11 || *(_DWORD *)(a3 + 16) != *(_DWORD *)(a1 + 100) )
    {
      memset(&pvar, 0, sizeof(pvar));
      v54 = *(_QWORD *)a3 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v54 = *(_QWORD *)(a3 + 8) - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v54
        && !*(_DWORD *)(a3 + 16)
        && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 40LL))(
             a4,
             &PKEY_AudioEngine_DeviceFormat,
             &pvar) >= 0
        && IsValidWfxBlob(&pvar)
        && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        AudioFormatForLogging::AudioFormatForLogging(
          (AudioFormatForLogging *)&v72,
          (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz(&pDesc, v9[3]);
          p_nChannels = (int *)&v72;
          v80 = 2LL;
          Ptr_high = HIDWORD(v72.Ptr);
          p_Ptr_high = (__int64 *)&Ptr_high;
          v82 = 4LL;
          p_Size = (__int64 *)&v72.Size;
          v84 = 2LL;
          p_Samples = (char *)&v72.Size + 2;
          v86 = 2LL;
          LODWORD(v58) = v73;
          p_pv = &v58;
          v88 = 4LL;
          p_Type = (char *)&v72.Type;
          v90 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BD57, v55, v56, 9u, &pData);
        }
      }
      PropVariantClear((PROPVARIANT *)&pvar);
    }
    else
    {
      memset_0(&v70, 0, sizeof(v70));
      v71 = GUID_00000000_0000_0000_0000_000000000000;
      if ( *(_QWORD *)(a1 + 40)
        && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v62) >= 0
        && (*(int (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56), &v71) >= 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)a1);
        v13 = *(_DWORD *)(a1 + 6872);
        if ( v13 )
        {
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&v74, v9[3]);
            LOWORD(v58) = *(_WORD *)(a1 + 6872);
            v75 = (LPVOID *)&v58;
            v76 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C16B, v52, v53, 4u, &v72);
            v13 = *(_DWORD *)(a1 + 6872);
          }
          if ( v13 == 1 )
            *(_DWORD *)(a1 + 6872) = 2;
        }
        else
        {
          *(_DWORD *)(a1 + 6872) = 1;
          *(_OWORD *)&pvar.vt = *(_OWORD *)(a1 + 116);
          Ptr_high = *(_DWORD *)(a1 + 104);
          v57 = *(_DWORD *)(a1 + 80);
          *(_BYTE *)(a1 + 76) = *a5 != 0;
          if ( a1 )
            LeaveCriticalSection((LPCRITICAL_SECTION)a1);
          v68[0] = (struct tWAVEFORMATEX *)&v72;
          v76 = 0LL;
          v14 = *(__int64 (__fastcall ****)(_QWORD, EVENT_DATA_DESCRIPTOR *, __int64, _QWORD))(a7 + 56);
          if ( v14 )
            v76 = (**v14)(v14, &v72, v12, 0LL);
          CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9[3], 1u, a4, a6, (__int64)&v72, (__int64)&v70);
          if ( *(_DWORD *)(a1 + 6876) == 1 )
          {
            v68[0] = 0LL;
            v28 = (WAVEFORMATEXTENSIBLE *)v60;
            if ( (int)CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                        (CEndpointCharacteristics *)v9,
                        0,
                        0LL,
                        v68,
                        0LL,
                        0LL,
                        0LL) >= 0 )
              v28 = (WAVEFORMATEXTENSIBLE *)v68[0];
            if ( CSpatialProperties::SetDesiredFormat(
                   (CSpatialProperties *)a1,
                   (struct CEndpointCharacteristics *)v9,
                   (const struct WAVEFORMATEXTENSIBLE *)(a1 + 6880),
                   0) )
            {
              if ( !v70.Format.wFormatTag )
              {
                AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v72, &v28->Format);
                *(_DWORD *)(a1 + 6876) = v29 + 3;
                if ( (unsigned int)hProvider > 4 )
                {
                  TlgCreateWsz(&pDesc, v9[3]);
                  p_nChannels = (int *)&v72;
                  v80 = 2LL;
                  LODWORD(v58) = v73;
                  p_Ptr_high = &v58;
                  v82 = 4LL;
                  LODWORD(pv) = HIDWORD(v72.Ptr);
                  p_Size = (__int64 *)&pv;
                  v84 = 4LL;
                  p_Samples = (char *)&v72.Type;
                  v86 = 16LL;
                  p_pv = (__int64 *)&v72.Size;
                  v88 = 2LL;
                  p_Type = (char *)&v72.Size + 2;
                  v90 = 2LL;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C1FB, v30, v31, 9u, &pData);
                }
                CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
                  (CEndpointCharacteristics *)v9,
                  eHostProcessConnector,
                  v28,
                  0LL);
              }
            }
            else
            {
              if ( (unsigned int)hProvider > 2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
              {
                TlgCreateWsz(&v74, v9[3]);
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C1BD, v32, v33, 3u, &v72);
              }
              *(_DWORD *)(a1 + 6876) = 2;
              v34 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      &v72,
                      v63);
              CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9[3], 1u, v64, v60, v34, (__int64)&v70);
            }
            if ( v68[0] )
              CoTaskMemFree(v68[0]);
          }
          if ( v70.Format.wFormatTag )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v35 = (*(_DWORD *)(a1 + 168) & 0x80) != 0;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            v36 = CSpatialProperties::SetDesiredFormat(
                    (CSpatialProperties *)a1,
                    (struct CEndpointCharacteristics *)v9,
                    &v70,
                    v35);
            v22 = v60;
            if ( !v36 && v60 )
            {
              AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v72, v60);
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz(&pDesc, v9[3]);
                p_nChannels = (int *)&v70.Format.nChannels;
                v80 = 2LL;
                LODWORD(v58) = v70.Format.nSamplesPerSec;
                p_Ptr_high = &v58;
                v82 = 4LL;
                p_Size = (__int64 *)&v70.Format.wBitsPerSample;
                v84 = 2LL;
                p_Samples = (char *)&v70.Samples;
                v86 = 2LL;
                LODWORD(pv) = v70.dwChannelMask;
                p_pv = (__int64 *)&pv;
                v88 = 4LL;
                p_Type = (char *)&v70.SubFormat;
                v90 = 16LL;
                v91 = &v72;
                v92 = 2LL;
                v57 = HIDWORD(v72.Ptr);
                v93 = &v57;
                v94 = 4LL;
                v95 = &v72.Size;
                v96 = 2LL;
                v97 = (char *)&v72.Size + 2;
                v98 = 2LL;
                Ptr_high = v73;
                v99 = &Ptr_high;
                v100 = 4LL;
                p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v72.Reserved;
                v102 = 16LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BFC1, v37, v38, 0xFu, &pData);
              }
              v39 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      &pData,
                      v63);
              CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9[3], 0, v64, v22, v39, (__int64)&v70);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            *(_OWORD *)v68 = *(_OWORD *)(a1 + 116);
            v15 = *(_DWORD *)(a1 + 104);
            LODWORD(v58) = v15;
            v16 = *(_DWORD *)(a1 + 80);
            LODWORD(pv) = *(_DWORD *)(a1 + 168) & 0x80;
            if ( a1 )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
              v15 = v58;
            }
            if ( v15 != Ptr_high || v16 != v57 )
              goto LABEL_46;
            if ( v15 )
            {
              v40 = (char *)v68[0] - *(_QWORD *)&pvar.vt;
              if ( v68[0] == *(struct tWAVEFORMATEX **)&pvar.vt )
                v40 = (char *)v68[1] - pvar.hVal.QuadPart;
              if ( v40 )
                goto LABEL_46;
            }
            v17 = *(_QWORD *)&v71.Data1 - *(_QWORD *)(a1 + 6856);
            if ( *(_QWORD *)&v71.Data1 == *(_QWORD *)(a1 + 6856) )
              v17 = *(_QWORD *)v71.Data4 - *(_QWORD *)(a1 + 6864);
            v18 = v17 == 0;
            v19 = 0;
            if ( !v18 )
LABEL_46:
              v19 = 1;
            *v65 = v19;
            if ( v19 && (unsigned int)hProvider > 5 )
            {
              TlgCreateWsz(&v74, v9[3]);
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BF95, v41, v42, 3u, &v72);
            }
            if ( (_DWORD)pv && *(_BYTE *)(a1 + 77) )
            {
              v22 = v60;
            }
            else
            {
              pv = 0LL;
              DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                                 (CEndpointCharacteristics *)v9,
                                                 0,
                                                 0LL,
                                                 (struct tWAVEFORMATEX **)&pv,
                                                 0LL,
                                                 0LL,
                                                 0LL);
              v22 = v60;
              p_wFormatTag = &v60->wFormatTag;
              if ( DeviceFormatAndSpatialSettings >= 0 )
                p_wFormatTag = pv;
              if ( !(_DWORD)v58 && !(_DWORD)v62 )
              {
                if ( p_wFormatTag )
                {
                  if ( *p_wFormatTag == 0xFFFE )
                  {
                    LOBYTE(v21) = *(_BYTE *)(a1 + 72) == 0;
                    if ( (unsigned __int8)IsSpatialOnlyFormat(p_wFormatTag + 12, v21) )
                    {
                      v68[0] = 0LL;
                      v43 = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                              (CEndpointCharacteristics *)v9,
                              0,
                              1LL,
                              v68,
                              0LL,
                              0LL,
                              0LL);
                      v44 = (WAVEFORMATEXTENSIBLE *)v68[0];
                      if ( v43 >= 0 )
                      {
                        AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v72, v68[0]);
                        if ( (unsigned int)hProvider > 4 )
                        {
                          TlgCreateWsz(&pDesc, v9[3]);
                          p_nChannels = (int *)&v72;
                          v80 = 2LL;
                          Ptr_high = v73;
                          p_Ptr_high = (__int64 *)&Ptr_high;
                          v82 = 4LL;
                          LODWORD(v58) = HIDWORD(v72.Ptr);
                          p_Size = &v58;
                          v84 = 4LL;
                          p_Samples = (char *)&v72.Type;
                          v86 = 16LL;
                          p_pv = (__int64 *)&v72.Size;
                          v88 = 2LL;
                          p_Type = (char *)&v72.Size + 2;
                          v90 = 2LL;
                          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C0F8, v45, v46, 9u, &pData);
                        }
                        CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
                          (CEndpointCharacteristics *)v9,
                          eHostProcessConnector,
                          v44,
                          0LL);
                      }
                      if ( v44 )
                        CoTaskMemFree(v44);
                      v22 = v60;
                    }
                  }
                }
              }
              if ( pv )
                CoTaskMemFree(pv);
            }
          }
          LOWORD(v57) = 0;
          v24 = 0;
          v65 = (_DWORD *)a1;
          while ( 1 )
          {
            v68[0] = 0LL;
            if ( v24 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&v74, v9[3]);
              LOWORD(pv) = *(_WORD *)(a1 + 6872);
              v75 = &pv;
              v76 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C0A5, v47, v48, 4u, &v72);
            }
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v25 = *(_DWORD *)(a1 + 6872);
            if ( v25 <= 1 )
            {
              *(_DWORD *)(a1 + 6872) = 0;
              goto LABEL_41;
            }
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, v9[3]);
              p_nChannels = &v57;
              v80 = 2LL;
              LOWORD(v58) = *(_WORD *)(a1 + 6872);
              p_Ptr_high = &v58;
              v82 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BDDA, v49, v50, 5u, &pData);
              v25 = *(_DWORD *)(a1 + 6872);
            }
            if ( v25 != 3 )
              break;
            *(_DWORD *)(a1 + 6872) = 1;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            if ( (int)CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                        (CEndpointCharacteristics *)v9,
                        0,
                        0LL,
                        v68,
                        0LL,
                        0LL,
                        0LL) >= 0 )
              v22 = v68[0];
            v51 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    &pData,
                    v63);
            CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9[3], 0, v64, v22, v51, (__int64)&v70);
            if ( v68[0] )
              CoTaskMemFree(v68[0]);
            v24 = v57 + 1;
            LOWORD(v57) = v24;
            v22 = v60;
            if ( v24 >= 5u )
              goto LABEL_43;
          }
          *(_DWORD *)(a1 + 6872) = 0;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
        }
LABEL_41:
        if ( a1 )
          LeaveCriticalSection((LPCRITICAL_SECTION)a1);
      }
    }
  }
LABEL_43:
  v26 = v63;
  v27 = *(_QWORD *)(v63 + 56);
  if ( v27 )
  {
    LOBYTE(this) = v27 != v63;
    (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v27 + 32LL))(v27, this);
    *(_QWORD *)(v26 + 56) = 0LL;
  }
}
