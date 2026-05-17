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
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugGetUserInfoHeap @ 0x180107EB8 (RtlDebugGetUserInfoHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  char v10; // r14
  __int64 v12; // rbx
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
  __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v16 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v17 = *(_DWORD *)(a1 + 220);
    v18 = 0;
    if ( v17 )
      LOBYTE(v18) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v19 = v16 | 1;
    if ( !v18 )
      v19 = v16;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *(_QWORD *)(v6 - 16);
    return RtlpHpGetUserInfo(a1, v6, v19, (_DWORD)a4, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(a1, a3);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v20 = 9;
      }
      else
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(a3) = v9;
        v20 = 8;
      }
      RtlpLogHeapFailure(v20, a1, a3, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( *(char *)(v9 + 15) >= 0 )
    {
      v12 = v6 - 16;
      _m_prefetchw((const void *)v12);
      if ( *(_BYTE *)(v12 + 15) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      v23 = v12;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v22 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v13 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v12 + 8) = v13;
        if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
          RtlpAnalyzeHeapFailure(a1, v12);
      }
      if ( (*(_BYTE *)(v12 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v12);
          if ( a4 )
            *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v12 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v15 = NtCurrentTeb();
        v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v12 = v23;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v22 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v10;
    }
    if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v21 = NtCurrentTeb();
  v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
