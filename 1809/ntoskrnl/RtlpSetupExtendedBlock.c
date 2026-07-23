/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1402F2E08
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14011F024 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbx
  char v8; // r14
  char v9; // cl
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int16 v14; // ax
  int v16; // [rsp+28h] [rbp-10h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 16 + 15);
  v10 = a5 + a3;
  if ( v9 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v6 + 8) = v11;
      if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    LOWORD(v12) = a5 + *(_WORD *)(v6 + 8);
    *(_WORD *)(v6 + 8) = v12;
    *(_BYTE *)(v6 + 14) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v6 + 11) = v12 ^ *(_BYTE *)(v6 + 10) ^ BYTE1(v12);
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
  }
  else
  {
    if ( v9 == 5 )
    {
      LOWORD(v12) = *(_WORD *)(v6 + 12) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LOWORD(v12) = *(_WORD *)(v6 + 16LL * (v9 & 0x3F) + 12);
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v13 = *(_DWORD *)(v6 + 8);
        LOWORD(v16) = v13;
        if ( (v13 & *(_DWORD *)(a1 + 124)) != 0 )
          v16 = *(_DWORD *)(a1 + 136) ^ v13;
        v14 = v16;
      }
      else
      {
        v14 = *(_WORD *)(v6 + 8);
      }
      v12 = *(_QWORD *)(v6 + 16LL * v14);
    }
    else
    {
      LOWORD(v12) = v9 & 0x3F;
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) = (a5 >> 4) | *(_BYTE *)(v6 + 15) & 0xC0 | 0x40;
  }
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v12;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v8 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
