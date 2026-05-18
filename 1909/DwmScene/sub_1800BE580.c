/*
 * XREFs of sub_1800BE580 @ 0x1800BE580
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_1800BC95C @ 0x1800BC95C (sub_1800BC95C.c)
 *     sub_1800C79EC @ 0x1800C79EC (sub_1800C79EC.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BE580(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-10h]

  v12 = -2LL;
  v15 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_180077710(a1, &v15, 0LL, &v11);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 440) & 0x2000000) != 0 )
    {
      v6 = sub_1800BC95C(&v13, &v15);
      LOBYTE(v7) = 1;
      sub_1800C79EC(a1, v6, v7);
      v8 = v14;
      if ( v14 )
      {
        if ( !_InterlockedDecrement(v14 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( !_InterlockedDecrement(v8 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
  }
  LOBYTE(v5) = 1;
  result = sub_1800C7D30(a1, a2, v5);
  v10 = v16;
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return result;
}
