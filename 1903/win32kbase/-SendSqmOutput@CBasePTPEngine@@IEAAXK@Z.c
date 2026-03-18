/*
 * XREFs of ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C0199140
 * Callers:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C0199704 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall CBasePTPEngine::SendSqmOutput(CBasePTPEngine *this, int a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rcx

  v2 = (_DWORD *)((char *)this + 1120);
  *((_DWORD *)this + 281) = a2;
  v3 = *((_QWORD *)this + 1);
  *v2 = 0;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 8LL))(v3, v2);
  memset(v2, 0, 0x20uLL);
}
