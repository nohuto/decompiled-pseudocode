/*
 * XREFs of sub_1800E0160 @ 0x1800E0160
 * Callers:
 *     sub_1800E0210 @ 0x1800E0210 (sub_1800E0210.c)
 *     sub_1800E0828 @ 0x1800E0828 (sub_1800E0828.c)
 *     sub_180130FFE @ 0x180130FFE (sub_180130FFE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0160(_QWORD *a1)
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
