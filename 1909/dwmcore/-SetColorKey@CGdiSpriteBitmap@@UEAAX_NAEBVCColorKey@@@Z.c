/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x1800D4210
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004911C (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009A4D0 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  char v3; // r10
  char v4; // r11
  CGdiSpriteBitmap *v5; // r9
  __int64 v6; // rbx

  v3 = *((_BYTE *)this + 61);
  v4 = a2;
  v5 = this;
  if ( a2 != (v3 & 1) || !CColorKey::operator==((float *)this + 82, (float *)a3) )
  {
    v6 = (__int64)v5 - 56;
    *((_BYTE *)v5 + 61) = v4 | v3 & 0xFE;
    *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)a3;
    *(_OWORD *)((char *)v5 + 344) = *((_OWORD *)a3 + 1);
    *((_DWORD *)v5 + 90) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)v5 - 56)) )
      CResource::NotifyOnChanged(v6, 0, 0LL);
  }
}
