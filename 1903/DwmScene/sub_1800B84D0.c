/*
 * XREFs of sub_1800B84D0 @ 0x1800B84D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180016EDC @ 0x180016EDC (sub_180016EDC.c)
 *     sub_1800B8038 @ 0x1800B8038 (sub_1800B8038.c)
 *     sub_1800B8138 @ 0x1800B8138 (sub_1800B8138.c)
 *     sub_1800B8A94 @ 0x1800B8A94 (sub_1800B8A94.c)
 *     sub_1800F0C90 @ 0x1800F0C90 (sub_1800F0C90.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B84D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800F0C90(a1, &v11);
  v9 = 0LL;
  v10 = 0LL;
  sub_180016EDC(&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  sub_1800B8038((_DWORD *)(v5 + 108), (_DWORD *)(a1 + 108));
  sub_1800B8138((_DWORD *)(v5 + 256), (_DWORD *)(a1 + 256));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 432), (_QWORD *)(a1 + 432));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 448), (_QWORD *)(a1 + 448));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 512), (_QWORD *)(a1 + 512));
  *(_DWORD *)(v5 + 528) = *(_DWORD *)(a1 + 528);
  result = sub_1800B8A94(v5);
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
