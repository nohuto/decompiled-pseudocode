/*
 * XREFs of GreCreateBitmap @ 0x1C002CF20
 * Callers:
 *     bInitBMOBJ @ 0x1C0268670 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSetOwner @ 0x1C002A580 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r10d
  unsigned __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r14
  struct OBJECT *v11; // rbx
  __int64 v13; // [rsp+60h] [rbp+Fh] BYREF
  char v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+6Ch] [rbp+1Bh]
  _DWORD v16[4]; // [rsp+70h] [rbp+1Fh] BYREF
  HPALETTE v17; // [rsp+80h] [rbp+2Fh]
  __int64 v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+5Fh] BYREF

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
    v16[3] = 0;
    v18 = 1LL;
    v16[1] = a1;
    v16[2] = a2;
    v17 = 0LL;
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
      v17 = hpalMono;
    }
    v16[0] = v8;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v13, (struct _DEVBITMAPINFO *)v16, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v9 = v13;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v19 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v9 + 32), (unsigned int)v7, a5, &v19);
      }
      if ( v8 != 1 )
        *(_DWORD *)(v9 + 112) |= 0x800200u;
      v10 = *(_QWORD *)(v9 + 32);
      v14 |= 1u;
      v11 = (struct OBJECT *)HmgShareLockCheck(v10, 5);
      if ( v11 )
      {
        if ( (v10 & 0x800000) == 0 )
          HmgSetOwner(v10, -2147483646, 5);
        HmgDecrementShareReferenceCountEx(v11, 0LL);
      }
      v5 = *(_QWORD *)(v9 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v13);
    return v5;
  }
}
