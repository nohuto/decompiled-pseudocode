/*
 * XREFs of sub_1800ED920 @ 0x1800ED920
 * Callers:
 *     sub_1800EE260 @ 0x1800EE260 (sub_1800EE260.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     sub_1800A630C @ 0x1800A630C (sub_1800A630C.c)
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 *     sub_1800F87C0 @ 0x1800F87C0 (sub_1800F87C0.c)
 *     sub_1800F9420 @ 0x1800F9420 (sub_1800F9420.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_1800ED920(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  __m128i *v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int128 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  _QWORD *v25; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v26; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v27[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v28[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v29[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-48h]
  _QWORD v32[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-10h]
  __int128 v36; // [rsp+100h] [rbp-8h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  int v39; // [rsp+120h] [rbp+18h] BYREF
  __int64 v40; // [rsp+128h] [rbp+20h]
  __int128 v41; // [rsp+130h] [rbp+28h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 v43; // [rsp+148h] [rbp+40h]
  int v44; // [rsp+150h] [rbp+48h] BYREF
  __int64 v45; // [rsp+158h] [rbp+50h]
  __int128 v46; // [rsp+160h] [rbp+58h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 v48; // [rsp+178h] [rbp+70h]
  int v49; // [rsp+180h] [rbp+78h] BYREF
  __int64 v50; // [rsp+188h] [rbp+80h]
  __int128 v51; // [rsp+190h] [rbp+88h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  __int64 v53; // [rsp+1A8h] [rbp+A0h]
  __int64 *v54; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 *v55; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v56; // [rsp+1C0h] [rbp+B8h] BYREF
  __m128i v57; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128i v58; // [rsp+1D8h] [rbp+D0h] BYREF
  __m128i v59; // [rsp+1E8h] [rbp+E0h] BYREF
  __m128i v60; // [rsp+1F8h] [rbp+F0h] BYREF
  __m128i v61; // [rsp+208h] [rbp+100h] BYREF
  __int64 v62; // [rsp+218h] [rbp+110h] BYREF
  volatile signed __int32 *v63; // [rsp+220h] [rbp+118h]
  __int64 v64; // [rsp+228h] [rbp+120h] BYREF
  volatile signed __int32 *v65; // [rsp+230h] [rbp+128h]
  __int64 v66; // [rsp+238h] [rbp+130h] BYREF
  volatile signed __int32 *v67; // [rsp+240h] [rbp+138h]
  __int64 v68; // [rsp+248h] [rbp+140h]
  __int64 *v69; // [rsp+250h] [rbp+148h]
  __int64 v70; // [rsp+258h] [rbp+150h] BYREF
  volatile signed __int32 *v71; // [rsp+260h] [rbp+158h]
  __int64 *v72; // [rsp+268h] [rbp+160h] BYREF
  __int64 *v73; // [rsp+270h] [rbp+168h] BYREF
  _QWORD v74[2]; // [rsp+278h] [rbp+170h] BYREF
  __int128 v75; // [rsp+288h] [rbp+180h]
  __int64 v76; // [rsp+298h] [rbp+190h] BYREF
  __int128 v77; // [rsp+2A8h] [rbp+1A0h]
  _QWORD v78[2]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v79; // [rsp+2C8h] [rbp+1C0h]
  __int64 v80; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int128 v81; // [rsp+2E8h] [rbp+1E0h]
  _QWORD v82[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int128 v83; // [rsp+308h] [rbp+200h]
  __int64 v84; // [rsp+318h] [rbp+210h] BYREF
  __int128 v85; // [rsp+328h] [rbp+220h]
  __int64 v86; // [rsp+338h] [rbp+230h] BYREF
  __int128 v87; // [rsp+348h] [rbp+240h]
  __int64 *v88[2]; // [rsp+358h] [rbp+250h] BYREF
  __int64 *v89[2]; // [rsp+368h] [rbp+260h] BYREF
  __int64 *v90[2]; // [rsp+378h] [rbp+270h] BYREF
  __int64 *v91[2]; // [rsp+388h] [rbp+280h] BYREF
  __int64 *v92[2]; // [rsp+398h] [rbp+290h] BYREF
  __m128i v93; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v94; // [rsp+3B8h] [rbp+2B0h] BYREF

  v68 = -2LL;
  v90[0] = 0LL;
  v90[1] = 0LL;
  v75 = 0LL;
  sub_18000F3F4(v74, (__int64)&qword_18025C5D8);
  v77 = 0LL;
  sub_18000F3F4(&v76, (__int64)&qword_18025C5B8);
  v93.m128i_i64[0] = (__int64)v74;
  v93.m128i_i64[1] = (__int64)v78;
  v58 = v93;
  sub_1800BCDD0(v90, &v58);
  `eh vector destructor iterator'(v74, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v92[0] = 0LL;
  v92[1] = 0LL;
  v31 = 0LL;
  sub_18000F3F4(v30, (__int64)&qword_18025C5D8);
  v93.m128i_i64[0] = (__int64)v30;
  v93.m128i_i64[1] = (__int64)v32;
  v57 = v93;
  sub_1800BCDD0(v92, &v57);
  `eh vector destructor iterator'(v30, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v89[0] = 0LL;
  v89[1] = 0LL;
  v79 = 0LL;
  sub_18000F3F4(v78, (__int64)&qword_18025C618);
  v81 = 0LL;
  sub_18000F3F4(&v80, (__int64)&qword_18025C5D8);
  v93.m128i_i64[0] = (__int64)v78;
  v93.m128i_i64[1] = (__int64)v82;
  v59 = v93;
  sub_1800BCDD0(v89, &v59);
  `eh vector destructor iterator'(v78, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v91[0] = 0LL;
  v91[1] = 0LL;
  v83 = 0LL;
  sub_18000F3F4(v82, (__int64)&qword_18025C618);
  v85 = 0LL;
  sub_18000F3F4(&v84, (__int64)&qword_18025C5D8);
  v87 = 0LL;
  sub_18000F3F4(&v86, (__int64)&qword_18025C5B8);
  v93.m128i_i64[0] = (__int64)v82;
  v93.m128i_i64[1] = (__int64)v88;
  v60 = v93;
  sub_1800BCDD0(v91, &v60);
  `eh vector destructor iterator'(v82, 0x20uLL, 3uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A630C((__int64)v29);
  v4 = sub_1800A4188(a2, v29);
  sub_1800A630C((__int64)&v25);
  v5 = sub_1800A4188(a2, &v25);
  sub_1800A630C((__int64)v28);
  v24 = sub_1800A4188(a2, v28);
  sub_1800A630C((__int64)v27);
  v6 = sub_1800A4188(a2, v27);
  v23 = 0LL;
  v88[0] = 0LL;
  v88[1] = 0LL;
  v33 = 0LL;
  sub_18000F3F4(v32, (__int64)&qword_18025C6F8);
  v93.m128i_i64[0] = (__int64)v32;
  v93.m128i_i64[1] = (__int64)&v34;
  v61 = v93;
  sub_1800BCDD0(v88, &v61);
  `eh vector destructor iterator'(v32, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A630C((__int64)&v26);
  v93 = (__m128i)(unsigned __int64)sub_1800A4188(a2, &v26);
  v7 = &v93;
  do
  {
    v8 = v7->m128i_i64[0];
    v9 = sub_1800A8550(*(_QWORD *)(a1 + 56), &v62, v6 | v7->m128i_i64[0], 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v23, v9);
    v10 = v63;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    v11 = *(_QWORD *)(a1 + 112);
    v39 = 0;
    v40 = v11;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    sub_1800F9420(v23, &v39);
    sub_1800F87C0(v23, 1, 1, 3, 1);
    v12 = sub_1800A8550(*(_QWORD *)(a1 + 56), &v64, v24 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v23, v12);
    v13 = v65;
    if ( v65 )
    {
      if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v14 = *(_QWORD *)(a1 + 112);
    v34 = 0;
    v35 = v14;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    sub_1800F9420(v23, &v34);
    sub_1800F87C0(v23, 0, 1, 3, 1);
    v15 = sub_1800A8550(*(_QWORD *)(a1 + 56), &v70, v5 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v23, v15);
    v16 = v71;
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v17 = *(_QWORD *)(a1 + 112);
    v44 = 0;
    v45 = v17;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    sub_1800F9420(v23, &v44);
    sub_1800F87C0(v23, 1, 1, 3, 1);
    v18 = sub_1800A8550(*(_QWORD *)(a1 + 56), &v66, v4 | v8, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v23, v18);
    v19 = v67;
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    v20 = *(_QWORD *)(a1 + 112);
    v49 = 0;
    v50 = v20;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800F9420(v23, &v49);
    sub_1800F87C0(v23, 0, 1, 3, 1);
    v7 = (__m128i *)((char *)v7 + 8);
  }
  while ( v7 != (__m128i *)&v94 );
  v69 = (__int64 *)*v88[0];
  sub_1800A6058((__int64 ***)v88, &v72, v69, v88[0]);
  j_j__o_free(v88[0]);
  if ( *((_QWORD *)&v23 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v21 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  sub_1800A6058((__int64 ***)v91, &v73, *(__int64 **)v91[0], v91[0]);
  j_j__o_free(v91[0]);
  sub_1800A6058((__int64 ***)v89, &v54, *(__int64 **)v89[0], v89[0]);
  j_j__o_free(v89[0]);
  sub_1800A6058((__int64 ***)v92, &v55, *(__int64 **)v92[0], v92[0]);
  j_j__o_free(v92[0]);
  sub_1800A6058((__int64 ***)v90, &v56, *(__int64 **)v90[0], v90[0]);
  return j_j__o_free(v90[0]);
}
