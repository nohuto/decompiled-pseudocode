/*
 * XREFs of RtlpFreeHeapInternal @ 0x14011EF60
 * Callers:
 *     RtlFreeHeap @ 0x14011EF00 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1402EDC34 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x14011F0A0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x1402F2CE8 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  unsigned __int16 v15; // dx
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+38h] [rbp-20h]
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a1[4] == -857879331 )
  {
    v6 = RtlpHpConvertFlagsToSegmentFlags(a3);
    return (unsigned int)RtlpHpVsContextFree((__int64)(a1 + 16), 0LL, a2, a1[5] | v6, (unsigned int *)va);
  }
  v7 = 0;
  if ( (a1[30] & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v11 = 9;
    }
    else
    {
      v9 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
      if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
        goto LABEL_13;
      v10 = v9;
      v11 = 8;
    }
    RtlpLogHeapFailure(v11, (_DWORD)a1, v10, 0, 0LL, 0LL);
    v9 = 0LL;
  }
LABEL_13:
  if ( !v9 )
    return v7;
  if ( *(_BYTE *)(a2 - 1) != 5 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  if ( !a1[31] )
    goto LABEL_21;
  v12 = *(_DWORD *)(v9 + 8) ^ a1[34];
  if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v9 + 8) ^ *((_WORD *)a1 + 68)) >> 8) ^ BYTE2(v12))) )
  {
LABEL_34:
    RtlpLogHeapFailure(3, (_DWORD)a1, v9, a2, 0LL, 0LL);
    return v7;
  }
  if ( a1[31] )
  {
    v13 = *(_DWORD *)(v9 + 8);
    v14 = a1[31];
    LOWORD(v22) = v13;
    if ( (v14 & v13) != 0 )
      v22 = a1[34] ^ v13;
    v15 = v22;
  }
  else
  {
LABEL_21:
    v15 = *(_WORD *)(v9 + 8);
    v14 = 0;
  }
  if ( *(_BYTE *)(v9 + 15) == 4 )
  {
    if ( v14 )
    {
      v16 = *(_DWORD *)(v9 + 8);
      LOWORD(v23) = v16;
      if ( (a1[31] & v16) != 0 )
        v23 = a1[34] ^ v16;
      v17 = v23;
    }
    else
    {
      v17 = *(_WORD *)(v9 + 8);
    }
    v18 = v15 + *(_QWORD *)(v9 - 16) - v17;
  }
  else
  {
    v18 = 16LL * v15;
  }
  if ( v18 + v9 < a2 )
    goto LABEL_34;
  v19 = *(_DWORD *)(a2 - 8);
  if ( (a3 & 0x3C000102) != 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  v20 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
  v21 = v19 && (_WORD)v19 == 1
      ? ((__int64 (__fastcall *)(_DWORD *, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(
          a1,
          a2,
          3LL,
          v20)
      : -1073741823;
  if ( v21 >= 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  return v7;
}
