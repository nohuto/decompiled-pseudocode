/*
 * XREFs of sub_180068CE0 @ 0x180068CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067C48 @ 0x180067C48 (sub_180067C48.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_1800698D4 @ 0x1800698D4 (sub_1800698D4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_1800D5AD0 @ 0x1800D5AD0 (sub_1800D5AD0.c)
 *     sub_1800D5AD8 @ 0x1800D5AD8 (sub_1800D5AD8.c)
 *     sub_1800D5D38 @ 0x1800D5D38 (sub_1800D5D38.c)
 *     sub_1800D6820 @ 0x1800D6820 (sub_1800D6820.c)
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_180115678 @ 0x180115678 (sub_180115678.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068CE0(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rcx
  char v13; // di
  bool v14; // r15
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // r13
  char v19; // r12
  __int64 *v20; // rdi
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // [rsp+20h] [rbp-50h]
  _BYTE v25[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h]
  __int64 v27[3]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+58h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v25);
  v5 = (__int64 *)result;
  v28 = 0LL;
  v6 = *(_QWORD *)(result + 8);
  if ( v6 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v6 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), result + 1, result) )
      {
        v7 = *v5;
        *(_QWORD *)&v28 = *v5;
        result = v5[1];
        *((_QWORD *)&v28 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v7 = v28;
LABEL_3:
  v8 = v26;
  if ( v26 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, v6, v5);
    v7 = v28;
  }
  if ( v7 )
  {
    v9 = sub_18006CE94(v7);
    v10 = sub_180077A8C(v9, a2);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 5LL);
    if ( (_BYTE)result )
    {
      v12 = a1[48];
      v13 = 1;
      v14 = v12 && (unsigned __int8)sub_180115678(v12);
      v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259D38, 0LL);
      v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259D58, 0LL);
      LOBYTE(v16) = v24;
      sub_1800D5AD0(*v11, v16);
      if ( v15 || v14 || *((_BYTE *)a1 + 400) )
        v13 = 0;
      LOBYTE(v17) = v13;
      result = sub_1800D5AD8(*v11, v17);
      if ( v24 )
      {
        sub_1800D5D38(*v11);
        v18 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259E38, 0LL);
        v19 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259E58, 0LL);
        v20 = sub_180067C48(a1, v27);
        v21 = a1 + 52;
        if ( a1 + 52 != v20 )
        {
          sub_1800698D4(a1 + 52);
          *v21 = *v20;
          a1[53] = v20[1];
          a1[54] = v20[2];
          *v20 = 0LL;
          v20[1] = 0LL;
          v20[2] = 0LL;
        }
        result = sub_1800698D4(v27);
        if ( v18 )
        {
          if ( v19 )
          {
            if ( a1[53] != *v21 )
            {
              v22 = sub_18006CE94(v7);
              sub_180078230(v22);
            }
          }
          else
          {
            result = sub_1800D6820(a1[57], a1 + 52);
          }
        }
        if ( v14 )
          result = sub_1800682B4((__int64)a1);
      }
    }
  }
  if ( *((_QWORD *)&v28 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v23 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, __int64 *))&v28 + 1))(*((_QWORD *)&v28 + 1), v6, v5);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  return result;
}
