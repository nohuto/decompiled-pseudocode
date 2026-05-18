/*
 * XREFs of sub_180104070 @ 0x180104070
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180016920 @ 0x180016920 (sub_180016920.c)
 *     sub_1800BC884 @ 0x1800BC884 (sub_1800BC884.c)
 *     sub_1800F0DA0 @ 0x1800F0DA0 (sub_1800F0DA0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180104070(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  _QWORD *v13; // [rsp+50h] [rbp-10h]

  v12 = -2LL;
  v13 = a2;
  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800F0DA0(a1, &v11);
  v9 = 0LL;
  v10 = 0LL;
  sub_1800BC884(&v9, a2);
  v5 = v9;
  *(_BYTE *)(v9 + 88) = *(_BYTE *)(a1 + 88);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  if ( v5 + 112 != a1 + 112 )
    sub_180016920(v5 + 112, *(char **)(a1 + 112), *(_QWORD *)(a1 + 120));
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(v5 + 152) = *(_QWORD *)(a1 + 152);
  result = *(unsigned int *)(a1 + 160);
  *(_DWORD *)(v5 + 160) = result;
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      v7 = v10;
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
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
