/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGPEAU3@AEAK9999PEAU2@@Z @ 0x1800526B0
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180121148 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEBG_NPEBUSpatialAudioSettings@@PEBUtWA.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180123E6C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATE.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x180052D64 (GetPreferredSpatialAudioEncoderId.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180053F64 (DoesPlatformSupportSpatialAudio.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180056DE4 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x180124F70 (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        EVENT_DATA_DESCRIPTOR *a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        CSpatialAudioTechnologies *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        const WCHAR *a12,
        __int64 a13,
        unsigned int *a14,
        unsigned int *a15,
        unsigned int *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  EVENT_DATA_DESCRIPTOR *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  int v24; // edi
  __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned int v27; // esi
  unsigned int v28; // edi
  __int64 v29; // rbx
  __int64 (__fastcall ***v30)(_QWORD, EVENT_DATA_DESCRIPTOR *); // rcx
  const GUID *v31; // r8
  const GUID *v32; // r9
  EVENT_DATA_DESCRIPTOR *v33; // rcx
  ULONG Reserved; // eax
  unsigned __int8 v35; // al
  _OWORD *v36; // rax
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  unsigned __int8 v39; // al
  int v40; // eax
  __int64 v41; // rax
  _WORD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int16 v45; // ax
  __int64 v46; // rax
  _WORD *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int16 v50; // ax
  unsigned int v51; // edi
  __int64 v52; // r14
  EVENT_DATA_DESCRIPTOR *v53; // rbx
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  char v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  _DWORD *v65; // rax
  unsigned __int16 v66; // cx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // edx
  __int16 Ptr; // r11
  __int16 v72; // r8
  __int16 v73; // dx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int16 v77; // cx
  __int16 v78; // r10
  int Ptr_high; // r9d
  USHORT Reserved2; // r8
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rax
  const struct CSpatialAudioTech *TechnologyByID; // rdi
  __int64 v85; // rax
  __int64 v86; // rsi
  LPCGUID v87; // r8
  LPCGUID v88; // r9
  unsigned int v90; // [rsp+54h] [rbp-ACh] BYREF
  char v91; // [rsp+58h] [rbp-A8h] BYREF
  char v92[7]; // [rsp+59h] [rbp-A7h] BYREF
  __int64 v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  unsigned int v95; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v96; // [rsp+74h] [rbp-8Ch] BYREF
  EVENT_DATA_DESCRIPTOR *p_Buf1; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v98; // [rsp+80h] [rbp-80h]
  unsigned int v99; // [rsp+84h] [rbp-7Ch]
  __int64 v100; // [rsp+88h] [rbp-78h]
  unsigned int v101; // [rsp+90h] [rbp-70h]
  unsigned int v102; // [rsp+94h] [rbp-6Ch]
  __int64 v103; // [rsp+98h] [rbp-68h]
  LPCWSTR pwsz; // [rsp+A0h] [rbp-60h]
  __int64 v105; // [rsp+A8h] [rbp-58h]
  unsigned int *v106; // [rsp+B0h] [rbp-50h]
  unsigned int *v107; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR *v108; // [rsp+C0h] [rbp-40h]
  unsigned int *v109; // [rsp+C8h] [rbp-38h]
  __int64 v110; // [rsp+D0h] [rbp-30h]
  __int64 v111; // [rsp+D8h] [rbp-28h]
  __int64 v112; // [rsp+E0h] [rbp-20h]
  __int64 v113; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR Buf2; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v115[24]; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v116; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v117[24]; // [rsp+130h] [rbp+30h]
  __int128 v118; // [rsp+148h] [rbp+48h] BYREF
  char v119[24]; // [rsp+158h] [rbp+58h] BYREF
  EVENT_DATA_DESCRIPTOR Buf1; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v121[24]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int *v122; // [rsp+1A0h] [rbp+A0h]
  __int64 v123; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v124; // [rsp+1B0h] [rbp+B0h]
  __int64 v125; // [rsp+1B8h] [rbp+B8h]
  __int64 v126; // [rsp+1C0h] [rbp+C0h]
  __int64 v127; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+1D0h] [rbp+D0h] BYREF

  v112 = -2LL;
  v101 = a4;
  v20 = a1;
  v108 = a1;
  v21 = a8;
  v93 = a8;
  v103 = a9;
  v22 = a11;
  v100 = a11;
  v113 = a11;
  pwsz = a12;
  v23 = a13;
  v94 = a13;
  v109 = a14;
  v106 = a15;
  v107 = a16;
  v110 = a17;
  v111 = a18;
  v105 = a19;
  v90 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v24 = g_ListOfSpatialTech;
  v102 = g_ListOfSpatialTech;
  if ( a19 )
  {
    *(_OWORD *)a19 = *(_OWORD *)a3;
    *(_OWORD *)(a19 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a19 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a19 + 48) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a19 + 64) = *(_QWORD *)(a3 + 64);
  }
  if ( (unsigned __int8)DoesPlatformSupportSpatialAudio() )
  {
    v98 = -1;
    v99 = -1;
    v118 = *(_OWORD *)GetPreferredSpatialAudioEncoderId(&v118, a7, a3);
    v96 = 0;
    if ( v24 )
    {
      v26 = 0;
      v27 = a6;
      v28 = v90;
      while ( 1 )
      {
        v92[0] = 0;
        v95 = 0;
        memset_0(&v116, 0, 0x28uLL);
        if ( v26 >= g_ListOfSpatialTech )
          v29 = 0LL;
        else
          v29 = qword_1801B43D8[v26];
        if ( !v29 )
          goto LABEL_63;
        p_Buf1 = &Buf1;
        v123 = 0LL;
        v30 = *(__int64 (__fastcall ****)(_QWORD, EVENT_DATA_DESCRIPTOR *))(v22 + 56);
        if ( v30 )
          v123 = (**v30)(v30, &Buf1);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, __int64, EVENT_DATA_DESCRIPTOR *, unsigned int *, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v29 + 40LL))(
                v29,
                v27,
                v21,
                v103,
                &Buf1,
                &v95,
                v92,
                &v116) )
          goto LABEL_77;
        v33 = v108;
        Reserved = v108[429].Reserved;
        if ( Reserved == 2 )
        {
          if ( WORD1(v116.Ptr) == 2 )
          {
            if ( (unsigned int)hProvider > 5 )
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177722, v31, v32, 2u, &Buf2);
            goto LABEL_77;
          }
        }
        else if ( !Reserved && v21 && v27 != 9 && *(_WORD *)(v21 + 2) == 8 && WORD1(v116.Ptr) == 2 )
        {
          v108[430] = v116;
          v33[431] = *(EVENT_DATA_DESCRIPTOR *)v117;
          v33[432].Ptr = *(_QWORD *)&v117[16];
          v33[429].Reserved = 1;
        }
        v35 = (*(__int64 (__fastcall **)(__int64, LPCWSTR))(*(_QWORD *)v29 + 32LL))(v29, pwsz);
        *(_DWORD *)(834LL * v90 + v23 + 784) = v35;
        v36 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 16LL))(v29, v119);
        *(_OWORD *)(834LL * v90 + v23 + 768) = *v36;
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
        *(_DWORD *)(834LL * v90 + v23 + 788) = v37;
        v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL))(v29);
        *(_DWORD *)(834LL * v90 + v23 + 792) = v38;
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 72LL))(v29);
        *(_DWORD *)(834LL * v90 + v23 + 796) = v39;
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
        *(_DWORD *)(834LL * v90 + v23 + 800) = v40;
        *(_DWORD *)(834LL * v90 + v23 + 804) = HIDWORD(v116.Ptr);
        *(_DWORD *)(834LL * v90 + v23 + 808) = *(_DWORD *)&v117[4];
        *(_OWORD *)(834LL * v90 + v23 + 812) = *(_OWORD *)&v117[8];
        *(_WORD *)(834LL * v90 + v23 + 828) = WORD1(v116.Ptr);
        *(_WORD *)(834LL * v90 + v23 + 830) = v116.Reserved2;
        *(_WORD *)(834LL * v90 + v23 + 832) = *(_WORD *)&v117[2];
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
        v42 = (_WORD *)(v23 + 834LL * v90);
        v43 = 256LL;
        v44 = v41 - (_QWORD)v42;
        while ( v43 != -2147483390 )
        {
          v45 = *(_WORD *)((char *)v42 + v44);
          if ( !v45 )
            break;
          *v42++ = v45;
          if ( !--v43 )
          {
            --v42;
            break;
          }
        }
        *v42 = 0;
        v46 = (*(__int64 (__fastcall **)(__int64, LPCWSTR, __int64))(*(_QWORD *)v29 + 24LL))(v29, pwsz, v44);
        v47 = (_WORD *)(v23 + 834LL * v90 + 512);
        v48 = 128LL;
        v49 = v46 - (_QWORD)v47;
        v21 = v93;
        while ( v48 != -2147483518 )
        {
          v50 = *(_WORD *)((char *)v47 + v49);
          if ( !v50 )
            break;
          *v47++ = v50;
          if ( !--v48 )
          {
            --v47;
            break;
          }
        }
        *v47 = 0;
        v51 = v90;
        v52 = 834LL * v90;
        v53 = (EVENT_DATA_DESCRIPTOR *)(v52 + v23);
        p_Buf1 = (EVENT_DATA_DESCRIPTOR *)(v52 + v23);
        v54 = (_QWORD *)(v52 + v23 + 768);
        v55 = *v54 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *v54 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
          v55 = *(_QWORD *)(v52 + v23 + 776) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        if ( !v55 )
          goto LABEL_158;
        v56 = -1LL;
        do
          ++v56;
        while ( *((_WORD *)&v53->Ptr + v56) );
        if ( !v56 )
        {
LABEL_158:
          if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz((PEVENT_DATA_DESCRIPTOR)&v121[16], pwsz);
            v122 = &v96;
            v123 = 4LL;
            v124 = &v90;
            v125 = 4LL;
            v126 = v52 + v23 + 768;
            v127 = 16LL;
            TlgCreateWsz(&v128, (LPCWSTR)(v52 + v23));
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177660, v87, v88, 7u, &Buf1);
            v51 = v90;
          }
          memset_0((void *)(v23 + 834LL * v51), 0, 0x342uLL);
          v22 = v100;
          v27 = a6;
