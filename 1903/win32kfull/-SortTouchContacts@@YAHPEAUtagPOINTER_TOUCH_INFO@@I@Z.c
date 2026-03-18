/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DE75C
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall SortTouchContacts(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // r11d
  __int128 *v7; // r9
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  _OWORD *v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _OWORD *v16; // rdx
  unsigned int v17; // edx
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

  v3 = a1;
  if ( a2 )
  {
    v5 = 1;
    if ( a2 / 9 <= 1 )
      goto LABEL_28;
    do
      v5 = 3 * v5 + 1;
    while ( v5 < a2 / 9 );
    if ( v5 )
    {
LABEL_28:
      do
      {
        if ( v5 < a2 )
        {
          v6 = 0;
          v7 = (__int128 *)(v3 + 144LL * v5);
          do
          {
            v8 = v6;
            v9 = v6;
            v21 = *v7;
            v22 = v7[1];
            v23 = v7[2];
            v24 = v7[3];
            v25 = v7[4];
            v26 = v7[5];
            v27 = v7[6];
            v28 = v7[7];
            v29 = v7[8];
            if ( v6 >= 0 )
            {
              v10 = v6 + v5;
              v11 = v3 + 144LL * v6;
              do
              {
                if ( *(_DWORD *)(v11 + 4) <= DWORD1(v21) )
                  break;
                v9 -= v5;
                v12 = 144 * v10;
                v10 = (unsigned int)v10 - v5;
                v13 = (_OWORD *)(v3 + v12);
                *v13 = *(_OWORD *)v11;
                v13[1] = *(_OWORD *)(v11 + 16);
                v13[2] = *(_OWORD *)(v11 + 32);
                v13[3] = *(_OWORD *)(v11 + 48);
                v13[4] = *(_OWORD *)(v11 + 64);
                v13[5] = *(_OWORD *)(v11 + 80);
                v13[6] = *(_OWORD *)(v11 + 96);
                v13[7] = *(_OWORD *)(v11 + 112);
                v14 = *(_OWORD *)(v11 + 128);
                v11 -= 144LL * (int)v5;
                v8 -= (int)v5;
                v13[8] = v14;
              }
              while ( v8 >= 0 );
            }
            v15 = v9 + v5;
            if ( v6 + v5 != (_DWORD)v15 )
            {
              v16 = (_OWORD *)(v3 + 144 * v15);
              *v16 = v21;
              v16[1] = v22;
              v16[2] = v23;
              v16[3] = v24;
              v16[4] = v25;
              v16[5] = v26;
              v16[6] = v27;
              v16[7] = v28;
              v16[8] = v29;
            }
            ++v6;
            v7 += 9;
          }
          while ( v6 + v5 < a2 );
        }
        v5 /= 3u;
      }
      while ( v5 );
    }
    v17 = 1;
    if ( a2 <= 1 )
      return 1LL;
    for ( i = (_DWORD *)(v3 + 148); *i != *(_DWORD *)(v3 + 144LL * (v17 - 1) + 4); i += 36 )
    {
      if ( ++v17 >= a2 )
        return 1LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 18;
      a1 = 18LL * v17;
      v20 = *(_DWORD *)(v3 + 144LL * v17 + 4);
      goto LABEL_24;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 17;
    v20 = 0;
LABEL_24:
    WPP_RECORDER_SF_D(a1, 2u, 0x14u, v4, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v20);
  }
  return 0LL;
}
