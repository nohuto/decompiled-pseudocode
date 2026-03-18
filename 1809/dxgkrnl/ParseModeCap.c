/*
 * XREFs of ParseModeCap @ 0x1C02946E4
 * Callers:
 *     ParseFreqRangeValue @ 0x1C0294634 (ParseFreqRangeValue.c)
 *     ParseResolutionKeyName @ 0x1C029489C (ParseResolutionKeyName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C021C250 (-xwtol@@YAKPEBG@Z.c)
 *     xwcschr @ 0x1C0296FB0 (xwcschr.c)
 */

char __fastcall ParseModeCap(_WORD *a1, char a2, _DWORD *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r11
  int v7; // esi
  int v9; // eax
  int v10; // ecx
  __int64 v13; // r8
  unsigned int v14; // ebx
  _WORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  _WORD *v18; // rdi
  _WORD *v19; // rax
  unsigned __int16 *v20; // r10
  __int64 v21; // r9
  int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // edi
  _WORD *v25; // rax
  unsigned __int16 *v26; // r10
  _WORD *v27; // rbx
  int v28; // r9d
  __int64 v29; // rax
  int v30; // ecx
  int v32; // [rsp+20h] [rbp-20h]
  int v33; // [rsp+24h] [rbp-1Ch]
  int v34; // [rsp+28h] [rbp-18h]
  int v35; // [rsp+2Ch] [rbp-14h]

  v6 = a6;
  v7 = -1;
  v32 = 0;
  v33 = -1;
  v9 = 0;
  v34 = 0;
  v10 = -1;
  v35 = -1;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = 0;
    if ( a1 )
    {
      do
      {
        if ( v14 >= 4 )
          break;
        v15 = (_WORD *)xwcschr(a1, 44LL, v13);
        v18 = v15;
        if ( v15 )
          *v15 = 0;
        v19 = (_WORD *)xwcschr(v17, 45LL, v16);
        if ( v19 )
        {
          *v19 = 0;
          *(&v32 + v14) = xwtol(v20);
          v20 = (unsigned __int16 *)(v21 + 2);
        }
        else
        {
          *(&v32 + v14) = 0;
        }
        v22 = xwtol(v20);
        a1 = v18 + 1;
        v23 = v14 + 1;
        v14 += 2;
        *(&v32 + v23) = v22;
      }
      while ( v18 );
      v10 = v35;
      v9 = v34;
      v7 = v33;
      LODWORD(v13) = v32;
    }
    if ( a3 )
      *a3 = v9;
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = 1000 * v13;
    if ( v6 )
      *v6 = 1000 * v7;
    return 1;
  }
  v24 = 0;
  if ( a1 )
  {
    do
    {
      if ( v24 >= 4 )
        break;
      v25 = (_WORD *)xwcschr(a1, 44LL, v13);
      v27 = v25;
      if ( v25 )
        *v25 = 0;
      v28 = xwtol(v26);
      a1 = v27 + 1;
      v29 = v24++;
      *(&v32 + v29) = v28;
    }
    while ( v27 );
    if ( v32 )
    {
      v30 = v33;
      if ( v33 != -1 )
      {
        if ( a3 )
          *a3 = v32;
        if ( a4 )
          *a4 = v30;
        if ( a5 )
          *a5 = v34;
        if ( v6 )
          *v6 = 0;
        return 1;
      }
    }
  }
  return 0;
}
