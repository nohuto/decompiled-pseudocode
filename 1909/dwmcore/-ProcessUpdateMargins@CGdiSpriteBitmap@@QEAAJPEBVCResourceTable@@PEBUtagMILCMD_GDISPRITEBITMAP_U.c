/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x1800ADC60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x166u, 0LL);
  }
  else if ( *((_DWORD *)this + 25) != v3
         || *((_DWORD *)this + 26) != v5
         || *((_DWORD *)this + 27) != v6
         || *((_DWORD *)this + 28) != v7 )
  {
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 8);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return v4;
}
