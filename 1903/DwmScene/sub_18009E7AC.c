/*
 * XREFs of sub_18009E7AC @ 0x18009E7AC
 * Callers:
 *     sub_18009D810 @ 0x18009D810 (sub_18009D810.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800159D4 @ 0x1800159D4 (sub_1800159D4.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18009DB9C @ 0x18009DB9C (sub_18009DB9C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009E7AC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17[4]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v18; // [rsp+48h] [rbp-19h] BYREF
  __int64 v19; // [rsp+58h] [rbp-9h]
  __int64 v20; // [rsp+60h] [rbp-1h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp+7h]
  _QWORD v22[9]; // [rsp+70h] [rbp+Fh] BYREF

  v19 = -2LL;
  v6 = sub_18006CDB8(a3);
  *(_OWORD *)v17 = 0LL;
  v7 = *(__int64 **)(a1 + 112);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v9 + 8) >= v6 )
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == v7 || v6 < *((_DWORD *)v8 + 8) )
LABEL_8:
    v8 = *(__int64 **)(a1 + 112);
  if ( v8 == v7 || !v8[5] )
  {
    v11 = sub_1800159D4(a3, &v20);
    std::shared_ptr<__ExceptionPtr>::operator=(v17, v11);
    v12 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    v18 = 0LL;
    v10 = v17[1];
    if ( v17[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17[1] + 8));
      v10 = v17[1];
    }
    v18 = *(_OWORD *)v17;
    sub_18009DB9C(a1, (__int64 *)&v18);
  }
  else
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v17, v8 + 5);
    v10 = v17[1];
  }
  v13 = sub_1800642F8(a1, v22);
  v14 = v17[0];
  sub_1800644E4(v17[0], v13);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v14 + 40LL))(v14, *(_QWORD *)(a1 + 128), a2);
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 8));
    if ( !(_DWORD)result )
    {
      v16 = v17[1];
      (**(void (__fastcall ***)(__int64))v17[1])(v17[1]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17[1] + 8LL))(v17[1]);
    }
  }
  return result;
}
