/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801C9894
 * Callers:
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801C9688 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180215F24 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18002B8B4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800D0EC8 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(struct CResource **this, struct CVisual *a2)
{
  unsigned int v2; // edi
  CResource *v5; // rsi
  signed int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( !*((_BYTE *)this + 376) )
  {
    v5 = (CResource *)(this + 2);
    CResource::UnRegisterNotifierInternal((CResource *)(this + 2), this[24]);
    this[24] = 0LL;
    ReleaseInterface<CVisualTree>(this + 29);
    this[24] = a2;
    v6 = CResource::RegisterNotifier(v5, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x73Bu, 0LL);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)this);
      CResource::NotifyOnChanged((__int64)v5, 0, 0LL);
    }
  }
  return v2;
}
