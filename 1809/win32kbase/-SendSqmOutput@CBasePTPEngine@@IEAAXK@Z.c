/*
 * XREFs of ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C015EED0
 * Callers:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C015F434 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CBasePTPEngine::SendSqmOutput(CBasePTPEngine *this, int a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rcx

  v2 = (_DWORD *)((char *)this + 1152);
  *((_DWORD *)this + 289) = a2;
  v3 = *((_QWORD *)this + 1);
  *v2 = 0;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 8LL))(v3, v2);
  memset(v2, 0, 0x20uLL);
}
