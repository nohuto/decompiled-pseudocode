/*
 * XREFs of ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x180074338
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x180070C80 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayDevice::AddViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rbx
  char *v13; // rsi
  _DWORD *v14; // r15
  int v15; // ecx
  char *v16; // rsi
  __int64 v17; // rcx
  void (*v18)(void); // rax
  LampArrayDevice **v19; // rcx
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v23; // [rsp+80h] [rbp+18h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h] BYREF

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x28uLL);
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return (unsigned int)v6;
  }
  v7 = v5[2];
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)a2);
      v7 = v5[2];
    }
    v5[2] = v8;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 2);
  v9 = v5[2];
  v10 = *((_QWORD *)this + 3);
  v5[4] = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, void **, size_t *))(*(_QWORD *)v9 + 24LL))(
          v9,
          40LL * *(int *)(v10 + 544) + 655,
          &v23,
          &Size);
  v6 = v11;
  if ( v11 >= 0 )
  {
    memset_0(v23, 0, Size);
    v12 = *(_QWORD *)(v10 + 568);
    v13 = (char *)v23;
    _o_wcscpy_s(v23, 257LL, v10 + 24);
    *(_DWORD *)(v13 + 514) = *(_DWORD *)(v10 + 538);
    *((_WORD *)v13 + 259) = *(_WORD *)(v10 + 542);
    v14 = v13 + 520;
    *(_OWORD *)(v13 + 520) = *(_OWORD *)(v10 + 544);
    *((_QWORD *)v13 + 67) = *(_QWORD *)(v10 + 560);
    v13[544] = 0;
    v13[545] = 1;
    _InterlockedExchange((volatile __int32 *)v13 + 137, 0);
    _InterlockedExchange((volatile __int32 *)v13 + 158, 0);
    v13[560] = 0;
    *((_DWORD *)v13 + 138) = 0;
    _InterlockedExchange((volatile __int32 *)v13 + 139, 0);
    v13[561] = 0;
    memset_0(v13 + 562, 0, 0x3FuLL);
    *((_DWORD *)v13 + 157) = -2147418113;
    *((_QWORD *)v13 + 80) = 0x3FF0000000000000LL;
    v15 = 0;
    if ( *((int *)v13 + 130) > 0 )
    {
      v16 = &v13[-v12];
      do
      {
        *(_OWORD *)&v16[v12 + 648] = *(_OWORD *)v12;
        *(_OWORD *)&v16[v12 + 664] = *(_OWORD *)(v12 + 16);
        *(_DWORD *)&v16[v12 + 680] = *(_DWORD *)(v12 + 32);
        ++v15;
        v12 += 36LL;
      }
      while ( v15 < *v14 );
    }
    v5[4] = v23;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v6);
    v17 = v5[2];
    if ( v17 )
    {
      v5[2] = 0LL;
      v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
LABEL_28:
      v18();
      goto LABEL_29;
    }
    goto LABEL_29;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[2] + 32LL))(v5[2], v5[4]);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[2] + 40LL))(v5[2], v5[4]);
    v21 = v5[2];
    if ( v21 )
    {
      v5[2] = 0LL;
      v18 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
      goto LABEL_28;
    }
LABEL_29:
    operator delete(v5, (const struct std::nothrow_t *)0x28);
    return (unsigned int)v6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v19 = (LampArrayDevice **)*((_QWORD *)this + 5);
  if ( *v19 != (LampArrayDevice *)((char *)this + 32) )
    __fastfail(3u);
  *v5 = (char *)this + 32;
  v5[1] = v19;
  *v19 = (LampArrayDevice *)v5;
  *((_QWORD *)this + 5) = v5;
  ++*((_QWORD *)this + 6);
  if ( this != (LampArrayDevice *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return 0LL;
}
