/*
 * XREFs of RtlpFreeHeapInternal @ 0x140110910
 * Callers:
 *     RtlFreeHeap @ 0x1401108B0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14030BC74 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x140110AD4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     RtlpFreeHeap @ 0x140310478 (RtlpFreeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x140311094 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

__int64 RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // r9
  int v19; // eax
  int v20; // [rsp+38h] [rbp-28h]
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+58h] [rbp-8h]
  va_list va; // [rsp+98h] [rbp+38h] BYREF

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
  v20 = a1[34] ^ *(_DWORD *)(v9 + 8);
  if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(((unsigned __int16)(*((_WORD *)a1 + 68) ^ *(_WORD *)(v9 + 8)) >> 8) ^ BYTE2(v20))) )
  {
LABEL_34:
    RtlpLogHeapFailure(3, (_DWORD)a1, v9, a2, 0LL, 0LL);
    return v7;
  }
  if ( a1[31] )
  {
    v12 = *(_DWORD *)(v9 + 8);
    v13 = a1[31];
    LOWORD(v21) = v12;
    if ( (v13 & v12) != 0 )
      v21 = a1[34] ^ v12;
    v14 = v21;
  }
  else
  {
LABEL_21:
    v14 = *(_WORD *)(v9 + 8);
    v13 = 0;
  }
  if ( *(_BYTE *)(v9 + 15) == 4 )
  {
    if ( v13 )
    {
      v22 = *(_DWORD *)(v9 + 8);
      if ( (a1[31] & v22) != 0 )
        v22 ^= a1[34];
      v15 = v22;
    }
    else
    {
      v15 = *(_WORD *)(v9 + 8);
    }
    v16 = v14 + *(_QWORD *)(v9 - 16) - v15;
  }
  else
  {
    v16 = 16LL * v14;
  }
  if ( v16 + v9 < a2 )
    goto LABEL_34;
  v17 = *(_DWORD *)(a2 - 8);
  if ( (a3 & 0x3C000102) != 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  v18 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
  v19 = v17 && (_WORD)v17 == 1
      ? ((__int64 (__fastcall *)(_DWORD *, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(a1, a2, 3LL, v18)
      : -1073741823;
  if ( v19 >= 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  return v7;
}
