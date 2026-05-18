/*
 * XREFs of sub_1800E0270 @ 0x1800E0270
 * Callers:
 *     sub_1800E0320 @ 0x1800E0320 (sub_1800E0320.c)
 *     sub_1800E0938 @ 0x1800E0938 (sub_1800E0938.c)
 *     sub_18013110E @ 0x18013110E (sub_18013110E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0270(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  result = (__int64)&Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = (volatile signed __int32 *)a1[4];
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
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
