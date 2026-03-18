/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0089930
 * Callers:
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     EngEraseSurface @ 0x1C00A5C10 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  int v8; // r13d
  __int64 v9; // rbx
  unsigned int v10; // r15d
  void (__fastcall *v11)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rsi
  unsigned __int8 *v12; // rbx
  int v13; // r14d
  unsigned int v14; // r13d
  __int64 i; // rcx
  struct _RECTL *v16; // rcx
  LONG left; // r9d
  LONG v18; // eax
  LONG right; // r8d
  LONG v20; // eax
  LONG top; // edx
  LONG v22; // eax
  LONG bottom; // eax
  LONG v24; // r10d
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // [rsp+40h] [rbp-1E8h]
  int v29; // [rsp+40h] [rbp-1E8h]
  int v30; // [rsp+50h] [rbp-1D8h]
  _DWORD v32[84]; // [rsp+90h] [rbp-198h] BYREF

  v5 = a4;
  v28 = a4;
  v30 = 0;
  v8 = 0;
  memset(v32, 0, 0x144uLL);
  v9 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v9 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n", 88);
    return;
  }
  v10 = aulShiftFormat[v9];
  if ( a5 )
  {
    v11 = vSolidXorRect24;
    if ( (_DWORD)v9 != 5 )
      v11 = vSolidXorRect1;
  }
  else if ( (_DWORD)v9 == 5 )
  {
    v11 = vSolidFillRect24;
  }
  else
  {
    v11 = vSolidFillRect1;
  }
  if ( (unsigned int)v9 <= 4 )
  {
    v25 = v9 - 1;
    if ( !v25 )
    {
      v28 = v5 & 1;
      if ( (v5 & 1) != 0 )
        v28 = -1;
      goto LABEL_6;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 1 )
          goto LABEL_6;
LABEL_43:
        v28 = (v5 << 16) | v5;
        goto LABEL_6;
      }
    }
    else
    {
      LOBYTE(v5) = (16 * (v5 & 0xF)) | v5 & 0xF;
    }
    v5 = ((unsigned __int8)v5 << 8) | (unsigned __int8)v5;
    goto LABEL_43;
  }
LABEL_6:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v8 = 1;
      v32[0] = 1;
      *(RECTL *)&v32[1] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v8 = 1;
      v30 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
    }
  }
  v12 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v13 = *((_DWORD *)a1 + 22);
  if ( *((_QWORD *)a1 + 79) )
  {
    v11 = vSolidFillRectWithCallback;
    v12 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  }
  if ( v8 )
  {
    v14 = v28;
    if ( v30 )
      goto LABEL_31;
    while ( 1 )
    {
      for ( i = 0LL; ; i = (unsigned int)(v29 + 1) )
      {
        v29 = i;
        if ( (unsigned int)i >= v32[0] )
          break;
        v16 = (struct _RECTL *)&v32[4 * i + 1];
        left = v16->left;
        v18 = a2->left;
        if ( v16->left < a2->left )
        {
          v16->left = v18;
          left = v18;
        }
        right = v16->right;
        v20 = a2->right;
        if ( right > v20 )
        {
          v16->right = v20;
          right = v20;
        }
        top = v16->top;
        v22 = a2->top;
        if ( top < v22 )
        {
          v16->top = v22;
          top = v22;
        }
        bottom = v16->bottom;
        v24 = a2->bottom;
        if ( bottom > v24 )
        {
          v16->bottom = v24;
          bottom = v24;
        }
        if ( left < right && top < bottom )
          v11(v16, 1u, v12, v13, v14, v10);
      }
      if ( !v30 )
        break;
LABEL_31:
      v30 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, v32, 0LL);
    }
  }
  else
  {
    v11(a2, 1u, v12, v13, v28, v10);
  }
}
