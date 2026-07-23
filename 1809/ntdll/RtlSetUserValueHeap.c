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
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserValueHeap @ 0x180108910 (RtlDebugSetUserValueHeap.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  BOOLEAN v6; // r15
  char v7; // r12
  ULONG v8; // r14d
  unsigned __int8 *v9; // rbx
  char v10; // al
  int v11; // edx
  struct _TEB *v12; // rbx
  __int64 v14; // r10
  int v15; // r11d
  int v16; // edx
  int v17; // ecx
  BOOLEAN v18; // si
  int v19; // edx
  __int64 v20; // rcx
  struct _TEB *v21; // rbx
  int v22; // ecx
  struct _TEB *v23; // rbx
  char v24; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v7 = 0;
  v24 = 0;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v8 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(HeapHandle);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      goto LABEL_8;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v22 = 9;
    }
    else
    {
      v9 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
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
          RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          v7 = 1;
          v24 = 1;
        }
        v10 = v9[15];
        if ( (v10 & 0x3F) != 0 )
        {
          if ( v10 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v11 = *((_DWORD *)v9 + 2) ^ *((_DWORD *)HeapHandle + 34);
              *((_DWORD *)v9 + 2) = v11;
              if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
                RtlpAnalyzeHeapFailure(HeapHandle, v9);
            }
            if ( (v9[10] & 2) != 0 )
            {
              *(_QWORD *)(RtlpGetExtraStuffPointer(v9) + 8) = UserValue;
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
        if ( v9 && *((_DWORD *)HeapHandle + 31) )
        {
          v9[11] = v9[8] ^ v9[9] ^ v9[10];
          *((_DWORD *)v9 + 2) ^= *((_DWORD *)HeapHandle + 34);
        }
        if ( v7 )
          RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        return v6;
      }
      LODWORD(BaseAddress) = (_DWORD)v9;
      v22 = 8;
    }
    RtlpLogHeapFailure(v22, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v9 = 0LL;
    goto LABEL_8;
  }
  v15 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v16 = *((_DWORD *)HeapHandle + 55);
  v17 = 0;
  if ( v16 )
    LOBYTE(v17) = v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v18 = 1;
  v19 = v15 | 1;
  if ( !v17 )
    v19 = v15;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && v14 )
    v14 -= *(_QWORD *)(v14 - 16);
  v20 = RtlpHpExtrasGet(HeapHandle, v14, (unsigned int)v19 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v18 = 0;
  else
    *(_QWORD *)(v20 + 8) = UserValue;
  if ( !v18 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v21 = NtCurrentTeb();
    v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v18;
}
