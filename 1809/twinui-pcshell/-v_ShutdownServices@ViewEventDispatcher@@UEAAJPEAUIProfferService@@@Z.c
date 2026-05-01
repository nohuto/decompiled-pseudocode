/*
 * XREFs of ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x180221260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x18021E9B8 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x18022093C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::v_ShutdownServices(ViewEventDispatcher *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 i; // rsi

  v3 = (RTL_SRWLOCK *)((char *)this + 176);
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  for ( i = *((_QWORD *)this + 32); i; --i )
    ViewEventDispatcher::_RemoveValidView((ViewEventDispatcher *)((char *)this - 120), i - 1);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  ViewEventDispatcher::_FlushRemovedPendingActivations((ViewEventDispatcher *)((char *)this - 120));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  return 0LL;
}
