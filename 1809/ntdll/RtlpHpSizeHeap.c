/*
 * XREFs of RtlpHpSizeHeap @ 0x180017AC0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSize @ 0x18005BCDC (RtlpHpVsChunkSize.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     RtlCompareMemory @ 0x1800A4A80 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 DescriptorValidateSafe; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r8
  char v13; // cl
  unsigned __int64 v14; // r11
  int v15; // r14d
  unsigned int v16; // edx
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  char v21; // cl
  unsigned __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // r8
  unsigned __int16 v25; // r10
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rsi
  __int64 v31; // rax
  signed __int32 v32[10]; // [rsp+0h] [rbp-28h] BYREF

  DescriptorValidateSafe = 0LL;
  v6 = a3 | *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 220);
  v8 = 0;
  if ( v7 )
    LOBYTE(v8) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v9 = v6 | 1;
  if ( !v8 )
    v9 = v6;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v31 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((a2 - qword_180166948) >> 20));
    if ( !v31 || (v10 = v31 - 1, v10 == 2) )
    {
      v29 = RtlpHpLargeAllocSize(a1, a2, v9, 0LL);
      goto LABEL_29;
    }
  }
  v11 = 192LL * v10 + a1 + 256;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v11, a2);
  }
  else if ( (v11 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v11 & a2 ^ *(_QWORD *)((*(_QWORD *)v11 & a2) + 0x10)) == 0xA2E64EADA2E64EADuLL )
  {
    DescriptorValidateSafe = (*(_QWORD *)v11 & a2)
                           + 32
                           * ((unsigned __int64)((unsigned int)a2 - (*(_DWORD *)v11 & (unsigned int)a2)) >> *(_BYTE *)(v11 + 8));
  }
  if ( !DescriptorValidateSafe )
    return -1LL;
  v12 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
  if ( (v12 & 1) == 0 )
    return -1LL;
  if ( (v12 & 2) != 0 )
  {
    LOBYTE(v12) = v12 & 0xC;
    if ( (unsigned __int8)v12 < 8u && (((1 << *(_BYTE *)(v11 + 8)) - 1) & a2) != 0 )
      return -1LL;
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v12 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
    if ( (v12 & 3) != 3 )
      return -1LL;
    LOBYTE(v12) = v12 & 0xC;
    if ( (unsigned __int8)v12 < 8u )
      return -1LL;
  }
  v13 = *(_BYTE *)(v11 + 8);
  v14 = (*(_QWORD *)v11 & DescriptorValidateSafe)
      + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v11 & DescriptorValidateSafe)) >> 5 << v13);
  if ( a2 <= v14 )
  {
    v29 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v13)
        - *(unsigned int *)(DescriptorValidateSafe + 4);
  }
  else if ( (_BYTE)v12 == 8 )
  {
    v15 = *(_DWORD *)((*(_QWORD *)v11 & DescriptorValidateSafe)
                    + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v11 & DescriptorValidateSafe)) >> 5 << v13)
                    + 0x28);
    v16 = qword_1801634A8 ^ v15 ^ ((unsigned int)v14 >> 12);
    v17 = (unsigned __int16)v16;
    v18 = *(_QWORD *)(*(_QWORD *)(v11 + 24)
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v16 + 15) >> 4]
                    + 128);
    v19 = a2 - HIWORD(v16) - v14;
    v20 = *(_DWORD *)(v18 + 72);
    v21 = *(_BYTE *)(v18 + 76);
    if ( v20 )
    {
      v22 = (v19 * (unsigned __int64)v20) >> v21;
      v23 = v19 - v22 * v17;
    }
    else
    {
      LODWORD(v22) = v19 >> v21;
      v23 = ((1 << v21) - 1) & v19;
    }
    if ( v23 )
    {
      v29 = -1LL;
    }
    else
    {
      v24 = *(_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)(2 * v22) >> 6) + 48) >> ((2 * v22) & 0x3F);
      if ( (v24 & 1) != 0 )
      {
        v25 = v15 ^ ((unsigned int)v14 >> 12);
        v26 = (unsigned __int16)qword_1801634A8 ^ v25;
        if ( (v24 & 2) != 0 )
        {
          v27 = (unsigned __int16)qword_1801634A8 ^ (unsigned __int64)v25;
          v28 = *(_WORD *)(v27 + a2 - 2);
          if ( (v28 & 0x4000) != 0 )
          {
            _InterlockedOr(v32, 0);
            v28 = *(_WORD *)(v27 + a2 - 2);
          }
          if ( v28 < 0 )
            --v26;
          else
            v26 -= v28 & 0x3FFF;
        }
        v29 = v26;
      }
      else
      {
        v29 = -1LL;
      }
    }
  }
  else
  {
    v29 = RtlpHpVsChunkSize(*(_QWORD *)(v11 + 32), a2, v12, 0LL);
  }
LABEL_29:
  if ( v29 == -1LL
    || (v9 & 0x10000000) == 0
    || RtlCompareMemory((const void *)(v29 + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
  {
    return v29;
  }
  return -1LL;
}
