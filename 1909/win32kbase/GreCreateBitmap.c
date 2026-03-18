/*
 * XREFs of GreCreateBitmap @ 0x1C0016C90
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0265474 (bInitBMOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0016200 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r10d
  unsigned __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r14
  struct OBJECT *v12; // rbx
  __int64 v14; // [rsp+60h] [rbp+Fh] BYREF
  char v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+6Ch] [rbp+1Bh]
  _DWORD v17[4]; // [rsp+70h] [rbp+1Fh] BYREF
  HPALETTE v18; // [rsp+80h] [rbp+2Fh]
  __int64 v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+B0h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v7 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v7 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v17[3] = 0;
    v19 = 1LL;
    v17[1] = a1;
    v17[2] = a2;
    v18 = 0LL;
    if ( v6 > 1 )
    {
      v8 = 4;
      if ( v6 <= 4 )
      {
        v8 = 2;
      }
      else if ( v6 <= 8 )
      {
        v8 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v8 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v8 = 1;
      v18 = hpalMono;
    }
    v17[0] = v8;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v10 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v20 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v10 + 32), (unsigned int)v7, a5, &v20);
      }
      if ( v8 != 1 )
        *(_DWORD *)(v10 + 112) |= 0x800200u;
      v11 = *(_QWORD *)(v10 + 32);
      LOBYTE(v9) = 5;
      v15 |= 1u;
      v12 = (struct OBJECT *)HmgShareLockCheck(v11, v9);
      if ( v12 )
      {
        if ( (v11 & 0x800000) == 0 )
          HmgSetOwner(v11, -2147483646, 5);
        HmgDecrementShareReferenceCountEx(v12);
      }
      v5 = *(_QWORD *)(v10 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v14);
    return v5;
  }
}
