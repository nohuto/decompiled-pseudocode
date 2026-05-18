/*
 * XREFs of sub_1800630A8 @ 0x1800630A8
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_18001C9A0 @ 0x18001C9A0 (sub_18001C9A0.c)
 *     sub_18001CBF4 @ 0x18001CBF4 (sub_18001CBF4.c)
 *     sub_18001CE48 @ 0x18001CE48 (sub_18001CE48.c)
 *     sub_18001D09C @ 0x18001D09C (sub_18001D09C.c)
 *     sub_18001D2F0 @ 0x18001D2F0 (sub_18001D2F0.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800630A8(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
