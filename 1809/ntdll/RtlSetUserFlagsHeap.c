/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800F2680
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlSetUserFlagsHeap(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rbx
  int v8; // r10d
  int v9; // ecx
  int v10; // edx
  char v11; // si
  int v12; // ecx
  unsigned __int64 v13; // rcx
  struct _TEB *v14; // rbx
  ULONG v15; // eax
  int v16; // r12d
  unsigned __int8 *v17; // rcx
  int v18; // ecx
  __int64 v19; // rbx
  int v20; // edx
  struct _TEB *v21; // rbx
  char v22; // r15
  char v24; // [rsp+31h] [rbp-27h]
  __int64 v25; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v24 = 0;
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    goto LABEL_42;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v16 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(a1, v16, a3, a4, a5);
    v11 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v17 = RtlpProbeUserBufferSafe(a1, a3);
      goto LABEL_26;
    }
    if ( (a3 & 0xF) != 0 )
    {
      v18 = 9;
    }
    else
    {
      v17 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v17 -= 16 * v17[14];
      if ( (v17[15] & 0x3F) != 0 )
      {
LABEL_26:
        if ( v17 && (v17[15] & 0x80u) == 0 )
        {
          if ( (v16 & 1) == 0 )
          {
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
            v24 = 1;
          }
          v19 = v6 - 16;
          _m_prefetchw((const void *)v19);
          if ( *(_BYTE *)(v19 + 15) == 5 )
            v19 -= 16LL * *(unsigned __int8 *)(v19 + 14);
          v25 = v19;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v20 = *(_DWORD *)(v19 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v19 + 8) = v20;
            if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
              RtlpAnalyzeHeapFailure(a1, v19);
          }
          if ( (*(_BYTE *)(v19 + 15) & 0x3F) != 0 )
          {
            v22 = *(_BYTE *)(v19 + 10) & ~(unsigned __int8)(a4 >> 4);
            *(_BYTE *)(v19 + 10) = v22;
            *(_BYTE *)(v19 + 10) = v22 | (a5 >> 4);
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v21 = NtCurrentTeb();
            v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v11 = 0;
            v19 = v25;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
            *(_DWORD *)(v19 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( v24 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
          return v11;
        }
LABEL_42:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v14 = NtCurrentTeb();
        v15 = RtlNtStatusToDosError(-1073741811);
        v11 = 0;
        goto LABEL_43;
      }
      a3 = (__int64)v17;
      v18 = 8;
    }
    RtlpLogHeapFailure(v18, a1, a3, 0LL, 0LL, 0LL);
    v17 = 0LL;
    goto LABEL_26;
  }
  v8 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v9 = *(_DWORD *)(a1 + 220);
  v10 = 0;
  if ( v9 )
    LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = 1;
  v12 = v8 | 1;
  if ( !v10 )
    v12 = v8;
  if ( !v6 )
    goto LABEL_42;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v6 -= *(_QWORD *)(v6 - 16);
  v13 = RtlpHpExtrasGet(a1, v6, (unsigned int)v12 | *(_DWORD *)(a1 + 20), 0LL);
  if ( v13 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v11 = 0;
  else
    *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & ((16 * ~BYTE1(a4)) | 0xF) | (16 * BYTE1(a5));
  if ( !v11 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v14 = NtCurrentTeb();
    v15 = RtlNtStatusToDosError(-1073741811);
LABEL_43:
    v14->LastErrorValue = v15;
  }
  return v11;
}
