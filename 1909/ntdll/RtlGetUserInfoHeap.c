/*
 * XREFs of RtlGetUserInfoHeap @ 0x18006E580
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180040614 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x18006E88C (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x1801053E8 (RtlDebugGetUserInfoHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
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
  char *v11; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v13; // rbx
  int v15; // r10d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  char *v22; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v21 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v15 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v16 = *((_DWORD *)HeapHandle + 55);
    v17 = 0;
    if ( v16 )
      LOBYTE(v17) = v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v18 = v15 | 1;
    if ( !v17 )
      v18 = v15;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *((_QWORD *)v6 - 2);
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v18, (_DWORD)UserValue, (__int64)UserFlags);
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
        v19 = 9;
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
        v19 = 8;
      }
      RtlpLogHeapFailure(v19, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( v9[15] >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw(v11);
      if ( v11[15] == 5 )
        v11 -= 16 * (unsigned __int8)v11[14];
      v22 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v21 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v11);
      }
      if ( (v11[15] & 0x3F) != 0 )
      {
        if ( (v11[10] & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v11);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v11[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v13 = NtCurrentTeb();
        v13->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v22;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v11[11] = v11[8] ^ v11[9] ^ v11[10];
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v21 )
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
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
