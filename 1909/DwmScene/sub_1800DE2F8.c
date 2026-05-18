/*
 * XREFs of sub_1800DE2F8 @ 0x1800DE2F8
 * Callers:
 *     sub_1800BE208 @ 0x1800BE208 (sub_1800BE208.c)
 * Callees:
 *     sub_18006E4D8 @ 0x18006E4D8 (sub_18006E4D8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DE2F8(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD **v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = a2;
  result = *(_QWORD *)(a1 + 48);
  v4 = (_QWORD **)(a1 + 40);
  v5 = *v4;
  if ( *v4 != (_QWORD *)result )
  {
    v6 = *a2;
    do
    {
      if ( *v5 == v6 )
        break;
      v5 += 2;
    }
    while ( v5 != (_QWORD *)result );
    if ( v5 != (_QWORD *)result )
      result = (__int64)sub_18006E4D8((__int64)v4, &v8, (__int64)v5);
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
