/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180067BB0
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x1800017DC (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x1800032E0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180035448 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18012DFB0 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     GetPreferredSpatialAudioEncoderId @ 0x180004208 (GetPreferredSpatialAudioEncoderId.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x1800381D8 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003823C (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x1800385D4 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039F30 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180046948 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     DoesPlatformSupportSpatialAudio @ 0x18005A07C (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned __int16 *a9,
        char a10,
        __int64 a11,
        const WCHAR *a12,
        int a13,
        __int64 a14,
        unsigned int *a15,
        unsigned int *a16,
        unsigned int *a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  bool v28; // al
  __int64 v29; // rdx
  unsigned int v30; // r9d
  unsigned int v31; // r14d
  unsigned int v32; // ebx
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rbx
  char v36; // al
  const GUID *v37; // r8
  int v38; // eax
  _OWORD *v39; // rax
  unsigned __int8 v40; // al
  unsigned __int8 v41; // al
  unsigned __int8 v42; // al
  int v43; // eax
  char *v44; // rax
  char *v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // r9
  LPCWSTR v50; // r10
  LPCGUID v51; // r8
  LPCGUID v52; // r9
  int v53; // r9d
  unsigned __int16 v54; // cx
  unsigned __int16 v55; // dx
  int v56; // r8d
  __int16 Ptr; // dx
  int Ptr_high; // r11d
  __int16 v59; // r14
  USHORT Reserved2; // r10
  CSpatialAudioTechnologies *v61; // rcx
  const struct CSpatialAudioTech *TechnologyByID; // rbx
  __int64 v63; // rax
  unsigned int *v64; // r8
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // r9
  LPCWSTR v68; // r10
  LPCGUID v69; // r8
  LPCGUID v70; // r9
  unsigned int v72; // [rsp+58h] [rbp-B0h] BYREF
  char v73; // [rsp+5Ch] [rbp-ACh] BYREF
  char v74; // [rsp+5Dh] [rbp-ABh]
  char v75; // [rsp+5Eh] [rbp-AAh] BYREF
  unsigned int v76; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v77; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int Ptr_low; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+70h] [rbp-98h]
  unsigned int *v80; // [rsp+78h] [rbp-90h]
  int v81; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v82; // [rsp+84h] [rbp-84h]
  unsigned int v83; // [rsp+88h] [rbp-80h]
  LPCWSTR pwsz; // [rsp+90h] [rbp-78h]
  __int64 v85; // [rsp+98h] [rbp-70h]
  __int64 v86; // [rsp+A0h] [rbp-68h]
  unsigned int *v87; // [rsp+A8h] [rbp-60h]
  unsigned int *v88; // [rsp+B0h] [rbp-58h]
  __int64 v89; // [rsp+B8h] [rbp-50h]
  __int64 v90; // [rsp+C0h] [rbp-48h]
  __int64 v91; // [rsp+C8h] [rbp-40h]
  __int64 v92; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR Buf2; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v94[24]; // [rsp+F0h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v95; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v96[24]; // [rsp+118h] [rbp+10h]
  __int128 v97; // [rsp+130h] [rbp+28h] BYREF
  char v98[24]; // [rsp+140h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR Buf1; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v100[24]; // [rsp+168h] [rbp+60h] BYREF
  unsigned int *v101; // [rsp+188h] [rbp+80h]
  __int64 v102; // [rsp+190h] [rbp+88h]
  unsigned int *v103; // [rsp+198h] [rbp+90h]
  __int64 v104; // [rsp+1A0h] [rbp+98h]
  __int64 v105; // [rsp+1A8h] [rbp+A0h]
  __int64 v106; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v108; // [rsp+1C8h] [rbp+C0h]
  __int64 v109; // [rsp+1D0h] [rbp+C8h]

  v91 = -2LL;
  v82 = a4;
  v74 = a2;
  v86 = a8;
  v22 = a11;
  v85 = a11;
  v92 = a11;
  pwsz = a12;
  v88 = a15;
  v80 = a16;
  v87 = a17;
  v89 = a18;
  v90 = a19;
  v72 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v27 = g_ListOfSpatialTech[0];
  v83 = g_ListOfSpatialTech[0];
  if ( a20 )
  {
    *(_OWORD *)a20 = *(_OWORD *)a3;
    *(_OWORD *)(a20 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a20 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a20 + 48) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a20 + 64) = *(_QWORD *)(a3 + 64);
  }
  v28 = DoesPlatformSupportSpatialAudio(v24, v23, v25, v26);
  v30 = 0;
  if ( v28 )
  {
    v79 = -1LL;
    v97 = *GetPreferredSpatialAudioEncoderId(&v97, a7, a3);
    v77 = v30;
    if ( v27 )
    {
      v31 = v30;
      v32 = v72;
      while ( 1 )
      {
        v75 = v30;
        v76 = v30;
        memset_0(&v95, 0, 0x28uLL);
        v30 = 0;
        if ( v31 >= g_ListOfSpatialTech[0] )
          v33 = 0LL;
        else
          v33 = qword_1801B9488[v31];
        if ( !v33 )
          goto LABEL_118;
        v34 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                (__int64)&Buf1,
                v85);
        v35 = v86;
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, __int64, int, unsigned int *, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v33 + 40LL))(
                v33,
                a6,
                v86,
                a9,
                v34,
                a13,
                &v76,
                &v75,
                &v95);
        v30 = 0;
        if ( !v36 )
          goto LABEL_117;
        v38 = *(_DWORD *)(a1 + 6876);
        if ( v38 == 2 )
        {
          if ( WORD1(v95.Ptr) == 2 )
          {
            if ( (unsigned int)hProvider > 5 )
            {
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C973, v37, 0LL, 2u, &Buf2);
              goto LABEL_116;
            }
            goto LABEL_117;
          }
        }
        else if ( !v38 && v35 && a6 != 9 && *(_WORD *)(v35 + 2) == 8 && WORD1(v95.Ptr) == 2 )
        {
          *(EVENT_DATA_DESCRIPTOR *)(a1 + 6880) = v95;
          *(_OWORD *)(a1 + 6896) = *(_OWORD *)v96;
          *(_QWORD *)(a1 + 6912) = *(_QWORD *)&v96[16];
          *(_DWORD *)(a1 + 6876) = 1;
        }
        v81 = (*(__int64 (__fastcall **)(__int64, LPCWSTR, const GUID *, _QWORD))(*(_QWORD *)v33 + 32LL))(
                v33,
                pwsz,
                v37,
                0LL);
        *(_DWORD *)(834LL * v72 + a14 + 784) = v81 >= 0;
        v39 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 16LL))(v33, v98);
        *(_OWORD *)(834LL * v72 + a14 + 768) = *v39;
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 48LL))(v33);
        *(_DWORD *)(834LL * v72 + a14 + 788) = v40;
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33);
        *(_DWORD *)(834LL * v72 + a14 + 792) = v41;
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 72LL))(v33);
        *(_DWORD *)(834LL * v72 + a14 + 796) = v42;
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 64LL))(v33);
        *(_DWORD *)(834LL * v72 + a14 + 800) = v43;
        *(_DWORD *)(834LL * v72 + a14 + 804) = HIDWORD(v95.Ptr);
        *(_DWORD *)(834LL * v72 + a14 + 808) = *(_DWORD *)&v96[4];
        *(_OWORD *)(834LL * v72 + a14 + 812) = *(_OWORD *)&v96[8];
        *(_WORD *)(834LL * v72 + a14 + 828) = WORD1(v95.Ptr);
        *(_WORD *)(834LL * v72 + a14 + 830) = v95.Reserved2;
        *(_WORD *)(834LL * v72 + a14 + 832) = *(_WORD *)&v96[2];
        v44 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
        StringCchCopyW((char *)(a14 + 834LL * v72), 256LL, v44);
        v45 = (char *)(*(__int64 (__fastcall **)(__int64, LPCWSTR))(*(_QWORD *)v33 + 24LL))(v33, pwsz);
        StringCchCopyW((char *)(a14 + 834LL * v72 + 512), 128LL, v45);
        v46 = v72;
        v47 = a14 + 834LL * v72;
        if ( *(_OWORD *)(v47 + 768) == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
          goto LABEL_113;
        v48 = -1LL;
        do
          ++v48;
        while ( *(_WORD *)(v47 + 2 * v48) );
        if ( !v48 )
        {
LABEL_113:
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v100[16], pwsz);
            v101 = &v77;
            v102 = 4LL;
            v103 = &v72;
            v104 = 4LL;
            v105 = v67;
            v106 = 16LL;
            TlgCreateWsz(&v107, v68);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C89E, v69, v70, 7u, &Buf1);
            v46 = v72;
          }
          memset_0((void *)(a14 + 834LL * v46), 0, 0x342uLL);
