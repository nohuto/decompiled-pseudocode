/*
 * XREFs of sub_180103E70 @ 0x180103E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180098268 @ 0x180098268 (sub_180098268.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180103E70(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  bool v8; // zf
  __int64 *v9; // rax
  _QWORD v10[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v11[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL);
  if ( !(_BYTE)result )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( !v5 || (result = v5 - 1, ((v5 - 1) & v5) != 0) )
    {
      sub_18000E4E8(v11);
      v9 = sub_18000E4E8(v10);
      sub_180098268(pExceptionObject, v9, 90, (__int64)v11, 0);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v8 = v7 == 1;
    result = (unsigned int)(v7 - 1);
    if ( v8 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
