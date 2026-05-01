/*
 * XREFs of ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180067F80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18006804C (-SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapper::v_ApproveWinRtActivation(WindowWrapper *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 208LL))(*((_QWORD *)this + 36));
  v2 = *(_OWORD *)((char *)this + 700);
  WindowWrapper::SetImageLocationNoLock((char *)this - 8, &v2);
}
