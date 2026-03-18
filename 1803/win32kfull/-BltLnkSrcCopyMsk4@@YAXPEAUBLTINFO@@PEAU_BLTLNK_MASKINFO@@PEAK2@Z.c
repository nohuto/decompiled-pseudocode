/*
 * XREFs of ?BltLnkSrcCopyMsk4@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02AD070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk4(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r13
  __int64 v6; // rcx
  int v8; // edi
  __int64 v9; // r11
  int v10; // r15d
  unsigned int v11; // ebx
  int v12; // r14d
  unsigned int v13; // r12d
  unsigned __int8 *v14; // r10
  unsigned __int8 *v15; // rsi
  char v16; // r9
  unsigned __int8 v17; // al
  char v18; // al
  unsigned __int8 *v19; // rax
  int v20; // r14d
  unsigned __int64 v21; // r13
  int v22; // r15d
  unsigned int v23; // edx
  unsigned int v24; // eax
  char v25; // bl
  unsigned int v26; // edx
  char v27; // r9
  char v28; // al
  char v29; // cl
  char v30; // al
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // al
  char v34; // al
  unsigned int v35; // eax
  unsigned __int8 v36; // al
  char v37; // al
  __int64 v38; // [rsp+0h] [rbp-48h]
  int v39; // [rsp+50h] [rbp+8h]
  __int64 v40; // [rsp+58h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a2 + 5);
  v9 = *(_QWORD *)a2;
  v10 = *((_DWORD *)a1 + 8);
  v38 = v4;
  v40 = v6;
  while ( v10 )
  {
    --v10;
    v11 = *((_DWORD *)a2 + 7);
    v12 = *((_DWORD *)a1 + 12);
    v13 = *((_DWORD *)a1 + 7);
    v14 = (unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 14) >> 1));
    v39 = v10;
    v15 = (unsigned __int8 *)(v4 + ((__int64)v12 >> 1));
    v16 = (*((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v11 >> 3) + v9)) << (*((_BYTE *)a2 + 28) & 7);
    if ( (*((_DWORD *)a1 + 14) & 1) != 0 )
    {
      if ( v16 < 0 )
      {
        v17 = *v15;
        if ( (v12 & 1) != 0 )
          v18 = v17 & 0xF;
        else
          v18 = v17 >> 4;
        *v14 = *v14 & 0xF0 | v18;
      }
      v19 = v15 + 1;
      ++v14;
      LOBYTE(v12) = v12 + 1;
      v16 *= 2;
      ++v11;
      --v13;
      if ( (v12 & 1) != 0 )
        v19 = v15;
      v15 = v19;
    }
    v20 = v12 & 1;
    if ( v13 >= 2 )
    {
      v21 = (unsigned __int64)v13 >> 1;
      while ( 1 )
      {
        v22 = *((_DWORD *)a2 + 6);
        v23 = 0;
        if ( v11 != v22 )
          v23 = v11;
        if ( (v23 & 7) == 0 )
          v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v23 >> 3) + v9);
        v24 = v23 + 1;
        v25 = v16;
        v26 = 0;
        v27 = 2 * v16;
        if ( v24 != v22 )
          v26 = v24;
        if ( (v26 & 7) == 0 )
          v27 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v26 >> 3) + v9);
        v28 = v27 & 0x80;
        if ( v25 >= 0 )
        {
          if ( v28 )
          {
            v33 = *v15;
            if ( v20 )
              v34 = v33 >> 4;
            else
              v34 = v33 & 0xF;
            *v14 = *v14 & 0xF0 | v34;
          }
          goto LABEL_36;
        }
        if ( !v28 )
          break;
        if ( v20 )
        {
          v29 = v15[1] >> 4;
          v30 = 16 * *v15;
LABEL_29:
          v31 = v30 | v29;
          goto LABEL_30;
        }
        v31 = *v15;
LABEL_30:
        *v14 = v31;
LABEL_36:
        v16 = 2 * v27;
        v11 = v26 + 1;
        ++v14;
        ++v15;
        v13 -= 2;
        if ( !--v21 )
        {
          v10 = v39;
          v4 = v38;
          goto LABEL_38;
        }
      }
      v32 = *v15;
      v30 = *v14 & 0xF;
      if ( v20 )
        v29 = 16 * v32;
      else
        v29 = v32 & 0xF0;
      goto LABEL_29;
    }
LABEL_38:
    if ( v13 )
    {
      v35 = 0;
      if ( v11 != *((_DWORD *)a2 + 6) )
        v35 = v11;
      if ( (v35 & 7) == 0 )
        v16 = *((_BYTE *)a2 + 36) ^ *(_BYTE *)(((unsigned __int64)v35 >> 3) + v9);
      if ( v16 < 0 )
      {
        v36 = *v15;
        if ( v20 )
          v37 = 16 * v36;
        else
          v37 = v36 & 0xF0;
        *v14 = *v14 & 0xF | v37;
      }
    }
    v6 = *((int *)a1 + 11) + v40;
    v4 += *((int *)a1 + 10);
    v40 = v6;
    v38 = v4;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v8 )
      {
        --v8;
        v9 += *((int *)a2 + 8);
      }
      else
      {
        v8 = *((_DWORD *)a2 + 4) - 1;
        v9 = *((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v8;
      }
    }
    else
    {
      ++v8;
      v9 += *((int *)a2 + 8);
      if ( v8 >= *((_DWORD *)a2 + 4) )
      {
        v9 = *((_QWORD *)a2 + 1);
        v8 = 0;
      }
    }
  }
}
