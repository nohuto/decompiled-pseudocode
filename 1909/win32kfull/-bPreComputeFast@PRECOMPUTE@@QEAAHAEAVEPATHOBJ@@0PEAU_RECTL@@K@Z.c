/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02C7D5C
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0157990 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C7928 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C7A1C (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 */

_BOOL8 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  __int64 v7; // rax
  _BYTE *v8; // rbx
  struct _RECTL *v9; // r15
  unsigned int v10; // esi
  __int64 *v11; // r9
  __int128 v12; // xmm0
  char v13; // r12
  _QWORD *v14; // rbx
  int v15; // edi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r12d
  LONG v20; // edx
  struct _RECTL *v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // edx
  struct _RECTL *v25; // rax
  unsigned int v26; // eax
  int v27; // eax
  _BYTE *v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  LONG v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+50h] [rbp-B0h]
  _QWORD v34[6]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v35[6]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-40h]
  struct _RECTL v38; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v39[960]; // [rsp+210h] [rbp+110h] BYREF

  memset(v34, 0, sizeof(v34));
  memset(v35, 0, sizeof(v35));
  v7 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v7 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v7) > 0xFFFFFFFF )
      return 0LL;
    v29 = PALLOCMEM2(48 * v7, 1734632775LL, 0);
    v8 = v29;
    if ( !v29 )
      return 0LL;
    v30 = 1;
  }
  else
  {
    v30 = 0;
    v8 = v39;
    v29 = v39;
  }
  v9 = &v38;
  v32 = 0;
  v10 = 0;
  v33 = 0;
  v36 = 0LL;
  v37 = 0LL;
  if ( a4 )
  {
    v11 = &v36;
    v12 = (__int128)*a4;
    HIDWORD(v36) = 16 * a4->top;
    HIDWORD(v37) = 16 * a4->bottom;
    v33 = DWORD2(v12);
    v32 = v12;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !(unsigned int)bConstructGET(a2, v35, v8, v11) )
  {
LABEL_50:
    v15 = 1;
    goto LABEL_54;
  }
  v13 = a5;
  v14 = v34;
  v15 = 0;
  v34[0] = v34;
  LODWORD(v34[2]) = 0;
  v16 = 0x80000000;
  HIDWORD(v34[1]) = 0x7FFFFFFF;
LABEL_11:
  if ( v14 != v34 )
  {
    vAdvanceAETEdges(v34);
    v14 = (_QWORD *)v34[0];
    if ( (_QWORD *)v34[0] != v34 )
    {
      if ( *(_QWORD **)v34[0] != v34 )
      {
        vXSortAETEdges(v34);
        v14 = (_QWORD *)v34[0];
      }
      v18 = v35[0];
      goto LABEL_18;
    }
  }
  v18 = v35[0];
  v17 = (unsigned __int64)v35;
  if ( (_QWORD *)v35[0] != v35 )
  {
    v16 = *(_DWORD *)(v35[0] + 16LL);
LABEL_18:
    if ( *(_DWORD *)(v18 + 16) == v16 )
    {
      vMoveNewEdges(v35, v34, v16);
      v14 = (_QWORD *)v34[0];
    }
    v19 = v13 & 2;
    while ( 1 )
    {
      v20 = *((_DWORD *)v14 + 3);
      v21 = v9;
      if ( v19 )
      {
        v22 = *((_DWORD *)v14 + 10);
        do
        {
          v14 = (_QWORD *)*v14;
          v22 += *((_DWORD *)v14 + 10);
        }
        while ( v22 );
      }
      else
      {
        v14 = (_QWORD *)*v14;
      }
      v23 = *((_DWORD *)v14 + 3);
      if ( v20 < v23 )
      {
        if ( a4 )
        {
          v17 = (unsigned int)v32;
          if ( v20 >= v32 )
            v17 = (unsigned int)v20;
          v24 = v33;
          v9->left = v17;
          if ( v23 <= v33 )
            v24 = v23;
          v25 = v9 + 1;
          if ( (int)v17 >= v24 )
            v25 = v9;
          v9 = v25;
          v26 = v10 + 1;
          if ( (int)v17 >= v24 )
            v26 = v10;
          v10 = v26;
        }
        else
        {
          v9->left = v20;
          ++v10;
          ++v9;
          v24 = v23;
        }
        v21->right = v24;
        v21->top = v16;
        v21->bottom = v16 + 1;
        if ( v10 == 20 )
        {
          if ( v19 )
            v27 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v17, a3, &v38, 0x14u);
          else
            v27 = PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v17, a3, &v38, 0x14u);
          if ( !v27 )
          {
            v15 = 1;
            goto LABEL_53;
          }
          v9 = &v38;
          v10 = 0;
        }
      }
      v14 = (_QWORD *)*v14;
      if ( v14 == v34 )
      {
        v14 = (_QWORD *)v34[0];
        ++v16;
        v13 = a5;
        goto LABEL_11;
      }
    }
  }
  if ( v10 )
  {
    if ( (v13 & 2) != 0 )
    {
      v8 = v29;
      if ( (unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v35, a3, &v38, v10) )
        goto LABEL_54;
      goto LABEL_50;
    }
    if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v35, a3, &v38, v10) )
      v15 = 1;
  }
LABEL_53:
  v8 = v29;
LABEL_54:
  if ( v30 )
    Win32FreePool(v8);
  return !v15;
}
