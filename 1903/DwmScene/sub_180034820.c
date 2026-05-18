/*
 * XREFs of sub_180034820 @ 0x180034820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003167C @ 0x18003167C (sub_18003167C.c)
 *     sub_180032E58 @ 0x180032E58 (sub_180032E58.c)
 *     sub_18009EB64 @ 0x18009EB64 (sub_18009EB64.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180034820(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 *v6; // rcx
  char v7; // si
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  __int64 *v10; // rcx
  char v11; // di
  __int64 v12; // rax
  char v13; // di
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h] BYREF
  char v50; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v51; // [rsp+B8h] [rbp-48h]
  char v52; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v53; // [rsp+C8h] [rbp-38h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  _BYTE v55[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v56; // [rsp+E0h] [rbp-20h]
  _BYTE v57[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v58; // [rsp+F0h] [rbp-10h]
  _BYTE v59[16]; // [rsp+F8h] [rbp-8h] BYREF
  int v60; // [rsp+108h] [rbp+8h]
  unsigned int v61; // [rsp+10Ch] [rbp+Ch]
  _BYTE v62[16]; // [rsp+128h] [rbp+28h] BYREF
  int v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+13Ch] [rbp+3Ch]

  v54 = -2LL;
  LODWORD(v38) = 0;
  v5 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( *a2 )
  {
    v6 = (__int64 *)sub_18009EB64(*a2, v55, *(unsigned int *)(a1 + 88));
    v7 = 1;
    v5 = *v6;
  }
  else
  {
    v51 = 0LL;
    v6 = (__int64 *)&v50;
    v7 = 2;
  }
  v41 = v5;
  v42 = (volatile signed __int32 *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        v8 = v51;
        (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    v9 = v56;
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v39 = 0LL;
  v40 = 0LL;
  if ( *a3 )
  {
    v10 = (__int64 *)sub_18009EB64(*a3, v57, *(unsigned int *)(a1 + 88));
    v11 = 4;
    v12 = *v10;
  }
  else
  {
    v53 = 0LL;
    v10 = (__int64 *)&v52;
    v11 = 8;
    v12 = 0LL;
  }
  v13 = v7 | v11;
  v39 = v12;
  v40 = (volatile signed __int32 *)v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v53;
        (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
      }
    }
  }
  if ( (v13 & 4) != 0 )
  {
    v15 = v58;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v36 = 0LL;
  v37 = 0LL;
  sub_180032E58(&v36, &v41);
  v43 = 0LL;
  v44 = 0LL;
  sub_180032E58(&v43, &v39);
  v16 = v43;
  v17 = sub_18003167C(v43, &v38);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 80LL))(*v17, v59);
  v18 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = sub_18003167C(v36, &v45);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v19 + 80LL))(*v19, v62);
  v20 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v64 == 1 && v61 > 1 )
  {
    v21 = v60;
    if ( v60 == 39 )
      v21 = v63;
    v22 = *(_QWORD *)(a1 + 144);
    v23 = sub_18003167C(v16, &v47);
    v24 = sub_18003167C(v36, &v46);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int))(*(_QWORD *)v22 + 456LL))(
               v22,
               *v24,
               0LL,
               *v23,
               0,
               v21);
    v26 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v47;
    if ( v47 )
    {
      v47 = 0LL;
LABEL_43:
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 144);
    v29 = sub_18003167C(v16, &v49);
    v30 = sub_18003167C(v36, &v48);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 376LL))(v28, *v30, *v29);
    v31 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v27 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      goto LABEL_43;
    }
  }
  if ( v44 )
  {
    result = (unsigned int)_InterlockedDecrement(v44 + 2);
    if ( !(_DWORD)result )
    {
      v32 = v44;
      (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
      result = (unsigned int)_InterlockedDecrement(v32 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
    }
  }
  if ( v37 )
  {
    result = (unsigned int)_InterlockedDecrement(v37 + 2);
    if ( !(_DWORD)result )
    {
      v33 = v37;
      (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
      result = (unsigned int)_InterlockedDecrement(v33 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
    }
  }
  if ( v40 )
  {
    result = (unsigned int)_InterlockedDecrement(v40 + 2);
    if ( !(_DWORD)result )
    {
      v34 = v40;
      (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
      result = (unsigned int)_InterlockedDecrement(v34 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
    }
  }
  if ( v42 )
  {
    result = (unsigned int)_InterlockedDecrement(v42 + 2);
    if ( !(_DWORD)result )
    {
      v35 = v42;
      (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
      result = (unsigned int)_InterlockedDecrement(v35 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
    }
  }
  return result;
}
