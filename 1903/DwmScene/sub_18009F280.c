/*
 * XREFs of sub_18009F280 @ 0x18009F280
 * Callers:
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800F4A60 @ 0x1800F4A60 (sub_1800F4A60.c)
 * Callees:
 *     sub_180039340 @ 0x180039340 (sub_180039340.c)
 *     sub_1800642F8 @ 0x1800642F8 (sub_1800642F8.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_18009F494 @ 0x18009F494 (sub_18009F494.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F280(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  signed __int32 v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]
  _QWORD v16[4]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-10h]

  v15 = -2LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    result = sub_18006CDB8(*a2);
    v5 = (__int64 *)a1[16];
    v6 = v5;
    v7 = (__int64 *)v5[1];
    if ( *((_BYTE *)v7 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v7 + 8) >= (unsigned int)result )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
    if ( v6 == v5 || (unsigned int)result < *((_DWORD *)v6 + 8) )
LABEL_9:
      v6 = (__int64 *)a1[16];
    if ( v6 == v5 || !v6[5] )
    {
      v17 = 0LL;
      v18 = 0LL;
      sub_180039340(*a2, &v17);
      v8 = sub_1800642F8((__int64)a1, v16);
      sub_1800644E4(v17, v8);
      v9 = v17;
      v14 = 0LL;
      v10 = a1[15];
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v10 = a1[15];
      }
      *(_QWORD *)&v14 = a1[14];
      *((_QWORD *)&v14 + 1) = v10;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v14);
      result = sub_18009F494(a1, &v17);
      v11 = v18;
      if ( v18 )
      {
        v12 = _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF);
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
