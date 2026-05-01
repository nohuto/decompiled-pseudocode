/*
 * XREFs of ?SetTouchpadSettingsManager@MultitaskingViewGestureHandler@@UEAAXPEAUITouchpadSettingsManager@@@Z @ 0x1802E4F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewGestureHandler::SetTouchpadSettingsManager(
        MultitaskingViewGestureHandler *this,
        struct ITouchpadSettingsManager *a2)
{
  struct ITouchpadSettingsManager *v2; // rax
  struct ITouchpadSettingsManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct ITouchpadSettingsManager *)*((_QWORD *)this + 8);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ITouchpadSettingsManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = (struct ITouchpadSettingsManager *)*((_QWORD *)this + 8);
    }
    v5 = v2;
    *((_QWORD *)this + 8) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  }
}