LABEL_77:
          v28 = v90;
          goto LABEL_63;
        }
        v57 = a2;
        if ( !a2 || a7 )
          goto LABEL_43;
        if ( v103 )
        {
          v66 = *(_WORD *)v103;
          v67 = *(_WORD *)(v103 + 16);
          if ( *(_WORD *)v103 == 0xFFFE )
          {
            if ( v67 != 22 )
            {
              v68 = *(_QWORD *)(v103 + 24) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v68 )
                v68 = *(_QWORD *)(v103 + 32) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v68 )
              {
                v69 = *(_QWORD *)(v103 + 24) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v69 )
                  v69 = *(_QWORD *)(v103 + 32) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v69 )
                  goto LABEL_155;
              }
            }
            Buf1 = *(EVENT_DATA_DESCRIPTOR *)v103;
            *(_OWORD *)v121 = *(_OWORD *)(v103 + 16);
            *(_QWORD *)&v121[16] = *(_QWORD *)(v103 + 32);
            *(_WORD *)v121 = 22;
            v70 = *(_DWORD *)&v121[4];
            Ptr = Buf1.Ptr;
          }
          else
          {
            if ( v67 && ((v66 - 1) & 0xFFFD) != 0 )
              goto LABEL_155;
            v72 = *(_WORD *)(v103 + 2);
            if ( (unsigned __int16)(v72 - 1) > 1u )
              goto LABEL_154;
            v73 = *(_WORD *)(v103 + 14);
            v53 = p_Buf1;
            if ( ((v73 - 8) & 0xFFE7) != 0 )
              goto LABEL_154;
            Buf1 = *(EVENT_DATA_DESCRIPTOR *)v103;
            Ptr = -2;
            LOWORD(Buf1.Ptr) = -2;
            *(_WORD *)v121 = 22;
            *(_WORD *)&v121[2] = v73;
            *(GUID *)&v121[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&v121[8] = v66;
            v70 = (v72 == 1) + 3;
          }
          if ( LOWORD(v116.Ptr) == 0xFFFE )
          {
            if ( *(_WORD *)v117 != 22 )
            {
              v74 = *(_QWORD *)&v117[8] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( *(_QWORD *)&v117[8] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
                v74 = *(_QWORD *)&v117[16] - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v74 )
              {
                v75 = *(_QWORD *)&v117[8] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( *(_QWORD *)&v117[8] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                  v75 = *(_QWORD *)&v117[16] - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v75 )
                {
LABEL_154:
                  v57 = a2;
LABEL_155:
                  v23 = v94;
                  v21 = v93;
LABEL_43:
                  v25 = v95;
                  v22 = v100;
LABEL_44:
                  v27 = a6;
                  goto LABEL_45;
                }
              }
            }
            Buf2 = v116;
            *(_OWORD *)v115 = *(_OWORD *)v117;
            *(_QWORD *)&v115[16] = *(_QWORD *)&v117[16];
            *(_WORD *)v115 = 22;
            v76 = *(_DWORD *)&v117[4];
            v77 = v116.Ptr;
          }
          else
          {
            if ( *(_WORD *)v117 && ((LOWORD(v116.Ptr) - 1) & 0xFFFD) != 0
              || (unsigned __int16)(WORD1(v116.Ptr) - 1) > 1u
              || ((v116.Reserved2 - 8) & 0xFFE7) != 0 )
            {
              goto LABEL_154;
            }
            Buf2 = v116;
            v77 = -2;
            LOWORD(Buf2.Ptr) = -2;
            *(_WORD *)v115 = 22;
            *(_WORD *)&v115[2] = v116.Reserved2;
            *(GUID *)&v115[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&v115[8] = LOWORD(v116.Ptr);
            v76 = (WORD1(v116.Ptr) == 1) + 3;
          }
          if ( WORD1(Buf1.Ptr) )
          {
            v78 = WORD1(Buf2.Ptr);
          }
          else
          {
            v78 = 0;
            WORD1(Buf2.Ptr) = 0;
            Buf2.Size = 0;
            LOWORD(Buf2.Reserved) = 0;
          }
          if ( HIDWORD(Buf1.Ptr) )
          {
            Ptr_high = HIDWORD(Buf2.Ptr);
          }
          else
          {
            Ptr_high = 0;
            *(ULONGLONG *)((char *)&Buf2.Ptr + 4) = 0LL;
          }
          if ( Buf1.Reserved2 )
          {
            Reserved2 = Buf2.Reserved2;
          }
          else
          {
            Reserved2 = 0;
            Buf2.Reserved = 0;
          }
          if ( !v70 )
            v76 = 0;
          *(_DWORD *)&v115[4] = v76;
          if ( !Ptr )
          {
            v77 = 0;
            LOWORD(Buf2.Ptr) = 0;
          }
          if ( !v78 )
          {
            WORD1(Buf1.Ptr) = 0;
            Buf1.Size = 0;
            LOWORD(Buf1.Reserved) = 0;
          }
          if ( !Ptr_high )
            *(ULONGLONG *)((char *)&Buf1.Ptr + 4) = 0LL;
          if ( !Reserved2 )
            Buf1.Reserved = 0;
          if ( !v76 )
            v70 = 0;
          *(_DWORD *)&v121[4] = v70;
          if ( !v77 )
            LOWORD(Buf1.Ptr) = 0;
          v81 = *(_QWORD *)&v121[8] - *(_QWORD *)&v115[8];
          if ( *(_QWORD *)&v121[8] == *(_QWORD *)&v115[8] )
            v81 = *(_QWORD *)&v121[16] - *(_QWORD *)&v115[16];
          if ( v81 )
            goto LABEL_154;
          v82 = memcmp_0(&Buf1, &Buf2, 0x28uLL);
          v23 = v94;
          v21 = v93;
          v57 = a2;
          if ( v82 )
            goto LABEL_43;
        }
        if ( !LODWORD(v53[49].Ptr) )
          goto LABEL_43;
        v58 = *v54 - *(_QWORD *)(a3 + 12);
        if ( *v54 == *(_QWORD *)(a3 + 12) )
          v58 = v54[1] - *(_QWORD *)(a3 + 20);
        if ( !v58 || v101 <= v51 || !v105 || *(_DWORD *)((char *)a5 + v52 + 784) )
          goto LABEL_43;
        v83 = *(_QWORD *)((char *)a5 + v52 + 768) - *v54;
        if ( !v83 )
          v83 = *(_QWORD *)((char *)a5 + v52 + 776) - v54[1];
        if ( v83 )
          goto LABEL_43;
        v91 = 0;
        LODWORD(p_Buf1) = 0;
        TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(a5, (const struct _GUID *)(a3 + 12));
        v22 = v100;
        if ( !TechnologyByID )
          break;
        v85 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                &Buf1,
                v100);
        v27 = a6;
        if ( !(*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, __int64, __int64, __int64, EVENT_DATA_DESCRIPTOR **, char *, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)TechnologyByID + 40LL))(
                TechnologyByID,
                a6,
                v21,
                v103,
                v85,
                &p_Buf1,
                &v91,
                &v116) )
          goto LABEL_153;
        v25 = v95;
        if ( !v91 || v95 < (unsigned int)p_Buf1 )
        {
          v86 = v105;
          *(_OWORD *)(v105 + 28) = *(_OWORD *)(a3 + 12);
          if ( *v106 != -1 )
            *v107 = *v106;
          v51 = v90;
          *(_OWORD *)(v86 + 12) = *(_OWORD *)((char *)a5 + 834 * v90 + 768);
          v57 = a2;
          goto LABEL_44;
        }
        v51 = v90;
        v57 = a2;
