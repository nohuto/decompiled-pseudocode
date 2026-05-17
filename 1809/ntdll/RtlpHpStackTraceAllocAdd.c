/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1801045C0
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180104340 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180104370 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r14
  unsigned int v11; // ebp
  volatile signed __int64 *v12; // r13
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rbx
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // r13
  _QWORD *v22; // r11
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF

  v29 = RtlpHpEnvHandle;
  v6 = RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, &v29);
  v10 = v6;
  if ( !v6 )
    return 0;
  v12 = (volatile signed __int64 *)(a1 + 8);
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive(a1 + 8, v7, v8, v9);
  v13 = a1 + 16;
  v11 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v14 = *(_DWORD *)(a1 + 20);
  v15 = 2 * (v14 >> 5);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v15 )
    goto LABEL_25;
  if ( (unsigned int)v15 < 4 )
    v15 = 4LL;
  v16 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v15);
  if ( v16 )
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
    if ( v16 > &v16[8 * v15] )
      v18 = 0LL;
    if ( v18 )
      memset64(v16, v13 | 1, v18);
    v19 = 0;
    v20 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v21 = *(_QWORD *)(a1 + 24);
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
                    * (37 * ((unsigned __int8)(v20 & v22[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v20 & v22[1]) >> 8)))))))) & (unsigned int)(v15 - 1);
          *v22 = *(_QWORD *)&v16[8 * v23];
          *(_QWORD *)&v16[8 * v23] = v22;
        }
        ++v19;
      }
      while ( v19 < *(_DWORD *)(a1 + 20) >> 5 );
      v12 = (volatile signed __int64 *)(a1 + 8);
    }
    v24 = *(_QWORD *)(a1 + 24);
    v14 = (32 * v15) | *(_DWORD *)(a1 + 20) & 0x1F;
    *(_QWORD *)(a1 + 24) = v16;
    *(_DWORD *)(a1 + 20) = v14;
    if ( v24 )
    {
      RtlpHpStackDbFreeRoutine(v24);
      v14 = *(_DWORD *)(a1 + 20);
    }
    goto LABEL_25;
  }
  v14 = *(_DWORD *)(a1 + 20);
  if ( v14 >= 0x20 )
  {
LABEL_25:
    v25 = v10[1] & (-1LL << (v14 & 0x1F));
    v26 = *(_QWORD *)(a1 + 24);
    v27 = (HIBYTE(v25)
         + 37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (37 * ((unsigned __int8)v25 + 11623883) + BYTE1(v25)))))))) & ((v14 >> 5) - 1);
    *v10 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v10;
    ++*(_DWORD *)v13;
    v10 = 0LL;
    goto LABEL_26;
  }
  v11 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v12);
  if ( v10 )
  {
    v30 = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v10, &v30);
  }
  return v11;
}
