/*
 * XREFs of AdjustSrcDevGamma @ 0x1C00151F8
 * Callers:
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 * Callees:
 *     Log @ 0x1C0012490 (Log.c)
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  unsigned int v9; // r12d
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  int v15; // r9d
  int v16; // ebx
  int v17; // r14d
  int v18; // esi
  int v19; // r13d
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // xmm0_8
  int v26; // r13d
  unsigned __int8 v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // [rsp+20h] [rbp-30h]
  int v37; // [rsp+24h] [rbp-2Ch]
  int v38; // [rsp+24h] [rbp-2Ch]
  __int64 v39; // [rsp+28h] [rbp-28h]
  __int64 v40; // [rsp+38h] [rbp-18h]
  int v41; // [rsp+98h] [rbp+48h]
  unsigned int v42; // [rsp+A0h] [rbp+50h]
  int v43; // [rsp+B0h] [rbp+60h]

  v9 = 0;
  v10 = 0;
  LODWORD(v40) = DivFD6(a3[3], 10000LL, a3);
  v36 = DivFD6(a3[4], 10000LL, v11);
  HIDWORD(v40) = v36;
  v13 = DivFD6(a3[5], 10000LL, v12);
  *(_DWORD *)a2 &= ~0x1000u;
  v14 = v13;
  v41 = 1000000;
  v37 = v13;
  if ( (a5 & 8) == 0 )
  {
    v21 = 1000000;
    v43 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( a4 )
      {
        if ( a4 <= 2u )
          goto LABEL_32;
        if ( a4 > 4u )
        {
          if ( a4 <= 6u )
          {
LABEL_25:
            v17 = 1000000;
            HIDWORD(v39) = 1000000;
            v18 = 1000000;
            v16 = 1000000;
LABEL_26:
            LODWORD(v39) = v16;
LABEL_27:
            LODWORD(v40) = MulFD6(v40, v21);
            v19 = MulFD6(v36, v43);
            HIDWORD(v40) = v19;
            v13 = MulFD6(v37, v43);
            v38 = v13;
            v14 = v13;
            if ( v41 != 1000000 )
            {
              v16 = MulFD6(v16, v41);
              LODWORD(v39) = v16;
              v18 = MulFD6(v18, v41);
              HIDWORD(v39) = v18;
              v35 = MulFD6(v17, v41);
              v14 = v38;
              v17 = v35;
              v13 = v38;
            }
            v15 = v19;
            goto LABEL_3;
          }
          if ( a4 > 0xFBu )
          {
            if ( a4 <= 0xFDu )
              goto LABEL_25;
            if ( a4 == 0xFE )
            {
              v17 = 1025000;
              v18 = 1025000;
              HIDWORD(v39) = 1025000;
              v16 = 1025000;
              goto LABEL_26;
            }
LABEL_32:
            v17 = 1325000;
            a3[6] += 550;
            v16 = 1325000;
            a3[7] -= 300;
            v18 = 1325000;
            v39 = 0x1437C8001437C8LL;
            goto LABEL_27;
          }
        }
      }
      return 0LL;
    }
    v22 = RaisePower(1050000, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2);
    v23 = MulFD6(932500, v22);
    v25 = *(_QWORD *)(a1 + 144);
    v26 = *(_DWORD *)a2 | 0x1000;
    v17 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)a2 = v26;
    v42 = v23;
    v27 = *(_BYTE *)(a1 + 161);
    v39 = v25;
    if ( v27 <= 0xFu )
    {
      v28 = 25000 * ((v27 >> 1) + 41);
      v43 = v28;
      if ( a4 == 1 )
        v43 = MulFD6(v28, 1125000);
    }
    v29 = *(_DWORD *)(a1 + 192);
    if ( v29 <= 1000000 )
    {
      if ( v29 >= 1000000 )
        goto LABEL_48;
      v33 = (unsigned int)Log(v29 / 3);
      v31 = 4294490175LL;
    }
    else
    {
      v30 = DivFD6(333333LL, (unsigned int)v29, v24);
      v31 = (unsigned int)Log(v30);
      v33 = 4294490175LL;
    }
    v41 = DivFD6(v33, v31, v32);
LABEL_48:
    if ( !a4 )
      return 0LL;
    if ( a4 > 2u )
    {
      if ( a4 <= 4u )
        return 0LL;
      if ( a4 <= 6u )
        goto LABEL_59;
      if ( a4 <= 0xFBu )
        return 0LL;
      if ( a4 <= 0xFDu )
      {
LABEL_59:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          v34 = 1000000;
          *(_DWORD *)a2 = v26 & 0xFFFFEFFF;
          goto LABEL_56;
        }
      }
      else if ( a4 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v34 = DivFD6(v42, 932500LL, v24);
        v41 = 1000000;
        goto LABEL_56;
      }
    }
    v34 = v42;
LABEL_56:
    v18 = HIDWORD(v25);
    v21 = MulFD6(v43, v34);
    v16 = v25;
    v43 = v21;
    goto LABEL_27;
  }
  v15 = v36;
  v16 = 1000000;
  v10 = 1;
  v39 = 4294967297000000LL;
  v17 = 1000000;
  v18 = 1000000;
  v19 = v36;
LABEL_3:
  if ( (_DWORD)v40 != 1000000 || v19 != 1000000 || v13 != 1000000 )
    v10 |= 2u;
  if ( (_DWORD)v40 != *(_DWORD *)(a2 + 4) || v15 != *(_DWORD *)(a2 + 8) || v14 != *(_DWORD *)(a2 + 12) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 4) = v40;
    *(_DWORD *)(a2 + 12) = v14;
  }
  if ( v16 != 1000000 || v18 != 1000000 || v17 != 1000000 )
    v10 |= 4u;
  if ( v16 != *(_DWORD *)(a2 + 16) || v18 != *(_DWORD *)(a2 + 20) || v17 != *(_DWORD *)(a2 + 24) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 16) = v39;
    *(_DWORD *)(a2 + 24) = v17;
  }
  if ( (*(_DWORD *)a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v9;
}
