/*
 * XREFs of sub_180034280 @ 0x180034280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009ECC8 @ 0x18009ECC8 (sub_18009ECC8.c)
 *     sub_18009ECD8 @ 0x18009ECD8 (sub_18009ECD8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180034280(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7,
        int a8,
        int a9)
{
  __int64 *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // rdx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 *v27; // rcx
  char v28; // di
  char v29; // di
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  __int64 *v33; // rax
  char v34; // si
  __int64 v35; // rcx
  char v36; // si
  __int64 v37; // rbx
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rbx
  __int64 result; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  char v56; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v57; // [rsp+D0h] [rbp-30h]
  char v58; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F0h] [rbp-10h]
  __int128 v62; // [rsp+100h] [rbp+0h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+120h] [rbp+20h]
  _BYTE v65[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v66; // [rsp+130h] [rbp+30h]
  _BYTE v67[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v68; // [rsp+140h] [rbp+40h]
  _QWORD v69[4]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v70[4]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v71[4]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v72[5]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v74[64]; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v75[6]; // [rsp+250h] [rbp+150h] BYREF

  v64 = -2LL;
  LODWORD(v44) = 0;
  v60 = 0LL;
  v46 = 0uLL;
  if ( *a7 )
  {
    v13 = (__int64 *)sub_18009EC74(*a7, v65, *(unsigned int *)(a1 + 88));
    v14 = 1;
    v15 = *v13;
  }
  else
  {
    v57 = 0LL;
    v13 = (__int64 *)&v56;
    v14 = 2;
    v15 = 0LL;
  }
  *(_QWORD *)&v46 = v15;
  *((_QWORD *)&v46 + 1) = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v57;
        (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    v14 &= ~1u;
    v17 = v66;
    if ( v66 )
    {
      if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  v50 = 0LL;
  v51 = 0LL;
  if ( *((_QWORD *)&v46 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
  v62 = v46;
  sub_1800171D4(&v50, (__int64 *)&v62);
  v18 = v50;
  if ( (unsigned int)sub_18009ECC8(v50) > 1 || (unsigned int)sub_18009ECD8(v18) > 1 )
  {
    sub_18000E4E8(v72);
    v43 = (unsigned int)sub_18000E4E8(v71);
    sub_18006586C((unsigned int)v74, v43, 656, (unsigned int)v72, 0);
    throw (Spectre::Engine::EngineException *)v74;
  }
  if ( v18 )
  {
    v19 = sub_18003178C(v18, &v54);
    v20 = 4;
    v21 = v48;
  }
  else
  {
    v21 = 0LL;
    v48 = 0LL;
    v19 = &v48;
    v20 = 8;
  }
  v22 = v14 | v20;
  v45 = 0LL;
  if ( &v45 != v19 )
  {
    v45 = *v19;
    *v19 = 0LL;
    v21 = v48;
  }
  v60 = v45;
  if ( (v22 & 8) != 0 )
  {
    v22 &= ~8u;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( (v22 & 4) != 0 )
  {
    v22 &= ~4u;
    v23 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
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
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  v61 = 0LL;
  v26 = 0LL;
  v47 = 0uLL;
  if ( *a2 )
  {
    v27 = (__int64 *)sub_18009EC74(*a2, v67, *(unsigned int *)(a1 + 88));
    v28 = 16;
    v26 = *v27;
  }
  else
  {
    v59 = 0LL;
    v27 = (__int64 *)&v58;
    v28 = 32;
  }
  v29 = v22 | v28;
  *(_QWORD *)&v47 = v26;
  *((_QWORD *)&v47 + 1) = v27[1];
  *v27 = 0LL;
  v27[1] = 0LL;
  if ( (v29 & 0x20) != 0 )
  {
    v29 &= ~0x20u;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        v30 = v59;
        (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
      }
    }
  }
  if ( (v29 & 0x10) != 0 )
  {
    v29 &= ~0x10u;
    v31 = v68;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
  }
  v52 = 0LL;
  v53 = 0LL;
  if ( *((_QWORD *)&v47 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL));
  v63 = v47;
  sub_1800171D4(&v52, (__int64 *)&v63);
  v32 = v52;
  if ( (unsigned int)sub_18009ECC8(v52) > 1 || (unsigned int)sub_18009ECD8(v32) > 1 )
  {
    sub_18000E4E8(v70);
    v42 = (unsigned int)sub_18000E4E8(v69);
    sub_18006586C((unsigned int)pExceptionObject, v42, 672, (unsigned int)v70, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v32 )
  {
    v33 = sub_18003178C(v32, &v55);
    v34 = 64;
    v35 = v49;
  }
  else
  {
    v35 = 0LL;
    v49 = 0LL;
    v33 = &v49;
    v34 = 0x80;
  }
  v36 = v29 | v34;
  v37 = 0LL;
  v44 = 0LL;
  if ( &v44 != v33 )
  {
    v37 = *v33;
    v44 = *v33;
    *v33 = 0LL;
    v35 = v49;
  }
  v61 = v37;
  if ( v36 < 0 )
  {
    v36 &= ~0x80u;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( (v36 & 0x40) != 0 )
  {
    v38 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
    {
      v39 = v53;
      (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
      if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    }
    v37 = v44;
  }
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v40 = *((_QWORD *)&v47 + 1);
      (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
    }
    v37 = v44;
  }
  v75[2] = 0;
  v75[0] = a8;
  v75[1] = a9;
  v75[3] = a5 + a8;
  v75[4] = a9 + a6;
  v75[5] = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144) + 368LL))(
             *(_QWORD *)(a1 + 144),
             v37,
             0LL,
             a3,
             a4,
             0,
             v45,
             0,
             v75);
  if ( v37 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v45 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  return result;
}
