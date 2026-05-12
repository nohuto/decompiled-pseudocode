/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C004E86C
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000E1FC (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RtlStringCchPrintfW @ 0x1C001E000 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

char __fastcall StorpLogPhysicalTopologyInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r12
  unsigned int v6; // esi
  int v7; // r14d
  const struct _TlgProvider_t *v8; // rcx
  unsigned int v9; // r9d
  _DWORD *v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  unsigned __int64 v16; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r15d
  unsigned int v19; // edx
  unsigned int *v20; // rdi
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r14d
  char *v24; // rcx
  __int128 v25; // xmm1
  _DWORD *v26; // rcx
  TraceLoggingHProvider v27; // rcx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  const struct _TlgProvider_t *v32; // rcx
  unsigned int v33; // esi
  __int64 v34; // r9
  __int128 v35; // xmm1
  __int64 v36; // r9
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  char *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  const unsigned __int16 **v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  unsigned int *p_ProviderMetadataPtr; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  struct _TlgProvider_t *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 *p_KeywordAny; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  char *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  unsigned __int64 *p_KeywordAll; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  CHAR psz[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v62; // [rsp+138h] [rbp+38h]
  CHAR v63[16]; // [rsp+140h] [rbp+40h] BYREF
  char v64; // [rsp+150h] [rbp+50h]
  CHAR v65[56]; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  *(_QWORD *)psz = 0LL;
  v62 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", v62);
  v8 = (const struct _TlgProvider_t *)*(unsigned int *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 8);
  if ( v3 >= 40 * (__int64)v8 + 16 && (_DWORD)v8 )
  {
    v10 = (_DWORD *)(a2 + 32);
    do
    {
      v6 += *(v10 - 3);
      v7 += *v10;
      v10 += 10;
      v8 = (const struct _TlgProvider_t *)((char *)v8 - 1);
    }
    while ( v8 );
    v9 = *(_DWORD *)(a2 + 8);
  }
  v11 = v9;
  if ( (unsigned int)dword_1C0061058 > 5 && TlgKeywordOn(v8, 0x400000000000uLL) )
  {
    v41 = a1 + 5256;
    hProvider.LevelPlus1 = v12;
    *(&hProvider.LevelPlus1 + 1) = v6;
    LODWORD(hProvider.ProviderMetadataPtr) = v7;
    v42 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v46 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
    p_ProviderMetadataPtr = (unsigned int *)&hProvider.ProviderMetadataPtr;
    p_hProvider = (char *)&hProvider;
    v45 = v13;
    v47 = v13;
    v49 = v13;
    TlgWrite(&hProvider, &unk_1C0058484, v14, v15, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    v11 = *(_DWORD *)(a2 + 8);
  }
  LOBYTE(v16) = v11;
  if ( v3 >= 40 * (unsigned __int64)v11 + 16 )
  {
    *(_QWORD *)psz = 0LL;
    LOBYTE(v62) = 0;
    memset(v65, 0, 0x29uLL);
    LOBYTE(v16) = 0;
    v17 = 0;
    memset(v63, 0, sizeof(v63));
    v18 = 0;
    v64 = 0;
    if ( v11 )
    {
      do
      {
        LOBYTE(v16) = v18;
        v19 = *(_DWORD *)(a2 + 40LL * v18 + 20);
        v20 = (unsigned int *)(a2 + 16 + 40LL * v18);
        v21 = v19;
        if ( v19 )
        {
          v22 = *(_DWORD *)(a2 + 40LL * v18 + 28);
          if ( v22 >= 0x28 )
          {
            v16 = *(unsigned int *)(a2 + 40LL * v18 + 24);
            if ( v16 >= (unsigned __int64)v19 << 7 )
            {
              LODWORD(v16) = v22 + 40 * v18 + 16 + (v19 << 7);
              if ( (unsigned int)v16 <= (unsigned int)v3 )
              {
                v23 = v17;
                do
                {
                  v24 = (char *)v20 + *(unsigned int *)(a2 + 40LL * v18 + 28);
                  v16 = *((_QWORD *)v24 + 2);
                  *(_QWORD *)psz = v16;
                  LOBYTE(v62) = v17;
                  *(_OWORD *)v65 = *(_OWORD *)(v24 + 24);
                  *(_OWORD *)&v65[16] = *(_OWORD *)(v24 + 40);
                  *(_QWORD *)&v65[32] = *((_QWORD *)v24 + 7);
                  v65[40] = v17;
                  v25 = *((_OWORD *)v24 + 4);
                  v64 = v17;
                  *(_OWORD *)v63 = v25;
                  if ( (unsigned int)dword_1C0061058 > 5 )
                  {
                    LOBYTE(v16) = TlgKeywordOn((TraceLoggingHProvider)v24, 0x400000000000uLL);
                    if ( (_BYTE)v16 )
                    {
                      LODWORD(hProvider.ProviderMetadataPtr) = *v26;
                      *(&hProvider.LevelPlus1 + 1) = v26[1];
                      hProvider.LevelPlus1 = v26[2];
                      HIDWORD(hProvider.ProviderMetadataPtr) = v26[3];
                      v41 = a1 + 5256;
                      v42 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v45 = 4LL;
                      v46 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
                      p_hProvider = (char *)&hProvider.ProviderMetadataPtr;
                      p_ProviderMetadataPtr = (unsigned int *)&hProvider;
                      v47 = 4LL;
                      v50 = (struct _TlgProvider_t *)((char *)&hProvider.ProviderMetadataPtr + 4);
                      v49 = 4LL;
                      v51 = 4LL;
                      TlgCreateSz(&v52, psz);
                      TlgCreateSz(&v53, v65);
                      TlgCreateSz(&v54, v63);
                      LOBYTE(v16) = TlgWrite(
                                      v27,
                                      &unk_1C00594E9,
                                      v28,
                                      v29,
                                      0xBu,
                                      (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                      v17 = 0;
                    }
                  }
                  v21 = *(_DWORD *)(a2 + 40LL * v18 + 20);
                  ++v23;
                }
                while ( v23 < v21 );
              }
            }
          }
        }
        v30 = v20[4];
        if ( (_DWORD)v30 )
        {
          v31 = v20[6];
          if ( (unsigned int)v31 >= 0x28 )
          {
            v16 = v20[3];
            if ( v31 >= v16 + ((unsigned __int64)v21 << 7) )
            {
              v16 = v20[5];
              v32 = (const struct _TlgProvider_t *)(136 * v30);
              if ( v16 >= 136 * v30 )
              {
                LODWORD(v16) = 40 * v18 + 16 + v31 + 136 * v30;
                if ( (unsigned int)v16 <= (unsigned int)v3 )
                {
                  v33 = v17;
                  do
                  {
                    v34 = (__int64)&v20[34 * v33] + v20[6];
                    v16 = *(_QWORD *)(v34 + 24);
                    *(_QWORD *)psz = v16;
                    LOBYTE(v62) = v17;
                    *(_OWORD *)v65 = *(_OWORD *)(v34 + 32);
                    *(_OWORD *)&v65[16] = *(_OWORD *)(v34 + 48);
                    *(_QWORD *)&v65[32] = *(_QWORD *)(v34 + 64);
                    v65[40] = v17;
                    v35 = *(_OWORD *)(v34 + 72);
                    v64 = v17;
                    *(_OWORD *)v63 = v35;
                    if ( (unsigned int)dword_1C0061058 > 5 )
                    {
                      LOBYTE(v16) = TlgKeywordOn(v32, 0x400000000000uLL);
                      if ( (_BYTE)v16 )
                      {
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)v36;
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v36 + 8);
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v36 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v36 + 16);
                        LODWORD(hProvider.KeywordAny) = *(_DWORD *)(v36 + 4);
                        HIDWORD(hProvider.KeywordAny) = *(_DWORD *)(v36 + 20);
                        hProvider.KeywordAll = *(_QWORD *)(v36 + 88);
                        v41 = a1 + 5256;
                        v42 = 16LL;
                        TlgCreateWsz(&pDesc, pszDest);
                        v45 = 4LL;
                        v46 = &hProvider.ProviderMetadataPtr;
                        p_hProvider = (char *)&hProvider.ProviderMetadataPtr + 4;
                        p_ProviderMetadataPtr = &hProvider.LevelPlus1 + 1;
                        v47 = 4LL;
                        v50 = &hProvider;
                        v49 = 4LL;
                        v51 = 4LL;
                        TlgCreateSz(&v52, psz);
                        TlgCreateSz(&v53, v65);
                        TlgCreateSz(&v54, v63);
                        v56 = 4LL;
                        v57 = (char *)&hProvider.KeywordAny + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        p_KeywordAll = &hProvider.KeywordAll;
                        v58 = 4LL;
                        v60 = 8LL;
                        LOBYTE(v16) = TlgWrite(
                                        (TraceLoggingHProvider)&hProvider.KeywordAny,
                                        &unk_1C005820C,
                                        v37,
                                        v38,
                                        0xEu,
                                        (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                        v17 = 0;
                      }
                    }
                    ++v33;
                  }
                  while ( v33 < v20[4] );
                }
              }
            }
          }
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(a2 + 8) );
    }
  }
  return v16;
}
