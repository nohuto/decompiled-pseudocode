/*
 * XREFs of RtlpHpHeapAllocate @ 0x1800635C0
 * Callers:
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  ULONG_PTR v4; // rsi
  int v5; // edi
  __int16 v6; // r15
  __int128 v7; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // r10d
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  volatile signed __int64 *v16; // rbx
  ULONG v17; // ebx
  __int64 v18; // rcx
  ULONG_PTR v19; // rcx
  ULONG_PTR v21[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v27; // [rsp+90h] [rbp+27h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR RegionSize; // [rsp+E8h] [rbp+7Fh] BYREF

  BaseAddress = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v21[0] = 4096LL;
  v6 = 1;
  v7 = *a3;
  v8 = 64LL;
  v9 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v23 = *a3;
  if ( a2 <= 0x40 )
    v8 = a2;
  v22 = v7;
  v10 = v9 + 9 * (v8 + 15) - (((_BYTE)v8 - 1) & 7);
  v11 = v10
      + (unsigned int)v8 * (v9 + 64)
      - (((_BYTE)v10 - 1) & 0x3F)
      + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6);
  RegionSize = 129 * v11 + 10175 - ((129 * (_WORD)v11 + 10174) & 0xFFF) + 4095;
  v12 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v23);
  if ( !v12
    || (RtlpHpAppCompatFlags & 8) != 0
    || (v13 & 0x40000000) != 0
    || BYTE2(v22)
    || v14 >= *(unsigned int *)(v12 + 464) )
  {
    v5 = BYTE1(v22) < 2u ? 0x1000000 : 0;
    *(_OWORD *)v25 = v7;
    v17 = (v13 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)RtlpHpAllocVA(&BaseAddress, &RegionSize, 0LL, v5 | 0x2000u, v17, (__int128 *)v25) < 0
      || (*(_OWORD *)v26 = *a3, (int)RtlpHpAllocVA(&BaseAddress, v21, 0LL, v5 | 0x1000u, v17, (__int128 *)v26) < 0) )
    {
      v16 = 0LL;
      goto LABEL_22;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v18 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v18 = 2147353472LL;
    if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v4 = v21[0];
      RtlpLogHeapCommit(BaseAddress, BaseAddress, v21[0], 11LL);
    }
    else
    {
      v4 = v21[0];
    }
    v16 = (volatile signed __int64 *)BaseAddress;
    v6 = 0;
    BaseAddress = 0LL;
  }
  else
  {
    v22 = v7;
    v15 = RtlpHpMetadataAlloc(v14, 4096LL, 1LL, &v22);
    v16 = (volatile signed __int64 *)v15;
    if ( !v15 )
      goto LABEL_22;
    v24 = *a3;
    RtlpHpMetadataCommit(v15, v15 + 4096, RegionSize - 4096, (unsigned int)&v24, 0);
  }
  memset((void *)v16, 0, 0x800uLL);
  *((_QWORD *)v16 + 29) = v16 + 256;
  *((_QWORD *)v16 + 30) = (char *)v16 + v4;
  v19 = RegionSize;
  *((_WORD *)v16 + 15) &= ~1u;
  *((_WORD *)v16 + 15) |= v6;
  *((_QWORD *)v16 + 31) = (char *)v16 + v19;
  _InterlockedExchangeAdd64(v16 + 16, RegionSize >> 12);
  _InterlockedExchangeAdd64(v16 + 17, v21[0] >> 12);
LABEL_22:
  if ( BaseAddress )
  {
    v27 = *a3;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, v5 | 0x8000, &v27);
  }
  return v16;
}
