/*
 * XREFs of ??_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z @ 0x100081E0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs *__thiscall Windows::System::AppMemoryUsageLimitChangingEventArgs::`scalar deleting destructor'(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 7);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v3);
  Microsoft::WRL::ComPtr<IMarshal>::InternalRelease((int *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
