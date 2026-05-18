/*
 * XREFs of sub_1800D9D54 @ 0x1800D9D54
 * Callers:
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_1800D73BC @ 0x1800D73BC (sub_1800D73BC.c)
 *     sub_1800D7834 @ 0x1800D7834 (sub_1800D7834.c)
 *     sub_1800D8A50 @ 0x1800D8A50 (sub_1800D8A50.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800D9D54(__int64 a1, __int64 *a2, double a3)
{
  unsigned __int64 v5; // rcx
  __int64 **v6; // r14
  __int64 *v7; // rbx
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 *v14; // rax
  _QWORD v15[3]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[4]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v17[5]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v20[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v22; // [rsp+100h] [rbp-8h]
  _BYTE v23[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v24[3]; // [rsp+1C0h] [rbp+B8h] BYREF
  unsigned __int64 v25; // [rsp+1D8h] [rbp+D0h]
  int v26; // [rsp+280h] [rbp+178h]
  int v27; // [rsp+284h] [rbp+17Ch]

  v15[2] = -2LL;
  if ( !*(_BYTE *)a1 )
  {
    sub_18000E4E8(v17);
    v14 = sub_18000E4E8(v16);
    sub_18006586C(pExceptionObject, v14, 127LL, (__int64)v17, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a2[4];
  v6 = (__int64 **)(a1 + 16);
  v7 = *(__int64 **)(a1 + 16);
  v8 = (__int64 *)v7[1];
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_9;
  do
  {
    if ( v8[4] >= v5 )
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
  if ( v7 == *v6 || v5 < v7[4] )
LABEL_9:
    v7 = *v6;
  if ( v7 == *v6 )
  {
    v24[2] = 0LL;
    v25 = 15LL;
    LOBYTE(v24[0]) = 0;
    v26 = 0;
    v27 = 0;
    sub_180011764(v24, a2);
    v19 = a2[4];
    sub_1800D8A50((__int64)v20, (__int64)v23);
    v9 = (_QWORD *)sub_1800D73BC(a1 + 16, (__int64)&v19);
    sub_1800D7834((__int64 **)(a1 + 16), (__int64)v15, 0, v9 + 4, v9);
    if ( v22 >= 0x10 )
    {
      v10 = v21;
      if ( v22 + 1 >= 0x1000 )
      {
        v10 = *(_QWORD *)(v21 - 8);
        if ( (unsigned __int64)(v21 - v10 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v10, v22 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v10);
    }
    v7 = (__int64 *)v15[0];
    if ( v25 >= 0x10 )
    {
      v11 = v24[0];
      if ( v25 + 1 >= 0x1000 )
      {
        v11 = *(_QWORD *)(v24[0] - 8);
        if ( (unsigned __int64)(v24[0] - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, v25 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v11);
    }
  }
  v7[5] = *(_QWORD *)(a1 + 8);
  *(double *)&v7[*((unsigned int *)v7 + 60) + 10] = a3;
  *((_DWORD *)v7 + 60) = (*((_DWORD *)v7 + 60) + 1) % 0x14u;
  v12 = *((_DWORD *)v7 + 61) + 1;
  if ( v12 > 0x14 )
    v12 = 20;
  *((_DWORD *)v7 + 61) = v12;
  return v7 + 10;
}
