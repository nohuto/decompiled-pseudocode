/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x180064ED0
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x180010D10 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagContextGetTag @ 0x180106E98 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpTagContextFindFreeTag @ 0x180065094 (RtlpHpTagContextFindFreeTag.c)
 *     RtlpHpTagContextFindMapping @ 0x1800650DC (RtlpHpTagContextFindMapping.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  unsigned __int16 v12; // di
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  signed __int64 *v16; // roff
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF

  v20 = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, &v20);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v12 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v12 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v8 + 40) = FreeTag;
        *(_QWORD *)(qword_180163AB8 + 8LL * FreeTag - 8) = v8;
        v13 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_180163AAC & 0x1F));
        v14 = qword_180163AB0;
        v15 = (HIBYTE(v13)
             + 37
             * (BYTE6(v13)
              + 37
              * (BYTE5(v13)
               + 37
               * (BYTE4(v13)
                + 37
                * (((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_180163AAC & 0x1F))) >> 24)
                 + 37
                 * ((unsigned __int8)((*(_DWORD *)(v8 + 8) & (unsigned int)(-1 << (dword_180163AAC & 0x1F))) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v8 + 8) & (-1 << (dword_180163AAC & 0x1F))) >> 8)
                   + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (((unsigned int)dword_180163AAC >> 5) - 1);
        v16 = (signed __int64 *)(qword_180163AB0 + 8 * v15);
        _m_prefetchw(v16);
        v17 = *v16;
        do
        {
          *(_QWORD *)v8 = v17;
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v15), v8, v17);
        }
        while ( v18 != v17 );
        word_180163AC0 = v12;
        ++dword_180163AA8;
        v8 = 0LL;
        ++word_180163AC2;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
    {
      v21 = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v8, &v21);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
