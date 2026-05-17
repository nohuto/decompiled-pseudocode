/*
 * XREFs of RtlSetUserValueHeap @ 0x18005AFE0
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  char v7; // r12
  unsigned int v8; // r14d
  unsigned __int8 *v9; // rbx
  char v10; // al
  int v11; // edx
  struct _TEB *v12; // rbx
  __int64 v14; // r10
  int v15; // r11d
  int v16; // edx
  int v17; // ecx
  char v18; // si
  int v19; // edx
  __int64 v20; // rcx
  struct _TEB *v21; // rbx
  int v22; // ecx
  struct _TEB *v23; // rbx
  char v24; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v7 = 0;
  v24 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v8 = *(_DWORD *)(a1 + 116) | a2;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(a1, v8);
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe(a1, a3);
      goto LABEL_8;
    }
    if ( (a3 & 0xF) != 0 )
    {
      v22 = 9;
    }
    else
    {
      v9 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v9 -= 16 * v9[14];
      if ( (v9[15] & 0x3F) != 0 )
      {
LABEL_8:
        if ( !v9 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v23 = NtCurrentTeb();
          v23->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          return 0;
        }
        if ( (v8 & 1) == 0 )
        {
          RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          v7 = 1;
          v24 = 1;
        }
        v10 = v9[15];
        if ( (v10 & 0x3F) != 0 )
        {
          if ( v10 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v11 = *((_DWORD *)v9 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v9 + 2) = v11;
              if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
                RtlpAnalyzeHeapFailure(a1, v9);
            }
            if ( (v9[10] & 2) != 0 )
            {
              *(_QWORD *)(RtlpGetExtraStuffPointer(v9) + 8) = a4;
              v6 = 1;
            }
            goto LABEL_20;
          }
        }
        else
        {
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v12 = NtCurrentTeb();
          v12->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          v7 = v24;
          v6 = 0;
        }
        v9 = 0LL;
LABEL_20:
        if ( v9 && *(_DWORD *)(a1 + 124) )
        {
          v9[11] = v9[8] ^ v9[9] ^ v9[10];
          *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        if ( v7 )
          RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        return v6;
      }
      LODWORD(a3) = (_DWORD)v9;
      v22 = 8;
    }
    RtlpLogHeapFailure(v22, a1, a3, 0, 0LL, 0LL);
    v9 = 0LL;
    goto LABEL_8;
  }
  v15 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v16 = *(_DWORD *)(a1 + 220);
  v17 = 0;
  if ( v16 )
    LOBYTE(v17) = v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v18 = 1;
  v19 = v15 | 1;
  if ( !v17 )
    v19 = v15;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v14 )
    v14 -= *(_QWORD *)(v14 - 16);
  v20 = RtlpHpExtrasGet(a1, v14, (unsigned int)v19 | *(_DWORD *)(a1 + 20), 0LL);
  if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v18 = 0;
  else
    *(_QWORD *)(v20 + 8) = a4;
  if ( !v18 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v21 = NtCurrentTeb();
    v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v18;
}
