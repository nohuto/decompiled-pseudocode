/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18000B7D8
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000A9E8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEBGU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18000B9E4 (-_Tidy@-$_Func_class@JPEBGU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  char *v4; // rbx
  char v5; // dl
  unsigned __int16 v6; // r8
  unsigned int v7; // r15d
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  unsigned __int16 v10; // ax
  unsigned int v11; // r13d
  unsigned __int64 v12; // r12
  char *v13; // rsi
  unsigned __int16 v14; // r11
  unsigned __int16 v15; // ax
  char *v16; // rax
  __int64 v17; // rcx
  __int16 v19; // [rsp+40h] [rbp-79h]
  unsigned __int16 v20; // [rsp+42h] [rbp-77h]
  int v21; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v22; // [rsp+50h] [rbp-69h] BYREF
  __int16 v23; // [rsp+58h] [rbp-61h]
  char v24; // [rsp+5Ah] [rbp-5Fh]
  unsigned int Destination; // [rsp+5Ch] [rbp-5Dh] BYREF
  unsigned __int16 v26; // [rsp+60h] [rbp-59h] BYREF
  __int128 v27; // [rsp+68h] [rbp-51h]
  unsigned __int16 v28; // [rsp+78h] [rbp-41h]
  char v29; // [rsp+7Ah] [rbp-3Fh]
  int v30; // [rsp+7Ch] [rbp-3Dh] BYREF
  unsigned __int16 v31; // [rsp+80h] [rbp-39h] BYREF
  __int128 v32; // [rsp+88h] [rbp-31h]
  __int64 v33; // [rsp+98h] [rbp-21h]
  __int64 v34; // [rsp+A0h] [rbp-19h] BYREF
  char *v35; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v37[11]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v38; // [rsp+120h] [rbp+67h]
  char v39; // [rsp+130h] [rbp+77h]
  char v40; // [rsp+138h] [rbp+7Fh]

  v38 = a1;
  v37[1] = -2LL;
  v3 = a1;
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 10LL);
  v5 = *(_BYTE *)(a1 + 4);
  v39 = v5;
  v6 = *(_WORD *)(a1 + 2);
  v19 = v6;
  v23 = v6;
  v24 = v5;
  v7 = 0;
  Destination = 0;
  v26 = 0;
  v27 = 0LL;
  v40 = *(_BYTE *)(a1 + 8);
  v20 = *(_WORD *)(a1 + 6);
  v28 = v20;
  v29 = v40;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  do
  {
LABEL_2:
    v8 = *(_QWORD *)(v3 + 32);
    v9 = v4;
    if ( v5 == 1 )
    {
      v9 = v4 + 2;
      if ( (unsigned __int64)(v4 + 2) > v8 )
        goto LABEL_19;
      *(_QWORD *)&v27 = v4;
      if ( v4 )
      {
        LOWORD(v4) = *(_WORD *)v4;
      }
      else
      {
        *(_DWORD *)_o__errno(a1) = 22;
        invalid_parameter_noinfo();
        v5 = v39;
        v6 = v19;
      }
      v7 = (unsigned __int16)v4;
      Destination = (unsigned __int16)v4;
    }
    else if ( v5 == 2 )
    {
      v9 = v4 + 4;
      if ( (unsigned __int64)(v4 + 4) > v8 )
        goto LABEL_19;
      *(_QWORD *)&v27 = v4;
      memcpy_s(&Destination, 4uLL, v4, 4uLL);
      v7 = Destination;
      v5 = v24;
      v39 = v24;
      v6 = v23;
      v19 = v23;
    }
    v10 = v6;
    v26 = v6;
    if ( !v6 )
    {
      if ( (unsigned __int64)(v9 + 2) > v8 )
      {
LABEL_19:
        wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
        wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
        return 1;
      }
      memcpy_s(&v26, 2uLL, v9, 2uLL);
      v9 += 2;
      v10 = v26;
      v7 = Destination;
      v5 = v24;
      v39 = v24;
      v6 = v23;
      v19 = v23;
    }
    v33 = v10;
    v4 = &v9[v10];
    if ( (unsigned __int64)v4 > v8 )
      goto LABEL_19;
    *((_QWORD *)&v27 + 1) = v9;
    v11 = 0;
    v21 = 0;
    v3 = v38;
  }
  while ( !v7 );
  while ( 1 )
  {
    v3 = v38;
    v12 = *(_QWORD *)(v38 + 32);
    v13 = v4;
    if ( v40 == 1 )
    {
      v13 = v4 + 2;
      v5 = v39;
      v6 = v19;
      if ( (unsigned __int64)(v4 + 2) > v12 )
        goto LABEL_2;
      *(_QWORD *)&v32 = v4;
      memcpy_s(&v22, 2uLL, v4, 2uLL);
      v30 = v22;
      v3 = v38;
LABEL_12:
      v14 = v20;
      goto LABEL_13;
    }
    if ( v40 != 2 )
      goto LABEL_12;
    v13 = v4 + 4;
    v5 = v39;
    v6 = v19;
    if ( (unsigned __int64)(v4 + 4) > v12 )
      goto LABEL_2;
    *(_QWORD *)&v32 = v4;
    memcpy_s(&v30, 4uLL, v4, 4uLL);
    LOBYTE(a1) = v29;
    v40 = v29;
    v14 = v28;
    v20 = v28;
    v3 = v38;
LABEL_13:
    v15 = v14;
    v31 = v14;
    if ( !v14 )
    {
      v5 = v39;
      v6 = v19;
      if ( (unsigned __int64)(v13 + 2) > v12 )
        goto LABEL_2;
      memcpy_s(&v31, 2uLL, v13, 2uLL);
      v13 += 2;
      v15 = v31;
      v40 = v29;
      v20 = v28;
      v11 = v21;
    }
    a1 = v15;
    v16 = &v13[v15];
    v5 = v39;
    v6 = v19;
    v3 = v38;
    if ( (unsigned __int64)v16 > v12 )
      goto LABEL_2;
    *((_QWORD *)&v32 + 1) = v13;
    v4 = v16;
    v21 = v30;
    v34 = a1;
    v35 = v13;
    v36 = v33;
    v37[0] = v9;
    v17 = *(_QWORD *)(a2 + 104);
    if ( !v17 )
      __fastfail(7u);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *, char **, __int64 *, int *))(*(_QWORD *)v17 + 16LL))(
            v17,
            v37,
            &v36,
            &v35,
            &v34,
            &v21) )
      break;
    v21 = ++v11;
    if ( v11 >= v7 )
    {
      v5 = v39;
      v6 = v19;
      v3 = v38;
      goto LABEL_2;
    }
  }
  wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
  wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
  return 0;
}
