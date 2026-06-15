/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct _RTL_CRITICAL_SECTION *v5; // r15
  char *v6; // rax
  char *v7; // rsi
  LPCRITICAL_SECTION v8; // r12
  struct _RTL_CRITICAL_SECTION *v9; // r13
  struct ATL::CAtlPlex *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  char **v13; // rcx
  char *v14; // rax
  __int64 v15; // rax
  __int64 *v17; // rbp
  _DWORD *v18; // rbx
  unsigned int v19; // edi
  struct _RTL_CRITICAL_SECTION *v20; // rcx
  char *v21; // rbx
  __int64 *v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-98h] BYREF
  int v24[2]; // [rsp+20h] [rbp-78h]
  char *v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+40h] [rbp-58h]
  char *v28; // [rsp+48h] [rbp-50h]
  char *v29; // [rsp+50h] [rbp-48h]
  ATL::CAtlException *v30; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v32; // [rsp+A0h] [rbp+8h]
  char *v33; // [rsp+A0h] [rbp+8h]
  void *Block; // [rsp+A8h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+B0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+B0h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+B8h] [rbp+20h]

  v26 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  *(_QWORD *)v24 = (char *)this + 176;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v27 = v4;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v19 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      v24[0]);
LABEL_20:
    if ( !v4 )
      return v19;
    v20 = v4;
LABEL_22:
    LeaveCriticalSection(v20);
    return v19;
  }
  v6 = (char *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = a2;
    v6[8] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v28 = v7;
  if ( !v7 )
  {
    v19 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x574,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v24[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x542,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v24[0]);
    operator delete(0LL);
    goto LABEL_20;
  }
  v8 = (LPCRITICAL_SECTION)((char *)this + 32);
  v25 = (char *)this + 32;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v29 = (char *)this + 32;
  v32 = (char *)*((_QWORD *)this + 15);
  if ( *((_QWORD *)this + 19) )
    goto LABEL_10;
  v10 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 18, *((unsigned int *)this + 40), 0x18uLL);
  if ( v10 )
    goto LABEL_7;
  try
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v30 )
  {
    v22 = &v23;
    v17 = v22;
    v18 = (_DWORD *)v22[11];
    if ( *v18 == -1073741571 )
      _o__resetstkoflw();
    *((_DWORD *)v17 + 40) = *v18;
    v19 = (unsigned int)v33;
    v21 = 0LL;
    if ( (int)v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x548,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v19,
        v24[0]);
      if ( v25 != v21 )
        LeaveCriticalSection(lpCriticalSection);
      operator delete(Block);
      if ( *(char **)v24 == v21 )
        return v19;
      v20 = v35;
      goto LABEL_22;
    }
    v5 = v36;
    v9 = lpCriticalSectiona;
    v8 = lpCriticalSectiona;
LABEL_13:
    if ( v8 )
      LeaveCriticalSection(v9);
    operator delete(0LL);
    if ( *(_QWORD *)v24 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
LABEL_7:
  v11 = *((_DWORD *)this + 40);
  for ( i = (_QWORD *)((char *)v10 + 16 * (v11 - 1) + 8 * (unsigned int)(v11 - 1) + 8); --v11 >= 0; i -= 3 )
  {
    *i = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = i;
  }
LABEL_10:
  v13 = (char **)*((_QWORD *)this + 19);
  v14 = *v13;
  v13[2] = v7;
  *((_QWORD *)this + 19) = v14;
  v13[1] = 0LL;
  *v13 = v32;
  ++*((_QWORD *)this + 17);
  v15 = *((_QWORD *)this + 15);
  if ( v15 )
    *(_QWORD *)(v15 + 8) = v13;
  else
    *((_QWORD *)this + 16) = v13;
  *((_QWORD *)this + 15) = v13;
  goto LABEL_13;
}
