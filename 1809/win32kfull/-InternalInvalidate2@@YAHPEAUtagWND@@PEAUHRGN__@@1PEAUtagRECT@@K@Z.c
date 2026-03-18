/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     NtUserRedrawWindow @ 0x1C003AE70 (NtUserRedrawWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F76E0 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C003D8C4 (PhysicalToLogicalInPlaceRect.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C003DD64 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0115390 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C01159CC (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01D2578 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0209C38 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  struct tagRECT *v8; // r10
  HRGN v9; // r13
  struct tagWND *v10; // rdi
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r13
  int v15; // r9d
  __int64 DesktopWindow; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // zf
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rbx
  _BYTE *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // r14
  _BYTE *v28; // rcx
  HRGN v29; // rdx
  int v30; // ebx
  unsigned int v31; // eax
  HRGN v32; // rcx
  unsigned int v33; // eax
  bool v34; // cf
  __int64 v35; // rax
  struct tagWND *v36; // rcx
  struct tagWND *v37; // rbx
  __int64 v38; // rax
  HRGN v39; // r14
  int v40; // eax
  int v41; // r12d
  struct tagWND *v42; // rcx
  __int64 v43; // r8
  HRGN v44; // rbx
  int v45; // eax
  int v46; // esi
  int v47; // eax
  __int64 Prop; // rax
  __int64 v49; // r14
  __int64 EmptyRgnPublic; // rbx
  unsigned int v51; // [rsp+30h] [rbp-51h]
  unsigned int v52; // [rsp+30h] [rbp-51h]
  HRGN v53; // [rsp+38h] [rbp-49h] BYREF
  HRGN v54; // [rsp+40h] [rbp-41h]
  HRGN v55; // [rsp+48h] [rbp-39h] BYREF
  int v56; // [rsp+50h] [rbp-31h]
  int v57; // [rsp+54h] [rbp-2Dh]
  int v58; // [rsp+58h] [rbp-29h]
  HRGN v59; // [rsp+60h] [rbp-21h]
  struct tagRECT v60; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v61; // [rsp+78h] [rbp-9h] BYREF

  v6 = *((_QWORD *)a1 + 5);
  v7 = a5 | 0x8000;
  v54 = a3;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  if ( !*(_QWORD *)(v6 + 168) )
    v7 = a5;
  v11 = v7 | 0x2000;
  v51 = v7 | 0x2000;
  v60 = *(struct tagRECT *)(v6 + 88);
  if ( (v7 & 1) == 0 )
    goto LABEL_4;
  if ( (((v7 & 0x10000) == 0) & (*(_BYTE *)(v6 + 26) >> 3)) != 0 )
  {
    v15 = *(_DWORD *)(v6 + 232);
    if ( (v15 & 2) == 0 )
    {
      if ( *((_QWORD *)a1 + 10) )
      {
        DesktopWindow = GetDesktopWindow(a1);
        if ( v17 == DesktopWindow )
          return 1LL;
      }
      if ( (v15 & 0x20) == 0 )
        return 1LL;
    }
  }
  *(_DWORD *)(v6 + 232) &= ~2u;
  v18 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v18 + 27) & 0x20) != 0 || (*(_BYTE *)(v18 + 26) & 8) != 0 )
  {
    if ( !(unsigned int)IsRectEmptyInl(&v60) )
      goto LABEL_23;
  }
  else
  {
    v19 = *((_QWORD *)v10 + 10) == 0LL;
    v61 = *v8;
    if ( !v19 )
      PhysicalToLogicalInPlaceRect(v10, &v61);
    if ( (unsigned int)IntersectRect(&v60, &v60, &v61) )
    {
LABEL_23:
      if ( (unsigned __int64)a2 > 1 )
      {
        v20 = SmartRectInRegion(a2, &v60);
        if ( !v20 )
          return 1LL;
        v21 = v20 - 1;
        if ( v21 )
        {
          v33 = v21 - 1;
          if ( v33 )
          {
            if ( v33 == 1 )
              return 0LL;
          }
          else
          {
            v34 = (GetAppCompatFlags(*((_QWORD *)v10 + 2), v6) & 0x10000) != 0;
            v35 = 1LL;
            if ( v34 )
              v35 = (__int64)a2;
            a2 = (HRGN)v35;
          }
        }
        else if ( (v7 & 0x8000) != 0 )
        {
          SetRectRgnIndirect(ghrgnInv2, &v60);
          v36 = 0LL;
          v37 = v10;
          do
          {
            v38 = *((_QWORD *)v37 + 5);
            v39 = *(HRGN *)(v38 + 168);
            if ( v39 )
            {
              v53 = *(HRGN *)(v38 + 168);
              if ( v36 )
              {
                v47 = PhysicalToLogicalInPlaceRgn(v36, &v53);
                v39 = v53;
                v41 = v47;
              }
              else
              {
                v41 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, v39, 1LL);
              if ( v41 )
                GreDeleteObject(v39);
            }
            v36 = v37;
            v37 = (struct tagWND *)*((_QWORD *)v37 + 10);
          }
          while ( v37 );
          v40 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
          v9 = v54;
          if ( v40 == 1 )
            return 1LL;
          v11 = v7 | 0x2000;
        }
      }
      goto LABEL_27;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 21LL) & 1) != 0 || a2 != (HRGN)1 )
    return 1LL;
  v7 &= ~0x2000u;
  v11 &= ~0x2000u;
  v51 = v11;
