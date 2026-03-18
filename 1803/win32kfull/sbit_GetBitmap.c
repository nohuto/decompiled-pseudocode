/*
 * XREFs of sbit_GetBitmap @ 0x1C02B9DC0
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     CopyBit @ 0x1C02B78EC (CopyBit.c)
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 *     PadHorizontal @ 0x1C02B8230 (PadHorizontal.c)
 *     ScaleHorizontal @ 0x1C02B83E4 (ScaleHorizontal.c)
 *     ScaleVertical @ 0x1C02B88E4 (ScaleVertical.c)
 *     sbit_Embolden @ 0x1C02B8D68 (sbit_Embolden.c)
 *     sbit_EmboldenGray @ 0x1C02B9280 (sbit_EmboldenGray.c)
 */

__int64 __fastcall sbit_GetBitmap(unsigned int *a1, int a2, void *a3, char *a4)
{
  unsigned int v8; // r10d
  char *v9; // rsi
  unsigned int v10; // ecx
  __int16 v11; // r8
  void *v12; // r9
  __int64 v13; // rdx
  __int64 result; // rax
  __int16 v15; // dx
  char *v16; // r14
  __int16 v17; // cx
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // r12
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // si
  unsigned __int16 v23; // r11
  int v24; // ecx
  int v25; // ecx
  unsigned __int16 v26; // bx
  bool i; // cf
  unsigned __int16 v28; // r14
  unsigned __int16 v29; // bx
  bool k; // cf
  unsigned __int16 v31; // r14
  unsigned __int16 v32; // bx
  bool n; // cf
  unsigned __int16 v34; // r14
  __int16 v35; // [rsp+58h] [rbp-49h]
  __int64 v36[2]; // [rsp+B8h] [rbp+17h] BYREF
  __int16 v37; // [rsp+C8h] [rbp+27h]
  __int16 v38; // [rsp+CAh] [rbp+29h]
  unsigned __int16 ii; // [rsp+CCh] [rbp+2Bh]
  unsigned __int16 v40; // [rsp+CEh] [rbp+2Dh]
  unsigned __int16 j; // [rsp+D0h] [rbp+2Fh]
  unsigned __int16 m; // [rsp+D2h] [rbp+31h]
  __int16 v43; // [rsp+D4h] [rbp+33h]

  memset(a3, 0, a1[4]);
  if ( !*((_WORD *)a1 + 19) && *((_WORD *)a1 + 14) != 3 )
  {
    if ( *((_WORD *)a1 + 47) == 1 )
    {
      v8 = a1[4];
      v12 = a3;
      v9 = 0LL;
      v10 = 0;
      v11 = 1;
      goto LABEL_14;
    }
    memset(a4, 0, a1[5]);
    v8 = a1[5];
    v9 = (char *)a3;
    v10 = a1[4];
    v11 = *((_WORD *)a1 + 47);
    goto LABEL_13;
  }
  memset(a4, 0, a1[5]);
  v11 = *((_WORD *)a1 + 47);
  v10 = a1[5];
  v8 = v10;
  if ( v11 == 1 )
  {
    v9 = a4;
    v11 = 1;
LABEL_13:
    v12 = a4;
    goto LABEL_14;
  }
  v13 = a1[6];
  v12 = a4;
  v9 = &a4[v13];
  if ( (unsigned int)v13 > v10 )
    v9 = 0LL;
  v10 -= v13;
  if ( (unsigned int)v13 > a1[5] )
    v10 = 0;
LABEL_14:
  result = GetSbitComponent(
             a2,
             *a1,
             *((_WORD *)a1 + 22),
             a1[2],
             a1[3],
             *((_WORD *)a1 + 23),
             *((_WORD *)a1 + 24),
             *((_WORD *)a1 + 33),
             *((_WORD *)a1 + 34),
             *((_WORD *)a1 + 35),
             v35,
             0,
             0,
             1,
             *((_WORD *)a1 + 27),
             *((_WORD *)a1 + 28),
             v11,
             v8,
             v12,
             v10,
             (__int64)v9);
  if ( (_DWORD)result )
    return result;
  if ( *((_WORD *)a1 + 14) == 3 )
  {
    ScaleVertical(v9, *((_WORD *)a1 + 28), *((_WORD *)a1 + 23), *((_WORD *)a1 + 29));
    ScaleHorizontal(
      (unsigned __int8 *)v9,
      *((_WORD *)a1 + 28),
      *((_WORD *)a1 + 31),
      *((_WORD *)a1 + 47),
      *((_WORD *)a1 + 24),
      *((_WORD *)a1 + 30),
      *((_WORD *)a1 + 29));
    if ( !*((_WORD *)a1 + 19) )
      memmove(a3, v9, a1[4]);
  }
  else
  {
    v15 = *((_WORD *)a1 + 48);
    if ( v15 || *((_WORD *)a1 + 49) )
    {
      v16 = v9;
      v17 = *((_WORD *)a1 + 47);
      if ( !*((_WORD *)a1 + 19) )
        v16 = (char *)a3;
      if ( v17 == 1 )
      {
        sbit_Embolden(v16, *((_WORD *)a1 + 30), *((_WORD *)a1 + 29), *((_WORD *)a1 + 31), v15, *((_WORD *)a1 + 49));
      }
      else
      {
        v18 = *((_WORD *)a1 + 28);
        v19 = 1 << v17;
        v20 = *((_WORD *)a1 + 31);
        if ( v20 > v18 )
        {
          PadHorizontal((__int64)v16, v18, v20, *((_WORD *)a1 + 29));
          v15 = *((_WORD *)a1 + 48);
          v20 = *((_WORD *)a1 + 31);
        }
        sbit_EmboldenGray(v16, *((_WORD *)a1 + 30), *((_WORD *)a1 + 29), v20, v19, v15, *((_WORD *)a1 + 49));
      }
    }
  }
  v21 = *((_WORD *)a1 + 19);
  if ( v21 )
  {
    v37 = *((_WORD *)a1 + 31);
    v38 = *((_WORD *)a1 + 32);
    v36[0] = (__int64)v9;
    v36[1] = (__int64)a3;
    v43 = 1;
    if ( *((_WORD *)a1 + 47) != 1 )
      v43 = 8;
    v22 = *((_WORD *)a1 + 30);
    v23 = *((_WORD *)a1 + 29);
    v24 = v21 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
          return 6146LL;
        v26 = 0;
        for ( i = v23 != 0; ; i = v26 < v23 )
        {
          v40 = v26;
          if ( !i )
            break;
          ii = 0;
          v28 = 0;
          for ( j = v23 - v26 - 1; v28 < v22; ii = v28 )
          {
            m = v28;
            CopyBit(v36);
            ++v28;
          }
          ++v26;
        }
      }
      else
      {
        v29 = 0;
        for ( k = v23 != 0; ; k = v29 < v23 )
        {
          v40 = v29;
          if ( !k )
            break;
          ii = 0;
          v31 = 0;
          for ( m = v23 - v29 - 1; v31 < v22; ii = v31 )
          {
            j = v22 - v31 - 1;
            CopyBit(v36);
            ++v31;
          }
          ++v29;
        }
      }
    }
    else
    {
      v32 = 0;
      for ( n = v23 != 0; ; n = v32 < v23 )
      {
        v40 = v32;
        if ( !n )
          break;
        j = v32;
        v34 = 0;
        for ( ii = 0; v34 < v22; ii = v34 )
        {
          m = v22 - v34 - 1;
          CopyBit(v36);
          ++v34;
        }
        ++v32;
      }
    }
  }
  return 0LL;
}
