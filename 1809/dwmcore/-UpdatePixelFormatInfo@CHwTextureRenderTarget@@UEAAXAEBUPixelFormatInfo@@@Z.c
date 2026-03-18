/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800DAFC0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  __int64 v3; // rbx
  bool v5; // zf
  int v6; // ecx
  int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx

  v3 = *((_QWORD *)this + 30);
  *((_QWORD *)this + 31) = *(_QWORD *)a2;
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 2);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 192) == 0LL;
    v6 = *((_DWORD *)a2 + 1);
    v7 = *(_DWORD *)(v3 + 176);
    *(_DWORD *)(v3 + 176) = v6;
    *(_DWORD *)(v3 + 180) = *((_DWORD *)a2 + 2);
    if ( !v5 )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(v3 + 184) )
      {
        do
        {
          v9 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 8 * v8);
          if ( v9 )
          {
            v10 = *((_DWORD *)a2 + 1);
            v11 = *(_DWORD *)(v9 + 184);
            *(_DWORD *)(v9 + 184) = v10;
            *(_DWORD *)(v9 + 188) = *((_DWORD *)a2 + 2);
            if ( v11 != v10 )
            {
              v12 = *(_QWORD *)(v9 + 216);
              if ( v12 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
                *(_QWORD *)(v9 + 216) = 0LL;
              }
            }
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v3 + 184) );
        v6 = *(_DWORD *)(v3 + 176);
      }
    }
    if ( v7 != v6 )
    {
      v13 = *(_QWORD *)(v3 + 224);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        *(_QWORD *)(v3 + 224) = 0LL;
      }
      v14 = *(_QWORD *)(v3 + 232);
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        *(_QWORD *)(v3 + 232) = 0LL;
      }
    }
  }
  v15 = *((_QWORD *)this + 25);
  if ( v15 )
  {
    v16 = *((_DWORD *)a2 + 1);
    v17 = *(_DWORD *)(v15 + 184);
    *(_DWORD *)(v15 + 184) = v16;
    *(_DWORD *)(v15 + 188) = *((_DWORD *)a2 + 2);
    if ( v17 != v16 )
      ReleaseInterface<ID2D1Geometry>((__int64 *)(v15 + 216));
  }
}
