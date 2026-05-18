/*
 * XREFs of sub_18009BA20 @ 0x18009BA20
 * Callers:
 *     sub_18009B98C @ 0x18009B98C (sub_18009B98C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180098BF0 @ 0x180098BF0 (sub_180098BF0.c)
 *     sub_180099620 @ 0x180099620 (sub_180099620.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009BA20(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 *v10; // rax
  __int128 v11; // [rsp+38h] [rbp-79h] BYREF
  __int64 v12; // [rsp+48h] [rbp-69h]
  volatile signed __int32 *v13; // [rsp+50h] [rbp-61h]
  __int64 v14; // [rsp+58h] [rbp-59h]
  __int64 *v15; // [rsp+60h] [rbp-51h]
  _QWORD v16[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+A8h] [rbp-9h] BYREF

  v14 = -2LL;
  v15 = a3;
  if ( a2 >= (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 88LL )
  {
    sub_18000E498(v17);
    v10 = sub_18000E498(v16);
    sub_18006575C(pExceptionObject, v10, 314LL, (__int64)v17, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 88 * a2);
  result = *a3;
  if ( *v6 == *a3 )
  {
    v8 = (volatile signed __int32 *)a3[1];
    if ( !v8 )
      return result;
    goto LABEL_17;
  }
  sub_180099620(a1, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(v6, a3);
  result = *a3;
  if ( *a3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v9 = *(volatile signed __int32 **)(result + 144);
    if ( v9 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *(volatile signed __int32 **)(result + 144);
    }
    result = *(_QWORD *)(result + 136);
    v12 = result;
    v13 = v9;
    if ( result )
    {
      v11 = 0LL;
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        result = v12;
      }
      *(_QWORD *)&v11 = result;
      *((_QWORD *)&v11 + 1) = v9;
      result = sub_180098BF0(a1, a2, &v11);
    }
    if ( v9 )
    {
      result = (unsigned int)_InterlockedDecrement(v9 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        result = (unsigned int)_InterlockedDecrement(v9 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
LABEL_17:
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
