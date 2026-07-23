/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800F5EB4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned __int64 v6; // rbx
  char v8; // r14
  char v9; // cl
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  int v15; // eax
  int v17; // [rsp+28h] [rbp-10h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 16 + 15);
  v10 = a5 + a3;
  if ( v9 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
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
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(v6 + 8);
          LOWORD(v17) = v15;
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            v17 = *(_DWORD *)(a1 + 136) ^ v15;
          v14 = v17;
        }
        else
        {
          v14 = *(_WORD *)(v6 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
          v13 = 0LL;
        else
          v13 = *(_QWORD *)(v6
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12));
        v14 = *(_WORD *)(v13 + 36);
      }
      v12 = *(_QWORD *)(v6 + 16LL * v14);
    }
    else
    {
      LOWORD(v12) = v9 & 0x3F;
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) &= 0xC0u;
    *(_BYTE *)(v6 + 15) |= (unsigned __int8)(a5 >> 4) | 0x40;
  }
  *(_WORD *)(v10 - 4) = a5 + v12;
  *(_DWORD *)(v10 - 8) = a6;
  *(_BYTE *)(v10 - 1) = 5;
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v10;
}
