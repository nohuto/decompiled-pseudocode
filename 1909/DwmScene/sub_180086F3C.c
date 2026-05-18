/*
 * XREFs of sub_180086F3C @ 0x180086F3C
 * Callers:
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180086F3C(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-20h]
  __int64 v16[3]; // [rsp+38h] [rbp-18h] BYREF

  sub_180087450(a1);
  v14 = 0LL;
  v15 = 0LL;
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v5 = *a2;
  v14 = v5;
  v15 = v4;
  if ( v5 )
  {
    while ( v5 != a1 )
    {
      sub_180087450(v5);
      *(_OWORD *)v16 = 0LL;
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        while ( 1 )
        {
          v7 = *(_DWORD *)(v6 + 8);
          if ( !v7 )
            break;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
          {
            *(_OWORD *)v16 = *(_OWORD *)(v5 + 56);
            break;
          }
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v14, v16);
      if ( v16[1] )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v16[1] + 8)) )
        {
          v8 = v16[1];
          (**(void (__fastcall ***)(__int64))v16[1])(v16[1]);
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v8 + 12)) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[1] + 8LL))(v16[1]);
        }
      }
      v5 = v14;
      if ( !v14 )
      {
        v4 = v15;
        goto LABEL_17;
      }
    }
    if ( v15 )
    {
      if ( !_InterlockedDecrement(v15 + 2) )
      {
        v12 = v15;
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v13 = (volatile signed __int32 *)a2[1];
    if ( v13 )
    {
      if ( !_InterlockedDecrement(v13 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    return 1;
  }
  else
  {
LABEL_17:
    if ( v4 )
    {
      if ( !_InterlockedDecrement(v4 + 2) )
      {
        v9 = v15;
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v10 = (volatile signed __int32 *)a2[1];
    if ( v10 && !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    return 0;
  }
}
