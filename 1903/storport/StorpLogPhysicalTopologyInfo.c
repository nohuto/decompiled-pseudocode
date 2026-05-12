/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C0022198
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002E20 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E488 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0017EAC (RaidDriverGetName.c)
 *     RtlStringCchPrintfW @ 0x1C001B6D0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
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
  const GUID *v27; // r8
  const GUID *v28; // r9
  unsigned int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  const struct _TlgProvider_t *v35; // rcx
  unsigned int v36; // esi
  __int64 v37; // r9
  __int128 v38; // xmm1
  __int64 v39; // r9
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  char *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  const unsigned __int16 **v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  unsigned int *p_ProviderMetadataPtr; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  struct _TlgProvider_t *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 *p_KeywordAny; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  char *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  unsigned __int64 *p_KeywordAll; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  CHAR psz[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int128 v66; // [rsp+140h] [rbp+40h] BYREF
  char v67; // [rsp+150h] [rbp+50h]
  _OWORD v68[3]; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  *(_QWORD *)psz = 0LL;
  v65 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", v65);
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
    v44 = a1 + 5128;
    hProvider.LevelPlus1 = v12;
    *(&hProvider.LevelPlus1 + 1) = v6;
    LODWORD(hProvider.ProviderMetadataPtr) = v7;
    v45 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v49 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
    p_ProviderMetadataPtr = (unsigned int *)&hProvider.ProviderMetadataPtr;
    p_hProvider = (char *)&hProvider;
    v48 = v13;
    v50 = v13;
    v52 = v13;
    TlgWrite(&hProvider, &unk_1C0057238, v14, v15, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    v11 = *(_DWORD *)(a2 + 8);
  }
  LOBYTE(v16) = v11;
  if ( v3 >= 40 * (unsigned __int64)v11 + 16 )
  {
    *(_QWORD *)psz = 0LL;
    LOBYTE(v65) = 0;
    memset(v68, 0, 0x29uLL);
    LOBYTE(v16) = 0;
    v17 = 0;
    v66 = 0uLL;
    v18 = 0;
    v67 = 0;
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
            v16 = (unsigned __int64)v19 << 7;
            if ( *(unsigned int *)(a2 + 40LL * v18 + 24) >= v16 )
            {
              LODWORD(v16) = 40 * v18 + 16 + v22 + (v19 << 7);
              if ( (unsigned int)v16 <= (unsigned int)v3 )
              {
                v23 = v17;
                do
                {
                  v24 = (char *)v20 + *(unsigned int *)(a2 + 40LL * v18 + 28);
                  v16 = *((_QWORD *)v24 + 2);
                  *(_QWORD *)psz = v16;
                  LOBYTE(v65) = v17;
                  v68[0] = *(_OWORD *)(v24 + 24);
                  v68[1] = *(_OWORD *)(v24 + 40);
                  *(_QWORD *)&v68[2] = *((_QWORD *)v24 + 7);
                  BYTE8(v68[2]) = v17;
                  v25 = *((_OWORD *)v24 + 4);
                  v67 = v17;
                  v66 = v25;
                  if ( (unsigned int)dword_1C0061058 > 5 )
                  {
                    LOBYTE(v16) = TlgKeywordOn((TraceLoggingHProvider)v24, 0x400000000000uLL);
                    if ( (_BYTE)v16 )
                    {
                      LODWORD(hProvider.ProviderMetadataPtr) = *v26;
                      *(&hProvider.LevelPlus1 + 1) = v26[1];
                      hProvider.LevelPlus1 = v26[2];
                      HIDWORD(hProvider.ProviderMetadataPtr) = v26[3];
                      v44 = a1 + 5128;
                      v45 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v48 = 4LL;
                      v49 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
                      p_hProvider = (char *)&hProvider.ProviderMetadataPtr;
                      p_ProviderMetadataPtr = (unsigned int *)&hProvider;
                      v50 = 4LL;
                      v53 = (struct _TlgProvider_t *)((char *)&hProvider.ProviderMetadataPtr + 4);
                      v30 = -1LL;
                      v52 = 4LL;
                      v54 = 4LL;
                      do
                        ++v30;
                      while ( psz[v30] != (_BYTE)v29 );
                      v55.Reserved = v29;
                      v55.Ptr = (unsigned __int64)psz;
                      v55.Size = v30 + 1;
                      v31 = -1LL;
                      do
                        ++v31;
                      while ( *((_BYTE *)v68 + v31) != (_BYTE)v29 );
                      v56.Reserved = v29;
                      v56.Ptr = (unsigned __int64)v68;
                      v56.Size = v31 + 1;
                      v32 = -1LL;
                      do
                        ++v32;
                      while ( *((_BYTE *)&v66 + v32) != (_BYTE)v29 );
                      v57.Reserved = v29;
                      v57.Ptr = (unsigned __int64)&v66;
                      v57.Size = v32 + 1;
                      LOBYTE(v16) = TlgWrite(
                                      (TraceLoggingHProvider)&v66,
                                      &unk_1C00584AA,
                                      v27,
                                      v28,
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
        v33 = v20[4];
        if ( (_DWORD)v33 )
        {
          v34 = v20[6];
          if ( (unsigned int)v34 >= 0x28 )
          {
            v16 = v20[3];
            if ( v34 >= v16 + ((unsigned __int64)v21 << 7) )
            {
              v16 = v20[5];
              v35 = (const struct _TlgProvider_t *)(136 * v33);
              if ( v16 >= 136 * v33 )
              {
                LODWORD(v16) = 40 * v18 + 16 + v34 + 136 * v33;
                if ( (unsigned int)v16 <= (unsigned int)v3 )
                {
                  v36 = v17;
                  do
                  {
                    v37 = (__int64)&v20[34 * v36] + v20[6];
                    v16 = *(_QWORD *)(v37 + 24);
                    *(_QWORD *)psz = v16;
                    LOBYTE(v65) = v17;
                    v68[0] = *(_OWORD *)(v37 + 32);
                    v68[1] = *(_OWORD *)(v37 + 48);
                    *(_QWORD *)&v68[2] = *(_QWORD *)(v37 + 64);
                    BYTE8(v68[2]) = v17;
                    v38 = *(_OWORD *)(v37 + 72);
                    v67 = v17;
                    v66 = v38;
                    if ( (unsigned int)dword_1C0061058 > 5 )
                    {
                      LOBYTE(v16) = TlgKeywordOn(v35, 0x400000000000uLL);
                      if ( (_BYTE)v16 )
                      {
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)v39;
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v39 + 8);
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v39 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v39 + 16);
                        LODWORD(hProvider.KeywordAny) = *(_DWORD *)(v39 + 4);
                        HIDWORD(hProvider.KeywordAny) = *(_DWORD *)(v39 + 20);
                        hProvider.KeywordAll = *(_QWORD *)(v39 + 88);
                        v44 = a1 + 5128;
                        v45 = 16LL;
                        TlgCreateWsz(&pDesc, pszDest);
                        v48 = 4LL;
                        v49 = &hProvider.ProviderMetadataPtr;
                        p_hProvider = (char *)&hProvider.ProviderMetadataPtr + 4;
                        p_ProviderMetadataPtr = &hProvider.LevelPlus1 + 1;
                        v50 = 4LL;
                        v53 = &hProvider;
                        v52 = 4LL;
                        v54 = 4LL;
                        TlgCreateSz(&v55, psz);
                        TlgCreateSz(&v56, (LPCSTR)v68);
                        TlgCreateSz(&v57, (LPCSTR)&v66);
                        v59 = 4LL;
                        v60 = (char *)&hProvider.KeywordAny + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        p_KeywordAll = &hProvider.KeywordAll;
                        v61 = 4LL;
                        v63 = 8LL;
                        LOBYTE(v16) = TlgWrite(
                                        (TraceLoggingHProvider)&hProvider.KeywordAny,
                                        &unk_1C0056FC0,
                                        v40,
                                        v41,
                                        0xEu,
                                        (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                        v17 = 0;
                      }
                    }
                    ++v36;
                  }
                  while ( v36 < v20[4] );
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
