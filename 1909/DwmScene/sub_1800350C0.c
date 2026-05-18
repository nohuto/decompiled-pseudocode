/*
 * XREFs of sub_1800350C0 @ 0x1800350C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_18003175C @ 0x18003175C (sub_18003175C.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_18009EC58 @ 0x18009EC58 (sub_18009EC58.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 *     sub_18009ECE8 @ 0x18009ECE8 (sub_18009ECE8.c)
 *     sub_18009ED20 @ 0x18009ED20 (sub_18009ED20.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800350C0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  char v5; // r14
  __int64 *v6; // rcx
  char v7; // bl
  __int64 v8; // rsi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  char *v20; // rdi
  __int64 i; // rcx
  unsigned int v22; // edi
  unsigned int v23; // r12d
  size_t v24; // rax
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ebx
  unsigned int v29; // edi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v32; // [rsp+50h] [rbp-B8h]
  unsigned int v33; // [rsp+58h] [rbp-B0h]
  unsigned int v34; // [rsp+60h] [rbp-A8h]
  int v35; // [rsp+64h] [rbp-A4h]
  int v37; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v38[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h]
  char v44; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  size_t v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  _DWORD v50[15]; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+124h] [rbp+1Ch]
  __int64 v52; // [rsp+12Ch] [rbp+24h]
  int v53; // [rsp+134h] [rbp+2Ch]
  int v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+13Ch] [rbp+34h]
  int v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+144h] [rbp+3Ch]
  int v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+158h] [rbp+50h]
  _BYTE v60[8]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v61; // [rsp+168h] [rbp+60h]
  _DWORD v62[2]; // [rsp+178h] [rbp+70h]
  char v63; // [rsp+180h] [rbp+78h] BYREF
  int v64; // [rsp+1D0h] [rbp+C8h]
  int v65; // [rsp+1D4h] [rbp+CCh]
  int v66; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v68; // [rsp+1F0h] [rbp+E8h]
  int v69; // [rsp+1F4h] [rbp+ECh]

  v59 = -2LL;
  v47 = a3;
  v4 = a1;
  v49 = a1;
  v5 = 1;
  if ( *a2 )
  {
    v6 = (__int64 *)sub_18009EC74(*a2, v60, *(unsigned int *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v45 = 0LL;
    v6 = (__int64 *)&v44;
    v7 = 2;
    v8 = 0LL;
  }
  v32 = (volatile signed __int32 *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v45 )
    {
      if ( !_InterlockedDecrement(v45 + 2) )
      {
        v9 = v45;
        (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v10 = v61;
    if ( v61 )
    {
      if ( !_InterlockedDecrement(v61 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( (unsigned int)sub_18009ECE8(v8) == 1 )
  {
    v11 = *sub_18003178C(v8, &v41);
    v43 = v11;
    v12 = v41;
    if ( !v41 )
      goto LABEL_20;
    v41 = 0LL;
  }
  else
  {
    v11 = *sub_18003175C(v8, &v42);
    v43 = v11;
    v12 = v42;
    if ( !v42 )
      goto LABEL_20;
    v42 = 0LL;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_20:
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v11,
          0LL,
          1LL,
          0,
          &v67);
  v39 = 0LL;
  v40 = 0LL;
  *(_OWORD *)&v38[1] = 0LL;
  v14 = *(_QWORD *)(v4 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        *(_OWORD *)&v38[1] = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_180032E24(&v39, &v38[1]);
  if ( v38[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = v38[2];
      (**(void (__fastcall ***)(_QWORD))v38[2])(v38[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[2] + 8LL))(v38[2]);
    }
  }
  sub_1800254C0(v39, v13);
  if ( v13 < 0 )
  {
    sub_18011DA98(&unk_1802590F8, 3LL, "Failed to read Texture with HRESULT error 0x%.8x", v13);
    v5 = 0;
  }
  else
  {
    v17 = sub_18009EC90(v8);
    v50[0] = 0;
    v50[1] = 4;
    v50[2] = 4;
    v50[3] = 4;
    v50[4] = 8;
    v50[5] = 12;
    v50[6] = 16;
    v50[7] = 4;
    v50[8] = 4;
    v50[9] = 8;
    v50[10] = 12;
    v50[11] = 16;
    v50[12] = 2;
    v50[13] = 1;
    v50[14] = 2;
    v51 = 0x400000004LL;
    v52 = 0x400000004LL;
    v53 = 2;
    v54 = 4;
    v55 = 8;
    v56 = 4;
    v57 = 1;
    v58 = 2;
    v18 = v50[v17];
    v19 = (unsigned int)sub_18009EC90(v8);
    v62[0] = 0;
    v62[1] = 1;
    v20 = &v63;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v20 = 1;
      v20 += 4;
    }
    v64 = 4;
    v65 = 1;
    v66 = 1;
    v22 = v62[v19];
    v23 = v18 * sub_18009ED20(v8);
    v35 = v23 * sub_18009ECAC(v8);
    LODWORD(v38[0]) = v68;
    v37 = v69;
    v24 = v68;
    if ( v68 > v23 )
      v24 = v23;
    v48 = v24;
    v46 = v67;
    v25 = sub_18009ECAC(v8);
    v34 = (v22 + v25 - 1) / v22;
    v26 = sub_18009EC58(v8, (v22 + v25 - 1) % v22);
    v33 = v26;
    v27 = 0;
    if ( v26 )
    {
      do
      {
        v28 = 0;
        if ( v34 )
        {
          do
          {
            v29 = v35 * v27 + v23 * v28;
            if ( v29 >= a4 )
              break;
            sub_18000D458((void *)(v47 + v29), v23, (const void *)(v46 + LODWORD(v38[0]) * v28++ + v37 * v27), v48);
          }
          while ( v28 < v34 );
          v26 = v33;
        }
        ++v27;
      }
      while ( v27 < v26 );
      v4 = v49;
      v11 = v43;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v11, 0LL);
  }
  if ( v40 )
  {
    if ( !_InterlockedDecrement(v40 + 2) )
    {
      v30 = v40;
      (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
      if ( !_InterlockedDecrement(v30 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
    }
  }
  if ( v32 )
  {
    if ( !_InterlockedDecrement(v32 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
      if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
    }
  }
  return v5;
}
