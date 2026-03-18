/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60
 * Callers:
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009A228 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00C43B4 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C00C59FC (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C00C5A38 (InternalInvalidate3.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00C6418 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     GetAppCompatFlags @ 0x1C011D3E0 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C011E0B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E7160 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02216C8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  __int64 v5; // r10
  unsigned int v6; // esi
  struct tagRECT *v7; // r11
  HRGN v8; // r13
  struct tagWND *v10; // rdi
  int v11; // r12d
  char v12; // r9
  __int64 v13; // rcx
  bool v14; // zf
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  BOOL v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v25; // rbx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r12d
  __int64 v30; // r14
  _BYTE *v31; // rcx
  HRGN v32; // rdx
  int v33; // ebx
  unsigned int v34; // eax
  HRGN v35; // rcx
  unsigned int v36; // eax
  bool v37; // cf
  __int64 v38; // rax
  struct tagWND *v39; // rcx
  __int64 v40; // r8
  HRGN v41; // rbx
  int v42; // eax
  int v43; // esi
  struct tagWND *v44; // rcx
  struct tagWND *v45; // rbx
  __int64 v46; // rax
  HRGN v47; // r14
  int v48; // eax
  int v49; // r12d
  int v50; // eax
  __int64 Prop; // rax
  __int64 v52; // r14
  __int64 EmptyRgnPublic; // rbx
  unsigned int v54; // [rsp+30h] [rbp-61h]
  unsigned int v55; // [rsp+30h] [rbp-61h]
  HRGN v56; // [rsp+38h] [rbp-59h] BYREF
  HRGN v57; // [rsp+40h] [rbp-51h]
  HRGN v58; // [rsp+48h] [rbp-49h] BYREF
  struct tagRECT v59; // [rsp+50h] [rbp-41h] BYREF
  int v60; // [rsp+60h] [rbp-31h]
  int v61; // [rsp+64h] [rbp-2Dh]
  int v62; // [rsp+68h] [rbp-29h]
  struct tagRECT v63; // [rsp+70h] [rbp-21h] BYREF
  struct tagRECT v64; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v6 = a5 | 0x8000;
  v57 = a3;
  v7 = a4;
  v8 = a3;
  if ( !*(_QWORD *)(v5 + 168) )
    v6 = a5;
  v10 = a1;
  v11 = v6 | 0x2000;
  v54 = v6 | 0x2000;
  v63 = *(struct tagRECT *)(v5 + 88);
  if ( (v6 & 1) != 0 )
  {
    if ( (((v6 & 0x10000) == 0) & (*(_BYTE *)(v5 + 26) >> 3)) != 0
      && (*(_DWORD *)(v5 + 232) & 2) == 0
      && ((unsigned int)IsTopLevelWindow(a1) || (v12 & 0x20) == 0) )
    {
      return 1LL;
    }
    *(_DWORD *)(v5 + 232) &= ~2u;
    v13 = *((_QWORD *)v10 + 5);
    if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 || (*(_BYTE *)(v13 + 26) & 8) != 0 )
    {
      v19 = IsRectEmptyInl(&v63);
    }
    else
    {
      v14 = *((_QWORD *)v10 + 13) == 0LL;
      v59 = *v7;
      if ( !v14 )
        PhysicalToLogicalInPlaceRect(v10, &v59);
      left = v63.left;
      right = v63.right;
      if ( v63.left <= v59.left )
        left = v59.left;
      v63.left = left;
      if ( v63.right >= v59.right )
        right = v59.right;
      v63.right = right;
      if ( left >= right )
        goto LABEL_88;
      top = v63.top;
      bottom = v63.bottom;
      if ( v63.top <= v59.top )
        top = v59.top;
      v63.top = top;
      if ( v63.bottom >= v59.bottom )
        bottom = v59.bottom;
      v63.bottom = bottom;
      if ( top >= bottom )
      {
LABEL_88:
        *(_QWORD *)&v63.left = 0LL;
        *(_QWORD *)&v63.right = 0LL;
        v19 = 1;
      }
      else
      {
        v19 = 0;
      }
    }
    if ( v19 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 21LL) & 1) != 0 || a2 != (HRGN)1 )
        return 1LL;
      v6 &= ~0x2000u;
      v11 &= ~0x2000u;
      v54 = v11;
    }
    else if ( (unsigned __int64)a2 > 1 )
    {
      v20 = SmartRectInRegion(a2, &v63);
      if ( !v20 )
        return 1LL;
      v21 = v20 - 1;
      if ( v21 )
      {
        v36 = v21 - 1;
        if ( v36 )
        {
          if ( v36 == 1 )
            return 0LL;
        }
        else
        {
          v37 = (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x10000) != 0;
          v38 = 1LL;
          if ( v37 )
            v38 = (__int64)a2;
          a2 = (HRGN)v38;
        }
      }
      else if ( (v6 & 0x8000) != 0 )
      {
        SetRectRgnIndirect(ghrgnInv2, &v63);
        v44 = 0LL;
        v45 = v10;
        do
        {
          v46 = *((_QWORD *)v45 + 5);
          v47 = *(HRGN *)(v46 + 168);
          if ( v47 )
          {
            v56 = *(HRGN *)(v46 + 168);
            if ( v44 )
            {
              v50 = PhysicalToLogicalInPlaceRgn(v44, &v56);
              v47 = v56;
              v49 = v50;
            }
            else
            {
              v49 = 0;
            }
            GreCombineRgn(ghrgnInv2, ghrgnInv2, v47, 1LL);
            if ( v49 )
              GreDeleteObject(v47);
          }
          v44 = v45;
          v45 = (struct tagWND *)*((_QWORD *)v45 + 13);
        }
        while ( v45 );
        v48 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
        v8 = v57;
        if ( v48 == 1 )
          return 1LL;
        v11 = v6 | 0x2000;
      }
    }
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
    {
      Prop = GetProp(v10, (unsigned __int16)atomLayer, 1LL);
      v52 = Prop;
      if ( Prop )
      {
        EmptyRgnPublic = *(_QWORD *)(Prop + 40);
        if ( !EmptyRgnPublic )
        {
          EmptyRgnPublic = CreateEmptyRgnPublic();
          if ( !EmptyRgnPublic )
            EmptyRgnPublic = 1LL;
        }
        SetRectRgnIndirect(ghrgnInv2, &v63);
        if ( EmptyRgnPublic != 1 )
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
        *(_QWORD *)(v52 + 40) = EmptyRgnPublic;
        v28 = GreCombineRgn(v8, v8, ghrgnInv2, 4LL);
        goto LABEL_51;
      }
    }
  }
  v22 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v22 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v10);
    v22 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v22 + 22) & 0x40) != 0 )
    PixieHack(v10, &v63);
  v23 = *((_QWORD *)v10 + 14);
  if ( !v23 )
    goto LABEL_34;
  v25 = *((_QWORD *)v10 + 5);
  if ( (((v6 & 0x40) == 0) & (unsigned __int8)~(*(_BYTE *)(v25 + 31) >> 5)) == 0
    || (v6 & 0x80u) == 0 && (*(_BYTE *)(v25 + 31) & 2) != 0 )
  {
    goto LABEL_34;
  }
  *(_QWORD *)&v64.left = 0LL;
  *(_QWORD *)&v64.right = 0LL;
  v29 = v11 | 0x404;
  v30 = 0LL;
  if ( (v6 & 1) == 0 )
    v29 = v54;
  if ( !(unsigned int)IntersectRect(&v64, &v63, v25 + 104) && ((*(_BYTE *)(v25 + 21) & 1) != 0 || a2 != (HRGN)1) )
  {
LABEL_34:
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v10);
    if ( (v6 & 0x2000) != 0 )
    {
      v26 = (_BYTE *)*((_QWORD *)v10 + 5);
      if ( (v26[24] & 0x20) == 0
        && (v26[26] & 8) == 0
        && (v26[31] & 4) != 0
        && ((v6 & 8) != 0
         || (v27 = *((_QWORD *)v10 + 13)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v27 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v63);
        if ( (v6 & 0x8000) != 0 )
        {
          v39 = 0LL;
          do
          {
            v40 = *((_QWORD *)v10 + 5);
            v41 = *(HRGN *)(v40 + 168);
            if ( v41 )
            {
              v56 = *(HRGN *)(v40 + 168);
              if ( v39 )
              {
                v42 = LogicalToPhysicalInPlaceRgnWorker(v39, &v56, 0LL);
                v40 = *((_QWORD *)v10 + 5);
                v43 = v42;
                v41 = v56;
              }
              else
              {
                v43 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, *(_QWORD *)(v40 + 168), 1LL);
              if ( v43 )
                GreDeleteObject(v41);
            }
            v39 = v10;
            v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
          }
          while ( v10 );
        }
        v28 = GreCombineRgn(v57, v57, ghrgnInv2, 4LL);
LABEL_51:
        if ( v28 == 1 )
          return 0LL;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v31 = *(_BYTE **)(v23 + 40);
    if ( (v31[31] & 0x10) == 0 )
      goto LABEL_57;
    if ( (v31[27] & 0x20) != 0 || (v31[26] & 8) != 0 )
    {
      v55 = 1;
      if ( v30 || (v30 = CreateEmptyRgnPublic()) != 0 )
      {
        v32 = v57;
        if ( a2 != (HRGN)1 )
          v32 = a2;
        GreCombineRgn(v30, v32, 0LL, 5LL);
      }
    }
    else
    {
      v55 = 0;
    }
    v58 = v57;
    v56 = a2;
    v61 = PhysicalToLogicalInPlaceRect(v23, &v64);
    v33 = PhysicalToLogicalInPlaceRgn(v23, &v56);
    v60 = PhysicalToLogicalInPlaceRgn(v23, &v58);
    *(_QWORD *)&v59.left = v58;
    v62 = InternalInvalidate2((struct tagWND *)v23, v56, v58, &v64, v29);
    if ( v33 )
      GreDeleteObject(v56);
    if ( v60 )
    {
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v23, &v58, 0LL) )
      {
        GreCombineRgn(v57, v58, 0LL, 5LL);
        GreDeleteObject(v58);
      }
      GreDeleteObject(*(_QWORD *)&v59.left);
    }
    if ( v61 )
      LogicalToPhysicalInPlaceRect(v23, &v64);
    v34 = v55;
    if ( v55 && v30 )
    {
      v35 = v57;
      if ( a2 != (HRGN)1 )
        v35 = a2;
      GreCombineRgn(v35, v30, 0LL, 5LL);
      v34 = v55;
    }
    if ( v62 || v34 )
      goto LABEL_57;
    if ( (v6 & 0x12) == 0 )
      break;
    v6 &= 0xFFFFF3D2;
    v29 &= 0xFFFFD3D2;
LABEL_57:
    v23 = *(_QWORD *)(v23 + 88);
    if ( !v23 )
    {
      if ( v30 )
        GreDeleteObject(v30);
      goto LABEL_34;
    }
  }
  if ( v30 )
    GreDeleteObject(v30);
  return 0LL;
}
