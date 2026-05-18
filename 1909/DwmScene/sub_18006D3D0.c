/*
 * XREFs of sub_18006D3D0 @ 0x18006D3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_18006D3D0(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL) )
    *a2 &= ~2u;
  return a2;
}
