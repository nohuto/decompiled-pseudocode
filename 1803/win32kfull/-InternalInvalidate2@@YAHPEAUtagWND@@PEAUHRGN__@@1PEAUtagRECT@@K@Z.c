/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0038270 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C002AE38 (PhysicalToLogicalInPlaceRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C002C04C (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C002C088 (InternalInvalidate3.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C002C628 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetAppCompatFlags @ 0x1C00F8F30 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FC95C (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01AF71C (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01E3D68 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  struct tagRECT *v7; // r11
  HRGN v8; // r8
  __int64 v9; // rdx
  struct tagWND *v10; // rsi
  int v11; // r10d
  __int64 DesktopWindow; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  HRGN v24; // rdx
  HRGN v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  struct tagWND *v29; // rax
  _BYTE *v30; // rcx
  __int64 EmptyRgnPublic; // rax
  HRGN v32; // rdx
  int v33; // ebx
  struct tagWND *v34; // rbx
  struct tagWND *v35; // rax
  HRGN v36; // rcx
  _BYTE *v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // eax
  bool v40; // cf
  __int64 v41; // rax
  struct tagWND *v42; // rbx
  __int64 v43; // rcx
  HRGN v44; // rdx
  int v45; // eax
  struct tagWND *v46; // rcx
  __int64 v47; // r8
  HRGN v48; // rbx
  int v49; // eax
  int v50; // eax
  HRGN Prop; // rax
  __int64 v52; // rbx
  HRGN v53; // rdx
  HRGN v54; // rcx
  int v55; // [rsp+30h] [rbp-61h]
  int v56; // [rsp+30h] [rbp-61h]
  int v57; // [rsp+30h] [rbp-61h]
  __int16 v58; // [rsp+34h] [rbp-5Dh]
  unsigned int v59; // [rsp+38h] [rbp-59h]
  unsigned int v60; // [rsp+38h] [rbp-59h]
  HRGN v61; // [rsp+40h] [rbp-51h]
  HRGN v62; // [rsp+48h] [rbp-49h] BYREF
  struct tagWND *v63; // [rsp+50h] [rbp-41h]
  struct tagWND *v64; // [rsp+58h] [rbp-39h]
  HRGN v65; // [rsp+60h] [rbp-31h] BYREF
  HRGN v66; // [rsp+68h] [rbp-29h]
  struct tagRECT v67; // [rsp+70h] [rbp-21h] BYREF
  int v68; // [rsp+80h] [rbp-11h]
  int v69; // [rsp+84h] [rbp-Dh]
  int v70; // [rsp+88h] [rbp-9h]
  struct tagRECT v71; // [rsp+90h] [rbp-1h] BYREF
  struct tagRECT v72; // [rsp+A0h] [rbp+Fh] BYREF

  v5 = 0;
  v6 = a5 | 0x8000;
  v66 = a3;
  v7 = a4;
  v61 = a2;
  v8 = a2;
  v63 = a1;
  v9 = *((_QWORD *)a1 + 5);
  v10 = a1;
  if ( !*(_QWORD *)(v9 + 168) )
    v6 = a5;
  v58 = v6;
  v59 = v6 | 0x2000;
  v71 = *(struct tagRECT *)(v9 + 88);
  if ( (v6 & 1) == 0 )
    goto LABEL_30;
  if ( (((v6 & 0x10000) == 0) & (*(_BYTE *)(v9 + 26) >> 3)) != 0 )
  {
    v11 = *(_DWORD *)(v9 + 232);
    if ( (v11 & 2) == 0 )
    {
      if ( *((_QWORD *)a1 + 10) )
      {
        DesktopWindow = GetDesktopWindow(a1);
        if ( v13 == DesktopWindow )
          return 1LL;
      }
      if ( (v11 & 0x20) == 0 )
        return 1LL;
    }
  }
  *(_DWORD *)(v9 + 232) &= ~2u;
  v14 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v14 + 27) & 0x20) != 0 || (*(_BYTE *)(v14 + 26) & 8) != 0 )
  {
    v19 = IsRectEmptyInl(&v71);
  }
  else
  {
    v67 = *v7;
    if ( *((_QWORD *)v10 + 10) )
    {
      PhysicalToLogicalInPlaceRect(v10, &v67, v8);
      v8 = v61;
    }
    left = v71.left;
    right = v71.right;
    if ( v71.left <= v67.left )
      left = v67.left;
    v71.left = left;
    if ( v71.right >= v67.right )
      right = v67.right;
    v71.right = right;
    if ( left >= right )
      goto LABEL_83;
    top = v71.top;
    bottom = v71.bottom;
    if ( v71.top <= v67.top )
      top = v67.top;
    v71.top = top;
    if ( v71.bottom >= v67.bottom )
      bottom = v67.bottom;
    v71.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_83:
      *(_QWORD *)&v71.left = 0LL;
      *(_QWORD *)&v71.right = 0LL;
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
  }
  if ( v19 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 21LL) & 1) != 0 || v8 != (HRGN)1 )
      return 1LL;
    LOWORD(v6) = v6 & 0xDFFF;
    v59 &= ~0x2000u;
    v58 = v6;
    goto LABEL_29;
  }
  v58 = v6;
  if ( (unsigned __int64)v8 > 1 )
  {
    v20 = SmartRectInRegion(v8, &v71);
    if ( v20 )
    {
      v22 = v20 - 1;
      if ( v22 )
      {
        v39 = v22 - 1;
        if ( v39 )
        {
          if ( v39 == 1 )
            return 0LL;
        }
        else
        {
          v40 = (GetAppCompatFlags(*((_QWORD *)v10 + 2), v21) & 0x10000) != 0;
          v41 = 1LL;
          if ( v40 )
            v41 = (__int64)v61;
          v61 = (HRGN)v41;
        }
      }
      else if ( (v6 & 0x8000) != 0 )
      {
        SetRectRgnIndirect(ghrgnInv2, &v71);
        v42 = v10;
        v43 = 0LL;
        do
        {
          v44 = *(HRGN *)(*((_QWORD *)v42 + 5) + 168LL);
          v65 = v44;
          if ( v44 )
          {
            v62 = v44;
            if ( v43 )
            {
              v50 = PhysicalToLogicalInPlaceRgn(v43, &v62);
              v44 = v62;
              v65 = v62;
              v56 = v50;
            }
            else
            {
              v56 = 0;
            }
            GreCombineRgn(ghrgnInv2, ghrgnInv2, v44, 1LL);
            if ( v56 )
              GreDeleteObject(v65);
          }
          v43 = (__int64)v42;
          v42 = (struct tagWND *)*((_QWORD *)v42 + 10);
        }
        while ( v42 );
        v45 = GreCombineRgn(ghrgnInv2, ghrgnInv2, v61, 1LL);
        LOWORD(v6) = v58;
        v10 = v63;
        if ( v45 == 1 )
          return 1LL;
      }
      goto LABEL_29;
    }
    return 1LL;
  }