LABEL_116:
          v30 = 0;
LABEL_117:
          v32 = v72;
          goto LABEL_118;
        }
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v100[16], pwsz);
          v101 = &v77;
          v102 = 4LL;
          v103 = &v72;
          v104 = 4LL;
          v105 = v49;
          v106 = 16LL;
          TlgCreateWsz(&v107, v50);
          v108 = &v81;
          v109 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017C8FE, v51, v52, 8u, &Buf1);
          v46 = v72;
        }
        if ( !v74 || a7 )
          goto LABEL_91;
        if ( a9 )
        {
          if ( *a9 == 0xFFFE )
          {
            if ( a9[8] != 22
              && (*((_QWORD *)a9 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
               || *((_QWORD *)a9 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
              && (*((_QWORD *)a9 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
               || *((_QWORD *)a9 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
            {
              goto LABEL_91;
            }
            Buf1 = *(EVENT_DATA_DESCRIPTOR *)a9;
            *(_OWORD *)v100 = *((_OWORD *)a9 + 1);
            *(_QWORD *)&v100[16] = *((_QWORD *)a9 + 4);
            *(_WORD *)v100 = 22;
            v53 = *(_DWORD *)&v100[4];
            Ptr_low = LOWORD(Buf1.Ptr);
          }
          else
          {
            if ( a9[8] && ((*a9 - 1) & 0xFFFD) != 0 )
              goto LABEL_91;
            v54 = a9[1];
            if ( (unsigned __int16)(v54 - 1) > 1u )
              goto LABEL_91;
            v55 = a9[7];
            if ( ((v55 - 8) & 0xFFE7) != 0 )
              goto LABEL_91;
            Buf1 = *(EVENT_DATA_DESCRIPTOR *)a9;
            Ptr_low = 65534;
            LOWORD(Buf1.Ptr) = -2;
            *(_WORD *)v100 = 22;
            *(_WORD *)&v100[2] = v55;
            *(GUID *)&v100[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&v100[8] = *a9;
            v53 = 4 - (v54 != 1);
          }
          if ( LOWORD(v95.Ptr) == 0xFFFE )
          {
            if ( *(_WORD *)v96 != 22
              && *(_OWORD *)&v96[8] != *(_OWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71
              && (*(_QWORD *)&v96[8] != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
               || *(_QWORD *)&v96[16] != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
            {
              goto LABEL_91;
            }
            Buf2 = v95;
            *(_OWORD *)v94 = *(_OWORD *)v96;
            *(_QWORD *)&v94[16] = *(_QWORD *)&v96[16];
            *(_WORD *)v94 = 22;
            v56 = *(_DWORD *)&v96[4];
            Ptr = v95.Ptr;
            Ptr_high = 0;
          }
          else
          {
            Ptr_high = 0;
            if ( *(_WORD *)v96 && ((LOWORD(v95.Ptr) - 1) & 0xFFFD) != 0
              || (unsigned __int16)(WORD1(v95.Ptr) - 1) > 1u
              || ((v95.Reserved2 - 8) & 0xFFE7) != 0 )
            {
              goto LABEL_91;
            }
            Buf2 = v95;
            Ptr = -2;
            LOWORD(Buf2.Ptr) = -2;
            *(_WORD *)v94 = 22;
            *(_WORD *)&v94[2] = v95.Reserved2;
            *(GUID *)&v94[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&v94[8] = LOWORD(v95.Ptr);
            v56 = 4 - (WORD1(v95.Ptr) != 1);
          }
          if ( WORD1(Buf1.Ptr) )
          {
            v59 = WORD1(Buf2.Ptr);
          }
          else
          {
            v59 = 0;
            WORD1(Buf2.Ptr) = 0;
            Buf2.Size = 0;
            LOWORD(Buf2.Reserved) = 0;
          }
          if ( HIDWORD(Buf1.Ptr) )
            Ptr_high = HIDWORD(Buf2.Ptr);
          else
            *(ULONGLONG *)((char *)&Buf2.Ptr + 4) = 0LL;
          if ( Buf1.Reserved2 )
          {
            Reserved2 = Buf2.Reserved2;
          }
          else
          {
            Reserved2 = 0;
            Buf2.Reserved = 0;
          }
          *(_DWORD *)&v94[4] = v53 != 0 ? v56 : 0;
          if ( !(_WORD)Ptr_low )
          {
            Ptr = 0;
            LOWORD(Buf2.Ptr) = 0;
          }
          if ( !v59 )
          {
            WORD1(Buf1.Ptr) = 0;
            Buf1.Size = 0;
            LOWORD(Buf1.Reserved) = 0;
          }
          if ( !Ptr_high )
            *(ULONGLONG *)((char *)&Buf1.Ptr + 4) = 0LL;
          if ( !Reserved2 )
            Buf1.Reserved = 0;
          *(_DWORD *)&v100[4] = (v53 != 0 ? v56 : 0) != 0 ? v53 : 0;
          if ( !Ptr )
            LOWORD(Buf1.Ptr) = 0;
          if ( *(_OWORD *)&v100[8] != *(_OWORD *)&v94[8] || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
            goto LABEL_91;
        }
        v61 = (CSpatialAudioTechnologies *)(834LL * v46);
        if ( !*(_DWORD *)((char *)v61 + a14 + 784)
          || *(_QWORD *)((char *)v61 + a14 + 768) == *(_QWORD *)(a3 + 12)
          && *(_QWORD *)((char *)v61 + a14 + 776) == *(_QWORD *)(a3 + 20)
          || v82 <= v46
          || !a20
          || *(_DWORD *)((char *)v61 + a5 + 784)
          || *(_QWORD *)((char *)v61 + a5 + 768) != *(_QWORD *)((char *)v61 + a14 + 768)
          || *(_QWORD *)((char *)v61 + a5 + 776) != *(_QWORD *)((char *)v61 + a14 + 776) )
        {
          goto LABEL_91;
        }
        v73 = 0;
        Ptr_low = 0;
        TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(v61, (const struct _GUID *)(a3 + 12));
        if ( !TechnologyByID )
          break;
        v63 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                (__int64)&Buf1,
                v85);
        if ( !(*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, __int64, unsigned __int16 *, __int64, int, unsigned int *, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)TechnologyByID + 40LL))(
                TechnologyByID,
                a6,
                v86,
                a9,
                v63,
                a13,
                &Ptr_low,
                &v73,
                &v95) )
          break;
        v29 = v76;
        if ( v73 && v76 >= Ptr_low )
        {
          v46 = v72;
          goto LABEL_92;
        }
        *(_OWORD *)(a20 + 28) = *(_OWORD *)(a3 + 12);
        v64 = v80;
        if ( *v80 != -1 )
          *v87 = *v80;
        v46 = v72;
        *(_OWORD *)(a20 + 12) = *(_OWORD *)(834LL * v72 + a5 + 768);
LABEL_93:
        v65 = 834LL * v46;
        if ( *(_OWORD *)(v65 + a14 + 768) == v97 )
          *v88 = v46;
        v30 = 0;
        if ( v74 )
        {
          if ( *(_QWORD *)(v65 + a14 + 768) == *(_QWORD *)(a3 + 12)
            && *(_QWORD *)(v65 + a14 + 776) == *(_QWORD *)(a3 + 20) )
          {
            *v64 = v46;
          }
          if ( *(_QWORD *)(v65 + a14 + 768) == *(_QWORD *)(a3 + 28)
            && *(_QWORD *)(v65 + a14 + 776) == *(_QWORD *)(a3 + 36) )
          {
            *v87 = v46;
          }
        }
        if ( !*(_DWORD *)(v65 + a14 + 784) || !(_DWORD)v29 )
          goto LABEL_112;
        if ( v75 && (a10 || !*(_DWORD *)(v65 + a14 + 788)) )
        {
          if ( (unsigned int)v29 < (unsigned int)v79 )
          {
            LODWORD(v79) = v29;
            v66 = (_DWORD *)v89;
LABEL_111:
            *v66 = v46;
          }
        }
        else if ( (unsigned int)v29 < HIDWORD(v79) )
        {
          HIDWORD(v79) = v29;
          v66 = (_DWORD *)v90;
          goto LABEL_111;
        }
LABEL_112:
        v32 = v46 + 1;
        v72 = v32;
LABEL_118:
        v31 = v77 + 1;
        v77 = v31;
        if ( v31 >= v83 )
        {
          v22 = v85;
          goto LABEL_121;
        }
      }
      v46 = v72;
LABEL_91:
      v29 = v76;
LABEL_92:
      v64 = v80;
      goto LABEL_93;
    }
  }
  v32 = v72;
LABEL_121:
  if ( *(_DWORD *)(a1 + 6876) == v30 )
    *(_DWORD *)(a1 + 6876) = 3;
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(v22, v29);
  return v32;
}
