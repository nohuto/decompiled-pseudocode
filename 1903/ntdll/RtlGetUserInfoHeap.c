/*
 * XREFs of RtlGetUserInfoHeap @ 0x18006E330
 * Callers:
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180040614 @ 0x180040614 (sub_180040614.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18006E5C8 @ 0x18006E5C8 (sub_18006E5C8.c)
 *     sub_18006E63C @ 0x18006E63C (sub_18006E63C.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

char __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  char v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  struct _TEB *v13; // rbx
  int v15; // r10d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  struct _TEB *v20; // rbx
  char v21; // [rsp+31h] [rbp-27h]
  __int64 v22; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v15 = sub_180040614(a2);
    v16 = *(_DWORD *)(a1 + 220);
    v17 = 0;
    if ( v16 )
      LOBYTE(v17) = v16 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v18 = v15 | 1;
    if ( !v17 )
      v18 = v15;
    if ( (dword_18016273C & 2) != 0 && v6 )
      v6 -= *(_QWORD *)(v6 - 16);
    return sub_18006E63C(a1, v6, v18, (_DWORD)a4, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return sub_1801052B0(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = sub_18006E5C8(a1, a3);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = sub_18006E5C8(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v19 = 9;
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
        v19 = 8;
      }
      sub_18010A694(v19, a1, a3, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( *(char *)(v9 + 15) >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw((const void *)v11);
      if ( *(_BYTE *)(v11 + 15) == 5 )
        v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
      v22 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v21 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
          sub_180101024(a1, v11);
      }
      if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
        {
          v12 = sub_18006E8DC(v11);
          if ( a4 )
            *a4 = *(_QWORD *)(v12 + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v11 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v13 = NtCurrentTeb();
        v13->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v22;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v21 )
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
  v20 = NtCurrentTeb();
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
