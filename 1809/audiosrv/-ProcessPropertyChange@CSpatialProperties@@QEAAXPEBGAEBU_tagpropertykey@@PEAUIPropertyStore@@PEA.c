/*
 * XREFs of ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180056E2C (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x180122ECC (IsSpatialOnlyFormat.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEBGPEAUIPolicyConfig@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180123C1C (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEBGPEAUIPolicyConfig@@AEBUWAVEFORMATEXTENSIBLE@@_N@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSpatialProperties::ProcessPropertyChange(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        struct IPolicyConfig *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _DWORD *a8)
{
  const WCHAR *v9; // r15
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  struct tWAVEFORMATEX *v14; // rbx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  __int64 v19; // rax
  bool v20; // bl
  bool v21; // al
  struct tWAVEFORMATEX *v22; // rbx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  __int64 v25; // rax
  int v26; // eax
  int v27; // ebx
  char *v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  int v31; // eax
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  int v34; // eax
  _QWORD *p_wFormatTag; // r8
  void *v36; // rcx
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  unsigned __int16 v39; // ax
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  unsigned int v42; // eax
  LPCGUID v43; // r8
  LPCGUID v44; // r9
  __int64 v45; // rax
  LPCGUID v46; // r8
  LPCGUID v47; // r9
  __int64 v48; // rax
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  __int64 v51; // rbx
  __int64 v52; // rcx
  struct tWAVEFORMATEX *v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v55; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v57; // [rsp+68h] [rbp-A0h]
  int v58; // [rsp+70h] [rbp-98h] BYREF
  int v59; // [rsp+74h] [rbp-94h] BYREF
  __int64 v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  _DWORD *v62; // [rsp+88h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-78h]
  __int64 v64; // [rsp+98h] [rbp-70h]
  LPVOID pv[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  struct WAVEFORMATEXTENSIBLE v67; // [rsp+C8h] [rbp-40h] BYREF
  GUID v68; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v69; // [rsp+108h] [rbp+0h] BYREF
  int v70; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+128h] [rbp+20h] BYREF
  struct tWAVEFORMATEX **v72; // [rsp+138h] [rbp+30h]
  __int64 v73; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  void *p_nChannels; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  struct tWAVEFORMATEX **v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  __int64 *p_Size; // [rsp+198h] [rbp+90h]
  __int64 v81; // [rsp+1A0h] [rbp+98h]
  char *p_Samples; // [rsp+1A8h] [rbp+A0h]
  __int64 v83; // [rsp+1B0h] [rbp+A8h]
  __int64 *v84; // [rsp+1B8h] [rbp+B0h]
  __int64 v85; // [rsp+1C0h] [rbp+B8h]
  char *p_Type; // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR *v88; // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E0h] [rbp+D8h]
  __int64 *v90; // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F0h] [rbp+E8h]
  ULONG *v92; // [rsp+1F8h] [rbp+F0h]
  __int64 v93; // [rsp+200h] [rbp+F8h]
  char *v94; // [rsp+208h] [rbp+100h]
  __int64 v95; // [rsp+210h] [rbp+108h]
  __int64 *v96; // [rsp+218h] [rbp+110h]
  __int64 v97; // [rsp+220h] [rbp+118h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+228h] [rbp+120h]
  __int64 v99; // [rsp+230h] [rbp+128h]

  v63 = -2LL;
  v61 = a4;
  v9 = a2;
  v57 = a6;
  v60 = a7;
  v64 = a7;
  v62 = a8;
  v59 = 0;
  *a8 = 0;
  if ( a4 && a5 && a2 )
  {
    v11 = *(_QWORD *)a3 - *(_QWORD *)(a1 + 84);
    if ( *(_QWORD *)a3 == *(_QWORD *)(a1 + 84) )
      v11 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(a1 + 92);
    if ( v11 || *(_DWORD *)(a3 + 16) != *(_DWORD *)(a1 + 100) )
    {
      memset(&pvar, 0, sizeof(pvar));
      v48 = *(_QWORD *)a3 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v48 = *(_QWORD *)(a3 + 8) - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v48
        && !*(_DWORD *)(a3 + 16)
        && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 40LL))(
             a4,
             &PKEY_AudioEngine_DeviceFormat,
             &pvar) >= 0
        && IsValidWfxBlob(&pvar)
        && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        AudioFormatForLogging::AudioFormatForLogging(
          (AudioFormatForLogging *)&v69,
          (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz(&pDesc, v9);
          p_nChannels = &v69;
          v77 = 2LL;
          LODWORD(v56) = HIDWORD(v69.Ptr);
          v78 = (struct tWAVEFORMATEX **)&v56;
          v79 = 4LL;
          p_Size = (__int64 *)&v69.Size;
          v81 = 2LL;
          p_Samples = (char *)&v69.Size + 2;
          v83 = 2LL;
          LODWORD(v54) = v70;
          v84 = &v54;
          v85 = 4LL;
          p_Type = (char *)&v69.Type;
          v87 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176B19, v49, v50, 9u, &pData);
        }
      }
      PropVariantClear((PROPVARIANT *)&pvar);
    }
    else
    {
      memset_0(&v67, 0, sizeof(v67));
      v58 = 0;
      v68 = GUID_00000000_0000_0000_0000_000000000000;
      if ( *(_QWORD *)(a1 + 40)
        && (*(int (__fastcall **)(struct IPolicyConfig *, int *))(*(_QWORD *)a5 + 176LL))(a5, &v58) >= 0
        && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v59) >= 0
        && (*(int (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56), &v68) >= 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)a1);
        v12 = *(_DWORD *)(a1 + 6872);
        if ( v12 )
        {
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&v71, v9);
            LOWORD(v53) = *(_WORD *)(a1 + 6872);
            v72 = &v53;
            v73 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176F2D, v46, v47, 4u, &v69);
            v12 = *(_DWORD *)(a1 + 6872);
          }
          if ( v12 == 1 )
            *(_DWORD *)(a1 + 6872) = 2;
        }
        else
        {
          *(_DWORD *)(a1 + 6872) = 1;
          *(_OWORD *)&pvar.vt = *(_OWORD *)(a1 + 116);
          LODWORD(v56) = *(_DWORD *)(a1 + 104);
          LODWORD(v54) = *(_DWORD *)(a1 + 80);
          *(_BYTE *)(a1 + 76) = v58 != 0;
          if ( a1 )
            LeaveCriticalSection((LPCRITICAL_SECTION)a1);
          v13 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                  (__int64)&v69,
                  a7);
          CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9, 1u, a4, a6, v13, (__int64)&v67);
          if ( *(_DWORD *)(a1 + 6876) == 1 )
          {
            pv[0] = 0LL;
            v14 = v57;
            if ( (*(int (__fastcall **)(struct IPolicyConfig *, const WCHAR *, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                   a5,
                   v9,
                   0LL,
                   pv) >= 0 )
              v14 = (struct tWAVEFORMATEX *)pv[0];
            if ( CSpatialProperties::SetDesiredFormat(
                   (CSpatialProperties *)a1,
                   v9,
                   a5,
                   (const struct WAVEFORMATEXTENSIBLE *)(a1 + 6880),
                   0) )
            {
              if ( !v67.Format.wFormatTag )
              {
                AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v69, v14);
                *(_DWORD *)(a1 + 6876) = 3;
                if ( (unsigned int)hProvider > 4 )
                {
                  TlgCreateWsz(&pDesc, v9);
                  p_nChannels = &v69;
                  v77 = 2LL;
                  LODWORD(v53) = v70;
                  v78 = &v53;
                  v79 = 4LL;
                  LODWORD(v55) = HIDWORD(v69.Ptr);
                  p_Size = (__int64 *)&v55;
                  v81 = 4LL;
                  p_Samples = (char *)&v69.Type;
                  v83 = 16LL;
                  v84 = (__int64 *)&v69.Size;
                  v85 = 2LL;
                  p_Type = (char *)&v69.Size + 2;
                  v87 = 2LL;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176FBD, v15, v16, 9u, &pData);
                }
                (*(void (__fastcall **)(struct IPolicyConfig *, const WCHAR *, struct tWAVEFORMATEX *, _QWORD))(*(_QWORD *)a5 + 48LL))(
                  a5,
                  v9,
                  v14,
                  0LL);
              }
            }
            else
            {
              if ( (unsigned int)hProvider > 2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
              {
                TlgCreateWsz(&v71, v9);
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176F7F, v17, v18, 3u, &v69);
              }
              *(_DWORD *)(a1 + 6876) = 2;
              v19 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      (__int64)&v69,
                      v60);
              CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9, 1u, v61, v57, v19, (__int64)&v67);
            }
            if ( pv[0] )
              CoTaskMemFree(pv[0]);
          }
          if ( v67.Format.wFormatTag )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v20 = (*(_DWORD *)(a1 + 168) & 0x80) != 0;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            v21 = CSpatialProperties::SetDesiredFormat((CSpatialProperties *)a1, v9, a5, &v67, v20);
            v22 = v57;
            if ( !v21 && v57 )
            {
              AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v69, v57);
              if ( (unsigned int)hProvider > 2 )
              {
                TlgCreateWsz(&pDesc, v9);
                p_nChannels = &v67.Format.nChannels;
                v77 = 2LL;
                LODWORD(v53) = v67.Format.nSamplesPerSec;
                v78 = &v53;
                v79 = 4LL;
                p_Size = (__int64 *)&v67.Format.wBitsPerSample;
                v81 = 2LL;
                p_Samples = (char *)&v67.Samples;
                v83 = 2LL;
                LODWORD(v55) = v67.dwChannelMask;
                v84 = (__int64 *)&v55;
                v85 = 4LL;
                p_Type = (char *)&v67.SubFormat;
                v87 = 16LL;
                v88 = &v69;
                v89 = 2LL;
                LODWORD(v54) = HIDWORD(v69.Ptr);
                v90 = &v54;
                v91 = 4LL;
                v92 = &v69.Size;
                v93 = 2LL;
                v94 = (char *)&v69.Size + 2;
                v95 = 2LL;
                LODWORD(v56) = v70;
                v96 = &v56;
                v97 = 4LL;
                p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v69.Reserved;
                v99 = 16LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176D83, v23, v24, 0xFu, &pData);
              }
              v25 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      (__int64)&pData,
                      v60);
              CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9, 0, v61, v22, v25, (__int64)&v67);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            *(_OWORD *)pv = *(_OWORD *)(a1 + 116);
            v26 = *(_DWORD *)(a1 + 104);
            LODWORD(v53) = v26;
            v27 = *(_DWORD *)(a1 + 80);
            LODWORD(v55) = *(_DWORD *)(a1 + 168) & 0x80;
            if ( a1 )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
              v26 = (int)v53;
            }
            if ( v26 != (_DWORD)v56 || v27 != (_DWORD)v54 )
              goto LABEL_50;
            if ( v26 )
            {
              v28 = (char *)pv[0] - *(_QWORD *)&pvar.vt;
              if ( pv[0] == *(LPVOID *)&pvar.vt )
                v28 = (char *)pv[1] - pvar.hVal.QuadPart;
              if ( v28 )
                goto LABEL_50;
            }
            v29 = *(_QWORD *)&v68.Data1 - *(_QWORD *)(a1 + 6856);
            if ( *(_QWORD *)&v68.Data1 == *(_QWORD *)(a1 + 6856) )
              v29 = *(_QWORD *)v68.Data4 - *(_QWORD *)(a1 + 6864);
            v30 = v29 == 0;
            v31 = 0;
            if ( !v30 )
LABEL_50:
              v31 = 1;
            *v62 = v31;
            if ( v31 && (unsigned int)hProvider > 5 )
            {
              TlgCreateWsz(&v71, v9);
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176D57, v32, v33, 3u, &v69);
            }
            if ( (_DWORD)v55 && *(_BYTE *)(a1 + 77) )
            {
              v22 = v57;
            }
            else
            {
              v55 = 0LL;
              v34 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const WCHAR *, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                      a5,
                      v9,
                      0LL,
                      &v55);
              v22 = v57;
              p_wFormatTag = &v57->wFormatTag;
              v36 = v55;
              if ( v34 >= 0 )
                p_wFormatTag = v55;
              if ( !(_DWORD)v53 && !v59 && p_wFormatTag && *(_WORD *)p_wFormatTag == 0xFFFE )
              {
                if ( IsSpatialOnlyFormat(p_wFormatTag + 3, *(_BYTE *)(a1 + 72) == 0) )
                {
                  v53 = 0LL;
                  if ( (*(int (__fastcall **)(struct IPolicyConfig *, const WCHAR *, __int64, struct tWAVEFORMATEX **))(*(_QWORD *)a5 + 32LL))(
                         a5,
                         v9,
                         1LL,
                         &v53) >= 0 )
                  {
                    AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v69, v53);
                    if ( (unsigned int)hProvider > 4 )
                    {
                      TlgCreateWsz(&pDesc, v9);
                      p_nChannels = &v69;
                      v77 = 2LL;
                      LODWORD(v56) = v70;
                      v78 = (struct tWAVEFORMATEX **)&v56;
                      v79 = 4LL;
                      LODWORD(v54) = HIDWORD(v69.Ptr);
                      p_Size = &v54;
                      v81 = 4LL;
                      p_Samples = (char *)&v69.Type;
                      v83 = 16LL;
                      v84 = (__int64 *)&v69.Size;
                      v85 = 2LL;
                      p_Type = (char *)&v69.Size + 2;
                      v87 = 2LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176EBA, v37, v38, 9u, &pData);
                    }
                    (*(void (__fastcall **)(struct IPolicyConfig *, const WCHAR *, struct tWAVEFORMATEX *, _QWORD))(*(_QWORD *)a5 + 48LL))(
                      a5,
                      v9,
                      v53,
                      0LL);
                  }
                  if ( v53 )
                    CoTaskMemFree(v53);
                }
                v36 = v55;
              }
              if ( v36 )
                CoTaskMemFree(v36);
            }
          }
          LOWORD(v55) = 0;
          v39 = 0;
          v62 = (_DWORD *)a1;
          while ( 1 )
          {
            pv[0] = 0LL;
            if ( v39 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&v71, v9);
              LOWORD(v53) = *(_WORD *)(a1 + 6872);
              v72 = &v53;
              v73 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176E67, v40, v41, 4u, &v69);
            }
            EnterCriticalSection((LPCRITICAL_SECTION)a1);
            v42 = *(_DWORD *)(a1 + 6872);
            if ( v42 <= 1 )
              break;
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, v9);
              p_nChannels = &v55;
              v77 = 2LL;
              LOWORD(v53) = *(_WORD *)(a1 + 6872);
              v78 = &v53;
              v79 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180176B9C, v43, v44, 5u, &pData);
              v42 = *(_DWORD *)(a1 + 6872);
            }
            if ( v42 != 3 )
            {
              *(_DWORD *)(a1 + 6872) = 0;
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
              goto LABEL_95;
            }
            *(_DWORD *)(a1 + 6872) = 1;
            if ( a1 )
              LeaveCriticalSection((LPCRITICAL_SECTION)a1);
            if ( (*(int (__fastcall **)(struct IPolicyConfig *, const WCHAR *, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                   a5,
                   v9,
                   0LL,
                   pv) >= 0 )
              v22 = (struct tWAVEFORMATEX *)pv[0];
            v45 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&pData,
                    v60);
            CSpatialProperties::SetSpatialAudioSettingsInternal(a1, v9, 0, v61, v22, v45, (__int64)&v67);
            if ( pv[0] )
              CoTaskMemFree(pv[0]);
            v39 = (_WORD)v55 + 1;
            LOWORD(v55) = v39;
            v22 = v57;
            if ( v39 >= 5u )
              goto LABEL_107;
          }
          *(_DWORD *)(a1 + 6872) = 0;
        }
LABEL_95:
        if ( a1 )
          LeaveCriticalSection((LPCRITICAL_SECTION)a1);
      }
    }
  }
LABEL_107:
  v51 = v60;
  v52 = *(_QWORD *)(v60 + 56);
  if ( v52 )
  {
    LOBYTE(a2) = v52 != v60;
    (*(void (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v52 + 32LL))(v52, a2);
    *(_QWORD *)(v51 + 56) = 0LL;
  }
}
