/*
 * XREFs of sub_180014D28 @ 0x180014D28
 * Callers:
 *     sub_180015244 @ 0x180015244 (sub_180015244.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 *     sub_1800172F8 @ 0x1800172F8 (sub_1800172F8.c)
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_180017DCC @ 0x180017DCC (sub_180017DCC.c)
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 *     sub_180078298 @ 0x180078298 (sub_180078298.c)
 *     sub_1800783C0 @ 0x1800783C0 (sub_1800783C0.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007C1E8 @ 0x18007C1E8 (sub_18007C1E8.c)
 *     sub_1800BD050 @ 0x1800BD050 (sub_1800BD050.c)
 *     sub_18011539C @ 0x18011539C (sub_18011539C.c)
 *     __std_type_info_compare @ 0x180125BB2 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180014D28(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v8; // r13
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  signed __int32 v11; // eax
  void *v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  volatile signed __int32 *v23; // rbx
  bool v24; // r14
  volatile signed __int32 *v25; // rbx
  __int64 *v26; // r14
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 *result; // rax
  __int64 *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int128 v36; // [rsp+40h] [rbp-218h] BYREF
  __int128 v37; // [rsp+50h] [rbp-208h] BYREF
  __int128 v38; // [rsp+60h] [rbp-1F8h] BYREF
  int v39; // [rsp+70h] [rbp-1E8h]
  __int64 *v40; // [rsp+78h] [rbp-1E0h]
  _QWORD *v41; // [rsp+80h] [rbp-1D8h]
  char v42[8]; // [rsp+88h] [rbp-1D0h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-1C8h]
  __int64 v44; // [rsp+98h] [rbp-1C0h] BYREF
  volatile signed __int32 *v45; // [rsp+A0h] [rbp-1B8h]
  __int64 v46; // [rsp+A8h] [rbp-1B0h]
  _QWORD *v47; // [rsp+B0h] [rbp-1A8h]
  _QWORD *v48; // [rsp+B8h] [rbp-1A0h]
  void *v49; // [rsp+C0h] [rbp-198h]
  __int64 v50; // [rsp+C8h] [rbp-190h]
  Spectre::Utils::SpectreException *v51; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-180h] BYREF
  volatile signed __int32 *v53; // [rsp+E0h] [rbp-178h]
  char v54[8]; // [rsp+E8h] [rbp-170h] BYREF
  volatile signed __int32 *v55; // [rsp+F0h] [rbp-168h]
  __int64 v56[3]; // [rsp+F8h] [rbp-160h] BYREF
  unsigned __int64 v57; // [rsp+110h] [rbp-148h]
  _OWORD v58[2]; // [rsp+120h] [rbp-138h] BYREF
  _OWORD v59[2]; // [rsp+140h] [rbp-118h] BYREF
  char v60[96]; // [rsp+160h] [rbp-F8h] BYREF
  char v61[152]; // [rsp+1C0h] [rbp-98h] BYREF

  v46 = -2LL;
  v40 = a1;
  v47 = a3;
  v48 = a4;
  v41 = a5;
  v8 = 0;
  v39 = 0;
  if ( !*a3 )
  {
    v9 = (__int64 *)sub_18011539C(&v52);
    std::shared_ptr<__ExceptionPtr>::operator=(a3, v9);
    v10 = v53;
    if ( v53 )
    {
      v11 = _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  try
  {
    v13 = operator new(0x660uLL);
    v14 = (int)v13;
    v49 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x660uLL);
      v36 = 0LL;
      v15 = a5[1];
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = a5[1];
      }
      *(_QWORD *)&v36 = *a5;
      *((_QWORD *)&v36 + 1) = v15;
      v37 = 0LL;
      v16 = a4[1];
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = a4[1];
      }
      *(_QWORD *)&v37 = *a4;
      *((_QWORD *)&v37 + 1) = v16;
      v38 = 0LL;
      v17 = a3[1];
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v17 = a3[1];
      }
      *(_QWORD *)&v38 = *a3;
      *((_QWORD *)&v38 + 1) = v17;
      v18 = sub_1800BD050(v14, *(_DWORD *)(a2 + 20), (unsigned int)&v38, (unsigned int)&v37, (__int64)&v36);
    }
    else
    {
      v18 = 0LL;
    }
    v50 = v18;
    v19 = sub_180077E84(v18, v56);
    sub_180017D44(&qword_180259700, v19);
    if ( v57 >= 0x10 )
    {
      v20 = v56[0];
      if ( v57 + 1 >= 0x1000 )
      {
        v20 = *(_QWORD *)(v56[0] - 8);
        if ( (unsigned __int64)(v56[0] - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v57 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
    }
    *(_OWORD *)(v18 + 528) = *(_OWORD *)a2;
    *(_OWORD *)(v18 + 544) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v18 + 560) = *(_QWORD *)(a2 + 32);
    sub_180017DCC(v18 + 568, a2 + 40);
    *(_OWORD *)(v18 + 664) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v18 + 680) = *(_OWORD *)(a2 + 152);
    v44 = 0LL;
    v45 = 0LL;
    v58[0] = *(_OWORD *)(a2 + 136);
    v58[1] = *(_OWORD *)(a2 + 152);
    v21 = sub_1800172F8(v60, a2 + 40);
    sub_1800155E4(v18, &v44, v21, v58);
    sub_1800783C0(v18, a2);
    if ( (unsigned int)_std_type_info_compare(&qword_18025FF48, &qword_18025FF88) )
    {
      v59[0] = *(_OWORD *)(a2 + 136);
      v59[1] = *(_OWORD *)(a2 + 152);
      v22 = sub_1800172F8(v61, a2 + 40);
      sub_1800153F0(v18, v42, v22, v59);
      if ( v43 )
      {
        if ( !_InterlockedDecrement(v43 + 2) )
        {
          v23 = v43;
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          if ( !_InterlockedDecrement(v23 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
    sub_18007B540(v18);
    v24 = 0;
    if ( *(_BYTE *)(a2 + 28) )
    {
      v8 = 1;
      if ( *(_QWORD *)sub_180078298(v18, v54) )
        v24 = 1;
    }
    if ( (v8 & 1) != 0 )
    {
      v25 = v55;
      if ( v55 )
      {
        if ( !_InterlockedDecrement(v55 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( !_InterlockedDecrement(v25 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( v24 )
      sub_18007C1E8(v18);
    v26 = v40;
    *v40 = v18;
    v27 = v45;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
    v28 = (volatile signed __int32 *)a3[1];
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    v29 = (volatile signed __int32 *)a4[1];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    v30 = (volatile signed __int32 *)v41[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
    result = v26;
  }
  catch ( Spectre::Utils::SpectreException *v51 )
  {
    if ( *a5 )
    {
      v32 = (__int64 *)sub_18001153C((__int64)a5);
      v33 = *v32;
      v34 = sub_180078150();
      v35 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v51 + 8LL))(v51);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(v33 + 24))(v32, 0LL, v35, v34);
    }
    throw;
  }
  return result;
}
