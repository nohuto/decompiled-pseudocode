/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x180101D60
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004F730 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x180101AE0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180101B10 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  unsigned int v8; // r14d
  _RTL_SRWLOCK *v9; // r13
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // edi
  char *v14; // r8
  char v15; // cl
  unsigned __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r13
  _QWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v25; // [rsp+20h] [rbp-30h]
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF
  __int128 v27; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h]

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
  v13 = 0;
  v14 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v12);
  if ( v14 )
  {
    if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
    {
      v15 = -1;
      do
      {
        ++v15;
        LODWORD(v12) = (unsigned int)v12 >> 1;
      }
      while ( (_DWORD)v12 );
      v12 = (unsigned int)(1 << v15);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v16 = (unsigned int)v12;
    if ( v14 > &v14[8 * v12] )
      v16 = 0LL;
    if ( v16 )
    {
      memset64(v14, v10 | 1, v16);
      v13 = 0;
    }
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v18 + 8LL * v13);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v18 + 8LL * v13) = *v19;
          v28 = v17 & v19[1];
          v20 = (37
               * (BYTE6(v28)
                + 37
                * (BYTE5(v28)
                 + 37
                 * (BYTE4(v28)
                  + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
               + HIBYTE(v28)) & (unsigned int)(v12 - 1);
          *v19 = *(_QWORD *)&v14[8 * v20];
          *(_QWORD *)&v14[8 * v20] = v19;
        }
        ++v13;
      }
      while ( v13 < *(_DWORD *)(a1 + 20) >> 5 );
      v9 = (_RTL_SRWLOCK *)(a1 + 8);
    }
    v21 = *(_QWORD *)(a1 + 24);
    v11 = (32 * v12) | *(_DWORD *)(a1 + 20) & 0x1F;
    *(_QWORD *)(a1 + 24) = v14;
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
    v25 = v7[1] & (-1LL << (v11 & 0x1F));
    v22 = *(_QWORD *)(a1 + 24);
    v23 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & ((v11 >> 5) - 1);
    *v7 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v7;
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
