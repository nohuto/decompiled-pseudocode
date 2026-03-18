/*
 * XREFs of ?vFillGRectDIB1@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A0A20
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C01229A8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB1(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  int v3; // esi
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  unsigned int v12; // r11d
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r8
  _BYTE *v18; // r13
  int v19; // edi
  char v20; // dl
  int v21; // edx
  char v22; // cl
  char v23; // r11
  unsigned __int64 v24; // rax
  int v25; // ecx
  _BYTE *v26; // rax
  int v27; // [rsp+24h] [rbp-D4h]
  char v28; // [rsp+28h] [rbp-D0h]
  __int64 v29; // [rsp+30h] [rbp-C8h]
  __int64 v30; // [rsp+38h] [rbp-C0h]
  __int64 v31; // [rsp+40h] [rbp-B8h]
  __int64 v32; // [rsp+48h] [rbp-B0h]
  __int64 v33; // [rsp+50h] [rbp-A8h]
  __int64 v34; // [rsp+58h] [rbp-A0h]
  __int64 v35; // [rsp+60h] [rbp-98h]
  __int64 v36; // [rsp+68h] [rbp-90h]
  __int64 v37; // [rsp+70h] [rbp-88h]
  __int64 v38; // [rsp+78h] [rbp-80h]
  __int64 v39; // [rsp+80h] [rbp-78h]
  __int64 v40; // [rsp+88h] [rbp-70h]
  char *v41; // [rsp+90h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+98h] [rbp-60h]
  unsigned int v43; // [rsp+100h] [rbp+8h]
  int v45; // [rsp+110h] [rbp+18h]
  int v46; // [rsp+118h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((int *)a1 + 22);
  v43 = *((_DWORD *)a2 + 10);
  v5 = v3 + *((_DWORD *)a2 + 11);
  v45 = v3;
  v27 = v5;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v3;
  v32 = *((_QWORD *)a2 + 14);
  v33 = *((_QWORD *)a2 + 15);
  v34 = *((_QWORD *)a2 + 16);
  v38 = *((_QWORD *)a2 + 10);
  v39 = *((_QWORD *)a2 + 11);
  v40 = *((_QWORD *)a2 + 12);
  v37 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 20));
  if ( Xlate555 )
  {
    v7 = *((int *)v2 + 45);
    v8 = *((_QWORD *)v2 + 6);
    v9 = *((_QWORD *)v2 + 7);
    v10 = *((_QWORD *)v2 + 8);
    v29 = v8;
    v30 = v9;
    v31 = v10;
    if ( (_DWORD)v7 )
    {
      v9 += v39 * v7;
      v8 += v38 * v7;
      v29 = v8;
      v30 = v9;
      v10 += v40 * v7;
      v31 = v10;
    }
    v11 = *((_DWORD *)v2 + 37);
    v28 = v11;
    v46 = *((_DWORD *)v2 + 36);
    if ( v3 < v5 )
    {
      v12 = v43;
      do
      {
        v13 = *((_DWORD *)v2 + 8);
        v14 = v8;
        v15 = v9;
        v41 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v11 + (_BYTE)v3) & 0xFu);
        v16 = *((int *)v2 + 44);
        v17 = v10;
        if ( (_DWORD)v16 )
        {
          v14 = v8 + v32 * v16;
          v15 = v9 + v33 * v16;
          v17 = v10 + v34 * v16;
        }
        v18 = (_BYTE *)(v6 + v13 / 8);
        if ( v13 < (int)(v13 + v12) )
        {
          v19 = *((_DWORD *)v2 + 8) & 7;
          v20 = v13 + v46;
          v36 = v12;
          v35 = v13 + v46;
          do
          {
            v21 = (unsigned __int8)(2 * v41[v20 & 0xF]);
            v22 = -(v21 + (unsigned int)BYTE6(v14) >= 0xFF);
            v23 = -(v21 + (unsigned int)BYTE6(v15) >= 0xFF);
            v14 += v32;
            v24 = (unsigned __int64)(unsigned __int8)-(v21 + (unsigned int)BYTE6(v17) >= 0xFF) >> 3;
            v15 += v33;
            v17 += v34;
            LOBYTE(v21) = *v18 & ~(1 << (7 - v19)) | (vTranslateIdentity[Xlate555[v24 | (4
                                                                                       * (v23 & 0xF8 | (32 * (v22 & 0xF8u))))]] << (7 - v19));
            v25 = v19 + 1;
            *v18 = v21;
            v26 = v18 + 1;
            v20 = ++v35;
            if ( v19 != 7 )
              v26 = v18;
            v19 = 0;
            v18 = v26;
            if ( v25 != 8 )
              v19 = v25;
            --v36;
          }
          while ( v36 );
          v2 = a2;
          v3 = v45;
          v8 = v29;
          v9 = v30;
          v10 = v31;
          v6 = v37;
          v12 = v43;
        }
        v6 += v4;
        ++v3;
        v8 += v38;
        v9 += v39;
        v10 += v40;
        LOBYTE(v11) = v28;
        v37 = v6;
        v29 = v8;
        v30 = v9;
        v31 = v10;
        v45 = v3;
      }
      while ( v3 < v27 );
    }
  }
}
