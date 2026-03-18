/*
 * XREFs of ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800BA664
 * Callers:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800BA4AC (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800BA560 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::Copy(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v2; // r9d
  int v3; // ebp
  __int64 v4; // rdi
  char *v5; // r10
  char *v6; // r8
  signed __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v2 = *(_DWORD *)a2;
  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = 0;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = *((int *)a2 + 4);
  v5 = (char *)this + 8 * v2 + 12;
  v6 = (char *)a2 + v4 + 12;
  v7 = ((FastRegion::Internal::CRgnData *)((char *)this + 8 * v2)
      - (const struct FastRegion::Internal::CRgnData *)((char *)a2 + v4)) >> 2;
  if ( v2 > 0 )
  {
    v8 = (_DWORD *)((char *)this + 12);
    v9 = 4 * v7;
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + a2 - this);
      v10 = v3;
      v8 += 2;
      ++v3;
      *((_DWORD *)this + 2 * v10 + 4) = (_DWORD)a2
                                      + 8 * v10
                                      + v9
                                      + *((_DWORD *)a2 + 2 * v10 + 4)
                                      - ((_DWORD)this
                                       + 8 * v10);
    }
    while ( v3 < *(_DWORD *)this );
    LODWORD(v4) = *((_DWORD *)a2 + 4);
  }
  v11 = (unsigned __int64)(8 * *(_DWORD *)a2 + 4 + *((_DWORD *)a2 + 2 * *(int *)a2 + 2) - (int)v4 - 12) >> 2;
  v12 = (int)v11;
  if ( (int)v11 > 0 )
  {
    v13 = v6 - v5;
    do
    {
      *(_DWORD *)v5 = *(_DWORD *)&v5[v13];
      v5 += 4;
      --v12;
    }
    while ( v12 );
  }
}
