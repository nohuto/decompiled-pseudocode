/*
 * XREFs of sub_180085B0C @ 0x180085B0C
 * Callers:
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180085B0C(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rbx

  sub_180087524(a1);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  result = *a2;
  *(_QWORD *)(a1 + 88) = *a2;
  v6 = *(volatile signed __int32 **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v4;
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
