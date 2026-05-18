/*
 * XREFs of sub_18006C610 @ 0x18006C610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006C610(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
    result = *(unsigned int *)(a1 + 3880);
    *(_DWORD *)(*a2 + 104LL) = result;
  }
  return result;
}
