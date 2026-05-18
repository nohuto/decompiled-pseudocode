/*
 * XREFs of sub_180013A60 @ 0x180013A60
 * Callers:
 *     sub_180013C50 @ 0x180013C50 (sub_180013C50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013A60(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_1800139C8(a1, a2);
}
