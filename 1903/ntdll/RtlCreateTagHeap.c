/*
 * XREFs of RtlCreateTagHeap @ 0x18007C500
 * Callers:
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 *     sub_18007C45C @ 0x18007C45C (sub_18007C45C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 * Callees:
 *     sub_180016F74 @ 0x180016F74 (sub_180016F74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_1800EFB70 @ 0x1800EFB70 (sub_1800EFB70.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  unsigned __int64 v5; // r13
  ULONG v7; // edx
  ULONG v8; // esi
  int v9; // esi
  int v10; // edx
  __int16 v11; // ax
  PWSTR v12; // rdi
  PWSTR v13; // r14
  PWSTR v14; // rax
  WCHAR v15; // cx
  __int64 v16; // rax
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
  if ( !qword_180166968 )
  {
    qword_180166968 = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2C0uLL);
    if ( !qword_180166968 )
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
    if ( !v10 || (v16 = sub_1800EFB70(HeapHandle), (v17 = v16) == 0) )
    {
LABEL_47:
      v8 = v9 << 18;
      goto LABEL_48;
    }
    v25 = 23LL;
    v9 = *(unsigned __int16 *)(v16 + 16);
    if ( *(_WORD *)(v16 + 16) )
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
            sub_180016F74((_WORD *)(v17 + 20), 2 * v25, v5);
            v21 += v19;
          }
          sub_180016F74(v21, 2 * (v25 - v19), (__int64)v12);
          while ( *v12++ )
            ;
          v17 += 72LL;
        }
        goto LABEL_47;
      }
      v18 = v13;
    }
    sub_180016F74((_WORD *)(v16 + 20), 0x2EuLL, (__int64)v18);
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
  v8 = sub_180104DB4(HeapHandle);
LABEL_48:
  if ( v23 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v8;
}
