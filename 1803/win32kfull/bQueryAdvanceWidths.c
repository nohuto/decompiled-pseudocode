/*
 * XREFs of bQueryAdvanceWidths @ 0x1C021EA18
 * Callers:
 *     ttfdSemQueryAdvanceWidths @ 0x1C02173A0 (ttfdSemQueryAdvanceWidths.c)
 * Callees:
 *     ttfdOpenFontContext @ 0x1C02231EC (ttfdOpenFontContext.c)
 *     IsFullWidthCharacter @ 0x1C0223B10 (IsFullWidthCharacter.c)
 */

__int64 __fastcall bQueryAdvanceWidths(__int64 a1, unsigned int a2, unsigned int *a3, __int16 *a4, unsigned int a5)
{
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int16 *v13; // rdi
  __int64 v14; // r8
  unsigned int v15; // r10d
  _WORD *v16; // rcx
  unsigned int *v17; // rdi
  __int16 v18; // dx
  __int16 v19; // ax
  __int16 v20; // ax
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // ax
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // ax
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  unsigned int *v35; // rax
  __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // rbx
  int v42; // edx
  unsigned int v43; // ebp
  int v44; // eax
  unsigned __int16 v45; // cx
  int v46; // r8d
  unsigned int v47; // ebp
  unsigned int v48; // r12d
  __int64 v49; // r13
  __int16 v50; // r11
  int v51; // eax
  __int64 v52; // rax
  unsigned __int16 v53; // cx
  bool v54; // zf
  __int16 v55; // r9
  __int64 v56; // rcx
  unsigned __int16 v57; // r10
  int v58; // ecx
  __int64 v59; // r9
  __int64 v60; // rax
  int v61; // ecx
  __int16 v62; // ax
  int v63; // [rsp+20h] [rbp-48h]
  int v64; // [rsp+24h] [rbp-44h]
  unsigned int v65; // [rsp+28h] [rbp-40h]
  unsigned __int16 v66; // [rsp+70h] [rbp+8h]
  __int16 v67; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 40) & 0x80000000 | *(_DWORD *)(a1 + 12);
  }
  else
  {
    v10 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v10;
  }
  if ( !v10 )
    return 0xFFFFFFFFLL;
  v11 = *(_DWORD *)(v10 + 40);
  *(_QWORD *)v10 = a1;
  if ( (v11 & 0x42000000) == 0x40000000 && (*(_DWORD *)(*(_QWORD *)(v10 + 8) + 400LL) & 0x10000000) == 0 )
  {
    if ( a5 )
    {
      v12 = a5;
      v13 = a4;
      while ( v12 )
      {
        *v13++ = -1;
        --v12;
      }
    }
    return 0LL;
  }
  v14 = *(_QWORD *)(v10 + 136);
  if ( a2 > 1 )
    return 0LL;
  if ( !v14 )
  {
    v35 = *(unsigned int **)(v10 + 192);
    v36 = *(_QWORD *)(v10 + 8);
    v37 = *(_QWORD *)(v36 + 64);
    v38 = v37 + v35[4];
    v39 = v35[24];
    v40 = v37 + v35[8];
    if ( (_DWORD)v39 && (unsigned __int64)*(unsigned int *)(v36 + 552) + 4 <= v35[25] )
      v41 = v37 + v39;
    else
      v41 = 0LL;
    v42 = v11 & 0x2000;
    v43 = (unsigned __int16)__ROR2__(*(_WORD *)(v35[6] + v37 + 34), 8);
    v65 = v43;
    v44 = *(_DWORD *)(v10 + 116);
    v45 = __ROR2__(*(_WORD *)(v40 + 4LL * (v43 - 1)), 8);
    v66 = v45;
    if ( (v44 & 1) == 0 )
    {
      if ( a5 )
      {
        v59 = a5;
        do
        {
          v60 = *a3;
          if ( (unsigned int)v60 < v43 )
            v45 = __ROR2__(*(_WORD *)(v40 + 4 * v60), 8);
          v54 = v45 == 0;
          v61 = (int)(float)((float)v45 * *(float *)(v10 + 224));
          v62 = (v42 != 0 ? 0x10 : 0) + v61;
          if ( v54 )
            v62 = v61;
          v45 = v66;
          *a4 = v62;
          ++a3;
          ++a4;
          --v59;
        }
        while ( v59 );
      }
      return 1LL;
    }
    v64 = *(_DWORD *)(v10 + 124);
    v63 = 1;
    v46 = 1;
    v67 = v42 != 0 ? 0x10 : 0;
    if ( (v44 & 0x10) == 0 || (*(_BYTE *)(v38 + 17) & 0x14) == 0 || (*(_DWORD *)(v36 + 400) & 0x10000000) != 0 )
    {
      v46 = 0;
      v63 = 0;
    }
    v47 = 1;
    v48 = abs32(*(_DWORD *)(v10 + 80));
    if ( !a5 )
      return v47;
    v49 = a5;
    v50 = -1;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v10 + 40) & 0x42000000) != 0x40000000
        || (v51 = IsFullWidthCharacter(*(_QWORD *)(v10 + 8), *a3), v46 = v63, v51) )
      {
        if ( !v46 || v41 && v64 >= *(unsigned __int8 *)(*a3 + v41 + 4) )
          break;
      }
      *a4 = v50;
      v47 = 0;
