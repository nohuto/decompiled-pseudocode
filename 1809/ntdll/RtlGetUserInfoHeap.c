/*
 * XREFs of RtlGetUserInfoHeap @ 0x18005AC60
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x18005AF7C (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  char *v6; // rbx
  ULONG v8; // r15d
  char *v9; // rcx
  BOOLEAN v10; // r14
  char *v12; // rbx
  int v13; // edx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v15; // rbx
  int v16; // r10d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  struct _TEB *v21; // rbx
  char v22; // [rsp+31h] [rbp-27h]
  char *v23; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v22 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v17 = *((_DWORD *)HeapHandle + 55);
    v18 = 0;
    if ( v17 )
      LOBYTE(v18) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v19 = v16 | 1;
    if ( !v18 )
      v19 = v16;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *((_QWORD *)v6 - 2);
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v19, (_DWORD)UserValue, (__int64)UserFlags);
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(HeapHandle, UserFlags);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v9 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v20 = 9;
      }
      else
      {
        v9 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v9 -= 16 * (unsigned __int8)v9[14];
        if ( (v9[15] & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(BaseAddress) = (_DWORD)v9;
        v20 = 8;
      }
      RtlpLogHeapFailure(v20, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( v9[15] >= 0 )
    {
      v12 = v6 - 16;
      _m_prefetchw(v12);
      if ( v12[15] == 5 )
        v12 -= 16 * (unsigned __int8)v12[14];
      v23 = v12;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v22 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v13 = *((_DWORD *)v12 + 2) ^ *((_DWORD *)HeapHandle + 34);
        *((_DWORD *)v12 + 2) = v13;
        if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v12);
      }
      if ( (v12[15] & 0x3F) != 0 )
      {
        if ( (v12[10] & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v12);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v12[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v12 = v23;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v12[11] = v12[8] ^ v12[9] ^ v12[10];
        *((_DWORD *)v12 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v22 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v10;
    }
    if ( (v9[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v21 = NtCurrentTeb();
  v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
