/*
 * XREFs of ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x18006E550
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18006E3D4 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18015B8D0 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::SetForceActiveWindowAppearance(CWin32ApplicationView *this, int a2)
{
  __int64 v2; // rax
  int v4; // [rsp+28h] [rbp-20h] BYREF
  int *v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 15;
  v5 = &v7;
  v6 = 4;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  SetWindowCompositionAttribute(v2, &v4);
  return 0LL;
}
