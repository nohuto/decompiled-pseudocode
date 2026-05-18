/*
 * XREFs of sub_1800CDF70 @ 0x1800CDF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800CD614 @ 0x1800CD614 (sub_1800CD614.c)
 *     sub_1800CD990 @ 0x1800CD990 (sub_1800CD990.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CDF70(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rbx
  signed __int32 v10; // eax
  __int64 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp-81h] BYREF
  __int64 v13[4]; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v14[5]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v16; // [rsp+D8h] [rbp+17h]
  unsigned int v17; // [rsp+E8h] [rbp+27h] BYREF
  __int64 v18; // [rsp+F0h] [rbp+2Fh] BYREF
  volatile signed __int32 *v19; // [rsp+F8h] [rbp+37h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800641B0(a1, a2);
    v16 = 0LL;
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v5 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
        {
          v6 = *(_QWORD *)(a1 + 120);
          v16 = *(_OWORD *)(a1 + 120);
          goto LABEL_4;
        }
      }
    }
    v6 = v16;
LABEL_4:
    if ( !v6 )
    {
      sub_18000E498(v14);
      v11 = sub_18000E498(v13);
      sub_1800CD990(pExceptionObject, v11, 161, (__int64)v14, 0);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v7 = sub_18006CDB8(*a2);
    v18 = 0LL;
    v19 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v18, v6, a2);
    v17 = v7;
    sub_1800CD614((__int64 **)(a1 + 136), (__int64)&v12, &v17);
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v12 + 40), &v18);
    if ( !v18 )
      *(_BYTE *)(a1 + 152) = 0;
    v8 = v19;
    if ( v19 )
    {
      result = (unsigned int)_InterlockedDecrement(v19 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        result = (unsigned int)_InterlockedDecrement(v8 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( *((_QWORD *)&v16 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v9 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  return result;
}
