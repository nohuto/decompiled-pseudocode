/*
 * XREFs of sub_1800D23C0 @ 0x1800D23C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_18006432C @ 0x18006432C (sub_18006432C.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800D2564 @ 0x1800D2564 (sub_1800D2564.c)
 *     sub_1800D2D24 @ 0x1800D2D24 (sub_1800D2D24.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800D23C0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && a1[17] )
  {
    v5 = sub_18006CDB8(*a2);
    v6 = (__int64 *)a1[15];
    v7 = v6;
    v8 = (__int64 *)v6[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_10;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v5 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == v6 || v5 < *((_DWORD *)v7 + 8) )
LABEL_10:
      v7 = (__int64 *)a1[15];
    if ( v7 == v6 )
    {
      sub_1800D2564(a1, a2);
    }
    else if ( !sub_18006432C((__int64)a1, v5) )
    {
      sub_1800D2D24(a1, *a2);
    }
    LOBYTE(v4) = sub_180064320((__int64)a1, 8);
    if ( (_BYTE)v4 )
    {
      v4 = a1[14];
      if ( v4 )
        LODWORD(v4) = *(_DWORD *)(v4 + 24);
      if ( (_DWORD)v4 != 2 )
      {
        *(_OWORD *)v12 = 0LL;
        LOBYTE(v4) = (unsigned __int8)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, v12);
        if ( v12[1] )
        {
          LODWORD(v4) = _InterlockedExchangeAdd((volatile signed __int32 *)(v12[1] + 8), 0xFFFFFFFF);
          v9 = (_DWORD)v4 == 1;
          LOBYTE(v4) = v4 - 1;
          if ( v9 )
          {
            v10 = v12[1];
            (**(void (__fastcall ***)(__int64))v12[1])(v12[1]);
            LODWORD(v4) = _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
            if ( !(_DWORD)v4 )
              LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
          }
        }
      }
    }
  }
  return v4;
}
