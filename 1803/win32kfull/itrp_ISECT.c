/*
 * XREFs of itrp_ISECT @ 0x1C02C9370
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     Mul26Dot6 @ 0x1C02B3178 (Mul26Dot6.c)
 *     AddProportion @ 0x1C02C4C40 (AddProportion.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_ISECT(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  _WORD *v3; // rcx
  __int64 v4; // rbp
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // ax
  __int64 v8; // r15
  unsigned __int16 v9; // ax
  int v10; // r13d
  __int16 v11; // r14
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // r13d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  int v18; // ecx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  int v21; // r13d
  int v22; // ebp
  __int16 v23; // r15
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  int v26; // r13d
  int v27; // ebp
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rdx
  int v31; // r8d
  __int64 v32; // rax
  int v33; // ebp
  int v34; // r13d
  int v35; // esi
  int v36; // eax
  unsigned __int16 v37; // ax
  __int64 v38; // rsi
  int v39; // edi
  __int64 v40; // rbx
  int v41; // ebp
  __int16 v42; // ax
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // r15
  __int64 v46; // r12
  int v47; // eax
  int v48; // eax
  int v50; // edx
  int v51; // r10d
  int v52; // esi
  int v53; // edi
  int v54; // r8d
  int v55; // ecx
  int v56; // r9d
  int v57; // esi
  int v58; // r14d
  int v59; // [rsp+30h] [rbp-88h]
  int v60; // [rsp+30h] [rbp-88h]
  int v61; // [rsp+34h] [rbp-84h]
  int v62; // [rsp+38h] [rbp-80h]
  int v63; // [rsp+3Ch] [rbp-7Ch]
  int v64; // [rsp+40h] [rbp-78h]
  int v65; // [rsp+44h] [rbp-74h]
  int v66; // [rsp+48h] [rbp-70h]
  __int64 v67; // [rsp+50h] [rbp-68h]
  _WORD *v68; // [rsp+58h] [rbp-60h]
  __int64 v69; // [rsp+60h] [rbp-58h]
  int *v70; // [rsp+60h] [rbp-58h]
  int v72; // [rsp+C8h] [rbp+10h]
  int v73; // [rsp+C8h] [rbp+10h]
  char v74; // [rsp+C8h] [rbp+10h]
  int v75; // [rsp+D0h] [rbp+18h]
  int v76; // [rsp+D8h] [rbp+20h]

  v1 = qword_1C0327180;
  v66 = 0;
  v65 = 0;
  v2 = LocalGS;
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) != *(_QWORD *)(qword_1C0327180 + 432)
    || (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) < 5 )
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  v3 = *(_WORD **)(qword_1C0327180 + 344);
  v4 = *(int *)(qword_1C0327168 - 4);
  v68 = v3;
  v69 = qword_1C0327168 - 8;
  v5 = v3[4];
  v6 = v3[6];
  v7 = v5;
  v8 = *(int *)(qword_1C0327168 - 8);
  if ( v5 <= v6 )
    v7 = v3[6];
  if ( v7 <= 1u )
  {
    v72 = 1;
  }
  else
  {
    v9 = v3[4];
    if ( v5 <= v6 )
      v9 = v3[6];
    v72 = v9;
  }
  v67 = qword_1C0327178;
  if ( qword_1C0327178 == LocalGS )
  {
    if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
      goto LABEL_78;
    v10 = 1;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v4 < 0 )
      goto LABEL_78;
    v10 = 5;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
  {
    v11 = *(_WORD *)(v2 + 80);
    if ( v11 < 1 || v11 > v72 || (int)v4 < v10 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) )
    {
      v12 = v5;
      if ( v5 <= v6 )
        v12 = v6;
      if ( v12 <= 1u )
      {
        v73 = 1;
      }
      else
      {
        v13 = v5;
        if ( v5 <= v6 )
          v13 = v6;
        v73 = v13;
      }
      if ( v67 == v2 )
      {
        if ( (int)v8 >= (unsigned __int16)v68[8] || (int)v8 < 0 )
          goto LABEL_78;
        v14 = 1;
      }
      else
      {
        if ( (int)v8 >= *(_DWORD *)(v1 + 440) || (int)v8 < 0 )
          goto LABEL_78;
        v14 = 5;
      }
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
        && (v11 < 1 || v11 > v73 || (int)v8 < v14 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1))) )
      {
        v76 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v8);
        v63 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v4) - v76;
        v15 = *(_QWORD *)(v2 + 8);
        v16 = *(_DWORD *)(v15 + 4 * v4) - *(_DWORD *)(v15 + 4 * v8);
        v64 = *(_DWORD *)(v15 + 4 * v8);
        v74 = *(_BYTE *)(v1 + 333);
        if ( v74 == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
        {
          v65 = v4;
          v66 = v8;
        }
        v17 = qword_1C0327148;
        v18 = *(_DWORD *)(v69 - 4);
        v70 = (int *)(v69 - 8);
        v59 = v18;
        v62 = *v70;
        v19 = v5;
        if ( v5 <= v6 )
          v19 = v6;
        if ( v19 <= 1u )
        {
          v21 = 1;
        }
        else
        {
          v20 = v5;
          if ( v5 <= v6 )
            v20 = v6;
          v21 = v20;
        }
        if ( v67 == qword_1C0327148 )
        {
          if ( v18 >= (unsigned __int16)v68[8] || v18 < 0 )
            goto LABEL_78;
          v22 = 1;
        }
        else
        {
          if ( v18 >= *(_DWORD *)(v1 + 440) || v18 < 0 )
            goto LABEL_78;
          v22 = 5;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327148) )
        {
          v23 = *(_WORD *)(v17 + 80);
          if ( v23 < 1 || v23 > v21 || v59 < v22 + *(__int16 *)(*(_QWORD *)(v17 + 64) + 2LL * (v23 - 1)) )
          {
            v24 = v5;
            if ( v5 <= v6 )
              v24 = v6;
            if ( v24 <= 1u )
            {
              v26 = 1;
            }
            else
            {
              v25 = v5;
              if ( v5 <= v6 )
                v25 = v6;
              v26 = v25;
            }
            if ( v67 == v17 )
            {
              if ( v62 >= (unsigned __int16)v68[8] || v62 < 0 )
                goto LABEL_78;
              v27 = 1;
            }
            else
            {
              if ( v62 >= *(_DWORD *)(v1 + 440) || v62 < 0 )
                goto LABEL_78;
              v27 = 5;
            }
            if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v17) )
            {
              if ( v23 < 1 || v23 > v26 )
              {
                v28 = v62;
              }
              else
              {
                v28 = v62;
                if ( v62 >= v27 + *(__int16 *)(*(_QWORD *)(v17 + 64) + 2LL * (v23 - 1)) )
                  goto LABEL_78;
              }
              v29 = v59;
              v30 = v28;
              v31 = *(_DWORD *)(*(_QWORD *)v17 + 4LL * v28);
              v32 = *(_QWORD *)(v17 + 8);
              v33 = *(_DWORD *)(*(_QWORD *)v17 + 4LL * v59) - v31;
              v75 = *(_DWORD *)(*(_QWORD *)v17 + 4 * v30);
              v60 = v33;
              LODWORD(v30) = *(_DWORD *)(v32 + 4 * v30);
              v34 = *(_DWORD *)(v32 + 4 * v29) - v30;
              v61 = v30;
              if ( v74 == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
              {
                v35 = Mul26Dot6(v34, v63);
                if ( v35 < 0 )
                  v35 = -v35;
                v36 = Mul26Dot6(v33, v16);
                if ( v36 < 0 )
                  v36 = -v36;
                if ( v35 > v36 )
                {
                  v66 = v62;
                  v65 = v29;
                }
              }
              v37 = v5;
              if ( v5 <= v6 )
                v37 = v6;
              v38 = *(v70 - 1);
              if ( v37 <= 1u )
              {
                v39 = 1;
              }
              else
              {
                if ( v5 <= v6 )
                  v5 = v6;
                v39 = v5;
              }
              v40 = qword_1C0327150;
              if ( v67 == qword_1C0327150 )
              {
                if ( (int)v38 >= (unsigned __int16)v68[8] || (int)v38 < 0 )
                  goto LABEL_78;
                v41 = 1;
              }
              else
              {
                if ( (int)v38 >= *(_DWORD *)(v1 + 440) || (int)v38 < 0 )
                  goto LABEL_78;
                v41 = 5;
              }
              if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0327150) )
              {
                v42 = *(_WORD *)(v40 + 80);
                v43 = 1LL;
                if ( v42 < 1
                  || v42 > v39
                  || (v43 = v42 - 1, (int)v38 < v41 + *(__int16 *)(*(_QWORD *)(v40 + 64) + 2 * v43)) )
                {
                  qword_1C0327168 = (__int64)(v70 - 1);
                  if ( v40 != v67 && *(_BYTE *)(v1 + 333) == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
                    AddProportion(v43, v40, v66, v38, v65);
                  v44 = v38;
                  *(_BYTE *)(*(_QWORD *)(qword_1C0327150 + 72) + v38) |= 3u;
                  v45 = *(_QWORD *)qword_1C0327150;
                  v46 = *(_QWORD *)(qword_1C0327150 + 8);
                  if ( v16 )
                  {
                    v54 = v63;
                    if ( !v63 )
                    {
                      if ( !v34 )
                      {
                        v48 = v61;
                        *(_DWORD *)(v45 + 4 * v38) = v76;
                        goto LABEL_113;
                      }
                      v55 = v75;
                      v56 = v76;
                      v52 = v75 - v76;
                      v47 = v60;
                      v50 = v61;
                      v53 = -v60;
                      v51 = v64;
LABEL_125:
                      if ( v53 )
                      {
                        *(_DWORD *)(v45 + 4 * v44) = v75 + CompDiv(v53, v52 * (__int64)v47);
                        v58 = v61 + CompDiv(v53, v52 * (__int64)v34);
                      }
                      else
                      {
                        *(_DWORD *)(v45 + 4 * v44) = (v56 + v55 + (v47 >> 1) + (v54 >> 1)) >> 1;
                        v58 = (v51 + v50 + (v34 >> 1) + (v16 >> 1)) >> 1;
                      }
                      *(_DWORD *)(v46 + 4 * v44) = v58;
                      return a1;
                    }
                    v57 = v61 - v64;
                    if ( (int)abs32(v63) < (int)abs32(v16) )
                    {
                      v52 = CompDiv(v16, v63 * (__int64)v57) + v76 - v75;
                      v53 = v60 - CompDiv(v16, v63 * (__int64)v34);
                    }
                    else
                    {
                      v52 = v57 - CompDiv(v63, v16 * (__int64)(v75 - v76));
                      v53 = CompDiv(v63, v16 * (__int64)v60) - v34;
                    }
                    v51 = v64;
                    v50 = v61;
                    v47 = v60;
                  }
                  else
                  {
                    v47 = v60;
                    if ( !v60 )
                    {
                      v48 = v64;
                      *(_DWORD *)(v45 + 4 * v38) = v75;
LABEL_113:
                      *(_DWORD *)(v46 + 4 * v38) = v48;
                      return a1;
                    }
                    v50 = v61;
                    v51 = v64;
                    v52 = v61 - v64;
                    v53 = -v34;
                  }
                  v54 = v63;
                  v55 = v75;
                  v56 = v76;
                  goto LABEL_125;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_78:
  dword_1C03271D0 = 4370;
  return qword_1C03271D8;
}
