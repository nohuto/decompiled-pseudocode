/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01D41CC
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01D4420 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C021F670 (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(_DWORD *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // r8
  __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *((_QWORD *)a1 + 3);
  v6 = *(_QWORD *)(v4 + 424);
  if ( *(_BYTE *)(v4 + 136) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v8, v7, v9, v10);
        if ( *(_UNKNOWN ***)(v6 + 32) == result )
        {
          if ( *(_QWORD *)(v6 + 640) )
          {
            *(_BYTE *)(v6 + 82) = 1;
            if ( *(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) || (*(_DWORD *)(v6 + 884) & 2) != 0 )
              RIMUnlockExclusive(v6 + 568);
            RIMUnlockExclusive(v6 + 104);
            RawInputManagerDeviceObjectReference(v4);
            v11 = 0;
            v12 = 0;
            *(_QWORD *)(gptiCurrent + 1352LL) = v4;
            if ( *(_BYTE *)(v4 + 136) == 2 )
            {
              v13 = *(_QWORD *)(v4 + 552);
              if ( v13 )
              {
                v11 = *(_WORD *)(v13 + 40);
                v12 = *(_WORD *)(v13 + 42);
              }
            }
            v14 = *(_QWORD *)(v4 + 104);
            if ( (*(_DWORD *)(v4 + 272) & 0x2000) != 0 )
            {
              v15 = *a1;
              if ( *a1 == 1 )
              {
                *a1 = 2;
                v15 = 2;
              }
              if ( v15 == 4 )
                *a1 = 3;
              v16 = *(_DWORD *)(v4 + 272);
              if ( (v16 & 0x20000) != 0 || (v16 & 0x40000) != 0 )
                v14 = *(_QWORD *)(v4 + 432);
            }
            xxxClientRimDevCallback(
              *a1,
              a1[1],
              *(_DWORD *)(*((_QWORD *)a1 + 3) + 72LL),
              a1[2],
              *(_QWORD *)(v6 + 72),
              v14,
              v11,
              v12,
              *(_QWORD *)(v6 + 400),
              *(_QWORD *)(v6 + 640));
            *(_QWORD *)(gptiCurrent + 1352LL) = 0LL;
            RIMLockExclusive(v6 + 104);
            if ( *(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) || (*(_DWORD *)(v6 + 884) & 2) != 0 )
              RIMLockExclusive(v6 + 568);
            *(_BYTE *)(v6 + 82) = 0;
            if ( (*(_DWORD *)(v4 + 288) & 0x80u) != 0 || (*(_DWORD *)(v4 + 272) & 0x2000) != 0 )
            {
              v17 = *a1;
              if ( *a1 == 2 )
              {
                *(_DWORD *)(v4 + 272) |= 0x400000u;
                v17 = *a1;
              }
              if ( v17 == 3 )
                *(_DWORD *)(v4 + 272) |= 0x800000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v4);
          }
        }
      }
    }
  }
  return result;
}
