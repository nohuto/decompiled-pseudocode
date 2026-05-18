/*
 * XREFs of sub_18011859C @ 0x18011859C
 * Callers:
 *     sub_18011558C @ 0x18011558C (sub_18011558C.c)
 * Callees:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180095264 @ 0x180095264 (sub_180095264.c)
 *     sub_180118518 @ 0x180118518 (sub_180118518.c)
 *     sub_1801188D8 @ 0x1801188D8 (sub_1801188D8.c)
 *     sub_18011926C @ 0x18011926C (sub_18011926C.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18011859C(__int64 a1)
{
  __int64 v2; // r8
  _BYTE **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rsi
  __int64 v6; // r8
  size_t v7; // rdx
  _BYTE *v8; // rbx
  const char *v9; // r9
  _BYTE *v10; // rbx
  const char *v11; // rdx
  _BYTE *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  _QWORD v21[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-88h]
  _QWORD pExceptionObject[3]; // [rsp+48h] [rbp-80h] BYREF
  _SYSTEM_INFO SystemInfo; // [rsp+60h] [rbp-68h] BYREF

  v21[1] = -2LL;
  v21[2] = a1;
  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  sub_18011926C(a1 + 8);
  sub_18011926C(a1 + 16);
  sub_18011926C(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v3 = (_BYTE **)(a1 + 48);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 15LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 15LL;
  *(_BYTE *)(a1 + 80) = 0;
  v4 = (__int64 *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 104) < 0xDuLL )
  {
    LOBYTE(v2) = 0;
    sub_18000E118(v4, 0xDuLL, v2, "CanvasDefault");
  }
  else
  {
    *(_QWORD *)(a1 + 96) = 13LL;
    memmove(v4, "CanvasDefault", 0xDuLL);
    *(_BYTE *)(a1 + 93) = 0;
  }
  v5 = (__int64 *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  GetSystemInfo(&SystemInfo);
  v7 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v7 = 3LL;
      if ( *(_QWORD *)(a1 + 72) < 3uLL )
      {
        v9 = "ARM";
        goto LABEL_28;
      }
      v10 = (_BYTE *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v10 = *v3;
      *(_QWORD *)(a1 + 64) = 3LL;
      v11 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v7 = 7LL;
        if ( *(_QWORD *)(a1 + 72) >= 7uLL )
        {
          v8 = (_BYTE *)(a1 + 48);
          if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
            v8 = *v3;
          *(_QWORD *)(a1 + 64) = 7LL;
          memmove(v8, "UNKNOWN", 7uLL);
          v8[7] = 0;
          goto LABEL_29;
        }
        v9 = "UNKNOWN";
LABEL_28:
        LOBYTE(v6) = 0;
        sub_18000E118((__int64 *)(a1 + 48), v7, v6, v9);
        goto LABEL_29;
      }
      v7 = 3LL;
      if ( *(_QWORD *)(a1 + 72) < 3uLL )
      {
        v9 = "x64";
        goto LABEL_28;
      }
      v10 = (_BYTE *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v10 = *v3;
      *(_QWORD *)(a1 + 64) = 3LL;
      v11 = "x64";
    }
    memmove(v10, v11, 3uLL);
    v10[3] = 0;
    goto LABEL_29;
  }
  if ( *(_QWORD *)(a1 + 72) < 5uLL )
  {
    v9 = "WIN32";
    goto LABEL_28;
  }
  v12 = (_BYTE *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
    v12 = *v3;
  *(_QWORD *)(a1 + 64) = 5LL;
  memmove(v12, "WIN32", 5uLL);
  v12[5] = 0;
LABEL_29:
  v13 = o__aligned_malloc(160LL, 8LL);
  if ( !v13 )
  {
    sub_180095264(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v14 = sub_1801188D8(v13);
  v15 = v14;
  v21[0] = v14;
  if ( v5 != v21 )
  {
    v15 = 0LL;
    v21[0] = 0LL;
    v16 = *v5;
    *v5 = v14;
    if ( !v16 )
      goto LABEL_35;
    o__aligned_free(v16);
    v14 = 0LL;
  }
  if ( v14 )
    o__aligned_free(v15);
LABEL_35:
  v17 = (void *)*v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v5 + 144), 0LL);
  sub_18011BA5C(v17);
  if ( !_InterlockedExchangeAdd64(&qword_18026B260, 1uLL) )
    sub_180001000((ULONGLONG *)&dword_18025DE60, 0LL, 0LL);
  v18 = sub_180118518(&v22, a1 + 8, a1 + 16, a1 + 48);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), v18);
  v19 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return a1;
}
