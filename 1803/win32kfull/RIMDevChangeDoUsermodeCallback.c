/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C019F408
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C010E9C4 (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // r8
  __int16 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v3 + 416);
  if ( *(_BYTE *)(v3 + 128) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v7, v6);
        if ( *(_UNKNOWN ***)(v5 + 32) == result )
        {
          if ( *(_QWORD *)(v5 + 624) )
          {
            *(_BYTE *)(v5 + 75) = 1;
            if ( *(_BYTE *)(v5 + 72) && !*(_BYTE *)(v5 + 73) || *(_BYTE *)(v5 + 74) )
              RIMUnlockExclusive(v5 + 552);
            RIMUnlockExclusive(v5 + 96);
            RawInputManagerDeviceObjectReference(v3);
            v8 = 0;
            v9 = 0;
            *(_QWORD *)(gptiCurrent + 1320LL) = v3;
            if ( *(_BYTE *)(v3 + 128) == 2 )
            {
              v10 = *(_QWORD *)(v3 + 544);
              if ( v10 )
              {
                v8 = *(_WORD *)(v10 + 40);
                v9 = *(_WORD *)(v10 + 42);
              }
            }
            v11 = *(_QWORD *)(v3 + 96);
            if ( (*(_DWORD *)(v3 + 264) & 0x1000) != 0 )
            {
              v12 = *(_DWORD *)a1;
              if ( *(_DWORD *)a1 == 1 )
              {
                *(_DWORD *)a1 = 2;
                v12 = 2;
              }
              if ( v12 == 4 )
                *(_DWORD *)a1 = 3;
              v13 = *(_DWORD *)(v3 + 264);
              if ( (v13 & 0x20000) != 0 || (v13 & 0x40000) != 0 )
                v11 = *(_QWORD *)(v3 + 424);
            }
            xxxClientRimDevCallback(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 4),
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL),
              *(_DWORD *)(a1 + 8),
              *(_QWORD *)(v5 + 64),
              v11,
              v8,
              v9,
              *(_QWORD *)(v5 + 384),
              *(_QWORD *)(v5 + 624));
            *(_QWORD *)(gptiCurrent + 1320LL) = 0LL;
            RIMLockExclusive(v5 + 96);
            if ( *(_BYTE *)(v5 + 72) && !*(_BYTE *)(v5 + 73) || *(_BYTE *)(v5 + 74) )
              RIMLockExclusive(v5 + 552);
            *(_BYTE *)(v5 + 75) = 0;
            if ( (*(_DWORD *)(v3 + 280) & 0x80u) != 0 || (*(_DWORD *)(v3 + 264) & 0x1000) != 0 )
            {
              v14 = *(_DWORD *)a1;
              if ( *(_DWORD *)a1 == 2 )
              {
                *(_DWORD *)(v3 + 264) |= 0x400000u;
                v14 = *(_DWORD *)a1;
              }
              if ( v14 == 3 )
                *(_DWORD *)(v3 + 264) |= 0x800000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v3);
          }
        }
      }
    }
  }
  return result;
}
