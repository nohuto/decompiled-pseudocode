/*
 * XREFs of sub_18008FD90 @ 0x18008FD90
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18008FD90(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
