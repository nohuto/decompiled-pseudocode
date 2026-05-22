/*
 * XREFs of ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800C05B0
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800C0010 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 *     ?OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800C08C0 (-OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800C11D0 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800C05E8 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::DestroyOverriderProxy(KeyboardOverriderDispatcher *this)
{
  NtMITSetKeyboardOverriderState(0LL);
  if ( *((_QWORD *)this + 7) )
    KeyboardOverriderDispatcher::DrainMessageQueue(this);
  return NarratorProxy::DestroyNarratorProxy(
           (KeyboardOverriderDispatcher *)((char *)this + 72),
           (KeyboardOverriderDispatcher *)((char *)this + 8));
}
