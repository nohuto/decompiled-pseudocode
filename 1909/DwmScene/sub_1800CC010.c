/*
 * XREFs of sub_1800CC010 @ 0x1800CC010
 * Callers:
 *     sub_18008FF18 @ 0x18008FF18 (sub_18008FF18.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     sub_1800CBE88 @ 0x1800CBE88 (sub_1800CBE88.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CC010(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 **v6; // r14
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-18h]

  v15 = -2LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18006CEC8(*a2);
    v5 = result;
    v6 = (__int64 **)(a1 + 128);
    v7 = *(__int64 **)(a1 + 128);
    v8 = (__int64 *)v7[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= (unsigned int)result )
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
    if ( v7 == *v6 || (unsigned int)result < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = *v6;
    if ( v7 == *v6 )
    {
      sub_1800642C0(a1, a2);
      v18 = 0LL;
      v19 = 0LL;
      sub_1800CBBF8(*a2, &v18);
      v9 = v18;
      v14 = 0LL;
      v10 = *(_QWORD *)(a1 + 120);
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = *(_QWORD *)(a1 + 120);
      }
      *(_QWORD *)&v14 = *(_QWORD *)(a1 + 112);
      *((_QWORD *)&v14 + 1) = v10;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 40LL))(v9, &v14);
      v17 = v5;
      sub_1800CBE88((__int64 **)(a1 + 128), (__int64)&v16, &v17);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v16 + 40), &v18);
      result = sub_1800644BC(a1, v5);
      v11 = v19;
      if ( v19 )
      {
        v12 = _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF);
        v13 = v12 == 1;
        result = (unsigned int)(v12 - 1);
        if ( v13 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          result = (unsigned int)_InterlockedDecrement(v11 + 3);
          if ( !(_DWORD)result )
            return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
  }
  return result;
}
