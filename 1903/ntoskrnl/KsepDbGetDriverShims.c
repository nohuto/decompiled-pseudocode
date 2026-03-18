/*
 * XREFs of KsepDbGetDriverShims @ 0x14070A930
 * Callers:
 *     KsepGetShimsForDriver @ 0x14070A848 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1401540C0 (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x14070AA14 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x14070AAFC (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x14070BB84 (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14070BFA8 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x14070CD24 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x14074B4D0 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x140882C54 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140924344 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  _OWORD *Paged; // rsi
  _DWORD *v7; // r13
  int SdbString; // ebx
  unsigned int DatabaseMatch; // eax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  unsigned int NextTag; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned int FirstTag; // r14d
  __int128 v17; // xmm6
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v29; // [rsp+C8h] [rbp+48h]

  v29 = a4;
  v26 = 0uLL;
  v25 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = a5;
  *a4 = 0LL;
  *v7 = 0;
  SdbString = KseShimDatabaseOpen(&v25);
  if ( SdbString >= 0 )
  {
    DatabaseMatch = SdbGetDatabaseMatchEx(v25, 0LL, *(_QWORD *)(a1 + 8));
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v25, DatabaseMatch, &v24, &v28)
      && (v11 = v24, v12 = v28, (NextTag = SdbFindFirstTag(v24, v28, 28710LL)) != 0) )
    {
      LODWORD(v14) = 0;
      do
      {
        NextTag = SdbFindNextTag(v11, v12, NextTag);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( NextTag );
      *v7 = v14;
      Paged = KsepPoolAllocatePaged(80 * v14);
      if ( Paged )
      {
        v15 = 0LL;
        FirstTag = SdbFindFirstTag(v11, v12, 28710LL);
        LODWORD(v24) = 0;
        if ( FirstTag )
        {
          v17 = v26;
          do
          {
            if ( (unsigned int)v15 < *v7 )
            {
              v18 = SdbFindFirstTag(v11, FirstTag, 36880LL);
              if ( v18 )
              {
                v26 = v17;
                Paged[5 * v15] = *(_OWORD *)SdbReadGUIDTag(v27, v11, v18, &v26);
              }
              v19 = SdbFindFirstTag(v11, FirstTag, 24577LL);
              v20 = 5 * v15;
              if ( v19 )
              {
                SdbString = KsepDbGetSdbString(v11, v19, &Paged[v20 + 1]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v21 = SdbFindFirstTag(v11, FirstTag, 24579LL);
              if ( v21 )
              {
                SdbString = KsepDbGetSdbString(v11, v21, &Paged[v20 + 2]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v22 = SdbFindFirstTag(v11, FirstTag, 16407LL);
              if ( v22 )
                LODWORD(Paged[v20 + 4]) = SdbReadDWORDTag(v11, v22, 0LL);
              v23 = SdbFindFirstTag(v11, FirstTag, 24584LL);
              if ( v23 )
              {
                SdbString = KsepDbGetSdbString(v11, v23, &Paged[v20 + 3]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              LODWORD(v15) = v24;
              DWORD1(Paged[v20 + 4]) = 1;
            }
            v15 = (unsigned int)(v15 + 1);
            FirstTag = SdbFindNextTag(v11, v28, FirstTag);
            LODWORD(v24) = v15;
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *v29 = Paged;
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
  KsepDbFreeDriverShims(Paged, (unsigned int)*v7);
LABEL_7:
  if ( v25 )
    KseShimDatabaseClose(v25);
  return (unsigned int)SdbString;
}
