/*
 * XREFs of sub_1800631B8 @ 0x1800631B8
 * Callers:
 *     sub_1800157CC @ 0x1800157CC (sub_1800157CC.c)
 *     sub_18001CAB0 @ 0x18001CAB0 (sub_18001CAB0.c)
 *     sub_18001CD04 @ 0x18001CD04 (sub_18001CD04.c)
 *     sub_18001CF58 @ 0x18001CF58 (sub_18001CF58.c)
 *     sub_18001D1AC @ 0x18001D1AC (sub_18001D1AC.c)
 *     sub_18001D400 @ 0x18001D400 (sub_18001D400.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800631B8(__int64 a1, __int64 a2)
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
