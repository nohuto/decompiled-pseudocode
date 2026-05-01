/*
 * XREFs of ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x18003F730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::GetNativeWindow(CTaskWindow *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
  {
    v5 = 0LL;
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
      *((_QWORD *)this + 6),
      &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
      &v5);
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v4) >= 0 )
      v1 = v4;
    v2 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return v1;
}
