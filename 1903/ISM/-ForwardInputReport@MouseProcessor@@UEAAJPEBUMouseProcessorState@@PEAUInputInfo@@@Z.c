/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18012B480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A778 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800764CC (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18012B970 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        const char *a4)
{
  char v6; // bp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  struct InputInfo *v10; // rdx
  int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  unsigned int v13; // esi
  const struct std::nothrow_t *v14; // rdx
  int v16; // ebx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct InputInfo *v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 112) )
  {
    if ( *((_DWORD *)a3 + 31) )
    {
      *((_DWORD *)a3 + 31) = 2 - (*((_BYTE *)a3 + 129) != 0);
    }
    else
    {
      v16 = MouseProcessor::SynthesizeMouseInput(a3);
      if ( v16 < 0 )
      {
        v17 = 322LL;
        goto LABEL_21;
      }
    }
    return 0LL;
  }
  v6 = 1;
  v7 = 0;
  if ( (*((_BYTE *)this + 88) & 0x10) != 0 )
  {
    if ( *((_BYTE *)this + 113) )
    {
      v7 = 155670;
    }
    else
    {
      v7 = 90134;
      *((_BYTE *)this + 113) = 1;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 213) + 80LL))(
           *((_QWORD *)this + 213),
           0LL,
           166666LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        257LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
  }
  else if ( *((_BYTE *)this + 113) )
  {
    v7 = 286720;
    *((_BYTE *)this + 113) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *))(**((_QWORD **)this + 213) + 96LL))(
           *((_QWORD *)this + 213),
           a2);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        268LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)a3 + 31) = 4;
  if ( !v6 )
  {
LABEL_19:
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 24LL))(
            *((_QWORD *)this + 12),
            *((unsigned int *)a3 + 27),
            *((unsigned int *)a3 + 28));
    if ( v16 < 0 )
    {
      v17 = 307LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
    return 0LL;
  }
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (void **)&v19,
    0x168uLL,
    (__int64)a3,
    a4);
  v10 = v19;
  *(_DWORD *)v19 = 8;
  *((_DWORD *)v10 + 2) = *((_DWORD *)a3 + 2);
  *((_QWORD *)v10 + 2) = *((_QWORD *)a3 + 2);
  *((_DWORD *)v10 + 53) = 1;
  *((_DWORD *)v10 + 54) = 2;
  *((_DWORD *)v10 + 55) = 2;
  *((_DWORD *)v10 + 57) = v7;
  *((_DWORD *)v10 + 62) = *((_DWORD *)a3 + 27);
  *((_DWORD *)v10 + 63) = *((_DWORD *)a3 + 28);
  *((_QWORD *)v10 + 33) = *((_QWORD *)v10 + 31);
  *((_DWORD *)v10 + 70) = *((_DWORD *)v10 + 2);
  *((_QWORD *)v10 + 37) = *((_QWORD *)v10 + 2);
  v11 = (unsigned int)InjectionDevice::Inject((MouseProcessor *)((char *)this + 120), v10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( v19 )
      operator delete(v19, v12);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
    (const char *)(unsigned int)v11);
  if ( v19 )
    operator delete(v19, v14);
  return v13;
}
