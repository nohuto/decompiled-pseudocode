/*
 * XREFs of sub_180040044 @ 0x180040044
 * Callers:
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003ECE0 @ 0x18003ECE0 (sub_18003ECE0.c)
 *     sub_18003ED60 @ 0x18003ED60 (sub_18003ED60.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180040044(__int64 a1, unsigned int a2)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // rbx
  void *v10; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-18h] BYREF

  v12 = -2LL;
  v14 = a2;
  v2 = (__int64 **)(a1 + 552);
  v3 = *(__int64 **)(a1 + 552);
  v4 = v3[1];
  if ( *(_BYTE *)(v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v3 = (__int64 *)v4;
      v4 = *(_QWORD *)v4;
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
  while ( !*(_BYTE *)(v4 + 25) );
  if ( v3 == *v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_8:
    v3 = *v2;
  if ( v3 != *v2 )
    return v3 + 5;
  v5 = operator new(0xA0uLL);
  v10 = v5;
  if ( v5 )
    v6 = sub_18003ECE0((__int64)v5);
  else
    v6 = 0LL;
  v10 = (void *)(v6 + 16);
  v11 = (volatile signed __int32 *)v6;
  sub_18003ED60(v2, (__int64)&v13, &v14);
  v7 = std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v13 + 40), (__int64 *)&v10);
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = v11;
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return v7;
}
