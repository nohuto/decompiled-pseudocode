/*
 * XREFs of RtlpHpHeapAllocate @ 0x1401411D0
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140009E90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  size_t v4; // r14
  int v5; // edi
  __int128 v6; // xmm0
  __int16 v7; // r15
  __int128 v8; // xmm1
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r10d
  size_t v15; // r11
  volatile signed __int64 *v16; // rax
  volatile signed __int64 *v17; // rbx
  int v18; // ebx
  __int16 v19; // ax
  size_t v21[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h] BYREF
  __int128 v25; // [rsp+70h] [rbp+7h] BYREF
  __int128 v26; // [rsp+80h] [rbp+17h] BYREF
  __int128 v27; // [rsp+90h] [rbp+27h] BYREF
  volatile signed __int64 *v28; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 4096LL;
  v28 = 0LL;
  v5 = 0;
  v21[0] = 4096LL;
  v6 = *a3;
  v7 = 1;
  v8 = *a3;
  v9 = 64LL;
  v10 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v23 = *a3;
  if ( a2 <= 0x40 )
    v9 = a2;
  v22 = v6;
  v11 = v10 + 9 * (v9 + 15) - (((_BYTE)v9 - 1) & 7);
  v12 = v11
      + (unsigned int)v9 * (v10 + 64)
      - (((_BYTE)v11 - 1) & 0x3F)
      + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6);
  v29 = 129 * v12 + 10175 - ((129 * (_WORD)v12 + 10174) & 0xFFF) + 4095;
  v13 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v23);
  if ( !v13 || (v14 & 0x40000000) != 0 || BYTE2(v22) || v15 >= *(unsigned int *)(v13 + 464) )
  {
    v5 = BYTE1(v22) < 2u ? 0x1000000 : 0;
    v25 = v8;
    v18 = (v14 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)RtlpHpAllocVA((void **)&v28, &v29, 0LL, v5 | 0x2000u, v18, &v25) < 0
      || (v26 = *a3, (int)RtlpHpAllocVA((void **)&v28, v21, 0LL, v5 | 0x1000u, v18, &v26) < 0) )
    {
      v17 = 0LL;
      goto LABEL_14;
    }
    v17 = v28;
    v7 = 0;
    v4 = v21[0];
    v28 = 0LL;
  }
  else
  {
    v22 = v8;
    v16 = (volatile signed __int64 *)RtlpHpMetadataAlloc(v15, 0x1000uLL, 1, &v22);
    v17 = v16;
    if ( !v16 )
      goto LABEL_14;
    v24 = *a3;
    RtlpHpMetadataCommit((_DWORD)v16, (_DWORD)v16 + 4096, v29 - 4096, (unsigned int)&v24, 0);
  }
  memset((void *)v17, 0, 0x800uLL);
  *((_QWORD *)v17 + 29) = v17 + 256;
  *((_QWORD *)v17 + 30) = (char *)v17 + v4;
  v19 = *((_WORD *)v17 + 15);
  *((_QWORD *)v17 + 31) = (char *)v17 + v29;
  *((_WORD *)v17 + 15) = v7 | v19 & 0xFFFE;
  _InterlockedExchangeAdd64(v17 + 16, v29 >> 12);
  _InterlockedExchangeAdd64(v17 + 17, v21[0] >> 12);
LABEL_14:
  if ( v28 )
  {
    v27 = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v28, &v29, v5 | 0x8000u, &v27);
  }
  return v17;
}
