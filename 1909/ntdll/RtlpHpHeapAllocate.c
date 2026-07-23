/*
 * XREFs of RtlpHpHeapAllocate @ 0x18004CA78
 * Callers:
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x180048170 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataCommit @ 0x18004F044 (RtlpHpMetadataCommit.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
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
  ULONG v15; // ebx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  ULONG_PTR v18; // rcx
  __int64 v20; // rax
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
    v15 = (v13 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)RtlpHpAllocVA(&BaseAddress, &RegionSize, 0LL, v5 | 0x2000u, v15, (__int128 *)v25) >= 0 )
    {
      *(_OWORD *)v26 = *a3;
      if ( (int)RtlpHpAllocVA(&BaseAddress, v21, 0LL, v5 | 0x1000u, v15, (__int128 *)v26) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v4 = v21[0];
          RtlpLogHeapCommit(BaseAddress, BaseAddress, v21[0], 11LL);
        }
        else
        {
          v4 = v21[0];
        }
        v17 = (volatile signed __int64 *)BaseAddress;
        v6 = 0;
        BaseAddress = 0LL;
        goto LABEL_11;
      }
    }
    v17 = 0LL;
  }
  else
  {
    v22 = v7;
    v20 = RtlpHpMetadataAlloc(v14, 4096LL, 1LL, &v22);
    v17 = (volatile signed __int64 *)v20;
    if ( v20 )
    {
      v24 = *a3;
      RtlpHpMetadataCommit(v20, v20 + 4096, RegionSize - 4096, (unsigned int)&v24, 0);
LABEL_11:
      memset((void *)v17, 0, 0x800uLL);
      *((_QWORD *)v17 + 29) = v17 + 256;
      *((_QWORD *)v17 + 30) = (char *)v17 + v4;
      v18 = RegionSize;
      *((_WORD *)v17 + 15) &= ~1u;
      *((_WORD *)v17 + 15) |= v6;
      *((_QWORD *)v17 + 31) = (char *)v17 + v18;
      _InterlockedExchangeAdd64(v17 + 16, RegionSize >> 12);
      _InterlockedExchangeAdd64(v17 + 17, v21[0] >> 12);
    }
  }
  if ( BaseAddress )
  {
    v27 = *a3;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, v5 | 0x8000, &v27);
  }
  return v17;
}