LABEL_27:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = GetProp(v10, (unsigned __int16)atomLayer, 1LL);
    v49 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic();
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v60);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      *(_QWORD *)(v49 + 40) = EmptyRgnPublic;
      v25 = GreCombineRgn(v9, v9, ghrgnInv2, 4LL);
      return v25 != 1;
    }
  }
LABEL_4:
  v12 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v12 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v10);
    v12 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v12 + 22) & 0x40) != 0 )
    PixieHack(v10, &v60);
  v13 = *((_QWORD *)v10 + 11);
  if ( !v13 )
    goto LABEL_9;
  v22 = *((_QWORD *)v10 + 5);
  LOBYTE(v6) = *(_BYTE *)(v22 + 31);
  if ( (((v7 & 0x40) == 0) & (unsigned __int8)~((unsigned __int8)v6 >> 5)) == 0 || (v7 & 0x80u) == 0 && (v6 & 2) != 0 )
    goto LABEL_9;
  v26 = v11 | 0x404;
  v27 = 0LL;
  if ( (v7 & 1) == 0 )
    v26 = v51;
  if ( !(unsigned int)IntersectRect(&v61, &v60, v22 + 104) && ((*(_BYTE *)(v22 + 21) & 1) != 0 || a2 != (HRGN)1) )
  {
LABEL_9:
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v10);
    if ( (v7 & 0x2000) != 0 )
    {
      v23 = (_BYTE *)*((_QWORD *)v10 + 5);
      if ( (v23[24] & 0x20) == 0
        && (v23[26] & 8) == 0
        && (v23[31] & 4) != 0
        && ((v7 & 8) != 0
         || (v24 = *((_QWORD *)v10 + 10)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v10 + 2), v6) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v60);
        if ( (v7 & 0x8000) != 0 )
        {
          v42 = 0LL;
          do
          {
            v43 = *((_QWORD *)v10 + 5);
            v44 = *(HRGN *)(v43 + 168);
            if ( v44 )
            {
              v53 = *(HRGN *)(v43 + 168);
              if ( v42 )
              {
                v45 = LogicalToPhysicalInPlaceRgnWorker(v42, &v53, 0LL);
                v43 = *((_QWORD *)v10 + 5);
                v46 = v45;
                v44 = v53;
              }
              else
              {
                v46 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, *(_QWORD *)(v43 + 168), 1LL);
              if ( v46 )
                GreDeleteObject(v44);
            }
            v42 = v10;
            v10 = (struct tagWND *)*((_QWORD *)v10 + 10);
          }
          while ( v10 );
        }
        v25 = GreCombineRgn(v54, v54, ghrgnInv2, 4LL);
        return v25 != 1;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v28 = *(_BYTE **)(v13 + 40);
    if ( (v28[31] & 0x10) == 0 )
      goto LABEL_47;
    if ( (v28[27] & 0x20) != 0 || (v28[26] & 8) != 0 )
    {
      v52 = 1;
      if ( v27 || (v27 = CreateEmptyRgnPublic()) != 0 )
      {
        v29 = v54;
        if ( a2 != (HRGN)1 )
          v29 = a2;
        GreCombineRgn(v27, v29, 0LL, 5LL);
      }
    }
    else
    {
      v52 = 0;
    }
    v55 = v54;
    v53 = a2;
    v57 = PhysicalToLogicalInPlaceRect(v13, &v61);
    v30 = PhysicalToLogicalInPlaceRgn(v13, &v53);
    v56 = PhysicalToLogicalInPlaceRgn(v13, &v55);
    v59 = v55;
    v58 = InternalInvalidate2((struct tagWND *)v13, v53, v55, &v61, v26);
    if ( v30 )
      GreDeleteObject(v53);
    if ( v56 )
    {
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v13, &v55, 0LL) )
      {
        GreCombineRgn(v54, v55, 0LL, 5LL);
        GreDeleteObject(v55);
      }
      GreDeleteObject(v59);
    }
    if ( v57 )
      LogicalToPhysicalInPlaceRect(v13, &v61);
    v31 = v52;
    if ( v52 && v27 )
    {
      v32 = v54;
      if ( a2 != (HRGN)1 )
        v32 = a2;
      GreCombineRgn(v32, v27, 0LL, 5LL);
      v31 = v52;
    }
    if ( v58 || v31 )
      goto LABEL_47;
    if ( (v7 & 0x12) == 0 )
      break;
    v7 &= 0xFFFFF3D2;
    v26 &= 0xFFFFD3D2;
LABEL_47:
    v13 = *(_QWORD *)(v13 + 64);
    if ( !v13 )
    {
      if ( v27 )
        GreDeleteObject(v27);
      goto LABEL_9;
    }
  }
  if ( v27 )
    GreDeleteObject(v27);
  return 0LL;
}
