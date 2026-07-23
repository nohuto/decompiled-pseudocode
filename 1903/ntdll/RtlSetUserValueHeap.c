/*
 * XREFs of RtlSetUserValueHeap @ 0x18006E6A0
 * Callers:
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180040614 @ 0x180040614 (sub_180040614.c)
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18006E5C8 @ 0x18006E5C8 (sub_18006E5C8.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  BOOLEAN v6; // r15
  char v7; // r12
  unsigned __int64 v8; // r10
  int v9; // r11d
  int v10; // edx
  int v11; // ecx
  BOOLEAN v12; // si
  int v13; // edx
  unsigned __int64 v14; // rcx
  ULONG v16; // r14d
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
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v9 = sub_180040614(Flags);
    v10 = *((_DWORD *)HeapHandle + 55);
    v11 = 0;
    if ( v10 )
      LOBYTE(v11) = v10 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v12 = 1;
    v13 = v9 | 1;
    if ( !v11 )
      v13 = v9;
    if ( (dword_18016273C & 2) != 0 && v8 )
      v8 -= *(_QWORD *)(v8 - 16);
    v14 = sub_180046D10((__int64)HeapHandle, v8, (unsigned int)v13 | *((_DWORD *)HeapHandle + 5), 0LL);
    if ( v14 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      v12 = 0;
    else
      *(_QWORD *)(v14 + 8) = UserValue;
    if ( !v12 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v21 = NtCurrentTeb();
      v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v12;
  }
  v16 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return sub_180105CC8(HeapHandle);
  if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
  {
    v18 = sub_18006E5C8((int)HeapHandle, (__int64)BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v17 = 9;
LABEL_16:
      sub_18010A694(v17, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v18 = 0LL;
      goto LABEL_17;
    }
    v18 = (unsigned __int8 *)BaseAddress - 16;
    _m_prefetchw((char *)BaseAddress - 16);
    if ( *((char *)BaseAddress - 1) == 5 )
      v18 -= 16 * v18[14];
    if ( (v18[15] & 0x3F) == 0 )
    {
      LODWORD(BaseAddress) = (_DWORD)v18;
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
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v7 = 1;
    v23 = 1;
  }
  v19 = v18[15];
  if ( (v19 & 0x3F) != 0 )
  {
    if ( v19 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v18 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v18[11] != (v18[8] ^ (unsigned __int8)(v18[9] ^ v18[10])) )
          sub_180101024(HeapHandle, v18);
      }
      if ( (v18[10] & 2) != 0 )
      {
        *(_QWORD *)(sub_18006E8DC(v18) + 8) = UserValue;
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
  if ( v18 && *((_DWORD *)HeapHandle + 31) )
  {
    v18[11] = v18[8] ^ v18[9] ^ v18[10];
    *((_DWORD *)v18 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v7 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v6;
}
