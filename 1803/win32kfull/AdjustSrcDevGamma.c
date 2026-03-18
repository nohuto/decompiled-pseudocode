/*
 * XREFs of AdjustSrcDevGamma @ 0x1C00D3114
 * Callers:
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     Log @ 0x1C0133680 (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  unsigned int v9; // r13d
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // r14d
  int v15; // esi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  unsigned __int8 v20; // al
  int v21; // r12d
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-30h]
  unsigned int v29; // [rsp+20h] [rbp-30h]
  int v30; // [rsp+24h] [rbp-2Ch]
  __int64 v31; // [rsp+28h] [rbp-28h]
  __int64 v32; // [rsp+38h] [rbp-18h]
  int v33; // [rsp+98h] [rbp+48h]
  int v34; // [rsp+A0h] [rbp+50h]
  unsigned int v35; // [rsp+B0h] [rbp+60h]

  v9 = 0;
  v10 = 0;
  LODWORD(v32) = DivFD6(a3[3], 10000LL);
  HIDWORD(v32) = DivFD6(a3[4], 10000LL);
  v11 = DivFD6(a3[5], 10000LL);
  *(_DWORD *)a2 &= ~0x1000u;
  v12 = v11;
  v33 = 1000000;
  v28 = v11;
  if ( (a5 & 8) == 0 )
  {
    v17 = 1000000;
    v34 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( a4 )
      {
        if ( a4 <= 2u )
        {
LABEL_33:
          v14 = 1325000;
          a3[6] += 550;
          v13 = 1325000;
          a3[7] -= 300;
          v15 = 1325000;
          v31 = 0x1437C8001437C8LL;
          goto LABEL_25;
        }
        if ( a4 > 4u )
        {
          if ( a4 <= 6u )
          {
LABEL_23:
            v14 = 1000000;
            HIDWORD(v31) = 1000000;
            v15 = 1000000;
            v13 = 1000000;
LABEL_24:
            LODWORD(v31) = v13;
            goto LABEL_25;
          }
          if ( a4 > 0xFBu )
          {
            if ( a4 <= 0xFDu )
              goto LABEL_23;
            if ( a4 == 0xFE )
            {
              v14 = 1025000;
              v15 = 1025000;
              HIDWORD(v31) = 1025000;
              v13 = 1025000;
              goto LABEL_24;
            }
            goto LABEL_33;
          }
        }
      }
      return 0LL;
    }
    v18 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v19 = MulFD6(932500, v18);
    v14 = *(_DWORD *)(a1 + 152);
    v35 = v19;
    v31 = *(_QWORD *)(a1 + 144);
    v30 = *(_DWORD *)a2 | 0x1000;
    *(_DWORD *)a2 = v30;
    v20 = *(_BYTE *)(a1 + 161);
    if ( v20 > 0xFu )
    {
      v21 = 1000000;
    }
    else
    {
      v21 = 25000 * ((v20 >> 1) + 41);
      if ( a4 == 1 )
        v21 = MulFD6(v21, 1125000);
    }
    v22 = *(_DWORD *)(a1 + 192);
    if ( v22 <= 1000000 )
    {
      if ( v22 >= 1000000 )
        goto LABEL_44;
      v25 = (unsigned int)Log((unsigned int)(v22 / 3));
      v24 = 4294490175LL;
    }
    else
    {
      v23 = DivFD6(333333LL, (unsigned int)v22);
      v24 = (unsigned int)Log(v23);
      v25 = 4294490175LL;
    }
    v33 = DivFD6(v25, v24);
LABEL_44:
    if ( !a4 )
      return 0LL;
    if ( a4 > 2u )
    {
      if ( a4 <= 4u )
        return 0LL;
      if ( a4 <= 6u )
        goto LABEL_55;
      if ( a4 <= 0xFBu )
        return 0LL;
      if ( a4 <= 0xFDu )
      {
LABEL_55:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          *(_DWORD *)a2 = v30 & 0xFFFFEFFF;
          v26 = 1000000;
          goto LABEL_52;
        }
      }
      else if ( a4 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v26 = DivFD6(v35, 932500LL);
        v33 = 1000000;
        goto LABEL_52;
      }
    }
    v26 = v35;
LABEL_52:
    v15 = HIDWORD(v31);
    v17 = MulFD6(v21, v26);
    v13 = v31;
    v34 = v17;
LABEL_25:
    LODWORD(v32) = MulFD6(v32, v17);
    HIDWORD(v32) = MulFD6(SHIDWORD(v32), v34);
    v29 = MulFD6(v28, v34);
    v12 = v29;
    if ( v33 != 1000000 )
    {
      LODWORD(v31) = MulFD6(v13, v33);
      v13 = v31;
      HIDWORD(v31) = MulFD6(v15, v33);
      v15 = HIDWORD(v31);
      v27 = MulFD6(v14, v33);
      v12 = v29;
      v14 = v27;
    }
    goto LABEL_3;
  }
  v13 = 1000000;
  v10 = 1;
  v31 = 4294967297000000LL;
  v14 = 1000000;
  v15 = 1000000;
LABEL_3:
  if ( (_DWORD)v32 != 1000000 || __PAIR64__(HIDWORD(v32), 1000000) != (v12 | 0xF424000000000LL) )
    v10 |= 2u;
  if ( (_DWORD)v32 != *(_DWORD *)(a2 + 4) || __PAIR64__(v12, HIDWORD(v32)) != *(_QWORD *)(a2 + 8) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 4) = v32;
    *(_DWORD *)(a2 + 12) = v12;
  }
  if ( v13 != 1000000 || v15 != 1000000 || v14 != 1000000 )
    v10 |= 4u;
  if ( v13 != *(_DWORD *)(a2 + 16) || v15 != *(_DWORD *)(a2 + 20) || v14 != *(_DWORD *)(a2 + 24) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 16) = v31;
    *(_DWORD *)(a2 + 24) = v14;
  }
  if ( (*(_DWORD *)a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v9;
}
