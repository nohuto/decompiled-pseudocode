/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800F3270
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
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
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  int v14; // eax
  int v16; // [rsp+28h] [rbp-10h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 16 + 15);
  v10 = a3 + a5;
  if ( v9 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    *(_WORD *)(v6 + 8) += a5;
    LOWORD(v11) = *(_WORD *)(v6 + 8);
    *(_BYTE *)(v6 + 14) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
  }
  else
  {
    if ( v9 == 5 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 12) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LOWORD(v11) = *(_WORD *)(v6 + 16LL * (v9 & 0x3F) + 12);
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v14 = *(_DWORD *)(v6 + 8);
          LOWORD(v16) = v14;
          if ( (v14 & *(_DWORD *)(a1 + 124)) != 0 )
            v16 = *(_DWORD *)(a1 + 136) ^ v14;
          v13 = v16;
        }
        else
        {
          v13 = *(_WORD *)(v6 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v6 + 8) ^ (v6 >> 4)) )
          v12 = 0LL;
        else
          v12 = *(_QWORD *)(v6
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v6 + 8) ^ (unsigned int)(v6 >> 4)) >> 12));
        v13 = *(_WORD *)(v12 + 36);
      }
      v11 = *(_QWORD *)(v6 + 16LL * v13);
    }
    else
    {
      LOWORD(v11) = v9 & 0x3F;
    }
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(v6 + 15) &= 0xC0u;
    *(_BYTE *)(v6 + 15) |= (unsigned __int8)(a5 >> 4) | 0x40;
  }
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v11;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v10;
}
