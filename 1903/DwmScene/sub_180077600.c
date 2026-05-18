/*
 * XREFs of sub_180077600 @ 0x180077600
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_1800BE470 @ 0x1800BE470 (sub_1800BE470.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C52FC @ 0x1800C52FC (sub_1800C52FC.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800C6D70 @ 0x1800C6D70 (sub_1800C6D70.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800779F0 @ 0x1800779F0 (sub_1800779F0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180077600(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v20; // [rsp+30h] [rbp-28h]

  if ( !*a4 )
  {
    v8 = (__int64 *)sub_1800779F0(a1, &v19);
    std::shared_ptr<__ExceptionPtr>::operator=(a4, v8);
    v9 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)a4[1];
  }
  v11 = *(_QWORD **)(a1 + 728);
  v12 = v11;
  v13 = (__int64 *)v11[1];
  if ( *((_BYTE *)v13 + 25) )
    goto LABEL_15;
  do
  {
    if ( v13[5] >= (unsigned __int64)v10 )
    {
      v12 = v13;
      v13 = (__int64 *)*v13;
    }
    else
    {
      v13 = (__int64 *)v13[2];
    }
  }
  while ( !*((_BYTE *)v13 + 25) );
  if ( v12 == v11 || (unsigned __int64)v10 < v12[5] )
LABEL_15:
    v12 = *(_QWORD **)(a1 + 728);
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v12 == *(_QWORD **)(a1 + 728) || (v14 = v12[6], a3 >= (v12[7] - v14) >> 4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v15 = 2 * a3;
    *a2 = 0LL;
    a2[1] = 0LL;
    v16 = *(_QWORD *)(v14 + 8 * v15 + 8);
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v16 = *(_QWORD *)(v14 + 8 * v15 + 8);
    }
    *a2 = *(_QWORD *)(v14 + 8 * v15);
    a2[1] = v16;
  }
  v17 = (volatile signed __int32 *)a4[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return a2;
}
