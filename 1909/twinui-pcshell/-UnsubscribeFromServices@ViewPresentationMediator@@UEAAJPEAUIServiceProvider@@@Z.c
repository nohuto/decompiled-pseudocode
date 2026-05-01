/*
 * XREFs of ?UnsubscribeFromServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802CA0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::UnsubscribeFromServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rcx

  v2 = (__int64 *)((char *)this + 160);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 64LL))(
      v4,
      ((unsigned __int64)this + 80) & -(__int64)(this != (ViewPresentationMediator *)40));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 120LL))(
      *v2,
      ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 144LL))(
      *v2,
      ((unsigned __int64)this + 96) & -(__int64)(this != (ViewPresentationMediator *)40));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  return 0LL;
}
