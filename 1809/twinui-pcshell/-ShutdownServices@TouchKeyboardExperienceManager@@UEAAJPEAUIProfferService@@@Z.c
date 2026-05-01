/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1802BA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C9124 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  __int64 *v2; // rbx
  KeyboardHosting::TabTipAdapter *v3; // rcx

  v2 = (__int64 *)((char *)this + 648);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 81);
  if ( v3 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  return 0LL;
}
