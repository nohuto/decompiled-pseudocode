/*
 * XREFs of sub_180038E40 @ 0x180038E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 *     sub_1800D3090 @ 0x1800D3090 (sub_1800D3090.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180038E40(_QWORD *a1, __int64 a2, unsigned int a3, int a4, char *String)
{
  __int64 v6; // r14
  const char *v9; // rdi
  char result; // al
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // r15d
  bool v20; // zf
  __int64 v21; // rsi
  unsigned int v22; // ecx
  bool v23; // di
  __int64 v24; // rcx
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h] BYREF
  int v30; // [rsp+64h] [rbp-1Ch]
  int v31; // [rsp+68h] [rbp-18h]
  int v32; // [rsp+6Ch] [rbp-14h]
  int v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+74h] [rbp-Ch]

  v6 = a3;
  v9 = String;
  result = sub_1800D3090(a1);
  if ( !result )
    return result;
  v32 = 0;
  v11 = a4 - 1;
  if ( !v11 )
  {
    v30 = 1;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v30 = 2;
    goto LABEL_8;
  }
  if ( v12 != 1 )
  {
    v30 = 0;
LABEL_8:
    v32 = 0x10000;
    goto LABEL_10;
  }
  v30 = 3;
  v32 = 196608;
LABEL_10:
  v31 = 4;
  v29 = v6;
  v33 = 0;
  v34 = 0;
  sub_18006445C(a1, v6, 7LL);
  v25 = a2;
  v26 = 0;
  v27 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = a1[10];
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( !v16 )
        break;
      if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) )
      {
        v13 = a1[9];
        v14 = (volatile signed __int32 *)a1[10];
        if ( v14 )
          _InterlockedIncrement(v14 + 2);
        break;
      }
    }
  }
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  v28 = 0LL;
  sub_18002317C(v13, &v28);
  v17 = v28;
  v18 = a1[15];
  if ( v18 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *, _QWORD *, char *))(*(_QWORD *)v17 + 24LL))(
          v17,
          &v29,
          &v25,
          a1 + 15,
          String);
  sub_1800253B0(v13, v19);
  v20 = v19 == 0;
  if ( v19 >= 0 )
  {
    if ( *((_QWORD *)String + 3) >= 0x10uLL )
      v9 = *(const char **)String;
    v21 = a1[15];
    if ( v21 )
    {
      if ( v9 )
        v22 = strnlen(v9, 0x7FFFFFFFuLL);
      else
        v22 = 0;
      (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v21 + 40LL))(
        v21,
        &unk_180210200,
        v22,
        v9);
    }
    v20 = v19 == 0;
  }
  v23 = v20;
  v24 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v14 && !_InterlockedDecrement(v14 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return v23;
}
