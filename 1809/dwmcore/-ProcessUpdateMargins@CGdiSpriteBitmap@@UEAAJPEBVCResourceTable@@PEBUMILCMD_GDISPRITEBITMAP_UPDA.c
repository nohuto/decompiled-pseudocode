/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18005EDE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  int v3; // r10d
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // r9d

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 < 0
    || (v5 = *((_DWORD *)a3 + 3), v5 < 0)
    || (v6 = *((_DWORD *)a3 + 4), v6 < 0)
    || (v7 = *((_DWORD *)a3 + 5), v7 < 0) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x162u);
  }
  else if ( *((_DWORD *)this + 25) != v3
         || *((_DWORD *)this + 26) != v5
         || *((_DWORD *)this + 27) != v6
         || *((_DWORD *)this + 28) != v7 )
  {
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 8);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return v4;
}
