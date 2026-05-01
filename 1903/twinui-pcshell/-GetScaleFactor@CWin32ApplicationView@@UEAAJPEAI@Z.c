/*
 * XREFs of ?GetScaleFactor@CWin32ApplicationView@@UEAAJPEAI@Z @ 0x18015B700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetScaleFactor(CWin32ApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 100;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  result = GetScaleFactorForWindow(v3, &v5);
  if ( (int)result >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  return result;
}
