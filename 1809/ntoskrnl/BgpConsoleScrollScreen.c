/*
 * XREFs of BgpConsoleScrollScreen @ 0x140954C10
 * Callers:
 *     BgpConsoleDisplayCharacterEx @ 0x140954724 (BgpConsoleDisplayCharacterEx.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140327A64 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleScrollScreen()
{
  __int64 v0; // r10
  unsigned int v1; // edi
  __int64 v2; // rbx
  _DWORD *v3; // r12
  _DWORD *v4; // r13
  unsigned int v5; // r8d
  __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int16 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r9d
  __int64 *v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // r14d
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  unsigned __int64 v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+A0h] [rbp+8h] BYREF
  int v27; // [rsp+A8h] [rbp+10h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  int v29; // [rsp+B8h] [rbp+20h] BYREF

  v0 = qword_1404C7598;
  v1 = 0;
  v2 = 0LL;
  v3 = (_DWORD *)(qword_1404C7598 + 60);
  v4 = (_DWORD *)(qword_1404C7598 + 48);
  do
  {
    v5 = 0;
    if ( *(_DWORD *)(v0 + 4) != 1 )
    {
      do
      {
        v6 = v5 + 1;
        v7 = v5;
        v8 = *(_WORD *)(v0 + 12 * (v2 + v6) + 88);
        v9 = v2 + v5;
        v10 = 3 * v9;
        if ( *(_WORD *)(v0 + 12 * v9 + 88) != v8
          || *(_DWORD *)(v0 + 12 * v9 + 80) != *(_DWORD *)(v0 + 12 * (v2 + v6) + 80)
          || *(_DWORD *)(v0 + 12 * (v2 + v5 + 7LL)) != *(_DWORD *)(v0 + 12 * (v2 + v6 + 7)) )
        {
          v11 = v4[1];
          v12 = *(__int64 **)(v0 + 40);
          v26 = *(_DWORD *)(v0 + 12 * (v2 + v6) + 80);
          v13 = v3[1] + v5 * v11;
          v14 = *v3 + v1 * *v4;
          v27 = *(_DWORD *)(v0 + 12 * (v2 + v6 + 7));
          v15 = BgpDisplayCharacterEx(v8, v12, v14, v13, v27, v26, &v29, &v28, v25);
          v0 = qword_1404C7598;
          if ( v15 >= 0 )
          {
            *(_WORD *)(qword_1404C7598 + 4 * v10 + 88) = v8;
            *(_DWORD *)(v0 + 12 * (v2 + v7 + 7)) = v27;
            *(_DWORD *)(v0 + 4 * v10 + 80) = v26;
          }
        }
        v5 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v0 + 4) - 1 );
    }
    ++v1;
    v2 += 25LL;
  }
  while ( v1 < 0x50 );
  v16 = 0;
  v17 = *(_DWORD *)(v0 + 16);
  v18 = *(_DWORD *)(v0 + 4) - 1;
  v19 = *(_DWORD *)(v0 + 12);
  v20 = 0LL;
  do
  {
    v21 = BgpDisplayCharacterEx(
            0x20u,
            *(__int64 **)(v0 + 40),
            *v3 + v16 * *v4,
            v3[1] + v18 * v4[1],
            v17,
            v19,
            &v27,
            &v26,
            v25);
    v0 = qword_1404C7598;
    if ( v21 >= 0 )
    {
      v22 = v20 + v18;
      v23 = 3 * v22;
      *(_WORD *)(qword_1404C7598 + 4 * v23 + 88) = 32;
      *(_DWORD *)(v0 + 12 * v22 + 84) = v17;
      *(_DWORD *)(v0 + 4 * v23 + 80) = v19;
    }
    ++v16;
    v20 += 25LL;
  }
  while ( v16 < 0x50 );
  *(_DWORD *)(v0 + 68) = 0;
  result = (unsigned int)(*(_DWORD *)(v0 + 4) - 1);
  *(_DWORD *)(v0 + 72) = result;
  return result;
}
