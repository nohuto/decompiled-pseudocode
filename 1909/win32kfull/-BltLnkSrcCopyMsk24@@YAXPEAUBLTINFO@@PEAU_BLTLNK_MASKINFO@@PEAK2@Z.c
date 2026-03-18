/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C01547B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r10
  int v6; // r11d
  struct BLTINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // r13d
  __int64 v11; // rdi
  int v12; // r12d
  int v13; // esi
  _BYTE *v14; // r8
  _BYTE *v15; // r9
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // edx
  int v19; // ecx
  char v20; // bp
  bool v21; // cc
  int v22; // r15d
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned __int8 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_QWORD *)a1 + 1);
  v9 = *((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a1 + 8);
  v11 = *(_QWORD *)v5;
  v25 = *((_BYTE *)v5 + 36);
  v27 = v8;
  v26 = v9;
  while ( v10 )
  {
    --v10;
    v12 = *((_DWORD *)v7 + 7);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (_BYTE *)(v8 + 3 * *((_DWORD *)v7 + 12));
    v15 = (_BYTE *)(v9 + 3 * *((_DWORD *)v7 + 14));
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v16 = v4 - v13;
        v17 = v12;
        v18 = v25 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v11);
        v19 = 8 - (v13 & 7);
        v20 = v19 - v12;
        if ( v19 <= v12 )
        {
          v17 = 8 - (v13 & 7);
          v20 = 0;
        }
        v21 = v17 <= v16;
        if ( v17 > v16 )
        {
          v20 += v17 - v16;
          v21 = v17 <= v16;
        }
        if ( v21 )
          v16 = v17;
        v12 -= v16;
        v22 = v16 + v13;
        if ( !v18 )
          goto LABEL_42;
        v23 = v18 >> v20;
        switch ( v16 )
        {
          case 1:
            goto LABEL_40;
          case 2:
            goto LABEL_37;
          case 3:
            goto LABEL_34;
          case 4:
            goto LABEL_31;
          case 5:
            goto LABEL_28;
          case 6:
            goto LABEL_25;
          case 7:
            goto LABEL_22;
        }
        if ( v16 == 8 )
          break;
LABEL_42:
        v13 = 0;
        v24 = 3 * v16;
        v14 += v24;
        v15 += v24;
        if ( v22 != v4 )
          v13 = v22;
        if ( v12 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v8 = v27;
          v9 = v26;
          goto LABEL_46;
        }
      }
      if ( (v23 & 1) != 0 )
      {
        v15[23] = v14[23];
        v15[22] = v14[22];
        v15[21] = v14[21];
      }
      v23 >>= 1;
LABEL_22:
      if ( (v23 & 1) != 0 )
      {
        v15[20] = v14[20];
        v15[19] = v14[19];
        v15[18] = v14[18];
      }
      v23 >>= 1;
LABEL_25:
      if ( (v23 & 1) != 0 )
      {
        v15[17] = v14[17];
        v15[16] = v14[16];
        v15[15] = v14[15];
      }
      v23 >>= 1;
LABEL_28:
      if ( (v23 & 1) != 0 )
      {
        v15[14] = v14[14];
        v15[13] = v14[13];
        v15[12] = v14[12];
      }
      v23 >>= 1;
LABEL_31:
      if ( (v23 & 1) != 0 )
      {
        v15[11] = v14[11];
        v15[10] = v14[10];
        v15[9] = v14[9];
      }
      v23 >>= 1;
LABEL_34:
      if ( (v23 & 1) != 0 )
      {
        v15[8] = v14[8];
        v15[7] = v14[7];
        v15[6] = v14[6];
      }
      v23 >>= 1;
LABEL_37:
      if ( (v23 & 1) != 0 )
      {
        v15[5] = v14[5];
        v15[4] = v14[4];
        v15[3] = v14[3];
      }
      v23 >>= 1;
LABEL_40:
      if ( (v23 & 1) != 0 )
      {
        v15[2] = v14[2];
        v15[1] = v14[1];
        *v15 = *v14;
      }
      goto LABEL_42;
    }
LABEL_46:
    v9 += *((int *)v7 + 11);
    v8 += *((int *)v7 + 10);
    v26 = v9;
    v27 = v8;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v11 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v11 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v11 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v11 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
