/*
 * XREFs of sub_180003428 @ 0x180003428
 * Callers:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 * Callees:
 *     sub_180002320 @ 0x180002320 (sub_180002320.c)
 *     sub_180002694 @ 0x180002694 (sub_180002694.c)
 *     sub_1800026B4 @ 0x1800026B4 (sub_1800026B4.c)
 *     sub_1800026D4 @ 0x1800026D4 (sub_1800026D4.c)
 *     sub_180002700 @ 0x180002700 (sub_180002700.c)
 *     sub_1800038BC @ 0x1800038BC (sub_1800038BC.c)
 *     sub_180003B7C @ 0x180003B7C (sub_180003B7C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180003428(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9,
        int a10,
        char *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  int v18; // ebp
  int v19; // edi
  int v20; // eax
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // ecx

  v18 = 0;
  v19 = a8;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = sub_180002694(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_1800026B4(a8);
      goto LABEL_11;
    case 2:
      if ( a8 >= 0 )
      {
        v19 = -2147024228;
        sub_1800038BC(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_1800026D4(v19);
      goto LABEL_11;
    case 3:
      v20 = sub_180002700(a8);
LABEL_11:
      v18 = v20;
      break;
  }
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v19;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_18004FE18);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 128) = a6;
  v23 = (__int64 (*)(void))qword_18004FD78;
  *(_DWORD *)(a15 + 56) = a2;
  *(_DWORD *)(a15 + 60) = v18;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_18004FD20 )
    qword_18004FD20(a15, a13, 1024LL);
  if ( qword_18004FD10 )
    qword_18004FD10(a15);
  if ( qword_18004FD48 )
    qword_18004FD48(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_180003B7C();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( byte_18004FCD0
    || (!qword_18004FCC0 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_18004FCC0()), v25) )
  {
    if ( qword_18004FCD8 && !byte_18004FCF8 )
      qword_18004FCD8(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      sub_180002320(lpOutputString, 2048LL, a15);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( qword_18004FCD8 && !byte_18004FCF8 )
  {
    qword_18004FCD8(a15, 0LL, 0LL);
  }
  if ( byte_18004FCE0 )
  {
    if ( qword_18004FD30 )
      qword_18004FD30();
  }
}
