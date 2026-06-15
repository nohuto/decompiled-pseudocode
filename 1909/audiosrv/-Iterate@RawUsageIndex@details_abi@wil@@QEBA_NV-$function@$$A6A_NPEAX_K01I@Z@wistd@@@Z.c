/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800385D0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180038440 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800BDD74 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r9
  char *v4; // rbx
  char v5; // dl
  unsigned __int16 v6; // r8
  int v7; // r13d
  unsigned int v8; // r14d
  char v9; // r12
  unsigned __int64 v10; // rsi
  char *v11; // rdi
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r15
  char *v14; // rsi
  unsigned __int16 v15; // r10
  unsigned __int16 v16; // ax
  char *v17; // rax
  bool v18; // cc
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int16 v22; // [rsp+40h] [rbp-69h]
  unsigned __int16 v23; // [rsp+42h] [rbp-67h]
  unsigned __int16 v24; // [rsp+44h] [rbp-65h] BYREF
  __int16 v25; // [rsp+48h] [rbp-61h]
  char v26; // [rsp+4Ah] [rbp-5Fh]
  unsigned int Destination; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned __int16 v28; // [rsp+50h] [rbp-59h] BYREF
  __int128 v29; // [rsp+58h] [rbp-51h]
  unsigned __int16 v30; // [rsp+68h] [rbp-41h]
  char v31; // [rsp+6Ah] [rbp-3Fh]
  int v32; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned __int16 v33; // [rsp+70h] [rbp-39h] BYREF
  __int128 v34; // [rsp+78h] [rbp-31h]
  int v35; // [rsp+88h] [rbp-21h] BYREF
  __int64 v36; // [rsp+90h] [rbp-19h]
  __int64 v37; // [rsp+98h] [rbp-11h] BYREF
  char *v38; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-1h] BYREF
  _QWORD v40[10]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v41; // [rsp+110h] [rbp+67h]
  char v43; // [rsp+120h] [rbp+77h]
  char v44; // [rsp+128h] [rbp+7Fh]

  v41 = a1;
  v40[1] = -2LL;
  v2 = a2;
  v3 = a1;
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 10LL);
  v5 = *(_BYTE *)(a1 + 4);
  v43 = v5;
  v6 = *(_WORD *)(a1 + 2);
  v22 = v6;
  v25 = v6;
  v26 = v5;
  v7 = 0;
  v8 = 0;
  Destination = 0;
  v28 = 0;
  v29 = 0LL;
  v9 = *(_BYTE *)(a1 + 8);
  v44 = v9;
  v23 = *(_WORD *)(a1 + 6);
  v30 = v23;
  v31 = v9;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v3 + 32);
    v11 = v4;
    if ( v5 == 1 )
    {
      v11 = v4 + 2;
      if ( (unsigned __int64)(v4 + 2) > v10 )
        goto LABEL_20;
      *(_QWORD *)&v29 = v4;
      if ( v4 )
      {
        LOWORD(v4) = *(_WORD *)v4;
      }
      else
      {
        *(_DWORD *)_o__errno(a1) = 22;
        invalid_parameter_noinfo();
        v5 = v43;
        v6 = v22;
      }
      v8 = (unsigned __int16)v4;
      Destination = (unsigned __int16)v4;
    }
    else if ( v5 == 2 )
    {
      v11 = v4 + 4;
      if ( (unsigned __int64)(v4 + 4) > v10 )
        goto LABEL_20;
      *(_QWORD *)&v29 = v4;
      memcpy_s(&Destination, 4uLL, v4, 4uLL);
      v8 = Destination;
      v5 = v26;
      v43 = v26;
      v6 = v25;
      v22 = v25;
    }
    v12 = v6;
    v28 = v6;
    if ( !v6 )
      break;
LABEL_8:
    v36 = v12;
    v4 = &v11[v12];
    if ( (unsigned __int64)v4 > v10 )
      goto LABEL_20;
    *((_QWORD *)&v29 + 1) = v11;
    v3 = v41;
    if ( v8 )
    {
      while ( 1 )
      {
        v3 = v41;
        v13 = *(_QWORD *)(v41 + 32);
        v14 = v4;
        if ( v9 == 1 )
          break;
        if ( v9 != 2 )
          goto LABEL_12;
        v14 = v4 + 4;
        v5 = v43;
        v6 = v22;
        if ( (unsigned __int64)(v4 + 4) > v13 )
          goto LABEL_24;
        *(_QWORD *)&v34 = v4;
        memcpy_s(&v32, 4uLL, v4, 4uLL);
        v9 = v31;
        v44 = v31;
        v15 = v30;
        v23 = v30;
        v3 = v41;
LABEL_13:
        v16 = v15;
        v33 = v15;
        if ( !v15 )
        {
          v5 = v43;
          v6 = v22;
          if ( (unsigned __int64)(v14 + 2) > v13 )
          {
            v9 = v44;
LABEL_24:
            v2 = a2;
            goto LABEL_19;
          }
          memcpy_s(&v33, 2uLL, v14, 2uLL);
          v14 += 2;
          v16 = v33;
          v9 = v31;
          v44 = v31;
          v23 = v30;
        }
        a1 = v16;
        v17 = &v14[v16];
        v18 = (unsigned __int64)v17 <= v13;
        v2 = a2;
        v5 = v43;
        v6 = v22;
        v3 = v41;
        if ( !v18 )
          goto LABEL_19;
        *((_QWORD *)&v34 + 1) = v14;
        v4 = v17;
        v35 = v32;
        v37 = a1;
        v38 = v14;
        v39 = v36;
        v40[0] = v11;
        v19 = *(_QWORD *)(a2 + 112);
        if ( !v19 )
          __fastfail(7u);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *, char **, __int64 *, int *))(*(_QWORD *)v19 + 32LL))(
                v19,
                v40,
                &v39,
                &v38,
                &v37,
                &v35) )
        {
          wistd::function<void (void)>::~function<void (void)>(a2);
          return 0;
        }
        if ( ++v7 >= v8 )
        {
          v5 = v43;
          v6 = v22;
          v3 = v41;
          goto LABEL_19;
        }
      }
      v14 = v4 + 2;
      v5 = v43;
      v6 = v22;
      if ( (unsigned __int64)(v4 + 2) > v13 )
        goto LABEL_24;
      *(_QWORD *)&v34 = v4;
      memcpy_s(&v24, 2uLL, v4, 2uLL);
      v32 = v24;
      v3 = v41;
LABEL_12:
      v15 = v23;
      goto LABEL_13;
    }
LABEL_19:
    v7 = 0;
  }
  if ( (unsigned __int64)(v11 + 2) <= v10 )
  {
    memcpy_s(&v28, 2uLL, v11, 2uLL);
    v11 += 2;
    v12 = v28;
    v8 = Destination;
    v5 = v26;
    v43 = v26;
    v6 = v25;
    v22 = v25;
    goto LABEL_8;
  }
LABEL_20:
  v20 = *(_QWORD **)(v2 + 112);
  if ( v20 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v20 + 24LL))(v20, *v20);
  return 1;
}
