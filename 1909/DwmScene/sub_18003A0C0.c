/*
 * XREFs of sub_18003A0C0 @ 0x18003A0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180026024 @ 0x180026024 (sub_180026024.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180039450 @ 0x180039450 (sub_180039450.c)
 *     sub_1800397B8 @ 0x1800397B8 (sub_1800397B8.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18003B7FC @ 0x18003B7FC (sub_18003B7FC.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall sub_18003A0C0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int16 v15; // cx
  void ***v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  volatile signed __int32 *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  volatile signed __int32 *v28; // rbx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 **v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rbx
  __int64 v39; // rcx
  _BYTE *v40; // rdx
  volatile signed __int32 *v41; // rbx
  __int64 *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v45; // [rsp+40h] [rbp-C0h]
  __int128 v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h]
  __int128 v49; // [rsp+80h] [rbp-80h]
  __int128 *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55[5]; // [rsp+C8h] [rbp-38h] BYREF
  void **v56; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v57; // [rsp+F8h] [rbp-8h]
  __int128 v58; // [rsp+108h] [rbp+8h]
  __int128 *v59; // [rsp+118h] [rbp+18h]
  void ***v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+130h] [rbp+30h] BYREF
  char v62; // [rsp+134h] [rbp+34h]
  bool v63; // [rsp+135h] [rbp+35h]
  bool v64; // [rsp+136h] [rbp+36h]
  char v65[56]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v66; // [rsp+170h] [rbp+70h]
  int v67; // [rsp+178h] [rbp+78h] BYREF
  char v68; // [rsp+17Ch] [rbp+7Ch]
  bool v69; // [rsp+17Dh] [rbp+7Dh]
  bool v70; // [rsp+17Eh] [rbp+7Eh]
  char v71[56]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v72; // [rsp+1B8h] [rbp+B8h]
  __int64 v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74[3]; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int64 v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76[3]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v77; // [rsp+200h] [rbp+100h]
  __int64 v78[4]; // [rsp+208h] [rbp+108h] BYREF
  _QWORD v79[4]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v80[4]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v81[5]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v82[64]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v84; // [rsp+310h] [rbp+210h] BYREF
  __int64 v85; // [rsp+318h] [rbp+218h] BYREF
  __int128 v86; // [rsp+320h] [rbp+220h] BYREF
  __int64 v87; // [rsp+330h] [rbp+230h] BYREF
  volatile signed __int32 *v88; // [rsp+338h] [rbp+238h]
  __int128 v89; // [rsp+340h] [rbp+240h] BYREF
  int v90; // [rsp+350h] [rbp+250h]
  char v91; // [rsp+354h] [rbp+254h]
  bool v92; // [rsp+355h] [rbp+255h]
  bool v93; // [rsp+356h] [rbp+256h]
  _BYTE v94[56]; // [rsp+358h] [rbp+258h] BYREF
  _BYTE *v95; // [rsp+390h] [rbp+290h]
  int v96; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v97; // [rsp+3A4h] [rbp+2A4h]
  __int128 v98; // [rsp+3A8h] [rbp+2A8h]
  int v99; // [rsp+418h] [rbp+318h] BYREF
  int v100; // [rsp+420h] [rbp+320h] BYREF

  v100 = a3;
  v99 = a2;
  v73 = -2LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v7 = *(_QWORD *)(a1 + 72);
        v10 = *(volatile signed __int32 **)(a1 + 80);
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          }
        }
        break;
      }
    }
  }
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    sub_18000E4E8(v79);
    v43 = (unsigned int)sub_18000E4E8(v78);
    sub_18006586C((unsigned int)v82, v43, 52, (unsigned int)v79, 0);
    throw (Spectre::Engine::EngineException *)v82;
  }
  v89 = 0uLL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v11 = *(_QWORD *)(a1 + 72);
        v12 = *(volatile signed __int32 **)(a1 + 80);
        break;
      }
    }
  }
  v89 = 0LL;
  if ( v12 )
    _InterlockedAdd(v12 + 2, 1u);
  *(_QWORD *)&v89 = v11;
  *((_QWORD *)&v89 + 1) = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v15 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v95 = 0LL;
  v90 = a4;
  v91 = HIBYTE(v15) & 1;
  v92 = (v15 & 0x400) != 0;
  v93 = (v15 & 0x200) != 0;
  *(_QWORD *)&v48 = a1;
  *((_QWORD *)&v48 + 1) = &v99;
  *(_QWORD *)&v49 = &v100;
  *((_QWORD *)&v49 + 1) = &a5;
  v50 = &v89;
  v56 = &std::_Func_impl_no_alloc<_lambda_0dbf30e5f39ce2e89102341158ab3b7a_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
  v57 = v48;
  v58 = v49;
  v59 = &v89;
  v60 = &v56;
  sub_180026024((__int64)&v56, (__int64)v94);
  if ( v60 )
  {
    v16 = &v56;
    LOBYTE(v16) = v60 != &v56;
    ((void (__fastcall *)(void ***, void ***))(*v60)[4])(v60, v16);
  }
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v92 && a4 != 1 )
  {
    sub_18000E4E8(v81);
    v42 = sub_18000E4E8(v80);
    sub_180027880(pExceptionObject, v42, 97, (__int64)v81, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v17 = (_QWORD *)sub_18006CE94(v7);
  sub_180015F14(v17, &v51, 1u);
  v18 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v51);
  v19 = v52;
  if ( v52 )
  {
    if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = (_QWORD *)sub_180064408(a1, v74);
  v21 = std::string::append(v20, "Shared Texture", 0xEuLL);
  v54 = 0uLL;
  v53 = *(_OWORD *)v21;
  v54 = *((_OWORD *)v21 + 1);
  v21[2] = 0LL;
  v21[3] = 15LL;
  *(_BYTE *)v21 = 0;
  sub_1800645F4(*v18, &v53);
  if ( v75 >= 0x10 )
  {
    v22 = v74[0];
    if ( v75 + 1 >= 0x1000 )
    {
      v22 = *(_QWORD *)(v74[0] - 8);
      if ( (unsigned __int64)(v74[0] - v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, v75 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
  sub_180064684(*v18, 1LL);
  sub_180064684(*v18, 2LL);
  sub_180064684(*v18, 4LL);
  if ( v91 || v92 || v93 )
  {
    v87 = 0LL;
    v88 = 0LL;
    sub_180039450(v7, &v87);
    v55[2] = 0LL;
    v55[3] = 15LL;
    LOBYTE(v55[0]) = 0;
    LOBYTE(v23) = 0;
    sub_18000E168(v55, 0x1CuLL, v23, "DepthBuffer Readable Sampler");
    sub_1800645F4(v87, v55);
    if ( v91 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 208), &v87);
    if ( v92 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 240), &v87);
    if ( v93 )
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 224), &v87);
    v86 = 0uLL;
    sub_1800397B8(&v86);
    v24 = (_DWORD *)v86;
    *(_DWORD *)v86 = 0;
    v24[1] = 2;
    v24[2] = 2;
    v24[3] = 2;
    v25 = v87;
    v46 = 0LL;
    v26 = *((_QWORD *)&v86 + 1);
    if ( *((_QWORD *)&v86 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL));
      v26 = *((_QWORD *)&v86 + 1);
    }
    v46 = v86;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 48LL))(v25, &v46);
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF) == 1 )
      {
        v27 = *((_QWORD *)&v86 + 1);
        (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
      }
    }
    v28 = v88;
    if ( v88 )
    {
      if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
  }
  v98 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v29 = 2;
  else
    v29 = (a5 & 8) != 0;
  v96 = sub_180029AD8(a4, v29);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v97 = 5;
    v61 = v90;
    v62 = v91;
    v63 = v92;
    v64 = v93;
    v66 = 0LL;
    if ( v95 )
      v66 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v95)(v95, v65);
    sub_18003B7FC(a1, &v61);
  }
  else
  {
    v97 = 3;
    v67 = v90;
    v68 = v91;
    v69 = v92;
    v70 = v93;
    v72 = 0LL;
    if ( v95 )
      v72 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v95)(v95, v71);
    sub_18003AF44(a1, &v67);
  }
  v85 = 0LL;
  sub_18002328C(v89, &v85);
  v44 = 0LL;
  v45 = 0LL;
  v30 = *(_QWORD *)(a1 + 104);
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
    v30 = *(_QWORD *)(a1 + 104);
  }
  v47[0] = *(_QWORD *)(a1 + 96);
  v47[1] = v30;
  sub_1800171D4(&v44, v47);
  v84 = 0LL;
  sub_18003178C(v44, &v84);
  v31 = v85;
  v32 = (__int64 **)(a1 + 112);
  v33 = *(_QWORD *)(a1 + 112);
  if ( v33 )
  {
    *v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v31 + 80LL))(v31, v84, &v96, a1 + 112);
  sub_1800254C0(v89, v34);
  v35 = sub_180064408(a1, v76);
  if ( *(_QWORD *)(v35 + 24) >= 0x10uLL )
    v35 = *(_QWORD *)v35;
  sub_18000EE78(*v32, (const char *)v35);
  if ( v77 >= 0x10 )
  {
    v36 = v76[0];
    if ( v77 + 1 >= 0x1000 )
    {
      v36 = *(_QWORD *)(v76[0] - 8);
      if ( (unsigned __int64)(v76[0] - v36 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v36, v77 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v36);
  }
  v37 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  if ( v45 )
  {
    if ( !_InterlockedDecrement(v45 + 2) )
    {
      v38 = v45;
      (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
      if ( !_InterlockedDecrement(v38 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
    }
  }
  v39 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v95 )
  {
    v40 = v94;
    LOBYTE(v40) = v95 != v94;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v95 + 32LL))(v95, v40);
    v95 = 0LL;
  }
  v41 = (volatile signed __int32 *)*((_QWORD *)&v89 + 1);
  if ( *((_QWORD *)&v89 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
    if ( !_InterlockedDecrement(v41 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
  }
}
