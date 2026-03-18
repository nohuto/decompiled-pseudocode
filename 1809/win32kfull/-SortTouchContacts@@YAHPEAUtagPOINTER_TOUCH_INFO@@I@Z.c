/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01CAD78
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  unsigned int v4; // r8d
  int v5; // r11d
  __int128 *v6; // r10
  __int64 v7; // rsi
  int v8; // r15d
  __int64 v9; // r13
  char *v10; // rdi
  __int64 v11; // rdx
  _OWORD *v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  int v16; // r8d
  _DWORD *i; // r10
  __int128 v19; // [rsp+0h] [rbp-B8h]
  __int128 v20; // [rsp+10h] [rbp-A8h]
  __int128 v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+30h] [rbp-88h]
  __int128 v23; // [rsp+40h] [rbp-78h]
  __int128 v24; // [rsp+50h] [rbp-68h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  __int128 v26; // [rsp+70h] [rbp-48h]
  __int128 v27; // [rsp+80h] [rbp-38h]

  if ( a2 )
  {
    v4 = 1;
    if ( a2 / 9 <= 1 )
      goto LABEL_23;
    do
      v4 = 3 * v4 + 1;
    while ( v4 < a2 / 9 );
    if ( v4 )
    {
LABEL_23:
      do
      {
        if ( v4 < a2 )
        {
          v5 = 0;
          v6 = (__int128 *)((char *)a1 + 144 * v4);
          do
          {
            v7 = v5;
            v8 = v5;
            v19 = *v6;
            v20 = v6[1];
            v21 = v6[2];
            v22 = v6[3];
            v23 = v6[4];
            v24 = v6[5];
            v25 = v6[6];
            v26 = v6[7];
            v27 = v6[8];
            if ( v5 >= 0 )
            {
              v9 = v5 + v4;
              v10 = (char *)a1 + 144 * v5;
              do
              {
                if ( *((_DWORD *)v10 + 1) <= DWORD1(v19) )
                  break;
                v8 -= v4;
                v11 = 144 * v9;
                v9 = (unsigned int)v9 - v4;
                v12 = (_OWORD *)((char *)a1 + v11);
                *v12 = *(_OWORD *)v10;
                v12[1] = *((_OWORD *)v10 + 1);
                v12[2] = *((_OWORD *)v10 + 2);
                v12[3] = *((_OWORD *)v10 + 3);
                v12[4] = *((_OWORD *)v10 + 4);
                v12[5] = *((_OWORD *)v10 + 5);
                v12[6] = *((_OWORD *)v10 + 6);
                v12[7] = *((_OWORD *)v10 + 7);
                v13 = *((_OWORD *)v10 + 8);
                v10 -= 144 * (int)v4;
                v7 -= (int)v4;
                v12[8] = v13;
              }
              while ( v7 >= 0 );
            }
            v14 = v8 + v4;
            if ( v5 + v4 != (_DWORD)v14 )
            {
              v15 = (_OWORD *)((char *)a1 + 144 * v14);
              *v15 = v19;
              v15[1] = v20;
              v15[2] = v21;
              v15[3] = v22;
              v15[4] = v23;
              v15[5] = v24;
              v15[6] = v25;
              v15[7] = v26;
              v15[8] = v27;
            }
            ++v5;
            v6 += 9;
          }
          while ( v5 + v4 < a2 );
        }
        v4 /= 3u;
      }
      while ( v4 );
    }
    v16 = 1;
    if ( a2 <= 1 )
      return 1LL;
    for ( i = (_DWORD *)((char *)a1 + 148); *i != *((_DWORD *)a1 + 36 * (unsigned int)(v16 - 1) + 1); i += 36 )
    {
      if ( ++v16 >= a2 )
        return 1LL;
    }
  }
  return 0LL;
}
