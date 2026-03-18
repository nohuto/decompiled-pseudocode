/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01D435C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01D45B0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C021FBB0 (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // r8
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *((_QWORD *)a1 + 3);
  v7 = *(_QWORD *)(v5 + 424);
  if ( *(_BYTE *)(v5 + 136) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v9, v8, v10, v11);
        if ( *(_UNKNOWN ***)(v7 + 32) == result )
        {
          if ( *(_QWORD *)(v7 + 640) )
          {
            *(_BYTE *)(v7 + 82) = 1;
            if ( *(_BYTE *)(v7 + 80) && !*(_BYTE *)(v7 + 81) || (*(_DWORD *)(v7 + 884) & 2) != 0 )
              RIMUnlockExclusive(v7 + 568);
            RIMUnlockExclusive(v7 + 104);
            RawInputManagerDeviceObjectReference(v5);
            v12 = 0;
            v13 = 0;
            *(_QWORD *)(gptiCurrent + 1352LL) = v5;
            if ( *(_BYTE *)(v5 + 136) == 2 )
            {
              v14 = *(_QWORD *)(v5 + 552);
              if ( v14 )
              {
                v12 = *(_WORD *)(v14 + 40);
                v13 = *(_WORD *)(v14 + 42);
              }
            }
            v15 = *(_QWORD *)(v5 + 104);
            if ( (*(_DWORD *)(v5 + 272) & 0x2000) != 0 )
            {
              v16 = *a1;
              if ( *a1 == 1 )
              {
                *a1 = 2;
                v16 = 2;
              }
              if ( v16 == 4 )
                *a1 = 3;
              v17 = *(_DWORD *)(v5 + 272);
              if ( (v17 & 0x20000) != 0 || (v17 & 0x40000) != 0 )
                v15 = *(_QWORD *)(v5 + 432);
            }
            xxxClientRimDevCallback(
              *a1,
              a1[1],
              *(_DWORD *)(*((_QWORD *)a1 + 3) + 72LL),
              a1[2],
              *(_QWORD *)(v7 + 72),
              v15,
              v12,
              v13,
              *(_QWORD *)(v7 + 400),
              *(_QWORD *)(v7 + 640));
            *(_QWORD *)(gptiCurrent + 1352LL) = 0LL;
            RIMLockExclusive(v7 + 104);
            if ( *(_BYTE *)(v7 + 80) && !*(_BYTE *)(v7 + 81) || (*(_DWORD *)(v7 + 884) & 2) != 0 )
              RIMLockExclusive(v7 + 568);
            *(_BYTE *)(v7 + 82) = 0;
            if ( (*(_DWORD *)(v5 + 288) & 0x80u) != 0 || (*(_DWORD *)(v5 + 272) & 0x2000) != 0 )
            {
              v18 = *a1;
              if ( *a1 == 2 )
              {
                *(_DWORD *)(v5 + 272) |= 0x400000u;
                v18 = *a1;
              }
              if ( v18 == 3 )
                *(_DWORD *)(v5 + 272) |= 0x800000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v5);
          }
        }
      }
    }
  }
  return result;
}
