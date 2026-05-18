/*
 * XREFs of sub_18003FD80 @ 0x18003FD80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800232BC @ 0x1800232BC (sub_1800232BC.c)
 *     sub_18003EE04 @ 0x18003EE04 (sub_18003EE04.c)
 *     sub_18003F030 @ 0x18003F030 (sub_18003F030.c)
 *     sub_180040174 @ 0x180040174 (sub_180040174.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003FD80(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 *v7; // rcx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  bool v10; // zf
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int64 v15[6]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF

  v14 = -2LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_180040174(a1, &v12);
  v16 = 0LL;
  result = (__int64)sub_1800232BC(v12, &v16);
  v3 = *(_QWORD **)(a1 + 552);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = (__int64 *)(v4[5] + 48LL);
    v6 = v4[5] + 144LL;
    while ( v5 != (__int64 *)v6 )
    {
      sub_18003EE04(v15, v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 944LL))(v16, v15[0]);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 944LL))(v16, v15[1]);
      sub_18003F030(v15);
      v5 += 6;
    }
    result = v4[2];
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = v4[1]; !*(_BYTE *)(result + 25) && v4 == *(_QWORD **)(result + 16); result = *(_QWORD *)(result + 8) )
        v4 = (_QWORD *)result;
      v4 = (_QWORD *)result;
    }
    else
    {
      v4 = (_QWORD *)v4[2];
      v7 = *(__int64 **)result;
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          v4 = v7;
          result = *v7;
          v7 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v13 )
  {
    v9 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      v11 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
