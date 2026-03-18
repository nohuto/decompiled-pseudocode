/*
 * XREFs of GreFillFontDir @ 0x1C02B2E7C
 * Callers:
 *     GreMakeFontDir @ 0x1C02B3244 (GreMakeFontDir.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GreFillFontDir(__int64 a1, int a2, __int64 a3)
{
  unsigned int CurrentThreadId; // eax
  char v7; // al
  char v8; // al
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // ax
  CHAR *v12; // rbx
  const WCHAR *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // r14d
  CHAR *v18; // rbx
  __int64 v19; // rax
  const WCHAR *v20; // r9
  __int64 v21; // rbp
  int v22; // ebp
  CHAR *v23; // rbx
  __int64 v24; // rax
  const WCHAR *v25; // r9

  *(_QWORD *)a3 = qword_1C0325558;
  *(_WORD *)(a3 + 8) = word_1C0325560;
  strcpy((char *)(a3 + 10), "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
  }
  memset((void *)(a3 + 37), 0, 0x21uLL);
  *(_DWORD *)(a3 + 37) = dword_1C0325550;
  v7 = 67;
  if ( a2 != 2 )
    v7 = 3;
  *(_BYTE *)(a3 + 70) = v7 | (a2 != 0 ? 0x80 : 0);
  *(_BYTE *)(a3 + 71) = *(_BYTE *)(a1 + 52);
  *(_BYTE *)(a3 + 72) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a3 + 73) = *(_BYTE *)(a1 + 57);
  *(_WORD *)(a3 + 74) = 72;
  *(_WORD *)(a3 + 76) = 72;
  *(_BYTE *)(a3 + 78) = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(a3 + 79) = *(_BYTE *)(a1 + 61);
  *(_WORD *)(a3 + 80) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 56);
  v8 = *(_BYTE *)(a1 + 68) + *(_BYTE *)(a1 + 64) - *(_BYTE *)(a1 + 66) - *(_BYTE *)(a1 + 62) - *(_BYTE *)(a1 + 60);
  if ( (__int16)(*(_WORD *)(a1 + 68)
               + *(_WORD *)(a1 + 64)
               - *(_WORD *)(a1 + 66)
               - *(_WORD *)(a1 + 62)
               - *(_WORD *)(a1 + 60)) <= 0 )
    v8 = 0;
  *(_BYTE *)(a3 + 82) = v8;
  v9 = *(_WORD *)(a1 + 68) + *(_WORD *)(a1 + 64) - *(_WORD *)(a1 + 66) - *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 60);
  if ( v9 <= 0 )
    HIBYTE(v9) = 0;
  *(_BYTE *)(a3 + 83) = HIBYTE(v9);
  *(_BYTE *)(a3 + 84) = -((*(_BYTE *)(a1 + 52) & 1) != 0);
  *(_BYTE *)(a3 + 85) = -((*(_BYTE *)(a1 + 52) & 2) != 0);
  *(_BYTE *)(a3 + 86) = -((*(_BYTE *)(a1 + 52) & 0x10) != 0);
  *(_BYTE *)(a3 + 87) = *(_BYTE *)(a1 + 46);
  *(_BYTE *)(a3 + 88) = *(_BYTE *)(a1 + 47);
  *(_BYTE *)(a3 + 89) = *(_BYTE *)(a1 + 44);
  *(_WORD *)(a3 + 90) = 0;
  *(_WORD *)(a3 + 92) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62);
  *(_BYTE *)(a3 + 94) = *(_BYTE *)(a1 + 45) & 0xF0 | (*(_DWORD *)(a1 + 48) >> 1) & 2 | ((*(_DWORD *)(a1 + 48) & 1) != 0
                                                                                      ? 6
                                                                                      : 0) | ((*(_DWORD *)(a1 + 48) & 0x401000) == 0);
  v10 = *(_WORD *)(a1 + 76);
  if ( !v10 )
    v10 = *(__int16 *)(a1 + 78) / 2;
  *(_BYTE *)(a3 + 95) = v10;
  v11 = *(_WORD *)(a1 + 76);
  if ( !v11 )
    v11 = *(__int16 *)(a1 + 78) / 2;
  *(_BYTE *)(a3 + 96) = HIBYTE(v11);
  *(_BYTE *)(a3 + 97) = *(_BYTE *)(a1 + 78);
  *(_BYTE *)(a3 + 98) = *(_BYTE *)(a1 + 79);
  *(_BYTE *)(a3 + 99) = *(_BYTE *)(a1 + 108);
  *(_BYTE *)(a3 + 100) = *(_BYTE *)(a1 + 109);
  *(_WORD *)(a3 + 101) = 513;
  *(_BYTE *)(a3 + 103) = 0;
  *(_BYTE *)(a3 + 104) = 0;
  *(_BYTE *)(a3 + 105) = 0;
  *(_BYTE *)(a3 + 106) = 0;
  *(_BYTE *)(a3 + 107) = 0;
  *(_BYTE *)(a3 + 108) = 0;
  *(_DWORD *)(a3 + 109) = 118;
  *(_BYTE *)(a3 + 113) = *(_BYTE *)(a1 + 58);
  *(_BYTE *)(a3 + 114) = *(_BYTE *)(a1 + 59);
  *(_BYTE *)(a3 + 115) = *(_BYTE *)(a1 + 36);
  *(_BYTE *)(a3 + 116) = *(_BYTE *)(a1 + 37);
  v12 = (CHAR *)(a3 + 118);
  v13 = (const WCHAR *)(a1 + *(int *)(a1 + 8));
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( v13[v15] );
  RtlUnicodeToMultiByteN(v12, 0x20u, 0LL, v13, 2 * v15 + 2);
  v12[31] = 0;
  v16 = -1LL;
  do
    ++v16;
  while ( v12[v16] );
  v17 = v16 + 1;
  v18 = &v12[v17];
  v19 = -1LL;
  v20 = (const WCHAR *)(a1 + *(int *)(a1 + 16));
  do
    ++v19;
  while ( v20[v19] );
  RtlUnicodeToMultiByteN(v18, 0x40u, 0LL, v20, 2 * v19 + 2);
  v18[63] = 0;
  v21 = -1LL;
  do
    ++v21;
  while ( v18[v21] );
  v22 = v21 + 1;
  v23 = &v18[v22];
  v24 = -1LL;
  v25 = (const WCHAR *)(a1 + *(int *)(a1 + 12));
  do
    ++v24;
  while ( v25[v24] );
  RtlUnicodeToMultiByteN(v23, 0x20u, 0LL, v25, 2 * v24 + 2);
  v23[31] = 0;
  do
    ++v14;
  while ( v23[v14] );
  return (unsigned int)(v17 + v14 + v22 + 119);
}
