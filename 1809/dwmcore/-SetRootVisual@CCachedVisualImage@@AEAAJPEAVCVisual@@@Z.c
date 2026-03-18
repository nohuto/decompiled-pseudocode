/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18018D8A4
 * Callers:
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x18018D620 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18019A494 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008B7E8 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800921C4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(struct CResource **this, struct CVisual *a2)
{
  unsigned int v2; // edi
  CResource *v5; // rsi
  int v6; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x7F2u);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)this);
      CResource::NotifyOnChanged((__int64)v5, 0, 0LL);
    }
  }
  return v2;
}
