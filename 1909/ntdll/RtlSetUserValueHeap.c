/*
 * XREFs of RtlSetUserValueHeap @ 0x18006E8F0
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180040614 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpExtrasGet @ 0x180046D10 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x180105E00 (RtlDebugSetUserValueHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlSetUserValueHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v6; // r15
  char v7; // r12
  unsigned __int64 v8; // r10
  int v9; // r11d
  int v10; // edx
  int v11; // ecx
  char v12; // si
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v16; // r14d
  int v17; // ecx
  unsigned __int8 *v18; // rbx
  char v19; // al
  struct _TEB *v20; // rbx
  struct _TEB *v21; // rbx
  struct _TEB *v22; // rbx
  char v23; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v7 = 0;
  v23 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v9 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v10 = *(_DWORD *)(a1 + 220);
    v11 = 0;
    if ( v10 )
      LOBYTE(v11) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v12 = 1;
    v13 = v9 | 1;
    if ( !v11 )
      v13 = v9;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v8 )
      v8 -= *(_QWORD *)(v8 - 16);
    v14 = RtlpHpExtrasGet(a1, v8, (unsigned int)v13 | *(_DWORD *)(a1 + 20), 0LL);
    if ( v14 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      v12 = 0;
    else
      *(_QWORD *)(v14 + 8) = a4;
    if ( !v12 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v21 = NtCurrentTeb();
      v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v12;
  }
  v16 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return RtlDebugSetUserValueHeap(a1, v16);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v18 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v17 = 9;
LABEL_16:
      RtlpLogHeapFailure(v17, a1, a3, 0, 0LL, 0LL);
      v18 = 0LL;
      goto LABEL_17;
    }
    v18 = (unsigned __int8 *)(a3 - 16);
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v18 -= 16 * v18[14];
    if ( (v18[15] & 0x3F) == 0 )
    {
      LODWORD(a3) = (_DWORD)v18;
      v17 = 8;
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( !v18 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v22 = NtCurrentTeb();
    v22->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (v16 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v7 = 1;
    v23 = 1;
  }
  v19 = v18[15];
  if ( (v19 & 0x3F) != 0 )
  {
    if ( v19 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v18 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v18[11] != (v18[8] ^ (unsigned __int8)(v18[9] ^ v18[10])) )
          RtlpAnalyzeHeapFailure(a1, v18);
      }
      if ( (v18[10] & 2) != 0 )
      {
        *(_QWORD *)(RtlpGetExtraStuffPointer(v18) + 8) = a4;
        v6 = 1;
      }
      goto LABEL_29;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v20 = NtCurrentTeb();
    v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v7 = v23;
    v6 = 0;
  }
  v18 = 0LL;
LABEL_29:
  if ( v18 && *(_DWORD *)(a1 + 124) )
  {
    v18[11] = v18[8] ^ v18[9] ^ v18[10];
    *((_DWORD *)v18 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v6;
}
