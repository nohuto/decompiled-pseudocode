/*
 * XREFs of GreCreateBitmap @ 0x1C0043DF0
 * Callers:
 *     bInitBMOBJ @ 0x1C021A780 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  unsigned __int64 v9; // r14
  int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // [rsp+68h] [rbp-1h] BYREF
  char v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+74h] [rbp+Bh]
  _QWORD v17[4]; // [rsp+78h] [rbp+Fh] BYREF
  int v19; // [rsp+C8h] [rbp+5Fh] BYREF

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
    memset(v17, 0, sizeof(v17));
    LODWORD(v17[1]) = a2;
    HIDWORD(v17[0]) = a1;
    v17[2] = 0LL;
    LODWORD(v17[3]) = 1;
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
      v17[2] = hpalMono;
    }
    LODWORD(v17[0]) = v10;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v11 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v19 = 0;
        if ( (int)IsGreSetBitmapBitsSupported() >= 0 )
          GreSetBitmapBits(*(_QWORD *)(v11 + 32), (unsigned int)v9, a5, &v19);
      }
      if ( v10 != 1 )
        *(_DWORD *)(v11 + 112) |= 0x800200u;
      v15 |= 1u;
      v12 = *(_QWORD *)(v11 + 32);
      SURFREF::SURFREF((SURFREF *)v17);
      if ( HmgShareLockCheck(v12, 5) )
      {
        if ( (v12 & 0x800000) == 0 )
          HmgSetOwner(v12, -2147483646, 5);
      }
      SURFREF::~SURFREF((SURFREF *)v17);
      v7 = *(_QWORD *)(v11 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v14);
    return v7;
  }
}
