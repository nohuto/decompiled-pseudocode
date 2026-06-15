/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x1800137E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(CProcessSubmixProxy *this)
{
  int v2; // ecx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  v2 = *((_DWORD *)this + 30);
  *((_DWORD *)this + 30) = v2 - 1;
  if ( v2 == 1 )
    (*(void (__fastcall **)(_QWORD, CProcessSubmixProxy *))(**((_QWORD **)this + 24) + 344LL))(
      *((_QWORD *)this + 24),
      this);
  return 0LL;
}
