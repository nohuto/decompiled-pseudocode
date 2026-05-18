/*
 * XREFs of sub_180074814 @ 0x180074814
 * Callers:
 *     sub_180071CBC @ 0x180071CBC (sub_180071CBC.c)
 *     sub_18007E104 @ 0x18007E104 (sub_18007E104.c)
 *     sub_18007E3F4 @ 0x18007E3F4 (sub_18007E3F4.c)
 *     sub_18007E964 @ 0x18007E964 (sub_18007E964.c)
 *     sub_18007F034 @ 0x18007F034 (sub_18007F034.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180074814(__int64 a1)
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
