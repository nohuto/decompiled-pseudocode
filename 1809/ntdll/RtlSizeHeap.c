/*
 * XREFs of RtlSizeHeap @ 0x1800178D0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085E60 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008F020 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800F75BC (RtlpScanHeapAllocBlocks.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800FA024 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x180108AA4 (RtlDebugSizeHeap.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlDebugSizeHeap @ 0x180108AA4 (RtlDebugSizeHeap.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // rbp
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rax
  SIZE_T v11; // rsi
  ULONG v13; // edx
  unsigned __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rax
  unsigned __int16 v17; // r9
  char v18; // cl
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned __int16 v23; // ax
  int v24; // r8d
  int v25; // ecx
  struct _TEB *v26; // rbx
  int v27; // eax
  int v28; // [rsp+38h] [rbp-10h]
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && BaseAddress )
      v7 = *((_QWORD *)BaseAddress - 2);
    else
      v7 = 0LL;
    v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v10 = RtlpHpSizeHeap(HeapHandle, v9, v8);
    v11 = v10;
    if ( v10 != -1 )
      return v10 - v7;
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    return v11;
  }
  v13 = Flags | *((_DWORD *)HeapHandle + 29);
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugSizeHeap(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v14 = RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v24 = (int)BaseAddress;
      v25 = 9;
    }
    else
    {
      v14 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
        goto LABEL_15;
      v24 = v14;
      v25 = 8;
    }
    RtlpLogHeapFailure(v25, (_DWORD)HeapHandle, v24, 0, 0LL, 0LL);
    v14 = 0LL;
  }
LABEL_15:
  if ( v14 )
  {
    v15 = *(_BYTE *)(v14 + 15);
    if ( v15 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v22 = *(_DWORD *)(v14 + 8);
        LOWORD(v29) = v22;
        if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
          v29 = *((_DWORD *)HeapHandle + 34) ^ v22;
        v23 = v29;
      }
      else
      {
        v23 = *(_WORD *)(v14 + 8);
      }
      return *(_QWORD *)(v14 - 16) - v23;
    }
    else
    {
      if ( v15 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v20 = *(_DWORD *)(v14 + 8);
          LOWORD(v28) = v20;
          if ( (v20 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v28 = *((_DWORD *)HeapHandle + 34) ^ v20;
          v17 = v28;
        }
        else
        {
          v17 = *(_WORD *)(v14 + 8);
        }
      }
      else
      {
        if ( *(_WORD *)(v14 + 8) ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ RtlpLFHKey ^ (v14 >> 4)) )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(v14
                          - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v14 >> 4)) >> 12));
        v17 = *(_WORD *)(v16 + 36);
      }
      v18 = *(_BYTE *)(v14 + 15);
      if ( v18 == 5 )
      {
        v19 = *((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v14 + 12);
      }
      else if ( (v18 & 0x40) != 0 )
      {
        v19 = *(unsigned __int16 *)(v14 + 16LL * (v18 & 0x3F) + 12);
      }
      else if ( (v18 & 0x3F) == 0x3F )
      {
        if ( v18 >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v27 = *(_DWORD *)(v14 + 8);
            LOWORD(v30) = v27;
            if ( (v27 & *((_DWORD *)HeapHandle + 31)) != 0 )
              v30 = *((_DWORD *)HeapHandle + 34) ^ v27;
            v21 = v30;
          }
          else
          {
            v21 = *(_WORD *)(v14 + 8);
          }
        }
        else
        {
          if ( !(*(_WORD *)(v14 + 8) ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ RtlpLFHKey ^ (v14 >> 4))) )
            v3 = *(_QWORD *)(v14
                           - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)HeapHandle ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v14 >> 4)) >> 12));
          v21 = *(_WORD *)(v3 + 36);
        }
        v19 = *(_QWORD *)(v14 + 16LL * v21);
      }
      else
      {
        v19 = v18 & 0x3F;
      }
      return 16LL * v17 - v19;
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v26 = NtCurrentTeb();
    v26->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
}
