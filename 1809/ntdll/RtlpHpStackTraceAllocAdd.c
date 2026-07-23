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
  _QWORD *v7; // r14
  unsigned int v8; // ebp
  _RTL_SRWLOCK *v9; // r13
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rbx
  char *v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // r13
  _QWORD *v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF

  v26 = RtlpHpEnvHandle;
  v6 = RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, &v26);
  v7 = v6;
  if ( !v6 )
    return 0;
  v9 = (_RTL_SRWLOCK *)(a1 + 8);
  v6[1] = a2;
  v6[2] = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  v10 = a1 + 16;
  v8 = 1;
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = 2 * (v11 >> 5);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v12 )
    goto LABEL_25;
  if ( (unsigned int)v12 < 4 )
    v12 = 4LL;
  v13 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v12);
  if ( v13 )
  {
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      v14 = -1;
      do
      {
        ++v14;
        LODWORD(v12) = (unsigned int)v12 >> 1;
      }
      while ( (_DWORD)v12 );
      v12 = (unsigned int)(1 << v14);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v15 = (unsigned int)v12;
    if ( v13 > &v13[8 * v12] )
      v15 = 0LL;
    if ( v15 )
      memset64(v13, v10 | 1, v15);
    v16 = 0;
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v16);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v16) = *v19;
          v20 = ((((unsigned __int64)v17 & v19[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v17 & v19[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v17 & v19[1]) >> 32)
                  + 37
                  * ((((unsigned int)v17 & (_DWORD)v19[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v17 & (_DWORD)v19[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v17 & v19[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v17 & v19[1]) >> 8)))))))) & (unsigned int)(v12 - 1);
          *v19 = *(_QWORD *)&v13[8 * v20];
          *(_QWORD *)&v13[8 * v20] = v19;
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 20) >> 5 );
      v9 = (_RTL_SRWLOCK *)(a1 + 8);
    }
    v21 = *(_QWORD *)(a1 + 24);
    v11 = (32 * v12) | *(_DWORD *)(a1 + 20) & 0x1F;
    *(_QWORD *)(a1 + 24) = v13;
    *(_DWORD *)(a1 + 20) = v11;
    if ( v21 )
    {
      RtlpHpStackDbFreeRoutine(v21);
      v11 = *(_DWORD *)(a1 + 20);
    }
    goto LABEL_25;
  }
  v11 = *(_DWORD *)(a1 + 20);
  if ( v11 >= 0x20 )
  {
LABEL_25:
    v22 = v7[1] & (-1LL << (v11 & 0x1F));
    v23 = *(_QWORD *)(a1 + 24);
    v24 = (HIBYTE(v22)
         + 37
         * (BYTE6(v22)
          + 37
          * (BYTE5(v22)
           + 37
           * (BYTE4(v22)
            + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (37 * ((unsigned __int8)v22 + 11623883) + BYTE1(v22)))))))) & ((v11 >> 5) - 1);
    *v7 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v7;
    ++*(_DWORD *)v10;
    v7 = 0LL;
    goto LABEL_26;
  }
  v8 = 0;
LABEL_26:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive(v9);
  if ( v7 )
  {
    v27 = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v7, &v27);
  }
  return v8;
}
