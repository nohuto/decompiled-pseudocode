/*
 * XREFs of RtlCreateTagHeap @ 0x180059E70
 * Callers:
 *     TpInitializePackage @ 0x180059DC0 (TpInitializePackage.c)
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlStringCbCopyW @ 0x180041540 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x1800F2CB0 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  unsigned __int64 v5; // r13
  ULONG v7; // edx
  ULONG TagHeap; // esi
  int v9; // esi
  int v10; // edx
  __int16 v11; // ax
  PWSTR v12; // rdi
  PWSTR v13; // r14
  PWSTR v14; // rax
  WCHAR v15; // cx
  __int64 Tags; // rax
  __int64 v17; // rbx
  const wchar_t *v18; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _WORD *v21; // r12
  char v23; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v23 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2C0uLL);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_13:
    v9 = 0;
    v10 = 0;
    v11 = 33;
    v12 = TagNames;
    if ( *TagNames == 33 )
    {
      v13 = TagNames + 1;
      while ( 1 )
      {
        ++v12;
        if ( !v11 )
          break;
        v11 = *v12;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v14 = v12;
    while ( 1 )
    {
      v15 = *v14;
      if ( !*v14 )
        break;
      while ( 1 )
      {
        ++v14;
        if ( !v15 )
          break;
        v15 = *v14;
      }
      ++v10;
    }
    if ( !v10 || (Tags = RtlpAllocateTags(HeapHandle), (v17 = Tags) == 0) )
    {
LABEL_47:
      TagHeap = v9 << 18;
      goto LABEL_48;
    }
    v25 = 23LL;
    v9 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v9 != 2048 )
        goto LABEL_32;
      v18 = L"GlobalTags";
    }
    else
    {
      if ( !v13 )
      {
LABEL_31:
        v17 += 72LL;
        v9 = *(unsigned __int16 *)(v17 + 16);
LABEL_32:
        if ( !TagPrefix )
          goto LABEL_40;
        v19 = -1LL;
        do
          ++v19;
        while ( TagPrefix[v19] );
        v20 = v19;
        if ( v19 )
        {
          if ( v19 < 0x13 )
            v25 = 23 - v19;
          else
            v19 = 0LL;
          v5 = (unsigned __int64)TagPrefix & -(__int64)(v20 < 0x13);
        }
        else
        {
LABEL_40:
          v19 = 0LL;
        }
        while ( *v12 )
        {
          v21 = (_WORD *)(v17 + 20);
          if ( v5 )
          {
            RtlStringCbCopyW((_WORD *)(v17 + 20), 2 * v25, v5);
            v21 += v19;
          }
          RtlStringCbCopyW(v21, 2 * (v25 - v19), (__int64)v12);
          while ( *v12++ )
            ;
          v17 += 72LL;
        }
        goto LABEL_47;
      }
      v18 = v13;
    }
    RtlStringCbCopyW((_WORD *)(Tags + 20), 0x2EuLL, (__int64)v18);
    goto LABEL_31;
  }
  v7 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v7 & 0x61000000) == 0 || (v7 & 0x10000000) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v23 = 1;
    }
    goto LABEL_13;
  }
  TagHeap = RtlDebugCreateTagHeap(HeapHandle);
LABEL_48:
  if ( v23 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
