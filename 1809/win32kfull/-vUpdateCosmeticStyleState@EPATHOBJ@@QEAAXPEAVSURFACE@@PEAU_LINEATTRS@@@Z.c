/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013A20C
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C013AD2C (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // esi
  _DWORD *v6; // rax
  int v7; // esi
  int v8; // r12d
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v13; // rdi
  struct _POINTFIX *v14; // rbp
  struct _POINTFIX *v15; // r14
  unsigned __int64 v16; // r13
  FIX y; // edx
  int v18; // r8d
  FIX v19; // eax
  int v20; // ecx
  __int64 v21; // rdx
  bool v22; // al
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-88h]
  unsigned int v27; // [rsp+24h] [rbp-84h]
  unsigned int v28; // [rsp+28h] [rbp-80h]
  _BYTE v30[32]; // [rsp+38h] [rbp-70h] BYREF
  int v31; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+5Ch] [rbp-4Ch]
  int v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+64h] [rbp-44h]

  v4 = 2;
  if ( (a3->fl & 2) != 0 )
  {
    v26 = 1;
    v8 = 1;
    v27 = 1;
    v28 = 1;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)a2 + 6);
    v7 = 0;
    v8 = v6[555];
    v27 = v6[554];
    pstyle = a3->pstyle;
    v26 = v6[553];
    v28 = v8;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v7 += i->l )
      --i;
    v4 = 2 * v8 * v7;
  }
  for ( j = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL); ; j = (struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v13) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v13) = (unsigned __int16)a3->elStyleState.l + v8 * HIWORD(a3->elStyleState.l);
  v14 = j + 3;
  v15 = j + 4;
  while ( 2 )
  {
    v16 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v15 < v16 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v30, v14, v15) )
        goto LABEL_26;
      y = v14->y;
      v18 = v14->x - v15->x;
      v19 = v15->y;
      if ( v15->x - v14->x >= 0 )
        v18 = v15->x - v14->x;
      v20 = v19 - y;
      v21 = (unsigned int)(y - v19);
      if ( v20 >= 0 )
        v21 = (unsigned int)v20;
      if ( v26 == v27 )
      {
        v22 = v18 >= (int)v21;
      }
      else
      {
        if ( v26 * (unsigned __int64)(unsigned int)v18 >= (unsigned __int64)v27 * v21 )
        {
LABEL_21:
          if ( (v30[0] & 5) == 0 )
            goto LABEL_22;
          goto LABEL_35;
        }
        v22 = 0;
      }
      if ( v22 )
        goto LABEL_21;
      if ( (v30[0] & 5) != 0 )
      {
LABEL_22:
        v23 = v26;
        v24 = v33 - v31;
        goto LABEL_23;
      }
LABEL_35:
      v23 = v27;
      v24 = v34 - v32;
LABEL_23:
      v25 = (unsigned int)(v24 + 1);
      if ( (v25 & 0xFFFF0000) != 0 )
      {
        v13 = ((int)v13 + v23 * v25) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v13) = v23 * v25 + v13;
        if ( (int)v13 >= v4 )
          LODWORD(v13) = (int)v13 % v4;
      }
LABEL_26:
      v14 = v15++;
    }
    j = (struct _POINTFIX *)*j;
    if ( j )
    {
      v15 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v13 % v28) | ((unsigned __int16)((unsigned int)v13 / v28) << 16);
}
