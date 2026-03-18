/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01C05BC
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C02081B8 (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(_DWORD *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // r8
  __int16 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *((_QWORD *)a1 + 3);
  v5 = *(_QWORD *)(v3 + 424);
  if ( *(_BYTE *)(v3 + 136) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v7, v6, v8, v9);
        if ( *(_UNKNOWN ***)(v5 + 32) == result )
        {
          if ( *(_QWORD *)(v5 + 640) )
          {
            *(_BYTE *)(v5 + 82) = 1;
            if ( *(_BYTE *)(v5 + 80) && !*(_BYTE *)(v5 + 81) || (*(_DWORD *)(v5 + 884) & 2) != 0 )
              RIMUnlockExclusive(v5 + 568);
            RIMUnlockExclusive(v5 + 104);
            RawInputManagerDeviceObjectReference(v3);
            v10 = 0;
            v11 = 0;
            *(_QWORD *)(gptiCurrent + 1328LL) = v3;
            if ( *(_BYTE *)(v3 + 136) == 2 )
            {
              v12 = *(_QWORD *)(v3 + 552);
              if ( v12 )
              {
                v10 = *(_WORD *)(v12 + 40);
                v11 = *(_WORD *)(v12 + 42);
              }
            }
            v13 = *(_QWORD *)(v3 + 104);
            if ( (*(_DWORD *)(v3 + 272) & 0x2000) != 0 )
            {
              v14 = *a1;
              if ( *a1 == 1 )
              {
                *a1 = 2;
                v14 = 2;
              }
              if ( v14 == 4 )
                *a1 = 3;
              v15 = *(_DWORD *)(v3 + 272);
              if ( (v15 & 0x20000) != 0 || (v15 & 0x40000) != 0 )
                v13 = *(_QWORD *)(v3 + 432);
            }
            xxxClientRimDevCallback(
              *a1,
              a1[1],
              *(_DWORD *)(*((_QWORD *)a1 + 3) + 72LL),
              a1[2],
              *(_QWORD *)(v5 + 72),
              v13,
              v10,
              v11,
              *(_QWORD *)(v5 + 400),
              *(_QWORD *)(v5 + 640));
            *(_QWORD *)(gptiCurrent + 1328LL) = 0LL;
            RIMLockExclusive(v5 + 104);
            if ( *(_BYTE *)(v5 + 80) && !*(_BYTE *)(v5 + 81) || (*(_DWORD *)(v5 + 884) & 2) != 0 )
              RIMLockExclusive(v5 + 568);
            *(_BYTE *)(v5 + 82) = 0;
            if ( (*(_DWORD *)(v3 + 288) & 0x80u) != 0 || (*(_DWORD *)(v3 + 272) & 0x2000) != 0 )
            {
              v16 = *a1;
              if ( *a1 == 2 )
              {
                *(_DWORD *)(v3 + 272) |= 0x400000u;
                v16 = *a1;
              }
              if ( v16 == 3 )
                *(_DWORD *)(v3 + 272) |= 0x800000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v3);
          }
        }
      }
    }
  }
  return result;
}
