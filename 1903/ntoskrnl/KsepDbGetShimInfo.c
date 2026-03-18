/*
 * XREFs of KsepDbGetShimInfo @ 0x140882C88
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140154098 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1401540C0 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KseShimDatabaseClose @ 0x14070AA14 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x14070AAFC (KsepDbFreeDriverShims.c)
 *     SdbReadDWORDTag @ 0x14070BD7C (SdbReadDWORDTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14070BDEC (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x14070CD24 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x14074B4D0 (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x140784560 (SdbTagIDToTagRef.c)
 *     KsepDbGetSdbString @ 0x140882C54 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140924344 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __m128i *v3; // rsi
  __int64 v4; // r15
  int SdbString; // r14d
  __int64 v6; // r13
  __m128i *Paged; // rax
  __int128 v8; // xmm6
  __m128i *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // rdi
  unsigned int FirstStringIndexedTag; // eax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rbx
  unsigned int v18; // edi
  unsigned int FirstTag; // eax
  __m128i *v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r8
  char *v26; // r9
  __int128 v27; // xmm0
  unsigned int v29; // [rsp+38h] [rbp-89h]
  int v30; // [rsp+3Ch] [rbp-85h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  __int64 v34; // [rsp+58h] [rbp-69h]
  __int64 v35; // [rsp+60h] [rbp-61h]
  __int128 v36; // [rsp+68h] [rbp-59h] BYREF
  char v37[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v38[12]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-9h]

  v31 = 0LL;
  v33 = 0LL;
  v2 = a1;
  v35 = a1;
  v3 = 0LL;
  v39 = 0uLL;
  v4 = a2;
  SdbString = KseShimDatabaseOpen(&v31);
  if ( SdbString >= 0 )
  {
    v6 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v29 = 0;
    v3 = Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v4 )
    {
      v8 = v39;
      v9 = Paged + 4;
      v10 = v2 - (_QWORD)Paged;
      v34 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v11 = *(_QWORD *)((char *)&v9[-2] + v10 - 8);
        v30 = 0;
        v12 = (void *)v31[1];
        memset(v38, 0, 0x28uLL);
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v12, 28709LL, 24577, v11, v38);
        v14 = (__int64)v31;
        v15 = SdbTagIDToTagRef((__int64)v31, (__int64)v12, FirstStringIndexedTag, &v30);
        v16 = v15 != 0 ? v30 : 0;
        if ( !v16 )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v14, v16, &v33, (int *)&v32) )
        {
          v17 = v33;
          v18 = v32;
          FirstTag = SdbFindFirstTag(v33, v32, 36880);
          if ( !FirstTag )
            break;
          v36 = v8;
          v20 = (__m128i *)SdbReadGUIDTag(v37, v17, FirstTag, &v36);
          v21 = *v20;
          v22 = v20->m128i_i64[0] - v39;
          if ( !v22 )
            v22 = _mm_srli_si128(v21, 8).m128i_u64[0] - v39;
          if ( !v22 )
            break;
          v9[-4] = v21;
          v23 = SdbFindFirstTag(v17, v18, 24579);
          if ( !v23 )
            break;
          SdbString = KsepDbGetSdbString(v17, v23, (__int64)v3[5 * v29 + 2].m128i_i64);
          if ( SdbString < 0 )
            break;
          v24 = SdbFindFirstTag(v17, v18, 16407);
          if ( !v24 )
            break;
          v9->m128i_i32[0] = SdbReadDWORDTag(v17, v24, 0);
        }
        v9 += 5;
        ++v29;
        v10 = v34;
        if ( v29 >= (unsigned int)v4 )
        {
          v2 = v35;
          goto LABEL_16;
        }
      }
    }
    else
    {
LABEL_16:
      SdbString = 0;
      if ( (_DWORD)v4 )
      {
        v25 = (_DWORD *)(v2 + 64);
        v26 = &v3->m128i_i8[-v2];
        do
        {
          *v25 = *(_DWORD *)((char *)v25 + (_QWORD)v26);
          v27 = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 32);
          v25 += 20;
          *((_OWORD *)v25 - 7) = v27;
          *((_OWORD *)v25 - 9) = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 144);
          --v6;
        }
        while ( v6 );
      }
    }
  }
  if ( v31 )
    KseShimDatabaseClose(v31);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v3);
  else
    KsepDbFreeDriverShims(v3, v4);
  return (unsigned int)SdbString;
}
