/*
 * XREFs of ?BltLnkSrcCopyMsk16@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02D1BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk16(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // eax
  struct _BLTLNK_MASKINFO *v5; // r8
  int v6; // r11d
  struct BLTINFO *v7; // rbx
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r12d
  int v13; // esi
  _WORD *v14; // r9
  _WORD *v15; // r10
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // edx
  int v19; // ecx
  char v20; // bp
  bool v21; // cc
  int v22; // r15d
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int8 v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+4h] [rbp-54h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)v7 + 2);
  v26 = v4;
  v27 = v11;
  v25 = *((_BYTE *)v5 + 36);
  v28 = v9;
  while ( v8 )
  {
    --v8;
    v12 = *((_DWORD *)v7 + 7);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (_WORD *)(v9 + 2LL * *((int *)v7 + 12));
    v15 = (_WORD *)(v11 + 2LL * *((int *)v7 + 14));
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v16 = v26 - v13;
        v17 = v12;
        v18 = v25 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v10);
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
          goto LABEL_41;
        v23 = v18 >> v20;
        switch ( v16 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_33;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_24;
          case 7:
            goto LABEL_21;
        }
        if ( v16 == 8 )
          break;
LABEL_41:
        v13 = 0;
        v24 = 2LL * v16;
        v14 = (_WORD *)((char *)v14 + v24);
        v15 = (_WORD *)((char *)v15 + v24);
        if ( v22 != v26 )
          v13 = v22;
        if ( v12 <= 0 )
        {
          v5 = a2;
          v7 = a1;
          v9 = v28;
          v11 = v27;
          goto LABEL_45;
        }
      }
      if ( (v23 & 1) != 0 )
        v15[7] = v14[7];
      v23 >>= 1;
LABEL_21:
      if ( (v23 & 1) != 0 )
        v15[6] = v14[6];
      v23 >>= 1;
LABEL_24:
      if ( (v23 & 1) != 0 )
        v15[5] = v14[5];
      v23 >>= 1;
LABEL_27:
      if ( (v23 & 1) != 0 )
        v15[4] = v14[4];
      v23 >>= 1;
LABEL_30:
      if ( (v23 & 1) != 0 )
        v15[3] = v14[3];
      v23 >>= 1;
LABEL_33:
      if ( (v23 & 1) != 0 )
        v15[2] = v14[2];
      v23 >>= 1;
LABEL_36:
      if ( (v23 & 1) != 0 )
        v15[1] = v14[1];
      v23 >>= 1;
LABEL_39:
      if ( (v23 & 1) != 0 )
        *v15 = *v14;
      goto LABEL_41;
    }
LABEL_45:
    v11 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v27 = v11;
    v28 = v9;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v10 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v10 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v10 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v10 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
