/*
 * XREFs of GreCreateBitmap @ 0x1C003D960
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  struct OBJECT *v13; // rbx
  __int64 v15; // [rsp+68h] [rbp+Fh] BYREF
  char v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+74h] [rbp+1Bh]
  _QWORD v18[4]; // [rsp+78h] [rbp+1Fh] BYREF
  int v19; // [rsp+B8h] [rbp+5Fh] BYREF

  v6 = a4 * a3;
  v7 = 0LL;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v9 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v9 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    memset(v18, 0, sizeof(v18));
    LODWORD(v18[1]) = a2;
    HIDWORD(v18[0]) = a1;
    v18[2] = 0LL;
    LODWORD(v18[3]) = 1;
    if ( v6 > 1 )
    {
      v10 = 4;
      if ( v6 <= 4 )
      {
        v10 = 2;
      }
      else if ( v6 <= 8 )
      {
        v10 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v10 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v10 = 1;
      v18[2] = hpalMono;
    }
    LODWORD(v18[0]) = v10;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v15, (struct _DEVBITMAPINFO *)v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v11 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v19 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v11 + 32), (unsigned int)v9, a5, &v19);
      }
      if ( v10 != 1 )
        *(_DWORD *)(v11 + 112) |= 0x800200u;
      v12 = *(_QWORD *)(v11 + 32);
      v16 |= 1u;
      v13 = (struct OBJECT *)HmgShareLockCheck(v12, 5);
      if ( v13 )
      {
        if ( (v12 & 0x800000) == 0 )
          HmgSetOwner(v12, -2147483646, 5);
        HmgDecrementShareReferenceCountEx(v13, 0LL);
      }
      v7 = *(_QWORD *)(v11 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v15);
    return v7;
  }
}
