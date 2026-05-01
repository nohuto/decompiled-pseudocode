/*
 * XREFs of ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180324494
 * Callers:
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180329174 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(
        KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 15));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 104LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 16));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 136LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 18));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 152LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 19));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 168LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 184LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 21));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 200LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 22));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 216LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 23));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 232LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 264LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 25));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 280LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 26));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 296LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 27));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 312LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 28));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 328LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 29));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 72LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 30));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 384LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 31));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 360LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 33));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 376LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 34));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 424LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 32));
  }
}
