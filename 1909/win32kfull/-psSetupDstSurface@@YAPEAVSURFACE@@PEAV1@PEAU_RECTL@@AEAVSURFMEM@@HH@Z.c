/*
 * XREFs of ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1C00D4A94
 * Callers:
 *     EngTransparentBlt @ 0x1C00D2CA0 (EngTransparentBlt.c)
 *     EngGradientFill @ 0x1C00D47F0 (EngGradientFill.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

struct SURFACE *__fastcall psSetupDstSurface(__int64 **a1, struct _RECTL *a2, struct SURFMEM *a3, int a4, int a5)
{
  int v6; // r15d
  int v8; // r12d
  struct SURFACE *v9; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  int v13; // ecx
  int DIB; // edx
  bool v15; // zf
  int v16; // eax
  _DWORD v17[2]; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v18[4]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  struct _RECTL v22; // [rsp+88h] [rbp+7h] BYREF

  v6 = a2->right - a2->left;
  v8 = a2->bottom - a2->top;
  v9 = (struct SURFACE *)a1;
  if ( !a1 )
    return 0LL;
  if ( a4 || *((_WORD *)a1 + 50) )
  {
    v11 = a1[16];
    v12 = a1[6];
    v18[0] = *((_DWORD *)a1 + 24);
    v13 = (_DWORD)a1[14] & 0x40000;
    v18[3] = 0;
    v21 = 0;
    v18[1] = v6;
    v18[2] = v8;
    v20 = v13;
    v19 = 0LL;
    if ( v11 )
      v19 = *v11;
    DIB = SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !DIB )
      return 0LL;
    *(_QWORD *)(*(_QWORD *)a3 + 48LL) = *((_QWORD *)v9 + 6);
    *(_QWORD *)&v22.left = 0LL;
    *(_QWORD *)&v22.right = __PAIR64__(v8, v6);
    if ( a5 )
    {
      v15 = (*((_DWORD *)v9 + 28) & 0x400) == 0;
      v17[0] = a2->left;
      v17[1] = a2->top;
      if ( v15 )
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, _DWORD *))EngCopyBits)(
                (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL),
                0LL,
                xloIdent,
                &v22,
                v17);
      else
        v16 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, _DWORD *))v12[355])(
                (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL),
                0LL,
                xloIdent,
                &v22,
                v17);
      DIB = v16;
    }
    if ( DIB )
    {
      *a2 = v22;
      return *(struct SURFACE **)a3;
    }
    else
    {
      return 0LL;
    }
  }
  return v9;
}
