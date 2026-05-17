/*
 * XREFs of TppWorkCallbackEpilog @ 0x180067710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkCallbackEpilog(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (***)(void))(a1 + 8))();
  return result;
}
