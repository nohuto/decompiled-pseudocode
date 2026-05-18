/*
 * XREFs of sub_180079C94 @ 0x180079C94
 * Callers:
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 * Callees:
 *     sub_18001DA04 @ 0x18001DA04 (sub_18001DA04.c)
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180079C94(__int64 a1)
{
  int v2; // eax
  unsigned int i; // r15d
  __int64 v4; // r12
  const char *v5; // r14
  const char *v6; // rbx
  const char *v7; // rdi
  const char *v8; // rax
  const char *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  volatile signed __int32 *v18; // rbx
  __int64 result; // rax
  __int64 v20; // [rsp+58h] [rbp-79h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp-71h]
  _QWORD v22[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-51h]
  _QWORD v24[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp-31h]
  _QWORD v26[3]; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp-11h]
  __int64 v28; // [rsp+C8h] [rbp-9h]
  _QWORD v29[3]; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp+17h]
  __int64 v31; // [rsp+F0h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+F8h] [rbp+27h]

  v28 = -2LL;
  sub_18011DA98(&unk_1802596D8, 3LL, (const char *)&unk_1801E0D05);
  v2 = sub_180077C8C(a1);
  sub_18011DA98(&unk_1802596D8, 3LL, "Engine has %u device(s) attached:", v2);
  v31 = 0LL;
  v32 = 0LL;
  sub_180063468(a1 + 112, &v31);
  for ( i = 0; i < (unsigned int)sub_180077C8C(a1); ++i )
  {
    v20 = 0LL;
    v21 = 0LL;
    sub_180077BAC(a1, &v20, i);
    v4 = v20;
    v5 = (const char *)sub_18001DA04(v29);
    v6 = (const char *)sub_18001DA04(v26);
    v7 = (const char *)sub_18001DA04(v24);
    v8 = (const char *)sub_18001DA04(v22);
    v9 = v8;
    if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
      v5 = *(const char **)v5;
    if ( *((_QWORD *)v6 + 3) >= 0x10uLL )
      v6 = *(const char **)v6;
    if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
      v7 = *(const char **)v7;
    if ( *((_QWORD *)v8 + 3) >= 0x10uLL )
      v9 = *(const char **)v8;
    v10 = sub_18006CEC8(v4);
    sub_18011DA98(
      &unk_1802596D8,
      3LL,
      "    index %u      id %-3u    %-20s     %-30s   level=%-10s   profile=%-8s",
      i,
      v10,
      v9,
      v7,
      v6,
      v5);
    if ( v23 >= 0x10 )
    {
      v11 = v22[0];
      if ( v23 + 1 >= 0x1000 )
      {
        v11 = *(_QWORD *)(v22[0] - 8LL);
        if ( (unsigned __int64)(v22[0] - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, v23 + 40);
LABEL_35:
          o__invalid_parameter_noinfo_noreturn(v12, v13);
LABEL_36:
          o__invalid_parameter_noinfo_noreturn(v14, v15);
LABEL_37:
          o__invalid_parameter_noinfo_noreturn(v16, v17);
          JUMPOUT(0x180079FDBLL);
        }
      }
      j_j__o_free(v11);
    }
    v22[2] = 0LL;
    v23 = 15LL;
    LOBYTE(v22[0]) = 0;
    if ( v25 >= 0x10 )
    {
      v12 = v24[0];
      if ( v25 + 1 >= 0x1000 )
      {
        v13 = v25 + 40;
        v12 = *(_QWORD *)(v24[0] - 8LL);
        if ( (unsigned __int64)(v24[0] - v12 - 8) > 0x1F )
          goto LABEL_35;
      }
      j_j__o_free(v12);
    }
    v24[2] = 0LL;
    v25 = 15LL;
    LOBYTE(v24[0]) = 0;
    if ( v27 >= 0x10 )
    {
      v14 = v26[0];
      if ( v27 + 1 >= 0x1000 )
      {
        v15 = v27 + 40;
        v14 = *(_QWORD *)(v26[0] - 8LL);
        if ( (unsigned __int64)(v26[0] - v14 - 8) > 0x1F )
          goto LABEL_36;
      }
      j_j__o_free(v14);
    }
    v26[2] = 0LL;
    v27 = 15LL;
    LOBYTE(v26[0]) = 0;
    if ( v30 >= 0x10 )
    {
      v16 = v29[0];
      if ( v30 + 1 >= 0x1000 )
      {
        v17 = v30 + 40;
        v16 = *(_QWORD *)(v29[0] - 8LL);
        if ( (unsigned __int64)(v29[0] - v16 - 8) > 0x1F )
          goto LABEL_37;
      }
      j_j__o_free(v16);
    }
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v18 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  result = sub_18011DA98(
             &unk_1802596D8,
             3LL,
             "-----------------------------------------------------------------------------------");
  if ( (_BYTE)v32 )
    return sub_180063780(v31);
  return result;
}
