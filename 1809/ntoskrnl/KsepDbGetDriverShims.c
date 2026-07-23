/*
 * XREFs of KsepDbGetDriverShims @ 0x14067EA64
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     SdbGetDatabaseMatchEx @ 0x14067DB20 (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14067E00C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x14067EC3C (KsepDbFreeDriverShims.c)
 *     KseShimDatabaseOpen @ 0x14067EC78 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x140848A34 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1408E8E8C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v6; // r14
  _DWORD *Paged; // rsi
  _DWORD *v9; // r12
  int SdbString; // ebx
  __int64 v11; // r9
  unsigned int DatabaseMatch; // eax
  __int64 v14; // rdi
  unsigned int NextTag; // eax
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned int FirstTag; // r15d
  __int128 v19; // xmm6
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // eax
  char *v25; // r14
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v32[16]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v34; // [rsp+C8h] [rbp+48h]

  v34 = a4;
  v6 = a3;
  v31 = 0uLL;
  v30 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v9 = a5;
  *a4 = 0LL;
  *v9 = 0;
  SdbString = KseShimDatabaseOpen(&v30);
  if ( SdbString >= 0 )
  {
    DatabaseMatch = SdbGetDatabaseMatchEx(
                      v30,
                      0,
                      *(const wchar_t **)(a1 + 8),
                      v11,
                      a2,
                      v6,
                      (__int64)&KsepMatchMachineInfo);
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v30, DatabaseMatch, &v29, &v33)
      && (v14 = v29, (NextTag = SdbFindFirstTag(v29, v33, 28710)) != 0) )
    {
      LODWORD(v16) = 0;
      do
      {
        NextTag = SdbFindNextTag(v14, v33, NextTag);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( NextTag );
      *v9 = v16;
      Paged = KsepPoolAllocatePaged(80 * v16);
      if ( Paged )
      {
        v17 = 0LL;
        FirstTag = SdbFindFirstTag(v14, v33, 28710);
        LODWORD(v29) = 0;
        if ( FirstTag )
        {
          v19 = v31;
          do
          {
            if ( (unsigned int)v17 < *v9 )
            {
              v20 = SdbFindFirstTag(v14, FirstTag, 36880);
              v21 = (unsigned int)v17;
              v22 = 20 * v17;
              if ( v20 )
              {
                v31 = v19;
                *(_OWORD *)&Paged[v22] = *(_OWORD *)SdbReadGUIDTag(v32, v14, v20, &v31);
              }
              v23 = SdbFindFirstTag(v14, FirstTag, 24577);
              if ( v23 )
              {
                v22 = 20 * v17;
                SdbString = KsepDbGetSdbString(v14, v23, &Paged[20 * v17 + 4]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v24 = SdbFindFirstTag(v14, FirstTag, 24579);
              v25 = (char *)&Paged[v22];
              if ( v24 )
              {
                SdbString = KsepDbGetSdbString(v14, v24, v25 + 32);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v26 = SdbFindFirstTag(v14, FirstTag, 16407);
              if ( v26 )
              {
                v25 = (char *)&Paged[20 * v21];
                *((_DWORD *)v25 + 16) = SdbReadDWORDTag(v14, v26, 0);
              }
              v27 = SdbFindFirstTag(v14, FirstTag, 24584);
              if ( v27 )
              {
                SdbString = KsepDbGetSdbString(v14, v27, v25 + 48);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              LODWORD(v17) = v29;
              v28 = 5 * v21;
              v9 = a5;
              Paged[4 * v28 + 17] = 1;
            }
            v17 = (unsigned int)(v17 + 1);
            FirstTag = SdbFindNextTag(v14, v33, FirstTag);
            LODWORD(v29) = v17;
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *v34 = Paged;
        goto LABEL_7;
      }
      SdbString = -1073741801;
    }
    else
    {
      SdbString = -1073741275;
    }
  }
LABEL_6:
  KsepDbFreeDriverShims(Paged, *a5);
LABEL_7:
  if ( v30 )
    KseShimDatabaseClose(v30);
  return (unsigned int)SdbString;
}
