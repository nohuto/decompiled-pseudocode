/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C0145E1C
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0145C30 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C01460F4 (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0146244 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  LONG v23; // ecx
  LONG v24; // eax
  int v25; // edi
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // edi
  int v29; // eax
  LONG v30; // [rsp+20h] [rbp-79h] BYREF
  LONG v31; // [rsp+24h] [rbp-75h]
  int v32; // [rsp+28h] [rbp-71h]
  int v33; // [rsp+2Ch] [rbp-6Dh]
  __int64 v34; // [rsp+30h] [rbp-69h]
  __int64 v35; // [rsp+38h] [rbp-61h]
  int v36; // [rsp+40h] [rbp-59h]
  int v37; // [rsp+44h] [rbp-55h]
  int v38; // [rsp+48h] [rbp-51h]
  LONG v39; // [rsp+4Ch] [rbp-4Dh]
  int v40; // [rsp+50h] [rbp-49h]
  int v41; // [rsp+54h] [rbp-45h]
  int v42; // [rsp+58h] [rbp-41h]
  __int64 v43; // [rsp+60h] [rbp-39h]
  __int64 v44; // [rsp+68h] [rbp-31h]
  __int64 v45; // [rsp+70h] [rbp-29h]
  __int64 v46; // [rsp+78h] [rbp-21h]
  __int64 v47; // [rsp+80h] [rbp-19h]
  __int64 v48; // [rsp+88h] [rbp-11h]
  __int64 v49; // [rsp+90h] [rbp-9h]
  __int64 v50; // [rsp+98h] [rbp-1h]
  __int64 v51; // [rsp+A0h] [rbp+7h]
  __int64 v52; // [rsp+100h] [rbp+67h]
  __int64 v53; // [rsp+108h] [rbp+6Fh]
  __int64 v54; // [rsp+110h] [rbp+77h]
  __int64 v55; // [rsp+118h] [rbp+7Fh]

  v4 = *((_QWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v53 = *((_QWORD *)a3 + 9);
  v50 = v53;
  v10 = a2->y;
  v47 = v4;
  v48 = v6;
  v49 = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v33 = y - v10;
    y = v10;
    v31 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v33 = v10 - y;
    v31 = y;
  }
  v30 = x;
  v14 = v12 - x;
  v22 = y - *((_DWORD *)a3 + 35);
  v15 = x - *((_DWORD *)a3 + 34);
  v16 = *((_QWORD *)a3 + 2) * v15;
  v54 = *((_QWORD *)a3 + 2);
  v32 = v14;
  v17 = *((_QWORD *)a3 + 3);
  v43 = *((_QWORD *)a3 + 10) + v4 * v22 + v16;
  v55 = v17;
  v18 = v6 * v22 + v17 * v15;
  v19 = *((_QWORD *)a3 + 4);
  v44 = *((_QWORD *)a3 + 11) + v18;
  v52 = v19;
  v20 = v19 * v15 + v8 * v22;
  v21 = *((_QWORD *)a3 + 5);
  v45 = *((_QWORD *)a3 + 12) + v20;
  v51 = v21;
  v46 = *((_QWORD *)a3 + 13) + v21 * v15 + v53 * v22;
  LODWORD(v22) = 0;
  if ( v13 )
  {
    v40 = 1;
    v23 = y + v13;
    v41 = y - *((_DWORD *)a3 + 28);
    v24 = *((_DWORD *)a3 + 3);
    v42 = v13;
    if ( y <= v24 && v23 >= *((_DWORD *)a3 + 1) )
    {
      if ( v23 > v24 )
        v42 = v24 - y;
      v39 = y;
      v34 = v13 * (x + 1LL) - v14 * (__int64)y - 1;
      if ( v14 > 0 )
      {
        LODWORD(v35) = v14 / v13;
        v25 = v14 / v13;
        v26 = v14 % v13;
        HIDWORD(v35) = v26;
      }
      else if ( v14 < 0 )
      {
        v32 = -v14;
        v28 = (-1 - v14) / v13;
        v29 = v13 * (v28 + 1);
        v25 = ~v28;
        LODWORD(v35) = v25;
        v26 = v14 + v29;
        HIDWORD(v35) = v26;
      }
      else
      {
        v25 = 0;
        v35 = 0LL;
        v26 = 0;
      }
      v27 = y * v26 + v34;
      if ( v27 <= 0 )
      {
        if ( v27 < 0 )
          v22 = ~(~v27 / v13);
      }
      else
      {
        LODWORD(v22) = v27 / v13;
      }
      v38 = y * v25 + v22;
      v36 = v27 - v13 * v22;
      v37 = v13 - v36 - 1;
      v47 = v54 * v25 + v4;
      v48 = v55 * v25 + v6;
      v49 = v52 * v25 + v8;
      v50 = v51 * v25 + v53;
      vEdgeDDA(a3, (struct _TRIDDA *)&v30);
    }
  }
  else
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v30);
  }
}
