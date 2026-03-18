/*
 * XREFs of ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A0490
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18006B8EC (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18009B4D8 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x1800A3908 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A60E4 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CSecondaryBitmap::IsValid(const struct FastRegion::Internal::CRgnData **a1, int *a2, __int64 a3)
{
  const struct FastRegion::Internal::CRgnData *v4; // r8
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  const struct FastRegion::Internal::CRgnData *v9; // rdx
  char v10; // di
  char v11; // di
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  int v16; // r11d
  _DWORD *v17; // rdx
  _DWORD *v18; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v19[3]; // [rsp+28h] [rbp-21h] BYREF
  _DWORD v20[2]; // [rsp+34h] [rbp-15h] BYREF
  _DWORD v21[3]; // [rsp+3Ch] [rbp-Dh] BYREF
  _DWORD v22[10]; // [rsp+48h] [rbp-1h] BYREF
  int v23; // [rsp+70h] [rbp+27h] BYREF
  int v24; // [rsp+74h] [rbp+2Bh]
  int v25; // [rsp+78h] [rbp+2Fh]
  int v26; // [rsp+7Ch] [rbp+33h]

  v19[0] = 0;
  v4 = (const struct FastRegion::Internal::CRgnData *)v19;
  v18 = v19;
  if ( a2 )
  {
    v6 = *a2;
    v7 = a2[2];
    v8 = a2[3];
    if ( *a2 >= v7 || a2[1] >= v8 )
    {
      v19[0] = 0;
    }
    else
    {
      v20[0] = a2[1];
      v19[0] = 2;
      v19[1] = v6;
      v19[2] = v7;
      v20[1] = (unsigned int)v22 + 1 - 5 - (unsigned int)v20;
      v21[2] = v6;
      v22[0] = v7;
      v21[1] = (unsigned int)v22 + 1 - 5 - (unsigned int)v21 + 8;
      v21[0] = v8;
    }
  }
  else
  {
    CSecondaryBitmap::GetBitmapRect((CSecondaryBitmap *)a1, (struct MilRectU *)&v23);
    v13 = v23;
    v14 = v25;
    if ( v23 >= v25 || (v15 = v24, v16 = v26, v24 >= v26) )
    {
      *v18 = 0;
    }
    else
    {
      v17 = v18;
      *v18 = 2;
      v17[1] = v13;
      v17[2] = v14;
      v17[3] = v15;
      v17[4] = 16;
      v17[7] = v13;
      v17[8] = v14;
      v17[5] = v16;
      v17[6] = 16;
    }
    v4 = (const struct FastRegion::Internal::CRgnData *)v18;
  }
  if ( *(_DWORD *)v4 && (v9 = a1[1], *(_DWORD *)v9) )
    v10 = FastRegion::Internal::CRgnData::Intersects(v4, v9);
  else
    v10 = 0;
  v11 = v10 ^ 1;
  if ( a3 )
  {
    if ( v11 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
    else
    {
      FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v18, (const struct CRegion *)(a1 + 1));
      CRegion::GetBoundingRect((CRegion *)&v18, (struct MilRectU *)a3);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v18);
  return v11;
}
