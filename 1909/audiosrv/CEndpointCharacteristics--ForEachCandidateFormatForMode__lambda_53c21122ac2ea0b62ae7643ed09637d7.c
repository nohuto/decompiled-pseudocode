/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801133C4
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1801164E4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18000385C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180010188 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180011490 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001B6B0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x1801148A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115434 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        unsigned int *a4,
        _OWORD *a5,
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
  int v20; // eax
  __int64 v21; // r13
  SIZE_T v22; // r14
  int i; // ebx
  __int64 v24; // rsi
  unsigned int *v25; // rax
  char v26; // r10
  bool *v27; // rdx
  size_t v28; // r9
  unsigned int *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32; // al
  __int64 v33; // rdx
  char *v34; // rcx
  unsigned int v35; // r11d
  unsigned int *v36; // rax
  char v37; // r10
  char *v38; // rdx
  size_t v39; // r9
  unsigned int *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r14d
  char *v44; // rax
  int *v45; // r14
  unsigned int v46; // eax
  unsigned int *v47; // rcx
  char v48; // r11
  _BYTE *v49; // r8
  size_t v50; // r10
  unsigned int *v51; // r9
  __int64 v52; // rdx
  int v53; // edx
  int v54; // r8d
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+48h] [rbp-C0h]
  unsigned int v59; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v60; // [rsp+50h] [rbp-B8h]
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v62[3]; // [rsp+70h] [rbp-98h] BYREF
  char *v63; // [rsp+88h] [rbp-80h]
  unsigned __int64 v64; // [rsp+90h] [rbp-78h]
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
  v57 = (__int64)a6;
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
  v78 = unk_18015DC38;
  v79 = unk_18015DC18;
  v80 = 0;
  v81 = 0LL;
  v82 = unk_18015DC28;
  v83 = 0;
  v84 = 0LL;
  v85 = unk_18015DBF8;
  v86 = 0;
  v87 = 0LL;
  v88 = unk_18015DC08;
  v10 = 0LL;
  v63 = 0LL;
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
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
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
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
    (int)this,
    (__int64)v68,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)&v62[1] = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               (struct _GUID *)&v62[1],
                                               (struct tWAVEFORMATEX **)&pv);
  v17 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v18 = v57;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(v57, pv, 0LL);
      if ( v9 < 0 )
      {
        v19 = v17;
LABEL_9:
        CoTaskMemFree(v19);
        goto LABEL_80;
      }
    }
  }
  else
  {
    v18 = v57;
  }
  CoTaskMemFree(v17);
  v62[1] = 0LL;
  v20 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &PKEY_AudioEngine_DeviceFormat,
          &pvar);
  v21 = 0LL;
  if ( v20 >= 0 && pvar.vt == 65 && IsValidWfxBlob(&pvar) )
  {
    v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    if ( v9 >= 0 )
    {
      v9 = lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(v18, pvar.bstrblobVal.pData, 0LL);
      if ( v9 < 0 )
      {
        v19 = 0LL;
        goto LABEL_9;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v22 = (unsigned int)(3 * v6);
  v62[1] = v22;
  v10 = (char *)operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
  v63 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v64 = 16LL * i;
      v24 = (int)v76[v64 / 4];
      if ( (_DWORD)v24 )
      {
        memset_0(v10, 1, v22);
        v25 = v60;
        v26 = 0;
        if ( !(_DWORD)v6 )
          goto LABEL_35;
        v27 = (bool *)v10;
        v28 = v6;
        do
        {
          v29 = (unsigned int *)((char *)v25 + *v25);
          if ( *v27 )
          {
            v30 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 2);
            if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 2) )
              v30 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 3);
            if ( v30 )
              goto LABEL_32;
            v31 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 4);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 4) )
              v31 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 5);
            if ( v31 )
            {
LABEL_32:
              *v27 = 0;
            }
            else
            {
              v32 = i <= v25[16];
              *v27 = v32;
              if ( v32 )
                v26 = 1;
            }
          }
          ++v27;
          v25 = v29;
          --v28;
        }
        while ( v28 );
        if ( v26 )
        {
LABEL_35:
          LODWORD(v33) = 0;
          if ( (int)v24 > 0 )
          {
            v34 = &v10[v6];
            while ( 2 )
            {
              v58 = v33;
              pv = v72;
              do
              {
                memcpy_0(v34, v10, v6);
                v35 = *(_DWORD *)pv;
                v36 = v60;
                v37 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_53;
                v38 = &v10[v6];
                v39 = v6;
                do
                {
                  v40 = (unsigned int *)((char *)v36 + *v36);
                  if ( *v38 )
                  {
                    v41 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 2);
                    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 2) )
                      v41 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 3);
                    if ( v41 )
                      goto LABEL_50;
                    v42 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 4);
                    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 4) )
                      v42 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 5);
                    if ( v42 || v35 < v36[19] || v35 > v36[20] )
                    {
LABEL_50:
                      *v38 = 0;
                    }
                    else
                    {
                      *v38 = 1;
                      v37 = 1;
                    }
                  }
                  ++v38;
                  v36 = v40;
                  --v39;
                }
                while ( v39 );
                v43 = v58;
                LODWORD(v33) = 0;
                if ( v37 )
                {
LABEL_53:
                  v59 = 0;
                  v44 = &v10[(unsigned int)(2 * v6)];
                  v62[0] = v44;
                  v45 = (int *)v73 + 1;
                  while ( 1 )
                  {
                    memcpy_0(v44, &v10[v6], v6);
                    v46 = *(v45 - 1);
                    v47 = v60;
                    LODWORD(v33) = 0;
                    v48 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_83;
                    v49 = (_BYTE *)v62[0];
                    v50 = v6;
                    do
                    {
                      v51 = (unsigned int *)((char *)v47 + *v47);
                      if ( *v49 != (_BYTE)v33 )
                      {
                        v52 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 2);
                        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 2) )
                          v52 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 3);
                        if ( v52 )
                          goto LABEL_66;
                        v33 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 4);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 4) )
                          v33 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 5);
                        if ( v33 || v46 < v47[17] || v46 > v47[18] )
                        {
LABEL_66:
                          LODWORD(v33) = 0;
                          *v49 = 0;
                        }
                        else
                        {
                          *v49 = 1;
                          v48 = 1;
                        }
                      }
                      ++v49;
                      v47 = v51;
                      --v50;
                    }
                    while ( v50 );
                    if ( v48 )
                    {
LABEL_83:
                      v53 = *(_DWORD *)(*(__int64 *)((char *)&v77 + v64) + 4 * v21);
                      v54 = *v45;
                      if ( !v53 && i <= 2 )
                        v53 = 4 - (i != 1);
                      v69.m256i_i16[1] = v46;
                      v69.m256i_i32[1] = v53;
                      *(GUID *)&v69.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v68[0]) = -2;
                      HIWORD(v68[1]) = v54;
                      v69.m256i_i16[0] = 22;
                      WORD1(v68[0]) = i;
                      HIDWORD(v68[0]) = *(_DWORD *)pv;
                      WORD2(v68[1]) = i * ((unsigned __int16)v54 >> 3);
                      LODWORD(v68[1]) = HIDWORD(v68[0]) * WORD2(v68[1]);
                      v9 = lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(v57, v68, 0LL);
                      LODWORD(v33) = 0;
                      if ( v9 < 0 )
                        goto LABEL_80;
                    }
                    ++v59;
                    v45 += 2;
                    v44 = (char *)v62[0];
                    if ( v59 >= 5 )
                    {
                      v43 = v58;
                      break;
                    }
                  }
                }
                v58 = v43 + 1;
                pv = (char *)pv + 4;
                v34 = &v10[v6];
              }
              while ( (unsigned int)(v43 + 1) < 0xE );
              ++v21;
              v34 = &v10[v6];
              if ( v21 < v24 )
                continue;
              break;
            }
            v22 = v62[1];
          }
          v21 = 0LL;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_80:
  PropVariantClear((PROPVARIANT *)&pvar);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