LABEL_92:
      ++a3;
      ++a4;
      if ( !--v49 )
        return v47;
    }
    v52 = *a3;
    if ( (unsigned int)v52 >= v65 )
      v53 = v66;
    else
      v53 = __ROR2__(*(_WORD *)(v40 + 4 * v52), 8);
    v54 = gbJpn98FixPitch == 0;
    v55 = ((int)(v48 * v53 + 0x8000) >> 12) & 0xFFF0;
    *a4 = v55;
    if ( !v54 || (v56 = *(_QWORD *)(v10 + 8), (*(_DWORD *)(v56 + 400) & 0x10000000) == 0) )
    {
LABEL_90:
      if ( v55 )
        *a4 = v55 + v67;
      goto LABEL_92;
    }
    if ( (unsigned int)IsFullWidthCharacter(v56, *a3) )
    {
      v58 = *(_DWORD *)(v10 + 404);
      if ( *(int *)(v10 + 80) <= 0 )
      {
        if ( v57 != -16 * v58 )
        {
          v55 = -32 * v58;
          goto LABEL_88;
        }
      }
      else if ( v57 != 16 * v58 )
      {
        v55 = 32 * v58;
LABEL_88:
        *a4 = v55;
      }
    }
    v46 = v63;
    goto LABEL_90;
  }
  v15 = a5;
  v16 = a4 + 6;
  v17 = a3 + 6;
  v18 = (v11 >> 9) & 0x10;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( v15 != 1 )
      {
        if ( v15 != 2 )
        {
          if ( v15 != 3 )
          {
            if ( v15 != 4 )
            {
              if ( v15 != 5 )
              {
                if ( v15 != 6 )
                {
                  if ( v15 != 7 )
                  {
                    v19 = *(unsigned __int8 *)(v17[1] + v14 + 2);
                    if ( (_BYTE)v19 )
                      v20 = v18 + 16 * v19;
                    else
                      v20 = 16 * v19;
                    v16[1] = v20;
                  }
                  v21 = *(unsigned __int8 *)(*v17 + v14 + 2);
                  if ( (_BYTE)v21 )
                    v22 = v18 + 16 * v21;
                  else
                    v22 = 16 * v21;
                  *v16 = v22;
                }
                v23 = *(unsigned __int8 *)(*(v17 - 1) + v14 + 2);
                if ( (_BYTE)v23 )
                  v24 = v18 + 16 * v23;
                else
                  v24 = 16 * v23;
                *(v16 - 1) = v24;
              }
              v25 = *(unsigned __int8 *)(*(v17 - 2) + v14 + 2);
              if ( (_BYTE)v25 )
                v26 = v18 + 16 * v25;
              else
                v26 = 16 * v25;
              *(v16 - 2) = v26;
            }
            v27 = *(unsigned __int8 *)(*(v17 - 3) + v14 + 2);
            if ( (_BYTE)v27 )
              v28 = v18 + 16 * v27;
            else
              v28 = 16 * v27;
            *(v16 - 3) = v28;
          }
          v29 = *(unsigned __int8 *)(*(v17 - 4) + v14 + 2);
          if ( (_BYTE)v29 )
            v30 = v18 + 16 * v29;
          else
            v30 = 16 * v29;
          *(v16 - 4) = v30;
        }
        v31 = *(unsigned __int8 *)(*(v17 - 5) + v14 + 2);
        if ( (_BYTE)v31 )
          v32 = v18 + 16 * v31;
        else
          v32 = 16 * v31;
        *(v16 - 5) = v32;
      }
      v33 = *(unsigned __int8 *)(*(v17 - 6) + v14 + 2);
      if ( (_BYTE)v33 )
        v34 = v18 + 16 * v33;
      else
        v34 = 16 * v33;
      *(v16 - 6) = v34;
    }
    if ( v15 <= 8 )
      break;
    v16 += 8;
    v17 += 8;
    v15 -= 8;
  }
  return 1LL;
}
