/*
 * XREFs of RtlSizeHeap @ 0x1800400A0
 * Callers:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180080C20 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008B5D0 (RtlSetCurrentEnvironment.c)
 *     sub_1800F48DC @ 0x1800F48DC (sub_1800F48DC.c)
 *     sub_1800F7C30 @ 0x1800F7C30 (sub_1800F7C30.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 * Callees:
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040614 @ 0x180040614 (sub_180040614.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18006E5C8 @ 0x18006E5C8 (sub_18006E5C8.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // rsi
  ULONG v7; // edx
  int v8; // r8d
  int v9; // ecx
  unsigned __int64 v10; // rdx
  char v11; // al
  int v12; // eax
  unsigned __int16 v13; // r9
  char v14; // cl
  unsigned __int64 v15; // r8
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // r10
  __int64 v21; // rax
  SIZE_T v22; // rbp
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  int v25; // eax
  int v26; // eax
  unsigned __int16 v27; // ax
  struct _TEB *v28; // rbx
  int v29; // [rsp+38h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  if ( !HeapHandle )
    sub_18010A694(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (dword_18016273C & 2) != 0 && BaseAddress )
      v18 = *((_QWORD *)BaseAddress - 2);
    else
      v18 = 0LL;
    v19 = sub_180040614(Flags);
    v21 = sub_180040320(HeapHandle, v20, v19);
    v22 = v21;
    if ( v21 != -1 )
      return v21 - v18;
    sub_18010A694(9, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    return v22;
  }
  v7 = Flags | *((_DWORD *)HeapHandle + 29);
  if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
    return sub_180105E5C(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v10 = sub_18006E5C8(HeapHandle, BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v8 = (int)BaseAddress;
      v9 = 9;
    }
    else
    {
      v10 = (unsigned __int64)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) != 0 )
        goto LABEL_9;
      v8 = v10;
      v9 = 8;
    }
    sub_18010A694(v9, (_DWORD)HeapHandle, v8, 0, 0LL, 0LL);
    v10 = 0LL;
  }
LABEL_9:
  if ( v10 )
  {
    v11 = *(_BYTE *)(v10 + 15);
    if ( v11 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v26 = *(_DWORD *)(v10 + 8);
        LOWORD(v31) = v26;
        if ( (v26 & *((_DWORD *)HeapHandle + 31)) != 0 )
          v31 = *((_DWORD *)HeapHandle + 34) ^ v26;
        v27 = v31;
      }
      else
      {
        v27 = *(_WORD *)(v10 + 8);
      }
      return *(_QWORD *)(v10 - 16) - v27;
    }
    if ( v11 < 0 )
    {
      if ( (unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_180166580 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)(v10
                        - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_180166580 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
      v13 = *(_WORD *)(v23 + 36);
    }
    else if ( *((_DWORD *)HeapHandle + 31) )
    {
      v12 = *(_DWORD *)(v10 + 8);
      LOWORD(v29) = v12;
      if ( (v12 & *((_DWORD *)HeapHandle + 31)) != 0 )
        v29 = *((_DWORD *)HeapHandle + 34) ^ v12;
      v13 = v29;
    }
    else
    {
      v13 = *(_WORD *)(v10 + 8);
    }
    v14 = *(_BYTE *)(v10 + 15);
    if ( v14 == 5 )
    {
      v15 = *((unsigned __int16 *)HeapHandle + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)(v10 + 16LL * (v14 & 0x3F) + 12);
    }
    else if ( (v14 & 0x3F) == 0x3F )
    {
      if ( v14 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v25 = *(_DWORD *)(v10 + 8);
          LOWORD(v30) = v25;
          if ( (v25 & *((_DWORD *)HeapHandle + 31)) != 0 )
            v30 = *((_DWORD *)HeapHandle + 34) ^ v25;
          v15 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)v30);
          return 16LL * v13 - v15;
        }
        v24 = *(_WORD *)(v10 + 8);
      }
      else
      {
        if ( !((unsigned __int16)HeapHandle ^ (unsigned __int16)(qword_180166580 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))) )
          v3 = *(_QWORD *)(v10
                         - ((unsigned __int64)((unsigned int)HeapHandle ^ (unsigned int)qword_180166580 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
        v24 = *(_WORD *)(v3 + 36);
      }
      v15 = *(_QWORD *)(v10 + 16LL * v24);
    }
    else
    {
      v15 = v14 & 0x3F;
    }
    return 16LL * v13 - v15;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v28 = NtCurrentTeb();
  v28->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return -1LL;
}
