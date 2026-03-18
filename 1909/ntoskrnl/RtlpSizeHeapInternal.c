/*
 * XREFs of RtlpSizeHeapInternal @ 0x140311330
 * Callers:
 *     RtlSizeHeap @ 0x14030BBC0 (RtlSizeHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x140311094 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSize @ 0x14031BD8C (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // r14
  unsigned __int8 *v7; // rcx
  int v8; // ecx
  unsigned __int8 v9; // dl
  int v10; // r8d
  unsigned __int16 v11; // ax
  int v13; // eax
  unsigned __int16 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int16 v16; // ax
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+58h] [rbp-8h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    v5 = RtlpHpVsChunkSize(a1 + 64, a3, a3, 0LL);
    if ( v5 == -1 )
      RtlpLogHeapFailure(9, a1, v3, 0, 0LL, 0LL);
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v8 = 9;
    }
    else
    {
      v7 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v7 -= 16 * v7[14];
      if ( (v7[15] & 0x3F) != 0 )
        goto LABEL_14;
      LODWORD(a3) = (_DWORD)v7;
      v8 = 8;
    }
    RtlpLogHeapFailure(v8, a1, a3, 0, 0LL, 0LL);
    v7 = 0LL;
  }
LABEL_14:
  if ( !v7 )
    return -1LL;
  v9 = v7[15];
  v10 = *(_DWORD *)(a1 + 124);
  if ( v9 == 4 )
  {
    if ( v10 )
    {
      v17 = *((_DWORD *)v7 + 2);
      if ( (*(_DWORD *)(a1 + 124) & v17) != 0 )
        v17 ^= *(_DWORD *)(a1 + 136);
      v11 = v17;
    }
    else
    {
      v11 = *((_WORD *)v7 + 4);
    }
    return *((_QWORD *)v7 - 2) - v11;
  }
  else
  {
    if ( v10 )
    {
      v13 = *((_DWORD *)v7 + 2);
      v10 = *(_DWORD *)(a1 + 124);
      LOWORD(v18) = v13;
      if ( (v10 & v13) != 0 )
        v18 = *(_DWORD *)(a1 + 136) ^ v13;
      v14 = v18;
      v9 = v7[15];
    }
    else
    {
      v14 = *((_WORD *)v7 + 4);
    }
    if ( v9 == 5 )
    {
      v15 = *((unsigned __int16 *)v7 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)&v7[16 * (v9 & 0x3F) + 12];
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( v10 )
      {
        v19 = *((_DWORD *)v7 + 2);
        if ( (*(_DWORD *)(a1 + 124) & v19) != 0 )
          v19 ^= *(_DWORD *)(a1 + 136);
        v16 = v19;
      }
      else
      {
        v16 = *((_WORD *)v7 + 4);
      }
      v15 = *(_QWORD *)&v7[16 * v16];
    }
    else
    {
      v15 = v9 & 0x3F;
    }
    return 16LL * v14 - v15;
  }
}
