/*
 * XREFs of ?vGradientFill1@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02A28F0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C01229A8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r14
  __int64 v4; // rbx
  struct _TRIANGLEDATA *v5; // rdi
  __int64 v6; // r15
  int v7; // ebp
  int v8; // edx
  int v9; // r12d
  int v10; // r13d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // ecx
  _BYTE *v15; // rbp
  char v16; // dl
  int v17; // edi
  int v18; // edx
  char v19; // cl
  char v20; // r11
  int v21; // edx
  int v22; // ecx
  _BYTE *v23; // rax
  int v24; // [rsp+20h] [rbp-A8h]
  int v25; // [rsp+24h] [rbp-A4h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  int v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  char *v31; // [rsp+50h] [rbp-78h]
  unsigned __int8 *Xlate555; // [rsp+60h] [rbp-68h]
  char *v33; // [rsp+68h] [rbp-60h]
  int v34; // [rsp+D0h] [rbp+8h]
  int i; // [rsp+E0h] [rbp+18h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v34 = v2;
  v31 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v26 = *((_QWORD *)a2 + 2);
  v28 = *((_QWORD *)a2 + 3);
  v29 = *((_QWORD *)a2 + 4);
  v30 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 19));
  if ( Xlate555 )
  {
    v7 = *((_DWORD *)v5 + 3);
    v8 = *((_DWORD *)v5 + 33);
    if ( v7 >= *((_DWORD *)v5 + 29) )
      v7 = *((_DWORD *)v5 + 29);
    v24 = v7;
    v25 = *((_DWORD *)v5 + 33);
    for ( i = *((_DWORD *)v5 + 32); v2 < v7; v34 = v2 )
    {
      v9 = *(_DWORD *)v3;
      v10 = *((_DWORD *)v3 + 1);
      v11 = *((_QWORD *)v3 + 1);
      if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
        v9 = *(_DWORD *)v5;
      v12 = *((_QWORD *)v3 + 2);
      v13 = *((_QWORD *)v3 + 3);
      if ( v10 >= *((_DWORD *)v5 + 2) )
        v10 = *((_DWORD *)v5 + 2);
      v33 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v8 + (_BYTE)v2) & 0xFu);
      if ( v9 < v10 )
      {
        v14 = *(_DWORD *)v5 - *(_DWORD *)v3;
        if ( v14 > 0 )
        {
          v11 += v26 * v14;
          v12 += v28 * v14;
          v13 += v29 * v14;
        }
        v15 = (_BYTE *)(v6 + v9 / 8);
        v16 = v9 + i;
        v17 = v9 & 7;
        v27 = v9 + i;
        do
        {
          v18 = (unsigned __int8)(2 * v33[v16 & 0xF]);
          v19 = -(v18 + HIBYTE(v11) >= 0xFFu);
          v20 = -(v18 + HIBYTE(v12) >= 0xFFu);
          v21 = -(v18 + HIBYTE(v13) < 0xFFu);
          v12 += v28;
          v13 += v29;
          ++v9;
          v11 += v26;
          LOBYTE(v21) = *v15 & ~(1 << (7 - v17)) | (vTranslateIdentity[Xlate555[((unsigned __int64)(unsigned __int8)~(_BYTE)v21 >> 3) | (4 * (v20 & 0xF8 | (32 * (v19 & 0xF8u))))]] << (7 - v17));
          v22 = v17 + 1;
          *v15 = v21;
          v23 = v15 + 1;
          v16 = ++v27;
          if ( v17 != 7 )
            v23 = v15;
          v17 = 0;
          v15 = v23;
          if ( v22 != 8 )
            v17 = v22;
        }
        while ( v9 < v10 );
        v5 = a2;
        v2 = v34;
        v7 = v24;
        v3 = v31;
        v6 = v30;
        LOBYTE(v8) = v25;
      }
      v6 += v4;
      v3 += 40;
      ++v2;
      v30 = v6;
      v31 = v3;
    }
  }
}