LABEL_29:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = (HRGN)RealGetProp(*((_QWORD *)v10 + 15), (unsigned __int16)atomLayer, 1LL);
    v62 = Prop;
    if ( Prop )
    {
      v52 = *((_QWORD *)Prop + 5);
      if ( !v52 )
      {
        v52 = ((__int64 (*)(void))CreateEmptyRgnPublic)();
        if ( !v52 )
          v52 = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v71);
      if ( v52 != 1 )
        GreCombineRgn(v52, v52, ghrgnInv2, 2LL);
      v53 = v66;
      v54 = v66;
      *((_QWORD *)v62 + 5) = v52;
      LOBYTE(v5) = (unsigned int)GreCombineRgn(v54, v53, ghrgnInv2, 4LL) != 1;
      return v5;
    }
  }
LABEL_30:
  v23 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v23 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v10);
    v23 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v23 + 22) & 0x40) != 0 )
    PixieHack(v10, &v71);
  v64 = (struct tagWND *)*((_QWORD *)v10 + 11);
  if ( !v64
    || (v26 = (HRGN)*((_QWORD *)v10 + 5),
        v62 = v26,
        (((v6 & 0x40) == 0) & (unsigned __int8)~(*((_BYTE *)v26 + 31) >> 5)) == 0)
    || (v6 & 0x80u) == 0 && (*((_BYTE *)v26 + 31) & 2) != 0 )
  {
LABEL_35:
    v24 = v61;
    goto LABEL_36;
  }
  v27 = v59 | 0x404;
  v63 = 0LL;
  if ( (v6 & 1) == 0 )
    v27 = v59;
  v60 = v27;
  if ( !(unsigned int)IntersectRect(&v72, &v71, v26 + 26) )
  {
    v24 = v61;
    if ( (*((_BYTE *)v62 + 21) & 1) != 0 || v61 != (HRGN)1 )
    {
LABEL_36:
      if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
        InternalInvalidate3(v10);
      if ( (v6 & 0x2000) != 0 )
      {
        v37 = (_BYTE *)*((_QWORD *)v10 + 5);
        if ( (v37[24] & 0x20) == 0
          && (v37[26] & 8) == 0
          && (v37[31] & 4) != 0
          && ((v6 & 8) != 0
           || (v38 = *((_QWORD *)v10 + 10)) != 0
           && ((*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 2) != 0
            || (GetAppCompatFlags(*((_QWORD *)v10 + 2), v24) & 0x4000) != 0)) )
        {
          SetRectRgnIndirect(ghrgnInv2, &v71);
          if ( (v6 & 0x8000) != 0 )
          {
            v46 = 0LL;
            do
            {
              v47 = *((_QWORD *)v10 + 5);
              v48 = *(HRGN *)(v47 + 168);
              if ( v48 )
              {
                v62 = *(HRGN *)(v47 + 168);
                if ( v46 )
                {
                  v49 = LogicalToPhysicalInPlaceRgn(v46, &v62);
                  v47 = *((_QWORD *)v10 + 5);
                  v48 = v62;
                  v57 = v49;
                }
                else
                {
                  v57 = 0;
                }
                GreCombineRgn(ghrgnInv2, ghrgnInv2, *(_QWORD *)(v47 + 168), 1LL);
                if ( v57 )
                  GreDeleteObject(v48);
              }
              v46 = v10;
              v10 = (struct tagWND *)*((_QWORD *)v10 + 10);
            }
            while ( v10 );
          }
          if ( (unsigned int)GreCombineRgn(v66, v66, ghrgnInv2, 4LL) == 1 )
            return 0LL;
        }
      }
      return 1LL;
    }
  }
  v29 = v64;
  while ( 1 )
  {
    v30 = (_BYTE *)*((_QWORD *)v29 + 5);
    if ( (v30[31] & 0x10) != 0 )
      break;
LABEL_48:
    v29 = (struct tagWND *)*((_QWORD *)v64 + 8);
    v64 = v29;
    if ( !v29 )
    {
      if ( v63 )
        GreDeleteObject(v63);
      goto LABEL_35;
    }
  }
  if ( (v30[27] & 0x20) != 0 || (v30[26] & 8) != 0 )
  {
    EmptyRgnPublic = (__int64)v63;
    v55 = 1;
    if ( v63
      || (EmptyRgnPublic = CreateEmptyRgnPublic(v30, v24, v28, 1LL), (v63 = (struct tagWND *)EmptyRgnPublic) != 0LL) )
    {
      v32 = v66;
      if ( v61 != (HRGN)1 )
        v32 = v61;
      GreCombineRgn(EmptyRgnPublic, v32, 0LL, 5LL);
    }
  }
  else
  {
    v55 = 0;
  }
  v62 = v61;
  v65 = v66;
  v69 = PhysicalToLogicalInPlaceRect(v64, &v72, v28);
  v33 = PhysicalToLogicalInPlaceRgn((__int64)v64, &v62);
  v68 = PhysicalToLogicalInPlaceRgn((__int64)v64, &v65);
  *(_QWORD *)&v67.left = v65;
  v70 = InternalInvalidate2(v64, v62, v65, &v72, v60);
  if ( v33 )
    GreDeleteObject(v62);
  v34 = v64;
  if ( v68 )
  {
    if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v64, &v65) )
    {
      GreCombineRgn(v66, v65, 0LL, 5LL);
      GreDeleteObject(v65);
    }
    GreDeleteObject(*(_QWORD *)&v67.left);
  }
  if ( v69 )
    LogicalToPhysicalInPlaceRect(v34, &v72);
  v35 = v63;
  if ( v55 && v63 )
  {
    v36 = v61;
    if ( v61 == (HRGN)1 )
      v36 = v66;
    GreCombineRgn(v36, v63, 0LL, 5LL);
    v35 = v63;
  }
  if ( v70 )
  {
    LOWORD(v6) = v58;
    goto LABEL_48;
  }
  LOWORD(v6) = v58;
  if ( v55 )
    goto LABEL_48;
  if ( (v58 & 0x12) != 0 )
  {
    LOWORD(v6) = v58 & 0xF3D2;
    v60 &= 0xFFFFD3D2;
    v58 &= 0xF3D2u;
    goto LABEL_48;
  }
  if ( v35 )
    GreDeleteObject(v35);
  return 0LL;
}
