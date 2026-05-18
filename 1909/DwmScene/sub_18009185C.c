/*
 * XREFs of sub_18009185C @ 0x18009185C
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 * Callees:
 *     sub_180091334 @ 0x180091334 (sub_180091334.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009185C(__int64 a1, __int64 *a2, __int64 a3, float a4)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  float v14; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-30h] BYREF

  v15[0] = -2LL;
  v15[1] = a1;
  v15[2] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 2;
  v14 = a4;
  v6 = a1 + 40;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_QWORD *)(v6 + 16) = 0LL;
  sub_180091334((void **)v6, &v14, (__int64)v15);
  v7 = a2[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a2;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x18009194DLL);
      }
      v9 = v11;
    }
    j_j__o_free(v9);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
