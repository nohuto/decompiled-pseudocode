/*
 * XREFs of sub_180073BC4 @ 0x180073BC4
 * Callers:
 *     sub_1800BD050 @ 0x1800BD050 (sub_1800BD050.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     sub_18002B7E4 @ 0x18002B7E4 (sub_18002B7E4.c)
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_18006314C @ 0x18006314C (sub_18006314C.c)
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_18006E544 @ 0x18006E544 (sub_18006E544.c)
 *     sub_1800734B0 @ 0x1800734B0 (sub_1800734B0.c)
 *     sub_180075AC0 @ 0x180075AC0 (sub_180075AC0.c)
 *     sub_18007DE1C @ 0x18007DE1C (sub_18007DE1C.c)
 *     sub_18007DE54 @ 0x18007DE54 (sub_18007DE54.c)
 *     sub_1800A59AC @ 0x1800A59AC (sub_1800A59AC.c)
 *     sub_1800E3210 @ 0x1800E3210 (sub_1800E3210.c)
 *     sub_1800E3358 @ 0x1800E3358 (sub_1800E3358.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x18012763C (_Cnd_init_in_situ.c)
 *     K32GetProcessMemoryInfo @ 0x18012771A (K32GetProcessMemoryInfo.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=36
_QWORD *__fastcall sub_180073BC4(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  void *v9; // rax
  __int64 v10; // rcx
  void *v11; // rax
  void *v12; // rbx
  __int64 *v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  HANDLE CurrentProcess; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  void *v22; // [rsp+20h] [rbp-A1h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-99h]
  __int64 v24; // [rsp+30h] [rbp-91h]
  _QWORD *v25; // [rsp+38h] [rbp-89h]
  _QWORD *v26; // [rsp+40h] [rbp-81h]
  _QWORD *v27; // [rsp+48h] [rbp-79h]
  _QWORD *v28; // [rsp+50h] [rbp-71h]
  __int64 v29; // [rsp+58h] [rbp-69h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-61h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+70h] [rbp-51h] BYREF

  v24 = -2LL;
  LODWORD(v23) = a2;
  v25 = a1;
  v26 = a3;
  v27 = a4;
  v28 = a5;
  sub_18006314C((__int64)(a1 + 1), a2);
  *a1 = &Spectre::Engine::Engine::`vftable';
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  sub_18006314C((__int64)(a1 + 14), a2);
  a1[21] = 0LL;
  a1[22] = 0LL;
  a1[21] = sub_18007DE54(a1 + 21);
  v22 = a1 + 23;
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[23] = sub_18006DEEC();
  *((_DWORD *)a1 + 50) = -1082130432;
  *((_DWORD *)a1 + 51) = -1082130432;
  a1[26] = 2LL;
  *((_DWORD *)a1 + 54) = 0;
  *((_DWORD *)a1 + 55) = -1082130432;
  *((_DWORD *)a1 + 56) = -1082130432;
  *(_QWORD *)((char *)a1 + 228) = 2LL;
  *((_DWORD *)a1 + 59) = 0;
  *((_DWORD *)a1 + 60) = 2;
  _InterlockedExchange((volatile __int32 *)a1 + 62, 0);
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  sub_18006314C((__int64)(a1 + 39), a2);
  sub_1800E3210(a1 + 46);
  a1[58] = 0LL;
  a1[59] = 0LL;
  a1[58] = *a3;
  a1[59] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  a1[60] = 0LL;
  a1[61] = 0LL;
  a1[60] = *a4;
  a1[61] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  a1[62] = 0LL;
  a1[63] = 0LL;
  a1[62] = *a5;
  a1[63] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  a1[64] = 0LL;
  a1[65] = 0LL;
  a1[66] = 0LL;
  a1[67] = 0LL;
  *((_DWORD *)a1 + 136) = 0;
  *(_QWORD *)((char *)a1 + 548) = 1LL;
  *((_BYTE *)a1 + 556) = 1;
  *((_DWORD *)a1 + 140) = 1;
  *((_DWORD *)a1 + 142) = 1;
  a1[72] = 0LL;
  a1[73] = 0LL;
  *((_BYTE *)a1 + 592) = 0;
  *((_DWORD *)a1 + 149) = 40960;
  a1[75] = 45312LL;
  a1[76] = 1LL;
  a1[77] = 0LL;
  a1[78] = 0LL;
  a1[79] = 0LL;
  a1[80] = 0LL;
  a1[81] = 0LL;
  *((_DWORD *)a1 + 164) = 0;
  *((_DWORD *)a1 + 166) = 3;
  a1[84] = 0LL;
  a1[85] = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  *((_DWORD *)a1 + 174) = 0;
  a1[88] = 0LL;
  a1[89] = 0LL;
  a1[90] = 0LL;
  a1[91] = 0LL;
  a1[92] = 0LL;
  a1[91] = sub_18002B7E4();
  *((_BYTE *)a1 + 744) = 1;
  memset((char *)a1 + 748, 0, 0x3CuLL);
  sub_18006314C((__int64)(a1 + 101), a2);
  a1[108] = 0LL;
  a1[109] = 0LL;
  a1[110] = 0LL;
  a1[111] = 0LL;
  a1[112] = 0LL;
  a1[113] = 0LL;
  a1[114] = 0LL;
  a1[115] = 0LL;
  a1[116] = 0x8000000000000000uLL;
  *((_DWORD *)a1 + 234) = 0;
  a1[118] = 1LL;
  *((_DWORD *)a1 + 238) = 2139095039;
  *(_QWORD *)((char *)a1 + 956) = 1023960469LL;
  v9 = operator new(0x138uLL);
  v22 = v9;
  if ( v9 )
    v10 = sub_18006E544((__int64)v9);
  else
    v10 = 0LL;
  a1[121] = v10 + 16;
  a1[122] = v10;
  v11 = operator new(0x78uLL);
  v12 = v11;
  v22 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x78uLL);
    v11 = (void *)sub_1800E3358(v12);
  }
  a1[123] = v11;
  a1[134] = 0LL;
  a1[135] = 0LL;
  a1[136] = 0LL;
  a1[135] = sub_180041D90();
  *((_DWORD *)a1 + 274) = 1;
  sub_18006314C((__int64)(a1 + 138), (unsigned int)v23);
  *((_BYTE *)a1 + 1160) = 0;
  a1[147] = 0LL;
  a1[148] = 0LL;
  *((_DWORD *)a1 + 298) = 0;
  *((_DWORD *)a1 + 300) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 151));
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *((_DWORD *)a1 + 342) = -8388609;
  *(_QWORD *)((char *)a1 + 1372) = 2139095039LL;
  a1[173] = 0LL;
  a1[176] = 0LL;
  a1[177] = 7LL;
  *((_WORD *)a1 + 696) = 0;
  sub_180026278((char *)a1 + 1392, &unk_1801E36D8, 0LL);
  a1[178] = 0LL;
  a1[179] = 0LL;
  a1[178] = sub_18007DE1C(a1 + 178);
  v23 = a1 + 180;
  a1[180] = 0LL;
  a1[181] = 0LL;
  a1[180] = sub_18002B7AC();
  sub_180075AC0(a1, 0LL);
  v22 = a1;
  v13 = sub_1800734B0(&v29, &v22);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 64, v13);
  v14 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_1800A59AC(a1[64]);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[147] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  a1[146] = ppsmemCounters.PeakWorkingSetSize;
  v18 = (volatile signed __int32 *)a3[1];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)a4[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = (volatile signed __int32 *)a5[1];
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return a1;
}
