/*
 * XREFs of ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b7c549a2c203d1___ @ 0x1C0104734 (KRegKey--QueryValueMultisz__lambda_29d8629352f6f89c7b5645c91a914417___lambda_b682bc781c4d660a15b.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0105A20 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0105E28 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C0106288 (ndisLoadNamedFilterAltitudes.c)
 *     ndisReplaceBindTokens @ 0x1C0106888 (ndisReplaceBindTokens.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01293F4 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C00CC124 (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 *     ?AtomCompare@?$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x1C0104DC8 (-AtomCompare@-$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?FreeBuckets@?$KHashTableBase@$00@Rtl@@CAXPEAX0@Z @ 0x1C0104DF4 (-FreeBuckets@-$KHashTableBase@$00@Rtl@@CAXPEAX0@Z.c)
 *     ?Hash@?$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z @ 0x1C010522C (-Hash@-$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z.c)
 */

char *__fastcall Rtl::KStringAtomTableBase<1>::GetAtom(__int64 a1, _WORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned __int64 v8; // rdi
  size_t v9; // rbx
  char *result; // rax
  unsigned int v11; // r8d
  char v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  char *Buckets; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // r15
  _QWORD *v22; // r10
  unsigned __int64 v23; // rcx
  void *v24; // rcx
  int v25; // edi
  __int64 v26; // [rsp+70h] [rbp+8h]

  v2 = (__int64)P;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v5 = Rtl::KStringAtomTableBase<1>::Hash(a2, v3);
  v26 = v5;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v2 + 4);
    v8 = v5 & (-1LL << (*(_BYTE *)(v2 + 4) & 0x1F));
    if ( v6 )
      goto LABEL_7;
    if ( v7 < 0x20 )
      break;
    v6 = *(_QWORD *)(v2 + 8)
       + 8
       * ((HIBYTE(v8)
         + 37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))) & ((v7 >> 5) - 1));
LABEL_7:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v8 == ((-1LL << (*(_BYTE *)(v2 + 4) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
        goto LABEL_11;
    }
    v6 = 0LL;
LABEL_11:
    if ( !v6 )
      goto LABEL_16;
    if ( Rtl::KStringAtomTableBase<1>::AtomCompare(v6, (__int64)a2) )
      goto LABEL_15;
    v5 = v26;
  }
  v6 = 0LL;
LABEL_15:
  if ( v6 )
    return (char *)v6;
LABEL_16:
  v9 = 2 * v3 + 2;
  result = (char *)ExAllocatePoolWithTag(PagedPool, v9 + 16, 0x6D74414Bu);
  v6 = (__int64)result;
  if ( !result )
    return result;
  memmove(result + 16, a2, v9);
  *(_QWORD *)(v6 + 8) = v26;
  v11 = *(_DWORD *)(v2 + 4);
  v12 = v11 & 0x1F;
  v13 = *(_QWORD *)(v2 + 8);
  v14 = (((v26 & (unsigned __int64)(-1LL << (v11 & 0x1F))) >> 56)
       + 37
       * ((unsigned __int8)((v26 & (unsigned __int64)(-1LL << (v11 & 0x1F))) >> 48)
        + 37
        * ((unsigned __int8)((unsigned __int16)((v26 & (unsigned __int64)(-1LL << (v11 & 0x1F))) >> 32) >> 8)
         + 37
         * ((unsigned __int8)((v26 & (unsigned __int64)(-1LL << v12)) >> 32)
          + 37
          * ((((unsigned int)v26 & (-1 << v12)) >> 24)
           + 37
           * ((unsigned __int8)(((unsigned int)v26 & (-1 << v12)) >> 16)
            + 37
            * (37 * ((unsigned __int8)(v26 & (-1 << v12)) + 11623883)
             + (unsigned __int8)((unsigned __int16)(v26 & (-1 << v12)) >> 8)))))))) & ((v11 >> 5) - 1);
  *(_QWORD *)v6 = *(_QWORD *)(v13 + 8 * v14);
  *(_QWORD *)(v13 + 8 * v14) = v6;
  ++*(_DWORD *)v2;
  v15 = (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5));
  if ( *(_DWORD *)v2 >= (unsigned int)v15 )
  {
    if ( (unsigned int)v15 < 4 )
      v15 = 4LL;
    Buckets = (char *)Rtl::KHashTableBase<1>::AllocateBuckets(8LL * (unsigned int)v15, v2);
    if ( Buckets )
    {
      if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
      {
        v17 = -1;
        do
        {
          ++v17;
          LODWORD(v15) = (unsigned int)v15 >> 1;
        }
        while ( (_DWORD)v15 );
        v15 = (unsigned int)(1 << v17);
      }
      if ( (unsigned int)v15 > 0x4000000 )
        v15 = 0x4000000LL;
      v18 = (unsigned int)v15;
      if ( Buckets > &Buckets[8 * v15] )
        v18 = 0LL;
      if ( v18 )
        memset64(Buckets, v2 | 1, v18);
      v19 = 0;
      v20 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v23 = ((((unsigned __int64)v20 & v22[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v20 & v22[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v20 & v22[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v20 & v22[1]) >> 32)
                    + 37
                    * ((((unsigned int)v20 & (_DWORD)v22[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v20 & (_DWORD)v22[1]) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v20 & v22[1]) >> 8)
                       + 37 * ((unsigned __int8)(v20 & v22[1]) + 11623883)))))))) & (unsigned int)(v15 - 1);
            *v22 = *(_QWORD *)&Buckets[8 * v23];
            *(_QWORD *)&Buckets[8 * v23] = v22;
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      v24 = *(void **)(v2 + 8);
      v25 = (32 * v15) | *(_DWORD *)(v2 + 4) & 0x1F;
      *(_QWORD *)(v2 + 8) = Buckets;
      *(_DWORD *)(v2 + 4) = v25;
      if ( v24 )
        Rtl::KHashTableBase<1>::FreeBuckets(v24, v2);
    }
  }
  return (char *)v6;
}
