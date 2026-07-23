/*
 * XREFs of KsepDbGetShimInfo @ 0x140848A68
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SdbFindFirstStringIndexedTag @ 0x14067DDCC (SdbFindFirstStringIndexedTag.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x14067EC3C (KsepDbFreeDriverShims.c)
 *     KseShimDatabaseOpen @ 0x14067EC78 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 *     SdbTagIDToTagRef @ 0x14075E884 (SdbTagIDToTagRef.c)
 *     KsepDbGetSdbString @ 0x140848A34 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1408E8E8C (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __m128i *v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  _QWORD *v6; // r13
  int SdbString; // esi
  __int64 v8; // r12
  __m128i *Paged; // rax
  __int128 v10; // xmm6
  __m128i *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r9
  void *v14; // rbx
  unsigned int FirstStringIndexedTag; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rbx
  unsigned int FirstTag; // eax
  __m128i *v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // eax
  _DWORD *v26; // r8
  char *v27; // r9
  __int128 v28; // xmm0
  unsigned int v30; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-75h]
  __int128 v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h]
  char v36[16]; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v37[10]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-9h]

  *(_QWORD *)&v32 = 0LL;
  v33 = 0LL;
  v2 = a1;
  v35 = a1;
  v3 = 0LL;
  v38 = 0uLL;
  v4 = a2;
  v5 = KseShimDatabaseOpen(&v32);
  v6 = (_QWORD *)v32;
  SdbString = v5;
  if ( v5 >= 0 )
  {
    v8 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v31 = 0;
    v3 = Paged;
    SdbString = -1073741275;
    if ( (_DWORD)v4 )
    {
      v10 = v38;
      v11 = Paged + 4;
      v12 = v2 - (_QWORD)Paged;
      v34 = v2 - (_QWORD)v3;
      while ( 1 )
      {
        v13 = *(_QWORD *)((char *)&v11[-2] + v12 - 8);
        v14 = (void *)v6[1];
        LODWORD(v32) = 0;
        FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, 28709LL, 24577, v13, v37);
        v16 = SdbTagIDToTagRef((__int64)v6, (__int64)v14, FirstStringIndexedTag, (int *)&v32);
        v17 = v16 != 0 ? v32 : 0;
        if ( !v17 )
          break;
        if ( (unsigned int)SdbTagRefToTagID((__int64)v6, v17, &v33, (int *)&v30) )
        {
          v18 = v33;
          FirstTag = SdbFindFirstTag(v33, v30, 36880);
          if ( !FirstTag )
            break;
          v32 = v10;
          v20 = (__m128i *)SdbReadGUIDTag(v36, v18, FirstTag, &v32);
          v21 = *v20;
          v22 = v20->m128i_i64[0] - v38;
          if ( !v22 )
            v22 = _mm_srli_si128(v21, 8).m128i_u64[0] - v38;
          if ( !v22 )
            break;
          v23 = v30;
          v11[-4] = v21;
          v24 = SdbFindFirstTag(v18, v23, 24579);
          if ( !v24 )
            break;
          SdbString = KsepDbGetSdbString(v18, v24, (__int64)v3[5 * v31 + 2].m128i_i64);
          if ( SdbString < 0 )
            break;
          v25 = SdbFindFirstTag(v18, v30, 16407);
          if ( !v25 )
            break;
          v11->m128i_i32[0] = SdbReadDWORDTag(v18, v25, 0);
        }
        v11 += 5;
        ++v31;
        v12 = v34;
        if ( v31 >= (unsigned int)v4 )
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
        v26 = (_DWORD *)(v2 + 64);
        v27 = &v3->m128i_i8[-v2];
        do
        {
          *v26 = *(_DWORD *)((char *)v26 + (_QWORD)v27);
          v28 = *(_OWORD *)((char *)v26 + (_QWORD)v27 - 32);
          v26 += 20;
          *((_OWORD *)v26 - 7) = v28;
          *((_OWORD *)v26 - 9) = *(_OWORD *)((char *)v26 + (_QWORD)v27 - 144);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  if ( v6 )
    KseShimDatabaseClose(v6);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v3);
  else
    KsepDbFreeDriverShims(v3, v4);
  return (unsigned int)SdbString;
}
