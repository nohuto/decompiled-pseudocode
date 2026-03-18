/*
 * XREFs of ?BltLnkPatMaskCopy24@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1C0129CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy24(struct BLTINFO *a1, unsigned int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // esi
  __int64 v5; // r12
  __int64 v6; // r15
  char v7; // r10
  unsigned int v8; // r11d
  struct BLTINFO *v9; // rdi
  unsigned int v10; // ebx
  int v11; // r14d
  int v12; // r9d
  unsigned int v13; // r8d
  int v14; // ecx
  int v15; // ebp
  int v16; // r13d
  _BYTE *v17; // rdx
  char v18; // al
  unsigned int v19; // r8d

  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = a2;
  v8 = a2 >> 8;
  v9 = a1;
  v10 = HIWORD(a2);
  while ( v4 )
  {
    --v4;
    v15 = *((_DWORD *)v9 + 7);
    v16 = *((_DWORD *)v9 + 12);
    v17 = (_BYTE *)(v6 + 3 * *((_DWORD *)v9 + 14));
    if ( v15 > 0 )
    {
      while ( 1 )
      {
        v11 = v15;
        v12 = v15;
        v13 = a4 ^ *(unsigned __int8 *)(((__int64)v16 >> 3) + v5);
        v14 = 8 - (v16 & 7);
        if ( v14 <= v15 )
          v11 = 8 - (v16 & 7);
        v15 -= v11;
        v16 += v11;
        if ( v13 == 255 )
          goto LABEL_5;
        v18 = v14 - v12;
        if ( v14 <= v12 )
          v18 = 0;
        v19 = v13 >> v18;
        switch ( v11 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_39;
          case 3:
            goto LABEL_36;
          case 4:
            goto LABEL_33;
          case 5:
            goto LABEL_30;
          case 6:
            goto LABEL_27;
          case 7:
            goto LABEL_24;
        }
        if ( v11 == 8 )
          break;
LABEL_5:
        v17 += 3 * v11;
        if ( v15 <= 0 )
        {
          v9 = a1;
          goto LABEL_7;
        }
      }
      if ( (v19 & 1) == 0 )
      {
        v17[23] = v10;
        v17[22] = v8;
        v17[21] = v7;
      }
      v19 >>= 1;
LABEL_24:
      if ( (v19 & 1) == 0 )
      {
        v17[20] = v10;
        v17[19] = v8;
        v17[18] = v7;
      }
      v19 >>= 1;
LABEL_27:
      if ( (v19 & 1) == 0 )
      {
        v17[17] = v10;
        v17[16] = v8;
        v17[15] = v7;
      }
      v19 >>= 1;
LABEL_30:
      if ( (v19 & 1) == 0 )
      {
        v17[14] = v10;
        v17[13] = v8;
        v17[12] = v7;
      }
      v19 >>= 1;
LABEL_33:
      if ( (v19 & 1) == 0 )
      {
        v17[11] = v10;
        v17[10] = v8;
        v17[9] = v7;
      }
      v19 >>= 1;
LABEL_36:
      if ( (v19 & 1) == 0 )
      {
        v17[8] = v10;
        v17[7] = v8;
        v17[6] = v7;
      }
      v19 >>= 1;
LABEL_39:
      if ( (v19 & 1) == 0 )
      {
        v17[5] = v10;
        v17[4] = v8;
        v17[3] = v7;
      }
      v19 >>= 1;
LABEL_42:
      if ( (v19 & 1) == 0 )
      {
        v17[2] = v10;
        v17[1] = v8;
        *v17 = v7;
      }
      goto LABEL_5;
    }
LABEL_7:
    v6 += *((int *)v9 + 11);
    v5 += *((int *)v9 + 10);
  }
}
