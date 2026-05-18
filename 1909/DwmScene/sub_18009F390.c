/*
 * XREFs of sub_18009F390 @ 0x18009F390
 * Callers:
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 * Callees:
 *     sub_180039450 @ 0x180039450 (sub_180039450.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18009F5A4 @ 0x18009F5A4 (sub_18009F5A4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009F390(_QWORD *a1, __int64 *a2)
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
    result = sub_18006CEC8(*a2);
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
      sub_180039450(*a2, &v17);
      v8 = sub_180064408((__int64)a1, v16);
      sub_1800645F4(v17, v8);
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
      result = sub_18009F5A4(a1, &v17);
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
