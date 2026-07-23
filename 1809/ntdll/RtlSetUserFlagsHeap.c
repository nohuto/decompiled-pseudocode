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
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108744 (RtlDebugSetUserFlagsHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // rbx
  int v8; // r10d
  int v9; // ecx
  int v10; // edx
  BOOLEAN v11; // si
  int v12; // ecx
  unsigned __int64 v13; // rcx
  struct _TEB *v14; // rbx
  ULONG v15; // eax
  ULONG v16; // r12d
  unsigned __int8 *v17; // rcx
  int v18; // ecx
  char *v19; // rbx
  int v20; // edx
  struct _TEB *v21; // rbx
  char v22; // r15
  char v24; // [rsp+31h] [rbp-27h]
  char *v25; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v24 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_42;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v16 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(HeapHandle, UserFlagsSet);
    v11 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v17 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      goto LABEL_26;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v18 = 9;
    }
    else
    {
      v17 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v17 -= 16 * v17[14];
      if ( (v17[15] & 0x3F) != 0 )
      {
LABEL_26:
        if ( v17 && (v17[15] & 0x80u) == 0 )
        {
          if ( (v16 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v24 = 1;
          }
          v19 = v6 - 16;
          _m_prefetchw(v19);
          if ( v19[15] == 5 )
            v19 -= 16 * (unsigned __int8)v19[14];
          v25 = v19;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v20 = *((_DWORD *)v19 + 2) ^ *((_DWORD *)HeapHandle + 34);
            *((_DWORD *)v19 + 2) = v20;
            if ( HIBYTE(v20) != ((unsigned __int8)v20 ^ (unsigned __int8)(BYTE1(v20) ^ BYTE2(v20))) )
              RtlpAnalyzeHeapFailure(HeapHandle, v19);
          }
          if ( (v19[15] & 0x3F) != 0 )
          {
            v22 = v19[10] & ~(unsigned __int8)(UserFlagsReset >> 4);
            v19[10] = v22;
            v19[10] = v22 | (UserFlagsSet >> 4);
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v21 = NtCurrentTeb();
            v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v11 = 0;
            v19 = v25;
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v19[11] = v19[8] ^ v19[9] ^ v19[10];
            *((_DWORD *)v19 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          if ( v24 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          return v11;
        }
LABEL_42:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v14 = NtCurrentTeb();
        v15 = RtlNtStatusToDosError(-1073741811);
        v11 = 0;
        goto LABEL_43;
      }
      BaseAddress = v17;
      v18 = 8;
    }
    RtlpLogHeapFailure(v18, (__int64)HeapHandle, (__int64)BaseAddress, 0LL, 0LL, 0LL);
    v17 = 0LL;
    goto LABEL_26;
  }
  v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v9 = *((_DWORD *)HeapHandle + 55);
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
    v6 -= *((_QWORD *)v6 - 2);
  v13 = RtlpHpExtrasGet((__int64)HeapHandle, (__int64)v6, (unsigned int)v12 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v13 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v11 = 0;
  else
    *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
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
