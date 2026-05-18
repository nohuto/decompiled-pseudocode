/*
 * XREFs of sub_180074704 @ 0x180074704
 * Callers:
 *     sub_180071BAC @ 0x180071BAC (sub_180071BAC.c)
 *     sub_18007DFF4 @ 0x18007DFF4 (sub_18007DFF4.c)
 *     sub_18007E2E4 @ 0x18007E2E4 (sub_18007E2E4.c)
 *     sub_18007E854 @ 0x18007E854 (sub_18007E854.c)
 *     sub_18007EF24 @ 0x18007EF24 (sub_18007EF24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180074704(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
