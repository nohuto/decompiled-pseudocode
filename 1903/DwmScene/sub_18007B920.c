/*
 * XREFs of sub_18007B920 @ 0x18007B920
 * Callers:
 *     sub_18007C04C @ 0x18007C04C (sub_18007C04C.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 *     sub_180072D90 @ 0x180072D90 (sub_180072D90.c)
 *     sub_180073794 @ 0x180073794 (sub_180073794.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180074354 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     sub_18007B724 @ 0x18007B724 (sub_18007B724.c)
 *     sub_18007DD0C @ 0x18007DD0C (sub_18007DD0C.c)
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 *     sub_18007F958 @ 0x18007F958 (sub_18007F958.c)
 *     sub_1800B4068 @ 0x1800B4068 (sub_1800B4068.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     ?__ExceptionPtrCreate@@YAXPEAX@Z @ 0x1801274D2 (-__ExceptionPtrCreate@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x1801274D8 (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrToBool@@YA_NPEBX@Z @ 0x1801274E4 (-__ExceptionPtrToBool@@YA_NPEBX@Z.c)
 *     ?__ExceptionPtrCurrentException@@YAXPEAX@Z @ 0x1801274EA (-__ExceptionPtrCurrentException@@YAXPEAX@Z.c)
 *     K32GetProcessMemoryInfo @ 0x18012760A (K32GetProcessMemoryInfo.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_18007B920(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 result; // rax
  HANDLE CurrentProcess; // rax
  signed __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  bool v12; // zf
  int v13; // ebx
  float v14; // xmm6_4
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, _QWORD, __m128i *); // rax
  __m128i *v28; // r8
  __int64 v29; // rcx
  std::exception_ptr *v30; // rax
  _BYTE *v31; // rax
  int v32; // [rsp+30h] [rbp-158h]
  __int64 *v33[2]; // [rsp+38h] [rbp-150h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-140h]
  __int64 v35[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i si128; // [rsp+60h] [rbp-128h]
  float v37; // [rsp+70h] [rbp-118h]
  __int64 v38; // [rsp+78h] [rbp-110h] BYREF
  std::exception *v39; // [rsp+80h] [rbp-108h] BYREF
  __int64 *v40; // [rsp+88h] [rbp-100h] BYREF
  __int64 v41; // [rsp+90h] [rbp-F8h]
  __m128i v42; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-D0h]
  __int64 v45; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-C0h]
  __m128i v47; // [rsp+D0h] [rbp-B8h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+E0h] [rbp-A8h] BYREF

  v38 = -2LL;
  v2 = a1;
  v33[0] = a1;
  v34 = a1;
  if ( a1[60] )
  {
    CurrentProcess = GetCurrentProcess();
    K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
    v5 = ppsmemCounters.PeakWorkingSetSize - v2[146];
    v42.m128i_i64[0] = v5;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = 0x8000000000000000uLL;
    v8 = 0LL;
    LODWORD(v9) = 0;
    v10 = (_QWORD *)v2[21];
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
    {
      v13 = 0;
    }
    else
    {
      do
      {
        sub_1800B4068(v11[2], &v45);
        if ( (_DWORD)v45 )
        {
          if ( v46 < v6 )
            v6 = v46;
          if ( v7 < v47.m128i_i64[1] )
            v7 = v47.m128i_i64[1];
          v8 += v47.m128i_i64[0] * (unsigned int)v45;
          LODWORD(v9) = v45 + v9;
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v32 = v9;
      v12 = (_DWORD)v9 == 0;
      LODWORD(v9) = 0;
      if ( v12 )
      {
        v5 = v42.m128i_i64[0];
        v13 = v32;
      }
      else
      {
        v13 = v32;
        v9 = v8 / v32;
        v5 = v42.m128i_i64[0];
      }
    }
    v40 = 0LL;
    v41 = 0LL;
    v14 = (float)(int)v5;
    if ( v5 < 0 )
      v14 = v14 + 1.8446744e19;
    si128 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v35[0]) = 0;
    unknown_libname_113(v35, "Engine Max Memory Usage");
    v37 = v14;
    v42.m128i_i64[0] = (__int64)v35;
    v42.m128i_i64[1] = (__int64)&v38;
    sub_180073794(&v40, &v42);
    `eh vector destructor iterator'(v35, 0x28uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
    if ( v13 )
    {
      v47 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(v45) = 0;
      LOBYTE(v15) = 0;
      sub_18000E118(&v45, 0x1AuLL, v15, "Min Time Per-render-update");
      sub_180072D90((__int64 *)&v40, (__int64)&v42, (size_t *)&v45);
      *(float *)(v42.m128i_i64[0] + 64) = (float)(int)v6 / 1000000.0;
      if ( v47.m128i_i64[1] >= 0x10uLL )
      {
        v17 = v45;
        if ( (unsigned __int64)(v47.m128i_i64[1] + 1) >= 0x1000 )
        {
          v17 = *(_QWORD *)(v45 - 8);
          if ( (unsigned __int64)(v45 - v17 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v17, v47.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v17);
      }
      v47 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(v45) = 0;
      LOBYTE(v16) = 0;
      sub_18000E118(&v45, 0x1AuLL, v16, "Avg Time Per-render-update");
      sub_180072D90((__int64 *)&v40, (__int64)&v42, (size_t *)&v45);
      *(float *)(v42.m128i_i64[0] + 64) = (float)(int)v9 / 1000000.0;
      if ( v47.m128i_i64[1] >= 0x10uLL )
      {
        v19 = v45;
        if ( (unsigned __int64)(v47.m128i_i64[1] + 1) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v45 - 8);
          if ( (unsigned __int64)(v45 - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, v47.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      v47 = _mm_load_si128(xmmword_180144F90);
      LOBYTE(v45) = 0;
      LOBYTE(v18) = 0;
      sub_18000E118(&v45, 0x1AuLL, v18, "Max Time Per-render-update");
      sub_180072D90((__int64 *)&v40, (__int64)&v42, (size_t *)&v45);
      *(float *)(v42.m128i_i64[0] + 64) = (float)(int)v7 / 1000000.0;
      if ( v47.m128i_i64[1] >= 0x10uLL )
      {
        v20 = v45;
        if ( (unsigned __int64)(v47.m128i_i64[1] + 1) >= 0x1000 )
        {
          v20 = *(_QWORD *)(v45 - 8);
          if ( (unsigned __int64)(v45 - v20 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v20, v47.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v20);
      }
    }
    v47 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v45) = 0;
    LOBYTE(v15) = 0;
    sub_18000E118(&v45, 0x14uLL, v15, "Engine Shutting Down");
    v2 = v33[0];
    v21 = v33[0][60];
    v42 = 0LL;
    v42.m128i_i64[0] = sub_18007DD0C(&v42);
    (*(void (__fastcall **)(__int64, __int64 *, __m128i *, __int64 **))(*(_QWORD *)v21 + 40LL))(v21, &v45, &v42, &v40);
    sub_18007ED50(&v42, v33, *(_QWORD *)v42.m128i_i64[0]);
    j_j__o_free(v42.m128i_i64[0]);
    if ( v47.m128i_i64[1] >= 0x10uLL )
    {
      v22 = v45;
      if ( (unsigned __int64)(v47.m128i_i64[1] + 1) >= 0x1000 )
      {
        v22 = *(_QWORD *)(v45 - 8);
        if ( (unsigned __int64)(v45 - v22 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v22, v47.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v22);
    }
    sub_180069CC0((__int64 ***)&v40, v33, (__int64 *)*v40, v40);
    j_j__o_free(v40);
    result = v2[62];
  }
  else
  {
    result = a1[62];
    if ( !result )
      return result;
  }
  if ( result )
  {
    try
    {
      v44 = 15LL;
      v43 = 0LL;
      v42.m128i_i8[0] = 0;
      v40 = 0LL;
      v41 = 0LL;
      __ExceptionPtrCreate(&v40);
      __ExceptionPtrCurrentException(&v40);
      if ( __ExceptionPtrToBool(&v40) )
      {
        v30 = std::exception_ptr::exception_ptr((std::exception_ptr *)v33, (const struct std::exception_ptr *)&v40);
        sub_18007F958(v30);
      }
      __ExceptionPtrDestroy(&v40);
    }
    catch ( std::exception *v39 )
    {
      v31 = (_BYTE *)(*(__int64 (__fastcall **)(std::exception *))(*(_QWORD *)v39 + 8LL))(v39);
      unknown_libname_113(v42.m128i_i64, v31);
      v2 = v34;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v25 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
        + 1000000000 * (perf_counter / perf_frequency)
        - v2[147];
    if ( a2 )
    {
      sub_18007B724((__int64)v2);
      v26 = v2[62];
      v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 40LL);
    }
    else
    {
      v26 = v2[62];
      v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v26 + 32LL);
    }
    v28 = &v42;
    if ( v44 >= 0x10 )
      v28 = (__m128i *)v42.m128i_i64[0];
    result = v27(v26, (unsigned int)(int)(float)((float)(int)v25 / 1000000.0), v28);
    if ( v44 >= 0x10 )
    {
      v29 = v42.m128i_i64[0];
      if ( v44 + 1 >= 0x1000 )
      {
        v29 = *(_QWORD *)(v42.m128i_i64[0] - 8);
        if ( (unsigned __int64)(v42.m128i_i64[0] - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, v44 + 40);
          __debugbreak();
        }
      }
      return j_j__o_free(v29);
    }
  }
  return result;
}
