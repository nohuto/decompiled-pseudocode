/*
 * XREFs of ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0166090
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C005ADD0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RemoveCompositionFrame(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 23);
  result = 3221226021LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
