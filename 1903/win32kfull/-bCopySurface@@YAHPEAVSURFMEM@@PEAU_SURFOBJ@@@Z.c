/*
 * XREFs of ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0270B94
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

int __fastcall bCopySurface(struct SURFMEM *a1, struct _SURFOBJ *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  LONG cx; // edx
  ULONG iBitmapFormat; // ecx
  int result; // eax
  __int64 v9; // rax
  _DWORD v10[4]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  RECTL prclDest; // [rsp+80h] [rbp+27h] BYREF

  v4 = SURFOBJ_TO_SURFACE(a2);
  v5 = 0;
  cx = a2->sizlBitmap.cx;
  v10[2] = a2->sizlBitmap.cy;
  iBitmapFormat = a2->iBitmapFormat;
  v10[3] = 0;
  v13 = 0;
  v10[1] = cx;
  v11 = 0LL;
  v12 = *(_DWORD *)(v4 + 112) & 0x40000;
  if ( iBitmapFormat == 7 )
  {
    v10[0] = 2;
  }
  else if ( iBitmapFormat == 8 )
  {
    v10[0] = 3;
  }
  else
  {
    v10[0] = iBitmapFormat;
  }
  result = SURFMEM::bCreateDIB(a1, (struct _DEVBITMAPINFO *)v10, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( result )
  {
    prclDest.right = a2->sizlBitmap.cx;
    prclDest.bottom = a2->sizlBitmap.cy;
    v9 = *(_QWORD *)a1;
    *(_QWORD *)&prclDest.left = 0LL;
    LOBYTE(v5) = EngCopyBits(
                   (SURFOBJ *)((v9 + 24) & -(__int64)(v9 != 0)),
                   a2,
                   0LL,
                   xloIdent,
                   &prclDest,
                   (POINTL *)&prclDest);
    return v5;
  }
  return result;
}
