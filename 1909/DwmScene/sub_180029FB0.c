/*
 * XREFs of sub_180029FB0 @ 0x180029FB0
 * Callers:
 *     sub_18002A510 @ 0x18002A510 (sub_18002A510.c)
 * Callees:
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180028198 @ 0x180028198 (sub_180028198.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180029F00 @ 0x180029F00 (sub_180029F00.c)
 *     sub_18002A518 @ 0x18002A518 (sub_18002A518.c)
 *     sub_18002A8C4 @ 0x18002A8C4 (sub_18002A8C4.c)
 *     sub_18002BA7C @ 0x18002BA7C (sub_18002BA7C.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@1@@Z @ 0x18002BFDC (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@1@@Z.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006896C @ 0x18006896C (sub_18006896C.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180029FB0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v13; // rdi
  int v14; // esi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD **v19; // r14
  volatile signed __int32 *v20; // rsi
  int v22; // [rsp+20h] [rbp-E0h]
  __int64 v23; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v24; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v29[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  _BYTE v31[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v33[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v34[5]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v35[5]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[5]; // [rsp+140h] [rbp+40h] BYREF
  _Mtx_t v37; // [rsp+168h] [rbp+68h] BYREF
  __int64 v38; // [rsp+170h] [rbp+70h]
  __int128 v39; // [rsp+178h] [rbp+78h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+188h] [rbp+88h] BYREF
  LARGE_INTEGER v41[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v42; // [rsp+1A8h] [rbp+A8h]

  v26 = -2LL;
  *(_QWORD *)&v25 = a1;
  BYTE2(v22) = *((_BYTE *)a2 + 8);
  if ( BYTE2(v22) )
  {
    if ( !*a2 )
    {
      v25 = *(_OWORD *)std::make_error_code(v31, 1LL);
      sub_180028198(v34, &v25);
      throw (std::system_error *)v34;
    }
    sub_180063778(*a2);
    *((_BYTE *)a2 + 8) = 0;
  }
  BYTE1(v22) = *((_BYTE *)a3 + 8);
  if ( BYTE1(v22) )
  {
    if ( !*a3 )
    {
      v27 = *(_OWORD *)std::make_error_code(v32, 1LL);
      sub_180028198(v35, &v27);
      throw (std::system_error *)v35;
    }
    sub_180063778(*a3);
    *((_BYTE *)a3 + 8) = 0;
  }
  LOBYTE(v22) = *((_BYTE *)a4 + 8);
  if ( (_BYTE)v22 )
  {
    if ( !*a4 )
    {
      v28 = *(_OWORD *)std::make_error_code(v33, 1LL);
      sub_180028198(pExceptionObject, &v28);
      throw (std::system_error *)pExceptionObject;
    }
    sub_180063778(*a4);
    *((_BYTE *)a4 + 8) = 0;
  }
  v8 = *(_DWORD *)(a1 + 512);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
  v10 = v9;
  v23 = __PAIR64__(v8, v9);
  *((_QWORD *)&v39 + 1) = __PAIR64__(v8, v9);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v42) = 0;
  *(_QWORD *)&v39 = *(_QWORD *)(a1 + 480);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v13 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  QueryPerformanceCounter(&PerformanceCount[1]);
  v37 = 0LL;
  v38 = 0LL;
  (*(void (__fastcall **)(_QWORD, _Mtx_t *))(*(_QWORD *)v25 + 320LL))(v25, &v37);
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v25 + 504) + 64LL))(
          *(_QWORD *)(v25 + 504),
          v10,
          v8);
  if ( (_BYTE)v38 )
  {
    v15 = Mtx_unlock(v37);
    if ( v15 )
      std::_Throw_C_error(v15);
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  v18 = 1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16);
  QueryPerformanceCounter(v41);
  if ( v14 == -2005270523 )
  {
    sub_18011DA98(&unk_180259080, 3LL, "Present() returned DXGI_ERROR_DEVICE_REMOVED");
  }
  else if ( v14 == -2005270521 )
  {
    sub_18011DA98(&unk_180259080, 3LL, "Present() returned DXGI_ERROR_DEVICE_RESET");
  }
  else if ( v14 < 0 )
  {
    sub_18011DA98(&unk_180259080, 3LL, "Present() returned error %08x", v14);
  }
  v23 = 0LL;
  v24 = 0LL;
  v19 = (_QWORD **)v25;
  sub_180029C14(v25, &v23);
  if ( v23 )
    sub_1800254C0(v23, v14);
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      v20 = v24;
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  (*(void (__fastcall **)(_QWORD *, LARGE_INTEGER *))(*v19[63] + 136LL))(v19[63], PerformanceCount);
  v29[0] = v39;
  v29[1] = *(_OWORD *)&PerformanceCount[0].LowPart;
  v29[2] = *(_OWORD *)&v41[0].LowPart;
  v30 = v42;
  sub_18002A8C4(v19, v29);
  sub_180029F00(v19);
  sub_18002A518(v19);
  if ( (_BYTE)v22 )
  {
    sub_18002BA7C(a4);
    sub_1800636EC(*a4);
    *((_BYTE *)a4 + 8) = 1;
  }
  if ( BYTE1(v22) )
  {
    sub_18002BA7C(a3);
    sub_1800636EC(*a3);
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( BYTE2(v22) )
  {
    sub_18002BA7C(a2);
    sub_1800636EC(*a2);
    *((_BYTE *)a2 + 8) = 1;
  }
  return sub_18006896C(v19, v13, v18, v18 - v13, v22);
}
