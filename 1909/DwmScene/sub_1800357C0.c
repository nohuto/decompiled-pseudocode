/*
 * XREFs of sub_1800357C0 @ 0x1800357C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D45C @ 0x18002D45C (sub_18002D45C.c)
 *     sub_180032B64 @ 0x180032B64 (sub_180032B64.c)
 *     sub_180032C08 @ 0x180032C08 (sub_180032C08.c)
 *     sub_180032E90 @ 0x180032E90 (sub_180032E90.c)
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall sub_1800357C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  volatile signed __int32 **v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rax
  char *v14; // rcx
  int v15; // edi
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 *v28; // rcx
  char v29; // dl
  char v30; // di
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rbx
  __int64 *v34; // rax
  char v35; // si
  __int64 v36; // rcx
  char v37; // si
  __int64 v38; // rdi
  __int64 v39; // r15
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v57; // [rsp+B0h] [rbp-58h]
  char v58; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v59; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v61; // [rsp+D0h] [rbp-38h]
  char v62; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v63; // [rsp+E0h] [rbp-28h]
  __int64 v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  volatile signed __int32 *v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  char v68; // [rsp+108h] [rbp+0h] BYREF
  __int64 v69; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v70; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v71[8]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v72[8]; // [rsp+168h] [rbp+60h] BYREF

  v67 = -2LL;
  v64 = a3;
  v43 = a1;
  v4 = 0;
  v70 = 0;
  `eh vector constructor iterator'(
    v71,
    8uLL,
    8uLL,
    (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
    (void (*)(void *))sub_18000A7E0);
  v5 = (volatile signed __int32 **)(a2 + 8);
  v6 = 0LL;
  v7 = 8LL;
  v8 = v43;
  do
  {
    v65 = 0LL;
    v66 = 0LL;
    v9 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *v5;
    }
    v10 = (__int64)*(v5 - 1);
    v65 = v10;
    v66 = v9;
    v11 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    if ( v10 )
    {
      v70 = *(_DWORD *)(v8 + 88);
      sub_180032B64((__int64 **)(v10 + 120), (__int64)&v69, &v70);
      v12 = v69;
      v13 = *(volatile signed __int32 **)(v69 + 48);
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 2);
        v13 = *(volatile signed __int32 **)(v12 + 48);
      }
      v61 = v13;
      v14 = &v60;
      v15 = v4 | 0x101;
      v11 = *(_QWORD *)(v12 + 40);
    }
    else
    {
      v59 = 0LL;
      v14 = &v58;
      v15 = v4 | 2;
    }
    v46 = v11;
    v47 = (volatile signed __int32 *)*((_QWORD *)v14 + 1);
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    if ( (v15 & 2) != 0 )
    {
      v15 &= ~2u;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          v16 = v59;
          (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        }
      }
    }
    if ( (v15 & 1) != 0 )
    {
      v15 &= ~1u;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          v17 = v61;
          (**(void (__fastcall ***)(volatile signed __int32 *))v61)(v61);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
        }
      }
    }
    v50 = 0LL;
    v51 = 0LL;
    sub_180032E90(&v50, &v46);
    if ( v50 )
    {
      v18 = sub_18002D45C(v50, &v54);
      v19 = 4;
    }
    else
    {
      v42 = 0LL;
      v18 = &v42;
      v19 = 8;
    }
    v4 = v19 | v15;
    v20 = 0LL;
    if ( &v68 != (char *)v18 )
    {
      v20 = *v18;
      *v18 = 0LL;
    }
    v21 = v71[v6];
    v71[v6] = v20;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( (v4 & 8) != 0 )
    {
      v4 &= ~8u;
      v22 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v4 &= ~4u;
      v23 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v72[v6] = v71[v6];
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        v24 = v51;
        (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      }
    }
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        v25 = v47;
        (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      }
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    v5 += 2;
    ++v6;
    --v7;
  }
  while ( v7 );
  v26 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v27 = v43;
  if ( *(_QWORD *)v64 )
  {
    sub_180033F18((__int64 *)(*(_QWORD *)v64 + 256LL), &v56, *(_DWORD *)(v43 + 88));
    v28 = &v56;
    v26 = v56;
    v29 = 16;
  }
  else
  {
    v63 = 0LL;
    v28 = (__int64 *)&v62;
    v29 = 32;
  }
  v30 = v29 | v4;
  v48 = v26;
  v49 = (volatile signed __int32 *)v28[1];
  *v28 = 0LL;
  v28[1] = 0LL;
  if ( (v30 & 0x20) != 0 )
  {
    v30 &= ~0x20u;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        v31 = v63;
        (**(void (__fastcall ***)(volatile signed __int32 *))v63)(v63);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
      }
    }
  }
  if ( (v30 & 0x10) != 0 )
  {
    v30 &= ~0x10u;
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        v32 = v57;
        (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
      }
    }
  }
  v52 = 0LL;
  v53 = 0LL;
  sub_180032C08(&v52, &v48);
  if ( v52 )
  {
    v33 = *(_QWORD *)(v52 + 112);
    v44 = v33;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v34 = &v44;
    v35 = 64;
    v36 = v45;
  }
  else
  {
    v36 = 0LL;
    v45 = 0LL;
    v34 = &v45;
    v35 = 0x80;
    v33 = v44;
  }
  v37 = v30 | v35;
  v38 = 0LL;
  v55 = 0LL;
  v39 = 0LL;
  if ( &v55 != v34 )
  {
    v55 = *v34;
    v38 = v55;
    *v34 = 0LL;
    v39 = v38;
    v33 = v44;
    v36 = v45;
  }
  if ( v37 < 0 )
  {
    v37 &= ~0x80u;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( (v37 & 0x40) != 0 && v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v27 + 144) + 264LL))(
    *(_QWORD *)(v27 + 144),
    8LL,
    v72,
    v38);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
    {
      v40 = v53;
      (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
      if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    }
  }
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      v41 = v49;
      (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    }
  }
  `eh vector destructor iterator'(v71, 8uLL, 8uLL, (void (*)(void *))sub_18000A7E0);
}
