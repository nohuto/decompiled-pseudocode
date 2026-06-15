/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000D820
 * Callers:
 *     <none>
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCChildSubmixInstance@@PEAV312@1@Z @ 0x14000F3C8 (-NewNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  _QWORD *v6; // rax
  void *v7; // rbx
  LPCRITICAL_SECTION v8; // r14
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  ATL::CAtlException *v13; // rbx
  unsigned int v14; // ebx
  struct _RTL_CRITICAL_SECTION *v15; // rcx
  char *v16; // [rsp+20h] [rbp-78h]
  int v17; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+20h] [rbp-78h]
  int v19[2]; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v20; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v22; // [rsp+A0h] [rbp+8h] BYREF
  void *Block; // [rsp+A8h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+B0h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v16 = (char *)this + 176;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
  {
    v14 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x544,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      (int)v16);
LABEL_16:
    if ( !v4 )
      return v14;
    v15 = v4;
LABEL_18:
    LeaveCriticalSection(v15);
    return v14;
  }
  v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a2;
    *((_BYTE *)v6 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  Block = v7;
  if ( !v7 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      (int)v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x548,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v18);
    operator delete(0LL);
    goto LABEL_16;
  }
  v8 = (LPCRITICAL_SECTION)((char *)this + 32);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  try
  {
    v22 = (char *)v7;
    v11 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::NewNode(
            (char *)this + 120,
            &v22,
            v10,
            *((_QWORD *)this + 15),
            v16);
    if ( *((_QWORD *)this + 15) )
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL) = v11;
    else
      *((_QWORD *)this + 16) = v11;
    *((_QWORD *)this + 15) = v11;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v13 = v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v22) = *(_DWORD *)v13;
    v14 = (unsigned int)v22;
    if ( (int)v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v22,
        v17);
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection(lpCriticalSection);
      operator delete(Block);
      if ( !*(_QWORD *)v19 )
        return v14;
      v15 = v24;
      goto LABEL_18;
    }
    v5 = v24;
    v9 = lpCriticalSection;
    v8 = lpCriticalSection;
    v4 = v24;
  }
  if ( v8 )
    LeaveCriticalSection(v9);
  operator delete(0LL);
  if ( v4 )
    LeaveCriticalSection(v5);
  return 0LL;
}
