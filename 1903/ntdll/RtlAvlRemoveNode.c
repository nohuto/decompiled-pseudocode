/*
 * XREFs of RtlAvlRemoveNode @ 0x180065660
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     sub_18006602C @ 0x18006602C (sub_18006602C.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 **a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r8
  __int128 v7; // rax
  char v8; // cl
  _BYTE *v9; // rdi
  unsigned __int8 v10; // si
  __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  bool v13; // zf
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rbx
  char v23; // r15
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  char v27; // r8
  unsigned __int8 v28; // cl
  __int64 v29; // r8

  v2 = (_QWORD *)*a2;
  v3 = a2[1];
  v4 = v3;
  if ( *a2 )
    v4 = *a2;
  v7 = -(__int128)*a2;
  if ( (*((_QWORD *)&v7 + 1) & v3) != 0 )
  {
    if ( (a2[2] & 3) == 3 )
    {
      *(_QWORD *)&v7 = v2[1];
      v16 = 0;
      v15 = (unsigned __int64)v2;
      *((_QWORD *)&v7 + 1) = v2;
      if ( (_QWORD)v7 )
      {
        v16 = 1;
        do
        {
          *((_QWORD *)&v7 + 1) = v15;
          v15 = v7;
          *(_QWORD *)&v7 = *(_QWORD *)(v7 + 8);
        }
        while ( (_QWORD)v7 );
      }
      v17 = *(_QWORD *)v15;
    }
    else
    {
      v14 = *(_QWORD **)v3;
      v15 = v3;
      *((_QWORD *)&v7 + 1) = v3;
      v16 = 1;
      if ( *(_QWORD *)v3 )
      {
        v16 = 0;
        do
        {
          *((_QWORD *)&v7 + 1) = v15;
          v15 = (unsigned __int64)v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      v17 = *(_QWORD *)(v15 + 8);
    }
    *(_QWORD *)v15 = v2;
    *(_QWORD *)(v15 + 8) = v3;
    v18 = v2[2];
    if ( (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v2[2] = v15 | v18 & 3;
      v19 = *(_QWORD *)(v3 + 16);
      if ( (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
      {
        *(_QWORD *)(v3 + 16) = v15 | v19 & 3;
        if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == *((_QWORD *)&v7 + 1) )
        {
          *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL * v16) = v17;
          if ( v17 )
          {
            if ( *(_QWORD *)(v17 + 16) != v15 )
              goto LABEL_70;
            *(_QWORD *)(v17 + 16) = *((_QWORD *)&v7 + 1);
          }
          *(_QWORD *)(v15 + 16) = a2[2];
          v8 = v16 != 0 ? 3 : 1;
          v20 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v20 )
          {
            v21 = 0LL;
            if ( *(unsigned __int64 **)(v20 + 8) == a2 )
              v21 = 8LL;
            if ( *(unsigned __int64 **)(v21 + v20) == a2 )
            {
              *(_QWORD *)(v21 + v20) = v15;
              goto LABEL_8;
            }
          }
          else if ( *a1 == a2 )
          {
            *a1 = (unsigned __int64 *)v15;
            while ( 1 )
            {
LABEL_8:
              v9 = (_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL);
              LOBYTE(v7) = *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL);
              v10 = v7 & 3;
              if ( (v7 & 3) == ((unsigned __int8)v8 ^ 2) )
              {
                LOBYTE(v7) = v7 & 0xFC;
                *v9 = v7;
                v11 = *(_QWORD *)v9;
              }
              else
              {
                if ( !v10 )
                {
                  LOBYTE(v7) = v8 | v7 & 0xFC;
                  *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL) = v7;
                  return v7;
                }
                v11 = *(_QWORD *)v9;
                v22 = **((_QWORD **)&v7 + 1);
                if ( v8 == 1 )
                  v22 = *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL);
                v23 = *(_BYTE *)(v22 + 16) & 3;
                if ( v23 == ((unsigned __int8)v8 ^ 2) )
                {
                  *(_QWORD *)&v7 = sub_18006602C(a1, *((_QWORD *)&v7 + 1), v22, v8 == 1);
                  *v9 &= 0xFCu;
                  *((_QWORD *)&v7 + 1) = v7;
                  v27 = *(_BYTE *)(v22 + 16) & 0xFC;
                  *(_BYTE *)(v22 + 16) = v27;
                  v28 = *(_BYTE *)(v7 + 16);
                  LODWORD(v7) = v28 & 3;
                  if ( v10 == (_DWORD)v7 )
                  {
                    *v9 &= 0xFCu;
                    *v9 |= (v10 ^ 0xFE) & 3;
                  }
                  else if ( v10 == ((v28 ^ 0xFE) & 3) )
                  {
                    *(_BYTE *)(v22 + 16) = v10 | v27;
                  }
                  *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL) &= 0xFCu;
                }
                else
                {
                  if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != *((_QWORD *)&v7 + 1) )
                    break;
                  v24 = 0LL;
                  if ( v8 == 1 )
                    v24 = 8LL;
                  if ( *(_QWORD *)(v24 + *((_QWORD *)&v7 + 1)) != v22 )
                    break;
                  *(_QWORD *)&v7 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( (v11 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
                  {
                    if ( *(_QWORD *)(v7 + 8) == *((_QWORD *)&v7 + 1) )
                    {
                      *(_QWORD *)(v7 + 8) = v22;
                    }
                    else
                    {
                      if ( *(_QWORD *)v7 != *((_QWORD *)&v7 + 1) )
                        break;
                      *(_QWORD *)v7 = v22;
                    }
                  }
                  else
                  {
                    if ( *a1 != *((unsigned __int64 **)&v7 + 1) )
                      break;
                    *a1 = (unsigned __int64 *)v22;
                  }
                  *(_QWORD *)(v22 + 16) &= 3uLL;
                  *(_QWORD *)(v22 + 16) |= v7;
                  v25 = -(__int64)(v8 != 1) & 8;
                  v26 = *(_QWORD *)(v25 + v22);
                  if ( v26 )
                  {
                    v29 = *(_QWORD *)(v26 + 16);
                    if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
                      break;
                    *(_QWORD *)(v26 + 16) = *((_QWORD *)&v7 + 1) | v29 & 3;
                  }
                  *(_QWORD *)(v24 + *((_QWORD *)&v7 + 1)) = v26;
                  *(_QWORD *)(v25 + v22) = *((_QWORD *)&v7 + 1);
                  *(_QWORD *)v9 &= 3uLL;
                  *(_QWORD *)v9 |= v22;
                  LOBYTE(v7) = *(_BYTE *)(v22 + 16) & 0xFC;
                  if ( !v23 )
                  {
                    *(_BYTE *)(v22 + 16) = v7 | (v8 ^ 0xFE) & 3;
                    return v7;
                  }
                  *(_BYTE *)(v22 + 16) = v7;
                  *((_QWORD *)&v7 + 1) = v22;
                  *v9 &= 0xFCu;
                }
              }
              v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v12 )
                return v7;
              v13 = *(_QWORD *)(v12 + 8) == *((_QWORD *)&v7 + 1);
              v8 = 3;
              *((_QWORD *)&v7 + 1) = v12;
              if ( !v13 )
                v8 = 1;
            }
          }
        }
      }
    }
LABEL_70:
    __fastfail(0x1Du);
  }
  *((_QWORD *)&v7 + 1) = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v4 )
  {
    if ( *(unsigned __int64 **)(v4 + 16) != a2 )
      goto LABEL_70;
    *(_QWORD *)(v4 + 16) = *((_QWORD *)&v7 + 1);
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( *(unsigned __int64 **)(*((_QWORD *)&v7 + 1) + 8LL) == a2 )
    {
      v8 = 3;
      *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL) = v4;
      goto LABEL_8;
    }
    if ( **((unsigned __int64 ***)&v7 + 1) == a2 )
    {
      v8 = 1;
      **((_QWORD **)&v7 + 1) = v4;
      goto LABEL_8;
    }
    goto LABEL_70;
  }
  if ( *a1 != a2 )
    goto LABEL_70;
  *a1 = (unsigned __int64 *)v4;
  return v7;
}
