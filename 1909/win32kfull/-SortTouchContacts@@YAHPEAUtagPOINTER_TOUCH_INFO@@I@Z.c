/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DE5DC
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  struct tagPOINTER_TOUCH_INFO *v3; // rbx
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // edx
  int v7; // r11d
  __int128 *v8; // r9
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // r13
  char *v12; // rdi
  __int64 v13; // rdx
  _OWORD *v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  _DWORD *i; // r8
  int v20; // [rsp+28h] [rbp-C0h]
  __int128 v21; // [rsp+30h] [rbp-B8h]
  __int128 v22; // [rsp+40h] [rbp-A8h]
  __int128 v23; // [rsp+50h] [rbp-98h]
  __int128 v24; // [rsp+60h] [rbp-88h]
  __int128 v25; // [rsp+70h] [rbp-78h]
  __int128 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+A0h] [rbp-48h]
  __int128 v29; // [rsp+B0h] [rbp-38h]

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v5 = 1;
    v6 = a2 / 9;
    if ( v2 / 9 <= 1 )
      goto LABEL_28;
    do
      v5 = 3 * v5 + 1;
    while ( v5 < v6 );
    if ( v5 )
    {
LABEL_28:
      do
      {
        if ( v5 < v2 )
        {
          v7 = 0;
          v8 = (__int128 *)((char *)v3 + 144 * v5);
          do
          {
            v9 = v7;
            v10 = v7;
            v21 = *v8;
            v22 = v8[1];
            v23 = v8[2];
            v24 = v8[3];
            v25 = v8[4];
            v26 = v8[5];
            v27 = v8[6];
            v28 = v8[7];
            v29 = v8[8];
            if ( v7 >= 0 )
            {
              v11 = v7 + v5;
              v12 = (char *)v3 + 144 * v7;
              do
              {
                if ( *((_DWORD *)v12 + 1) <= DWORD1(v21) )
                  break;
                v10 -= v5;
                v13 = 144 * v11;
                v11 = (unsigned int)v11 - v5;
                v14 = (_OWORD *)((char *)v3 + v13);
                *v14 = *(_OWORD *)v12;
                v14[1] = *((_OWORD *)v12 + 1);
                v14[2] = *((_OWORD *)v12 + 2);
                v14[3] = *((_OWORD *)v12 + 3);
                v14[4] = *((_OWORD *)v12 + 4);
                v14[5] = *((_OWORD *)v12 + 5);
                v14[6] = *((_OWORD *)v12 + 6);
                v14[7] = *((_OWORD *)v12 + 7);
                v15 = *((_OWORD *)v12 + 8);
                v12 -= 144 * (int)v5;
                v9 -= (int)v5;
                v14[8] = v15;
              }
              while ( v9 >= 0 );
            }
            v16 = v10 + v5;
            if ( v7 + v5 != (_DWORD)v16 )
            {
              v17 = (_OWORD *)((char *)v3 + 144 * v16);
              *v17 = v21;
              v17[1] = v22;
              v17[2] = v23;
              v17[3] = v24;
              v17[4] = v25;
              v17[5] = v26;
              v17[6] = v27;
              v17[7] = v28;
              v17[8] = v29;
            }
            ++v7;
            v8 += 9;
          }
          while ( v7 + v5 < v2 );
        }
        v5 /= 3u;
      }
      while ( v5 );
    }
    a2 = 1;
    if ( v2 <= 1 )
      return 1LL;
    for ( i = (_DWORD *)((char *)v3 + 148); *i != *((_DWORD *)v3 + 36 * a2 - 35); i += 36 )
    {
      if ( ++a2 >= v2 )
        return 1LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 18;
      LODWORD(a1) = 18 * a2;
      v20 = *((_DWORD *)v3 + 36 * a2 + 1);
      goto LABEL_24;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 17;
    LOBYTE(v20) = 0;
LABEL_24:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_D((_DWORD)a1, a2, 20, v4, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v20);
  }
  return 0LL;
}
