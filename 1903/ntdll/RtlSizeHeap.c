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

__int64 __fastcall RtlSizeHeap(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v7; // rdx
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
  __int64 v22; // rbp
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
  if ( !a1 )
    sub_18010A694(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (dword_18016273C & 2) != 0 && a3 )
      v18 = *(_QWORD *)(a3 - 16);
    else
      v18 = 0LL;
    v19 = sub_180040614(a2);
    v21 = sub_180040320(a1, v20, v19);
    v22 = v21;
    if ( v21 != -1 )
      return v21 - v18;
    sub_18010A694(9, a1, a3, 0, 0LL, 0LL);
    return v22;
  }
  v7 = a2 | *(_DWORD *)(a1 + 116);
  if ( (v7 & 0x61000000) != 0 && (v7 & 0x10000000) == 0 )
    return sub_180105E5C(a1, v7, a3);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = sub_18006E5C8(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v8 = a3;
      v9 = 9;
    }
    else
    {
      v10 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) != 0 )
        goto LABEL_9;
      v8 = v10;
      v9 = 8;
    }
    sub_18010A694(v9, a1, v8, 0, 0LL, 0LL);
    v10 = 0LL;
  }
LABEL_9:
  if ( v10 )
  {
    v11 = *(_BYTE *)(v10 + 15);
    if ( v11 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v26 = *(_DWORD *)(v10 + 8);
        LOWORD(v31) = v26;
        if ( (v26 & *(_DWORD *)(a1 + 124)) != 0 )
          v31 = *(_DWORD *)(a1 + 136) ^ v26;
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
      if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_180166580 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)(v10
                        - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_180166580 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
      v13 = *(_WORD *)(v23 + 36);
    }
    else if ( *(_DWORD *)(a1 + 124) )
    {
      v12 = *(_DWORD *)(v10 + 8);
      LOWORD(v29) = v12;
      if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
        v29 = *(_DWORD *)(a1 + 136) ^ v12;
      v13 = v29;
    }
    else
    {
      v13 = *(_WORD *)(v10 + 8);
    }
    v14 = *(_BYTE *)(v10 + 15);
    if ( v14 == 5 )
    {
      v15 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)(v10 + 16LL * (v14 & 0x3F) + 12);
    }
    else if ( (v14 & 0x3F) == 0x3F )
    {
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v25 = *(_DWORD *)(v10 + 8);
          LOWORD(v30) = v25;
          if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
            v30 = *(_DWORD *)(a1 + 136) ^ v25;
          v15 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)v30);
          return 16LL * v13 - v15;
        }
        v24 = *(_WORD *)(v10 + 8);
      }
      else
      {
        if ( !((unsigned __int16)a1 ^ (unsigned __int16)(qword_180166580 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))) )
          v3 = *(_QWORD *)(v10
                         - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_180166580 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
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
