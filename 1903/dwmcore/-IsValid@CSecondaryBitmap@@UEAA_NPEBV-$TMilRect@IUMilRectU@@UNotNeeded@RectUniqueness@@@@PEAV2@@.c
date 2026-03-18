/*
 * XREFs of ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003C080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18003BF34 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18003CF38 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7CD8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C7C80 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

bool __fastcall CSecondaryBitmap::IsValid(const struct FastRegion::Internal::CRgnData **a1, int *a2, __int64 a3)
{
  const struct FastRegion::Internal::CRgnData *v4; // r8
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  const struct FastRegion::Internal::CRgnData *v9; // rdx
  bool v10; // di
  bool v11; // di
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  int v16; // r11d
  _DWORD *v17; // rdx
  int v18; // [rsp+20h] [rbp-29h] BYREF
  int v19; // [rsp+24h] [rbp-25h]
  int v20; // [rsp+28h] [rbp-21h]
  int v21; // [rsp+2Ch] [rbp-1Dh]
  _DWORD *v22; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v23[3]; // [rsp+38h] [rbp-11h] BYREF
  int v24; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-1h] BYREF
  _DWORD v26[13]; // [rsp+4Ch] [rbp+3h] BYREF

  v23[0] = 0;
  v4 = (const struct FastRegion::Internal::CRgnData *)v23;
  v22 = v23;
  if ( a2 )
  {
    v6 = *a2;
    v7 = a2[2];
    v8 = a2[3];
    if ( *a2 < v7 && a2[1] < v8 )
    {
      v24 = a2[1];
      v23[0] = 2;
      v23[1] = v6;
      v23[2] = v7;
      v25 = (unsigned int)&v25 + 1 + 11 - (unsigned int)&v24;
      v26[2] = v6;
      v26[3] = v7;
      v26[1] = (unsigned int)&v25 + 1 + 11 - (unsigned int)v26 + 8;
      v26[0] = v8;
    }
  }
  else
  {
    CSecondaryBitmap::GetBitmapRect((CSecondaryBitmap *)a1, (struct MilRectU *)&v18);
    v13 = v18;
    v14 = v20;
    if ( v18 >= v20 || (v15 = v19, v16 = v21, v19 >= v21) )
    {
      *v22 = 0;
    }
    else
    {
      v17 = v22;
      *v22 = 2;
      v17[1] = v13;
      v17[2] = v14;
      v17[3] = v15;
      v17[4] = 16;
      v17[7] = v13;
      v17[8] = v14;
      v17[5] = v16;
      v17[6] = 16;
    }
    v4 = (const struct FastRegion::Internal::CRgnData *)v22;
  }
  v10 = *(_DWORD *)v4 && (v9 = a1[1], *(_DWORD *)v9) && FastRegion::Internal::CRgnData::Intersects(v4, v9);
  v11 = !v10;
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
      FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v22, (const struct CRegion *)(a1 + 1));
      CRegion::GetBoundingRect((CRegion *)&v22, (struct MilRectU *)a3);
    }
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v22);
  return v11;
}
