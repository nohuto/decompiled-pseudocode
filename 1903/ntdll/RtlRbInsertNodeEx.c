/*
 * XREFs of RtlRbInsertNodeEx @ 0x1800380E0
 * Callers:
 *     sub_180005FFC @ 0x180005FFC (sub_180005FFC.c)
 *     sub_18000AC1C @ 0x18000AC1C (sub_18000AC1C.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     sub_18002D594 @ 0x18002D594 (sub_18002D594.c)
 *     sub_180036698 @ 0x180036698 (sub_180036698.c)
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18004E0E4 @ 0x18004E0E4 (sub_18004E0E4.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_180068434 @ 0x180068434 (sub_180068434.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  bool v6; // bl
  char v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // si
  unsigned __int64 v13; // r8
  char v14; // cl
  __int64 v15; // rdi
  _BOOL8 v16; // rbp
  _BOOL8 v17; // rdi
  unsigned __int64 v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  _QWORD *v31; // rbx
  BOOL v32; // edi
  unsigned __int64 v33; // rax
  int v34; // r9d
  _BOOL8 v35; // rbp
  __int64 *v36; // r14
  __int64 v37; // rax
  _QWORD *v38; // rsi
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  *(_QWORD *)a4 = 0LL;
  v6 = a3;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = *((_BYTE *)a1 + 8);
  LOBYTE(v8) = v7 & 1;
  if ( !a2 )
  {
    v43 = a4 ^ (unsigned __int64)a1;
    if ( (_BYTE)v8 )
    {
      *a1 = v43;
      v7 = *((_BYTE *)a1 + 8);
    }
    else
    {
      *a1 = a4;
    }
    if ( (v7 & 1) != 0 )
    {
      a1[1] = v43;
      *((_BYTE *)a1 + 8) = v43 | 1;
    }
    else
    {
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v8;
  }
  v9 = a4;
  if ( (_BYTE)v8 )
    v9 = a2 ^ a4;
  *(_QWORD *)(a2 + 8LL * a3) = v9;
  v10 = a2;
  if ( (a1[1] & 1) != 0 )
    v10 = a2 ^ a4;
  v8 = v10 | 1;
  *(_QWORD *)(a4 + 16) = v8;
  if ( !a3 )
  {
    v8 = a1[1];
    if ( (v8 & 1) != 0 )
      v11 = v8 == 1 ? 0LL : v8 ^ ((unsigned __int64)a1 | 1);
    else
      v11 = a1[1];
    if ( a2 == v11 )
    {
      if ( (v8 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v8) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v8;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v12 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = v12 & 1;
      if ( (v12 & 1) != 0 && v13 )
        v13 ^= a2;
      v15 = *(_QWORD *)v13;
      if ( v14 && v15 )
        v15 ^= v13;
      v16 = v15 == a2;
      v17 = v15 != a2;
      v8 = *(_QWORD *)(v13 + 8 * v16);
      if ( v14 )
      {
        if ( !v8 )
          break;
        v8 ^= v13;
      }
      if ( !v8 || (*(_BYTE *)(v8 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v13;
      *(_BYTE *)(v8 + 16) &= ~1u;
      LOBYTE(v8) = *(_QWORD *)(v13 + 16);
      a2 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !a2 )
          return v8;
        a2 ^= v13;
      }
      if ( a2 )
      {
        *(_BYTE *)(v13 + 16) = v8 | 1;
        v12 = *((_BYTE *)a1 + 8);
        v8 = *(_QWORD *)a2;
        if ( (v12 & 1) != 0 && v8 )
          v8 ^= a2;
        v6 = v13 != v8;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return v8;
    }
    if ( v6 == v17 )
    {
LABEL_38:
      v30 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v30 )
          v30 ^= (unsigned __int64)a1;
        else
          v30 = 0LL;
      }
      v31 = (_QWORD *)(a2 + 16);
      v32 = !v17;
      v33 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v34 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v33 )
        v33 ^= a2;
      if ( v33 != v13 )
        goto LABEL_90;
      v35 = v32;
      v36 = (__int64 *)(v13 + 8 * !v32);
      v37 = *v36;
      if ( (a1[1] & 1) != 0 && v37 )
        v37 ^= v13;
      if ( v37 != a2 )
        goto LABEL_90;
      v38 = (_QWORD *)(v13 + 16);
      v39 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_88;
        v39 ^= v13;
      }
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8);
        if ( (a1[1] & 1) != 0 && v40 )
          v40 ^= v39;
        if ( v40 == v13 )
        {
          v41 = a2;
          if ( (a1[1] & 1) != 0 )
            v41 = a2 ^ v39;
          *(_QWORD *)(v39 + 8) = v41;
        }
        else
        {
          v44 = *(_QWORD *)v39;
          if ( (a1[1] & 1) != 0 && v44 )
            v44 ^= v39;
          if ( v44 != v13 )
            goto LABEL_90;
          v45 = a2;
          if ( (a1[1] & 1) != 0 )
            v45 = a2 ^ v39;
          *(_QWORD *)v39 = v45;
        }
        goto LABEL_50;
      }
LABEL_88:
      if ( v30 != v13 )
        goto LABEL_90;
      v30 = a2;
LABEL_50:
      if ( v34 && v39 )
        v39 ^= a2;
      *v31 &= 3uLL;
      *v31 |= v39;
      v42 = *(_QWORD *)(a2 + 8 * v35);
      if ( v34 )
      {
        if ( !v42 )
        {
LABEL_53:
          if ( v34 && v42 )
            v42 ^= v13;
          *v36 = v42;
          v8 = a2 ^ v13;
          if ( v34 )
            v13 ^= a2;
          *(_QWORD *)(a2 + 8 * v35) = v13;
          if ( v34 )
            a2 = v8;
          *v38 &= 3uLL;
          *v38 |= a2;
          if ( (a1[1] & 1) != 0 )
          {
            LOBYTE(v8) = (unsigned __int8)a1 ^ v30;
            if ( v30 )
              v4 = (unsigned __int64)a1 ^ v30;
          }
          else
          {
            v4 = v30;
          }
          *a1 = v4;
          *(_BYTE *)v38 |= 1u;
          *(_BYTE *)v31 &= ~1u;
          return v8;
        }
        v42 ^= a2;
      }
      if ( !v42 )
        goto LABEL_53;
      v46 = *(_QWORD *)(v42 + 16);
      v47 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v34 && v47 )
        v47 ^= v42;
      if ( v47 == a2 )
      {
        v48 = v13;
        if ( v34 )
          v48 = v13 ^ v42;
        *(_QWORD *)(v42 + 16) = v48 | v46 & 3;
        goto LABEL_53;
      }
LABEL_90:
      __fastfail(0x1Du);
    }
    v18 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v12 & 1;
    if ( (v12 & 1) != 0 && v18 )
      v18 ^= a4;
    if ( v18 != a2 )
      goto LABEL_90;
    v20 = *(_QWORD *)(a2 + 8 * v16);
    if ( (v12 & 1) != 0 && v20 )
      v20 ^= a2;
    if ( v20 != a4 )
      goto LABEL_90;
    v21 = *(_QWORD *)(v13 + 8 * v17);
    if ( (v12 & 1) != 0 && v21 )
      v21 ^= v13;
    if ( v21 != a2 )
      goto LABEL_90;
    v22 = (_QWORD *)(a2 + 16);
    v23 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v12 & 1) != 0 && v23 )
      v23 ^= a2;
    if ( v23 != v13 )
      goto LABEL_90;
    v24 = (unsigned __int64 *)(a4 + 8 * v17);
    v25 = a4;
    if ( (v12 & 1) != 0 )
      v25 = a4 ^ v13;
    *(_QWORD *)(v13 + 8 * v17) = v25;
    v26 = v13;
    if ( (v12 & 1) != 0 )
      v26 = a4 ^ v13;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v26;
    v27 = *v24;
    if ( v19 )
    {
      if ( !v27 )
      {
LABEL_34:
        if ( v19 && v27 )
          v27 ^= a2;
        *(_QWORD *)(a2 + 8 * v16) = v27;
        v28 = a2 ^ a4;
        v29 = a4;
        if ( v19 )
        {
          a2 ^= a4;
          v29 = v28;
        }
        *v24 = a2;
        a2 = a4;
        *v22 &= 3uLL;
        *v22 |= v29;
        goto LABEL_38;
      }
      v27 ^= a4;
    }
    if ( v27 )
    {
      v49 = *(_QWORD *)(v27 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v19 && v50 )
        v50 ^= v27;
      if ( v50 != a4 )
        goto LABEL_90;
      v51 = a2;
      if ( v19 )
        v51 = a2 ^ v27;
      *(_QWORD *)(v27 + 16) = v51 | v49 & 3;
    }
    goto LABEL_34;
  }
  return v8;
}
