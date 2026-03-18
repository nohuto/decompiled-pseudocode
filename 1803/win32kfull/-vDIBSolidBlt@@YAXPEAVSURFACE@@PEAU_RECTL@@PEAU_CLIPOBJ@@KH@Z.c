/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0091D20
 * Callers:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     EngEraseSurface @ 0x1C00DD4B0 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  LONG left; // r8d
  LONG right; // edx
  LONG top; // eax
  LONG bottom; // r9d
  LONG v21; // r10d
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // [rsp+40h] [rbp-1E8h]
  int v26; // [rsp+40h] [rbp-1E8h]
  int v27; // [rsp+50h] [rbp-1D8h]
  _DWORD v29[84]; // [rsp+90h] [rbp-198h] BYREF

  v5 = a4;
  v25 = a4;
  v27 = 0;
  v8 = 0;
  memset(v29, 0, 0x144uLL);
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
    v22 = v9 - 1;
    if ( !v22 )
    {
      v25 = v5 & 1;
      if ( (v5 & 1) != 0 )
        v25 = -1;
      goto LABEL_6;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
          goto LABEL_6;
LABEL_46:
        v25 = (v5 << 16) | v5;
        goto LABEL_6;
      }
    }
    else
    {
      LOBYTE(v5) = (16 * (v5 & 0xF)) | v5 & 0xF;
    }
    v5 = ((unsigned __int8)v5 << 8) | (unsigned __int8)v5;
    goto LABEL_46;
  }
LABEL_6:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v8 = 1;
      v29[0] = 1;
      *(RECTL *)&v29[1] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v8 = 1;
      v27 = 1;
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
    v14 = v25;
    if ( v27 )
      goto LABEL_31;
    while ( 1 )
    {
      for ( i = 0LL; ; i = (unsigned int)(v26 + 1) )
      {
        v26 = i;
        if ( (unsigned int)i >= v29[0] )
          break;
        v16 = (struct _RECTL *)&v29[4 * i + 1];
        left = a2->left;
        if ( v16->left < a2->left )
          v16->left = left;
        else
          left = v16->left;
        right = a2->right;
        if ( v16->right > right )
          v16->right = right;
        else
          right = v16->right;
        top = a2->top;
        if ( v16->top < top )
          v16->top = top;
        else
          top = v16->top;
        bottom = v16->bottom;
        v21 = a2->bottom;
        if ( bottom > v21 )
        {
          v16->bottom = v21;
          bottom = v21;
        }
        if ( left < right && top < bottom )
          v11(v16, 1u, v12, v13, v14, v10);
      }
      if ( !v27 )
        break;
LABEL_31:
      v27 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)v29, 0LL);
    }
  }
  else
  {
    v11(a2, 1u, v12, v13, v25, v10);
  }
}
