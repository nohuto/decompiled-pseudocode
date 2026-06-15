/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x180105B54
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18010936C (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032140 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180107034 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x180107FF8 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        unsigned int *a4,
        struct _GUID *a5,
        __int128 *a6)
{
  size_t v6; // r15
  int v9; // r12d
  char *v10; // rdi
  __int128 v11; // xmm7
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __int128 v14; // xmm10
  __int64 v15; // xmm6_8
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v17; // rbx
  __int64 v18; // rsi
  void *v19; // rcx
  SIZE_T v20; // r14
  int i; // ebx
  int v22; // esi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  char v25; // r10
  bool *v26; // rdx
  size_t v27; // r9
  unsigned int *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  bool v31; // al
  char *v32; // rcx
  unsigned int v33; // r11d
  unsigned int *v34; // rax
  char v35; // r10
  char *v36; // rdx
  size_t v37; // r9
  unsigned int *v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // esi
  char *v42; // rax
  int *v43; // rsi
  unsigned int v44; // eax
  unsigned int *v45; // rcx
  char v46; // r11
  char *v47; // r8
  size_t v48; // r10
  unsigned int *v49; // r9
  __int64 v50; // rdx
  int v51; // edx
  int v52; // r8d
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h]
  int v56; // [rsp+48h] [rbp-C0h]
  unsigned int v57; // [rsp+4Ch] [rbp-BCh]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  unsigned int *v59; // [rsp+58h] [rbp-B0h]
  unsigned int *v60; // [rsp+60h] [rbp-A8h]
  struct tagPROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  char *v62; // [rsp+80h] [rbp-88h]
  struct _GUID v63; // [rsp+88h] [rbp-80h] BYREF
  char *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  __int64 v66; // [rsp+A8h] [rbp-60h]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  __int64 v68[2]; // [rsp+B8h] [rbp-50h] BYREF
  __m256i v69; // [rsp+C8h] [rbp-40h]
  __int128 v70; // [rsp+E8h] [rbp-20h]
  __int64 v71; // [rsp+F8h] [rbp-10h]
  _DWORD v72[14]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v73[2]; // [rsp+140h] [rbp+38h] BYREF
  int v74; // [rsp+160h] [rbp+58h]
  int v75; // [rsp+164h] [rbp+5Ch]
  _DWORD v76[2]; // [rsp+168h] [rbp+60h]
  __int64 v77; // [rsp+170h] [rbp+68h]
  __int128 v78; // [rsp+178h] [rbp+70h]
  __int128 v79; // [rsp+188h] [rbp+80h]
  int v80; // [rsp+198h] [rbp+90h]
  __int64 v81; // [rsp+1A0h] [rbp+98h]
  __int128 v82; // [rsp+1A8h] [rbp+A0h]
  int v83; // [rsp+1B8h] [rbp+B0h]
  __int64 v84; // [rsp+1C0h] [rbp+B8h]
  __int128 v85; // [rsp+1C8h] [rbp+C0h]
  int v86; // [rsp+1D8h] [rbp+D0h]
  __int64 v87; // [rsp+1E0h] [rbp+D8h]
  __int128 v88; // [rsp+1E8h] [rbp+E0h]

  v67 = -2LL;
  v60 = a4;
  v6 = (unsigned int)Size;
  v55 = (__int64)a6;
  v65 = 0LL;
  v66 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v72[0] = 8000;
  v72[1] = 11025;
  v72[2] = 16000;
  v72[3] = 22050;
  v72[4] = 24000;
  v72[5] = 32000;
  v72[6] = 44100;
  v72[7] = 48000;
  v72[8] = 88200;
  v72[9] = 96000;
  v72[10] = 176400;
  v72[11] = 192000;
  v72[12] = 352800;
  v72[13] = 384000;
  v73[0] = _mm_load_si128((const __m128i *)&_xmm);
  v73[1] = _mm_load_si128((const __m128i *)&_xmm);
  v74 = 32;
  v75 = 32;
  v76[0] = 0;
  v77 = 0LL;
  v78 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_1;
  v79 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_2;
  v80 = 0;
  v81 = 0LL;
  v82 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_4;
  v83 = 0;
  v84 = 0LL;
  v85 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_6;
  v86 = 0;
  v87 = 0LL;
  v88 = `CEndpointCharacteristics::ForEachCandidateFormatForMode<_lambda_bc829bb10b63470994cc211668497c87_>'::`2'::s_ChannelMaskEntry_8;
  v10 = 0LL;
  v64 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  CEndpointCharacteristics::HasHardwareAudioEngine(this);
  pv = 0LL;
  *(_OWORD *)v68 = v11;
  *(_OWORD *)v69.m256i_i8 = v12;
  *(_OWORD *)&v69.m256i_u64[2] = v13;
  v70 = v14;
  v71 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v68,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v68 = v11;
  *(_OWORD *)v69.m256i_i8 = v12;
  *(_OWORD *)&v69.m256i_u64[2] = v13;
  v70 = v14;
  v71 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
    (int)this,
    (__int64)v68,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v63 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v63,
                                               (struct tWAVEFORMATEX **)&pv);
  v17 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v18 = v55;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v55, pv, 0LL);
      if ( v9 < 0 )
      {
        v19 = v17;
LABEL_9:
        CoTaskMemFree(v19);
        goto LABEL_79;
      }
    }
  }
  else
  {
    v18 = v55;
  }
  CoTaskMemFree(v17);
  *(_QWORD *)&v63.Data1 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    if ( (unsigned int)IsValidWfxBlob(&pvar) )
    {
      v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
      if ( v9 >= 0 )
      {
        v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v18, pvar.bstrblobVal.pData, 0LL);
        if ( v9 < 0 )
        {
          v19 = 0LL;
          goto LABEL_9;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v20 = (unsigned int)(3 * v6);
  *(_QWORD *)&v63.Data1 = v20;
  v10 = (char *)operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
  v64 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v22 = v76[4 * i];
      if ( v22 )
      {
        memset_0(v10, 1, v20);
        v23 = v60;
        LODWORD(v24) = 0;
        v25 = 0;
        if ( !(_DWORD)v6 )
          goto LABEL_35;
        v26 = (bool *)v10;
        v27 = v6;
        do
        {
          v28 = (unsigned int *)((char *)v23 + *v23);
          if ( *v26 )
          {
            v29 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 2);
            if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 2) )
              v29 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 3);
            if ( v29 )
              goto LABEL_32;
            v30 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 4);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 4) )
              v30 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 5);
            if ( v30 )
            {
LABEL_32:
              *v26 = 0;
            }
            else
            {
              v31 = i <= v23[16];
              *v26 = v31;
              if ( v31 )
                v25 = 1;
            }
          }
          ++v26;
          v23 = v28;
          --v27;
        }
        while ( v27 );
        LODWORD(v24) = 0;
        if ( v25 )
        {
LABEL_35:
          LODWORD(v58) = 0;
          if ( v22 > 0 )
          {
            v32 = &v10[v6];
            pv = 0LL;
            while ( 2 )
            {
              v56 = v24;
              v59 = v72;
              do
              {
                memcpy_0(v32, v10, v6);
                v33 = *v59;
                v34 = v60;
                v35 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_53;
                v36 = &v10[v6];
                v37 = v6;
                do
                {
                  v38 = (unsigned int *)((char *)v34 + *v34);
                  if ( *v36 )
                  {
                    v39 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v34 + 2);
                    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v34 + 2) )
                      v39 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v34 + 3);
                    if ( v39 )
                      goto LABEL_50;
                    v40 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v34 + 4);
                    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v34 + 4) )
                      v40 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v34 + 5);
                    if ( v40 || v33 < v34[19] || v33 > v34[20] )
                    {
LABEL_50:
                      *v36 = 0;
                    }
                    else
                    {
                      *v36 = 1;
                      v35 = 1;
                    }
                  }
                  ++v36;
                  v34 = v38;
                  --v37;
                }
                while ( v37 );
                v41 = v56;
                LODWORD(v24) = 0;
                if ( v35 )
                {
LABEL_53:
                  v57 = 0;
                  v42 = &v10[(unsigned int)(2 * v6)];
                  v62 = v42;
                  v43 = (int *)v73 + 1;
                  while ( 1 )
                  {
                    memcpy_0(v42, &v10[v6], v6);
                    v44 = *(v43 - 1);
                    v45 = v60;
                    LODWORD(v24) = 0;
                    v46 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_82;
                    v47 = v62;
                    v48 = v6;
                    do
                    {
                      v49 = (unsigned int *)((char *)v45 + *v45);
                      if ( *v47 != (_BYTE)v24 )
                      {
                        v50 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v45 + 2);
                        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v45 + 2) )
                          v50 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v45 + 3);
                        if ( v50 )
                          goto LABEL_66;
                        v24 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v45 + 4);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v45 + 4) )
                          v24 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v45 + 5);
                        if ( v24 || v44 < v45[17] || v44 > v45[18] )
                        {
LABEL_66:
                          LODWORD(v24) = 0;
                          *v47 = 0;
                        }
                        else
                        {
                          *v47 = 1;
                          v46 = 1;
                        }
                      }
                      ++v47;
                      v45 = v49;
                      --v48;
                    }
                    while ( v48 );
                    if ( v46 )
                    {
LABEL_82:
                      v51 = *(_DWORD *)((char *)pv + *(&v77 + 2 * i));
                      v52 = *v43;
                      if ( !v51 && i <= 2 )
                        v51 = 4 - (i != 1);
                      v69.m256i_i16[1] = v44;
                      v69.m256i_i32[1] = v51;
                      *(GUID *)&v69.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v68[0]) = -2;
                      HIWORD(v68[1]) = v52;
                      v69.m256i_i16[0] = 22;
                      WORD1(v68[0]) = i;
                      HIDWORD(v68[0]) = *v59;
                      WORD2(v68[1]) = i * ((unsigned __int16)v52 >> 3);
                      LODWORD(v68[1]) = HIDWORD(v68[0]) * WORD2(v68[1]);
                      v9 = lambda_bc829bb10b63470994cc211668497c87_::operator()(v55, v68, 0LL);
                      LODWORD(v24) = 0;
                      if ( v9 < 0 )
                        goto LABEL_79;
                    }
                    ++v57;
                    v43 += 2;
                    v42 = v62;
                    if ( v57 >= 5 )
                    {
                      v41 = v56;
                      break;
                    }
                  }
                }
                v56 = v41 + 1;
                ++v59;
                v32 = &v10[v6];
              }
              while ( (unsigned int)(v41 + 1) < 0xE );
              LODWORD(v58) = v58 + 1;
              pv = (char *)pv + 4;
              v32 = &v10[v6];
              if ( (int)v58 < v76[4 * i] )
                continue;
              break;
            }
            v20 = *(_QWORD *)&v63.Data1;
          }
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_79:
  PropVariantClear((PROPVARIANT *)&pvar);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
