/*
 * XREFs of sub_1800380A0 @ 0x1800380A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_18003175C @ 0x18003175C (sub_18003175C.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_180032F68 @ 0x180032F68 (sub_180032F68.c)
 *     sub_18009EC58 @ 0x18009EC58 (sub_18009EC58.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 *     sub_18009ED04 @ 0x18009ED04 (sub_18009ED04.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800380A0(__int64 a1, _QWORD *a2, const void *a3, int a4)
{
  __int64 v7; // rax
  __int64 *v8; // rcx
  char v9; // bl
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // rcx
  void (*v22)(void); // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  signed __int32 v27; // eax
  __int64 v28; // rdi
  char v29; // r15
  __int64 v30; // rdx
  char *v31; // rdi
  __int64 i; // rcx
  unsigned int v33; // edi
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  volatile signed __int32 *v43; // rdi
  volatile signed __int32 *v44; // rdi
  volatile signed __int32 *v45; // rdi
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  char v60; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  _BYTE v63[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v64; // [rsp+D0h] [rbp-30h]
  _DWORD v65[2]; // [rsp+E0h] [rbp-20h]
  char v66; // [rsp+E8h] [rbp-18h] BYREF
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  int v69; // [rsp+140h] [rbp+40h]
  void *v70; // [rsp+150h] [rbp+50h] BYREF
  int v71; // [rsp+158h] [rbp+58h]

  v62 = -2LL;
  v51 = a4;
  LODWORD(v52) = 0;
  v7 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *a2 )
  {
    v8 = (__int64 *)sub_18009EC74(*a2, v63, *(unsigned int *)(a1 + 88));
    v9 = 1;
    v7 = *v8;
  }
  else
  {
    v61 = 0LL;
    v8 = (__int64 *)&v60;
    v9 = 2;
  }
  v49 = v7;
  v50 = (volatile signed __int32 *)v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v61 )
    {
      if ( !_InterlockedDecrement(v61 + 2) )
      {
        v10 = v61;
        (**(void (__fastcall ***)(volatile signed __int32 *))v61)(v61);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    v11 = v64;
    if ( v64 )
    {
      if ( !_InterlockedDecrement(v64 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v12 = 4 - ((unsigned int)sub_18009ED04(v49) != 2);
  v47 = 0LL;
  v48 = 0LL;
  sub_180032F68(&v47, &v49);
  v14 = 1;
  v15 = *(_QWORD *)(*a2 + 128LL);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 12);
  else
    v16 = 0;
  v17 = v47;
  if ( v16 == 1 )
  {
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *sub_18003178C(v47, &v52);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v18 + 112LL))(
            v18,
            v19,
            0LL,
            v12,
            0,
            &v70);
    v21 = v52;
    if ( !v52 )
      goto LABEL_23;
    v52 = 0LL;
    v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
  }
  else
  {
    v14 = sub_18009EC58(v47, v13);
    v23 = *(_QWORD *)(a1 + 144);
    v24 = sub_18003175C(v17, &v56);
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v23 + 112LL))(
            v23,
            *v24,
            0LL,
            v12,
            0,
            &v70);
    v25 = v56;
    if ( !v56 )
      goto LABEL_23;
    v56 = 0LL;
    v22 = *(void (**)(void))(*(_QWORD *)v25 + 16LL);
  }
  v22();
LABEL_23:
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v26 = *(_QWORD *)(a1 + 80);
  if ( v26 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      if ( !v27 )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27) )
      {
        v53 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
    v17 = v47;
  }
  sub_180032E24(&v54, &v53);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v28 = *((_QWORD *)&v53 + 1);
      (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
    }
    v17 = v47;
  }
  sub_1800254C0(v54, v20);
  v29 = 0;
  if ( v20 < 0 )
  {
    sub_18011DA98(&unk_1802590F8, 3LL, "Failed to update Texture with HRESULT error 0x%.8x", v20);
    goto LABEL_50;
  }
  v30 = (unsigned int)sub_18009EC90(v17);
  v65[0] = 0;
  v65[1] = 1;
  v31 = &v66;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v31 = 1;
    v31 += 4;
  }
  v67 = 4;
  v68 = 1;
  v69 = 1;
  v33 = v65[v30];
  v34 = sub_18009ECAC(v17);
  v35 = v14 * v71 * v34 / v33;
  if ( v35 == v51 )
  {
    sub_18000D458(v70, v35, a3, v35);
    v29 = 1;
  }
  v36 = *sub_18003178C(v17, &v57);
  v37 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v36 == 0;
  v39 = *(_QWORD *)(a1 + 144);
  if ( v38 )
  {
    v42 = sub_18003175C(v17, &v59);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v39 + 120LL))(v39, *v42, 0LL);
    v41 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      goto LABEL_48;
    }
  }
  else
  {
    v40 = sub_18003178C(v17, &v58);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v39 + 120LL))(v39, *v40, 0LL);
    v41 = v58;
    if ( v58 )
    {
      v58 = 0LL;
LABEL_48:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
  }
LABEL_50:
  if ( v55 )
  {
    if ( !_InterlockedDecrement(v55 + 2) )
    {
      v43 = v55;
      (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
      if ( !_InterlockedDecrement(v43 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
    }
  }
  if ( v48 )
  {
    if ( !_InterlockedDecrement(v48 + 2) )
    {
      v44 = v48;
      (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
      if ( !_InterlockedDecrement(v44 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
    }
  }
  if ( v50 )
  {
    if ( !_InterlockedDecrement(v50 + 2) )
    {
      v45 = v50;
      (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
      if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
    }
  }
  return v29;
}