LABEL_45:
        v59 = 834LL * v51;
        v60 = *(_QWORD *)(v59 + v23 + 768) - v118;
        if ( !v60 )
          v60 = *(_QWORD *)(v59 + v23 + 776) - *((_QWORD *)&v118 + 1);
        if ( !v60 )
          *v109 = v51;
        if ( v57 )
        {
          v61 = *(_QWORD *)(v59 + v23 + 768) - *(_QWORD *)(a3 + 12);
          if ( !v61 )
            v61 = *(_QWORD *)(v59 + v23 + 776) - *(_QWORD *)(a3 + 20);
          if ( !v61 )
            *v106 = v51;
          v62 = *(_QWORD *)(v59 + v23 + 768) - *(_QWORD *)(a3 + 28);
          if ( !v62 )
            v62 = *(_QWORD *)(v59 + v23 + 776) - *(_QWORD *)(a3 + 36);
          if ( !v62 )
            *v107 = v51;
        }
        if ( !*(_DWORD *)(v59 + v23 + 784) || !(_DWORD)v25 )
          goto LABEL_62;
        if ( v92[0] && (a10 || !*(_DWORD *)(v59 + v23 + 788)) )
        {
          if ( (unsigned int)v25 >= v98 )
            goto LABEL_62;
          v98 = v25;
          v65 = (_DWORD *)v110;
          goto LABEL_76;
        }
        if ( (unsigned int)v25 < v99 )
        {
          v99 = v25;
          v65 = (_DWORD *)v111;
LABEL_76:
          *v65 = v51;
        }
LABEL_62:
        v28 = v51 + 1;
        v90 = v28;
LABEL_63:
        v26 = v96 + 1;
        v96 = v26;
        if ( v26 >= v102 )
        {
          v20 = v108;
          goto LABEL_65;
        }
      }
      v27 = a6;
LABEL_153:
      v51 = v90;
      v25 = v95;
      v57 = a2;
      goto LABEL_45;
    }
  }
  v28 = v90;
LABEL_65:
  if ( !v20[429].Reserved )
    v20[429].Reserved = 3;
  v63 = *(_QWORD *)(v22 + 56);
  if ( v63 )
  {
    if ( v63 == v22 )
      v25 = 0LL;
    else
      LOBYTE(v25) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 32LL))(v63, v25);
    *(_QWORD *)(v22 + 56) = 0LL;
  }
  return v28;
}
