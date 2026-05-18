/*
 * XREFs of sub_1800CE180 @ 0x1800CE180
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800CE180(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx

  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 14, a3);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 16, a4);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 18, a5);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 20, a6);
  v10 = (volatile signed __int32 *)a2[1];
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( !_InterlockedDecrement(v11 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a4[1];
  if ( v12 )
  {
    if ( !_InterlockedDecrement(v12 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a5[1];
  if ( v13 )
  {
    if ( !_InterlockedDecrement(v13 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( !_InterlockedDecrement(v13 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a6[1];
  if ( v14 )
  {
    if ( !_InterlockedDecrement(v14 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( !_InterlockedDecrement(v14 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return 1;
}
