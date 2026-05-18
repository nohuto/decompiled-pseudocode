/*
 * XREFs of sub_180037810 @ 0x180037810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_180032F68 @ 0x180032F68 (sub_180032F68.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009EC90 @ 0x18009EC90 (sub_18009EC90.c)
 *     sub_18009ECE8 @ 0x18009ECE8 (sub_18009ECE8.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_180037810(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // di
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r12
  int v23; // r14d
  __int64 v24; // rdx
  signed __int32 v25; // eax
  __int64 v26; // rbx
  char *v27; // rbx
  __int64 v28; // r14
  char *v29; // rdi
  size_t v30; // rsi
  __int64 v31; // r15
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rbx
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rcx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  _QWORD *v48; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v49; // [rsp+60h] [rbp-A0h]
  unsigned int v50; // [rsp+68h] [rbp-98h]
  unsigned int v51; // [rsp+6Ch] [rbp-94h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+98h] [rbp-68h]
  unsigned int v58; // [rsp+9Ch] [rbp-64h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-48h] BYREF
  char v62; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v63; // [rsp+C8h] [rbp-38h]
  _DWORD v64[15]; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+10Ch] [rbp+Ch]
  __int64 v66; // [rsp+114h] [rbp+14h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  int v68; // [rsp+120h] [rbp+20h]
  int v69; // [rsp+124h] [rbp+24h]
  int v70; // [rsp+128h] [rbp+28h]
  int v71; // [rsp+12Ch] [rbp+2Ch]
  int v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+140h] [rbp+40h]
  char v74[8]; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v75; // [rsp+150h] [rbp+50h]
  __int64 v76[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v77[4]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v78[4]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v79[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v80[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v81[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v82[4]; // [rsp+218h] [rbp+118h] BYREF
  _QWORD v83[5]; // [rsp+238h] [rbp+138h] BYREF
  _BYTE v84[64]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v85[64]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v86[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+320h] [rbp+220h] BYREF
  char *v88; // [rsp+360h] [rbp+260h] BYREF
  unsigned int v89; // [rsp+368h] [rbp+268h]
  __int64 v90; // [rsp+370h] [rbp+270h] BYREF
  __int64 v91; // [rsp+378h] [rbp+278h] BYREF
  int v92; // [rsp+380h] [rbp+280h]
  int v93; // [rsp+384h] [rbp+284h]
  int v94; // [rsp+388h] [rbp+288h]
  int v95; // [rsp+38Ch] [rbp+28Ch]
  int v96[12]; // [rsp+390h] [rbp+290h] BYREF

  v73 = -2LL;
  v57 = a4;
  v58 = a3;
  v50 = a6;
  v52 = a7;
  v51 = a9;
  LODWORD(v90) = 0;
  v12 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( *a2 )
  {
    v13 = (__int64 *)sub_18009EC74(*a2, v74, *(unsigned int *)(a1 + 88));
    v14 = 1;
    v12 = *v13;
  }
  else
  {
    v63 = 0LL;
    v13 = (__int64 *)&v62;
    v14 = 2;
  }
  v53 = v12;
  v54 = (volatile signed __int32 *)v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        v15 = v63;
        (**(void (__fastcall ***)(volatile signed __int32 *))v63)(v63);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    v16 = v75;
    if ( v75 )
    {
      if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v48 = 0LL;
  v49 = 0LL;
  sub_180032F68((__int64 *)&v48, &v53);
  v17 = sub_18009EC90(v48);
  v64[0] = 0;
  v64[1] = 4;
  v64[2] = 4;
  v64[3] = 4;
  v64[4] = 8;
  v64[5] = 12;
  v64[6] = 16;
  v64[7] = 4;
  v64[8] = 4;
  v64[9] = 8;
  v64[10] = 12;
  v64[11] = 16;
  v64[12] = 2;
  v64[13] = 1;
  v64[14] = 2;
  v65 = 0x400000004LL;
  v66 = 0x400000004LL;
  v67 = 2;
  v68 = 4;
  v69 = 8;
  v70 = 4;
  v71 = 1;
  v72 = 2;
  v18 = v64[v17];
  if ( (unsigned int)sub_18009ECE8(v48) != 1 )
  {
    sub_18000E4E8(v77);
    v45 = (unsigned int)sub_18000E4E8(v76);
    sub_18006586C((unsigned int)v84, v45, 773, (unsigned int)v77, 0);
    throw (Spectre::Engine::EngineException *)v84;
  }
  v19 = *sub_18003178C((__int64)v48, &v60);
  v20 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( !v19 )
  {
    sub_18000E4E8(v79);
    v46 = (unsigned int)sub_18000E4E8(v78);
    sub_18006586C((unsigned int)v85, v46, 778, (unsigned int)v79, 0);
    throw (Spectre::Engine::EngineException *)v85;
  }
  v21 = a9 * a11;
  if ( v18 * a10 + (int)v21 >= a8 )
  {
    sub_18000E4E8(v81);
    v47 = (unsigned int)sub_18000E4E8(v80);
    sub_18006586C((unsigned int)v86, v47, 785, (unsigned int)v81, 0);
    throw (Spectre::Engine::EngineException *)v86;
  }
  if ( v18 * (a10 + a5) + v51 * (a11 + v50 - 1) > a8 )
  {
    sub_18000E4E8(v83);
    v44 = (unsigned int)sub_18000E4E8(v82);
    sub_18006586C((unsigned int)pExceptionObject, v44, 790, (unsigned int)v83, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v90 = 0LL;
  v22 = v50;
  sub_1800312D4(v48, &v90, a5, v50);
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, char **))(**(_QWORD **)(a1 + 144) + 112LL))(
          *(_QWORD *)(a1 + 144),
          v90,
          0LL,
          4LL,
          0,
          &v88);
  v55 = 0LL;
  v56 = 0LL;
  v59 = 0LL;
  v24 = *(_QWORD *)(a1 + 80);
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)(v24 + 8);
      if ( !v25 )
        break;
      if ( v25 == _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 8), v25 + 1, v25) )
      {
        v59 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180032E24(&v55, &v59);
  if ( *((_QWORD *)&v59 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL)) )
    {
      v26 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v26 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 8LL))(*((_QWORD *)&v59 + 1));
    }
  }
  sub_1800254C0(v55, v23);
  if ( v23 >= 0 && (v27 = v88) != 0LL )
  {
    v28 = 0LL;
    if ( !v89 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v90 + 80LL))(v90, v96);
      v89 = 4 * v96[0];
      v27 = v88;
    }
    v29 = (char *)(v52 + (unsigned int)(v18 * a10) + v21);
    if ( (_DWORD)v22 )
    {
      v30 = (unsigned int)(v18 * a5);
      v31 = v51;
      v28 = v22;
      do
      {
        sub_18000D458(v27, v30, v29, v30);
        v27 += v89;
        v29 += v31;
        --v28;
      }
      while ( v28 );
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(*(_QWORD *)(a1 + 144), v90, 0LL);
    v91 = 0LL;
    v93 = a5;
    v94 = v22;
    v92 = v28;
    v95 = 1;
    v32 = *(_QWORD *)(a1 + 144);
    v33 = sub_18003178C((__int64)v48, &v61);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v32 + 368LL))(
      v32,
      *v33,
      0LL,
      v58,
      v57,
      v28,
      v90,
      v28,
      &v91);
    v34 = v61;
    if ( v61 )
    {
      v61 = v28;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( v56 )
    {
      if ( !_InterlockedDecrement(v56 + 2) )
      {
        v35 = v56;
        (**(void (__fastcall ***)(volatile signed __int32 *))v56)(v56);
        if ( !_InterlockedDecrement(v35 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
      }
    }
    v36 = v90;
    if ( v90 )
    {
      v90 = v28;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    if ( v49 )
    {
      if ( !_InterlockedDecrement(v49 + 2) )
      {
        v37 = v49;
        (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
        if ( !_InterlockedDecrement(v37 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      }
    }
    if ( v54 && !_InterlockedDecrement(v54 + 2) )
    {
      v38 = v54;
      (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
      if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
    }
    return 1;
  }
  else
  {
    sub_18011DA98(&unk_1802590F8, 3LL, "Failed to update Texture2D with HRESULT error 0x%.8x", v23);
    if ( v56 )
    {
      if ( !_InterlockedDecrement(v56 + 2) )
      {
        v40 = v56;
        (**(void (__fastcall ***)(volatile signed __int32 *))v56)(v56);
        if ( !_InterlockedDecrement(v40 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
      }
    }
    v41 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    if ( v49 )
    {
      if ( !_InterlockedDecrement(v49 + 2) )
      {
        v42 = v49;
        (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
        if ( !_InterlockedDecrement(v42 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      }
    }
    if ( v54 )
    {
      if ( !_InterlockedDecrement(v54 + 2) )
      {
        v43 = v54;
        (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
        if ( !_InterlockedDecrement(v43 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
      }
    }
    return 0;
  }
}
