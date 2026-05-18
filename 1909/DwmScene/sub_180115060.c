/*
 * XREFs of sub_180115060 @ 0x180115060
 * Callers:
 *     sub_180115690 @ 0x180115690 (sub_180115690.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180115060(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  v3 = (volatile signed __int32 *)a1[5];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedDecrement(v3 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedDecrement(v3 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[3];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
