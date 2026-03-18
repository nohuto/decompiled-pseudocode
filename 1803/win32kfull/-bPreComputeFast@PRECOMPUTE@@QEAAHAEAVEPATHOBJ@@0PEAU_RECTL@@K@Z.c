/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C029FB0C
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C029F028 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C029F11C (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  __int64 v5; // rax
  int v8; // esi
  _BYTE *v9; // r15
  unsigned int v10; // ebx
  struct _RECTL *v12; // r12
  unsigned int v13; // r14d
  char *v14; // r9
  __int128 v15; // xmm0
  _QWORD *v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // rax
  PRECOMPUTE *v19; // rcx
  LONG v20; // edx
  struct _RECTL *v21; // r8
  int v22; // eax
  LONG v23; // eax
  LONG v24; // ecx
  LONG v25; // edx
  struct _RECTL *v26; // rax
  bool v27; // cc
  unsigned int v28; // eax
  int v29; // eax
  _BYTE *v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+30h] [rbp-D0h]
  LONG v33; // [rsp+40h] [rbp-C0h]
  LONG v34; // [rsp+44h] [rbp-BCh]
  _QWORD v35[6]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h]
  _QWORD v37[6]; // [rsp+88h] [rbp-78h] BYREF
  char v38; // [rsp+B8h] [rbp-48h] BYREF
  int v39; // [rsp+BCh] [rbp-44h]
  int v40; // [rsp+C4h] [rbp-3Ch]
  struct _RECTL v41; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v42[960]; // [rsp+210h] [rbp+110h] BYREF

  v5 = *((unsigned int *)a2 + 1);
  v8 = 1;
  if ( (unsigned int)v5 > 0x14 )
  {
    if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
      return 0LL;
    v10 = 0;
    v30 = PALLOCMEM2((unsigned int)(48 * v5), 1734632775LL, 0);
    v9 = v30;
    if ( !v30 )
      return 0LL;
    v31 = 1;
  }
  else
  {
    v9 = v42;
    v10 = 0;
    v30 = v42;
    v31 = 0;
  }
  v12 = &v41;
  v13 = 0;
  if ( a4 )
  {
    v14 = &v38;
    v15 = (__int128)*a4;
    v39 = 16 * a4->top;
    v40 = 16 * a4->bottom;
    v36 = v15;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a2, v37, v9, v14) )
  {
    v16 = v35;
    v8 = 0;
    v34 = DWORD2(v36);
    v17 = 0x80000000;
    v33 = v36;
    v35[0] = v35;
    *(_QWORD *)((char *)&v35[1] + 4) = 0x7FFFFFFFLL;
LABEL_12:
    if ( v16 != v35 )
    {
      vAdvanceAETEdges(v35);
      v16 = (_QWORD *)v35[0];
      if ( (_QWORD *)v35[0] != v35 )
      {
        if ( *(_QWORD **)v35[0] == v35 )
        {
          v18 = v37[0];
        }
        else
        {
          vXSortAETEdges(v35);
          v18 = v37[0];
          v16 = (_QWORD *)v35[0];
        }
        goto LABEL_19;
      }
    }
    v18 = v37[0];
    if ( (_QWORD *)v37[0] != v37 )
    {
      v17 = *(_DWORD *)(v37[0] + 16LL);
LABEL_19:
      if ( *(_DWORD *)(v18 + 16) == v17 )
      {
        vMoveNewEdges(v37, v35, v17);
        v16 = (_QWORD *)v35[0];
      }
      v19 = (PRECOMPUTE *)(a5 & 2);
      while ( 1 )
      {
        v20 = *((_DWORD *)v16 + 3);
        v21 = v12;
        if ( (_DWORD)v19 )
        {
          v22 = *((_DWORD *)v16 + 10);
          do
          {
            v16 = (_QWORD *)*v16;
            v22 += *((_DWORD *)v16 + 10);
          }
          while ( v22 );
        }
        else
        {
          v16 = (_QWORD *)*v16;
        }
        v23 = *((_DWORD *)v16 + 3);
        if ( v20 < v23 )
        {
          if ( a4 )
          {
            v24 = v33;
            if ( v20 >= v33 )
              v24 = v20;
            v25 = v34;
            v12->left = v24;
            if ( v23 <= v34 )
              v25 = v23;
            v26 = v12 + 1;
            v27 = v24 < v25;
            v19 = (PRECOMPUTE *)(a5 & 2);
            if ( !v27 )
              v26 = v12;
            v12 = v26;
            v28 = v13 + 1;
            if ( !v27 )
              v28 = v13;
            v13 = v28;
          }
          else
          {
            v12->left = v20;
            ++v13;
            ++v12;
            v25 = v23;
          }
          v21->right = v25;
          v21->top = v17;
          v21->bottom = v17 + 1;
          if ( v13 == 20 )
          {
            if ( (_DWORD)v19 )
              v29 = PRECOMPUTE::bAddPreComputedFastStrokeRects(v19, a3, &v41, 0x14u);
            else
              v29 = PRECOMPUTE::bAddPreComputedFastFillRects(v19, a3, &v41, 0x14u);
            if ( !v29 )
            {
              v8 = 1;
              goto LABEL_55;
            }
            v12 = &v41;
            v13 = 0;
          }
          v19 = (PRECOMPUTE *)(a5 & 2);
        }
        v16 = (_QWORD *)*v16;
        if ( v16 == v35 )
        {
          v16 = (_QWORD *)v35[0];
          ++v17;
          goto LABEL_12;
        }
      }
    }
    if ( v13 )
    {
      if ( (a5 & 2) != 0 )
      {
        v9 = v30;
        if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v37, a3, &v41, v13) )
          v8 = 1;
        goto LABEL_56;
      }
      if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v37, a3, &v41, v13) )
        v8 = 1;
    }
LABEL_55:
    v9 = v30;
  }
LABEL_56:
  if ( v31 )
    Win32FreePool(v9);
  LOBYTE(v10) = v8 == 0;
  return v10;
}
