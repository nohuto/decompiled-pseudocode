/*
 * XREFs of sub_18010F854 @ 0x18010F854
 * Callers:
 *     sub_1800EE260 @ 0x1800EE260 (sub_1800EE260.c)
 *     sub_1800F00B0 @ 0x1800F00B0 (sub_1800F00B0.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_1800A40B8 @ 0x1800A40B8 (sub_1800A40B8.c)
 *     sub_1800A40F4 @ 0x1800A40F4 (sub_1800A40F4.c)
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800A8E14 @ 0x1800A8E14 (sub_1800A8E14.c)
 *     sub_1800A9E00 @ 0x1800A9E00 (sub_1800A9E00.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800F8640 @ 0x1800F8640 (sub_1800F8640.c)
 *     sub_1800F869C @ 0x1800F869C (sub_1800F869C.c)
 *     sub_1800F86F8 @ 0x1800F86F8 (sub_1800F86F8.c)
 *     sub_1800F8754 @ 0x1800F8754 (sub_1800F8754.c)
 *     sub_1800F899C @ 0x1800F899C (sub_1800F899C.c)
 *     sub_1800F9420 @ 0x1800F9420 (sub_1800F9420.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_18010F854(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r13
  int v7; // edx
  int v8; // eax
  char v9; // bl
  int v10; // edi
  int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rbx
  _DWORD **v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r8
  bool v20; // bl
  __int64 v21; // rdi
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  bool result; // al
  unsigned int v32; // [rsp+48h] [rbp-C0h]
  int v33; // [rsp+4Ch] [rbp-BCh]
  _DWORD v34[2]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v35[3]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h]
  _QWORD v38[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v39; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v42[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v43[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v45; // [rsp+E0h] [rbp-28h]
  __int64 v46; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v47; // [rsp+F0h] [rbp-18h]
  __int64 v48; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v49; // [rsp+100h] [rbp-8h]
  __int64 v50[4]; // [rsp+108h] [rbp+0h] BYREF
  int v51; // [rsp+128h] [rbp+20h] BYREF
  __int64 v52; // [rsp+130h] [rbp+28h]
  __int128 v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int v56; // [rsp+158h] [rbp+50h] BYREF
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int128 v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  __int128 v62; // [rsp+198h] [rbp+90h] BYREF
  _QWORD *v63; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 *v64; // [rsp+1B0h] [rbp+A8h]
  __int64 v65; // [rsp+1B8h] [rbp+B0h] BYREF
  int v66; // [rsp+1C8h] [rbp+C0h] BYREF
  int v67; // [rsp+1CCh] [rbp+C4h]
  int v68; // [rsp+1D0h] [rbp+C8h]
  int v69; // [rsp+1D4h] [rbp+CCh]
  int v70; // [rsp+1D8h] [rbp+D0h]
  int v71; // [rsp+1DCh] [rbp+D4h]
  char v72; // [rsp+1E0h] [rbp+D8h]
  int v73; // [rsp+1E4h] [rbp+DCh]
  int v74; // [rsp+1E8h] [rbp+E0h]
  int v75; // [rsp+1ECh] [rbp+E4h]
  int v76; // [rsp+1F0h] [rbp+E8h]
  __int64 v77; // [rsp+1F4h] [rbp+ECh]
  __int64 v78; // [rsp+1FCh] [rbp+F4h]
  char v79; // [rsp+204h] [rbp+FCh]
  int v80; // [rsp+205h] [rbp+FDh]
  int v81; // [rsp+20Ch] [rbp+104h]

  v61 = -2LL;
  v6 = sub_1800A40B8(a2);
  v7 = 0;
  if ( *(int *)(a1 + 104) >= 40960 )
    v7 = 23;
  v8 = 0;
  if ( (*(_DWORD *)(v6 + 560) & 2) == 0 )
    v8 = v7;
  v33 = v8;
  v9 = sub_1800A8E14(*(_QWORD *)(a1 + 56), (__int64)&qword_18025C5F8);
  v10 = sub_1800A8E14(*(_QWORD *)(a1 + 56), (__int64)&qword_18025C598);
  v11 = sub_1800A8E14(*(_QWORD *)(a1 + 56), (__int64)&qword_18025C6D8);
  v12 = sub_1800A8E14(*(_QWORD *)(a1 + 56), (__int64)&qword_18025C5D8);
  v32 = v12;
  v13 = 1LL << v9;
  v37 = v13;
  if ( a3 )
  {
    v35[0] = v10;
    v35[1] = v11;
    v35[2] = v12;
    v42[0] = v35;
    v42[1] = &v36;
    v14 = (_DWORD **)v42;
  }
  else
  {
    v34[0] = v10;
    v34[1] = v11;
    v43[0] = v34;
    v43[1] = v35;
    v14 = (_DWORD **)v43;
  }
  v15 = sub_1800A40F4(a2, v14);
  v16 = 0LL;
  v65 = 0LL;
  v17 = 1LL << v10;
  v18 = 1LL << v11;
  while ( 1 )
  {
    v19 = v13 | v16;
    v20 = a3 && _bittest64(&v19, v32);
    v21 = v19 & v17;
    if ( !v20 || !v21 && (v19 & v18) == 0 )
    {
      v63 = 0LL;
      v64 = 0LL;
      sub_1800A8550(*(_QWORD *)(a1 + 56), &v63, v19, v15 & ~v19, 1);
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v77 = 0LL;
      v78 = 0LL;
      v81 = 3;
      v66 = 0;
      v67 = !v20 + 1;
      v68 = v21 != 0 ? v33 : 0;
      v80 = 16843009;
      v73 = 2;
      v74 = 2;
      v75 = 2;
      v76 = 7;
      v79 = 1;
      v62 = 0uLL;
      sub_18001D7D4((_QWORD *)v6, &v62, 1u);
      sub_1800CC090(v62, (__int64)&v66, 0LL);
      *(_OWORD *)&v38[1] = 0LL;
      if ( *((_QWORD *)&v62 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
      *(_OWORD *)&v38[1] = v62;
      sub_1800F8754((__int64)v63, &v38[1]);
      if ( !v20 )
      {
        v67 = 1;
        sub_18001D7D4((_QWORD *)v6, &v44, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v62, &v44);
        v22 = v45;
        if ( v45 )
        {
          if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          }
        }
        sub_1800CC090(v62, (__int64)&v66, 0LL);
        v39 = 0LL;
        if ( *((_QWORD *)&v62 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
        v39 = v62;
        sub_1800F869C((__int64)v63, &v39);
        HIBYTE(v80) = 0;
        sub_18001D7D4((_QWORD *)v6, &v46, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v62, &v46);
        v23 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          }
        }
        sub_1800CC090(v62, (__int64)&v66, 0LL);
        v40 = 0LL;
        if ( *((_QWORD *)&v62 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
        v40 = v62;
        sub_1800F8640((__int64)v63, &v40);
        v67 = 2;
        HIBYTE(v80) = 0;
        sub_18001D7D4((_QWORD *)v6, &v48, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v62, &v48);
        v24 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
        }
        sub_1800CC090(v62, (__int64)&v66, 0LL);
        v41 = 0LL;
        if ( *((_QWORD *)&v62 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
        v41 = v62;
        sub_1800F86F8((__int64)v63, &v41);
      }
      if ( v21 )
      {
        v25 = *(_QWORD *)(a1 + 112);
        v51 = 0;
        v52 = v25;
        v53 = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        sub_1800F9420((__int64)v63, (__int64)&v51);
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 120);
        v56 = 0;
        v57 = v26;
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        sub_1800F9420((__int64)v63, (__int64)&v56);
        v50[3] = 15LL;
        v50[2] = 0LL;
        LOBYTE(v50[0]) = 0;
        sub_1800F899C(v63, 5, v50);
      }
      v27 = *(_QWORD *)(a1 + 136);
      if ( *(_QWORD *)(a1 + 144) == v27 )
      {
        sub_18000FBE0((char **)(a1 + 128), (char *)v27, &v63);
      }
      else
      {
        *(_QWORD *)v27 = 0LL;
        *(_QWORD *)(v27 + 8) = 0LL;
        if ( v64 )
          _InterlockedIncrement(v64 + 2);
        *(_QWORD *)v27 = v63;
        *(_QWORD *)(v27 + 8) = v64;
        *(_QWORD *)(a1 + 136) += 16LL;
      }
      v28 = (volatile signed __int32 *)*((_QWORD *)&v62 + 1);
      if ( *((_QWORD *)&v62 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
      v29 = v64;
      if ( v64 && _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    result = sub_1800A9E00(&v65, v15);
    if ( !result )
      break;
    v16 = v65;
    v13 = v37;
  }
  return result;
}
