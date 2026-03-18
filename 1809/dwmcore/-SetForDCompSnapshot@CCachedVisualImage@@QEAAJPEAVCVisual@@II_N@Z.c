/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x18018D620
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801B2828 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x18018D27C (-InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18018D8A4 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        int a3,
        int a4,
        bool a5)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v8 = CCachedVisualImage::SetRootVisual(this, a2);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x89Eu);
  }
  else
  {
    CCachedVisualImage::InitializeViewboxAndRealizationSize(this, (float)a3, (float)a4);
    *((_BYTE *)this + 380) = a5;
    CResource::NotifyOnChanged((__int64)this + 16, 0, 0LL);
  }
  return v10;
}
