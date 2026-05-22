/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800EE430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x1800EE678 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  char v5; // si
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  __int64 v12; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  int v16[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  int v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+64h] [rbp-9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+588h]

  if ( *((_BYTE *)this + 88) )
  {
    v5 = 1;
    memset_0(v16, 0, 0x640uLL);
    v6 = (*((_BYTE *)this + 64) & 0x10) == 0;
    v16[2] = *((_DWORD *)a3 + 2);
    v17 = *((_QWORD *)a3 + 2);
    v22 = *((_DWORD *)a3 + 16);
    v23 = *((_DWORD *)a3 + 17);
    v18 = 1600;
    v16[0] = 8;
    v19 = 1;
    v20 = 1;
    if ( v6 )
    {
      if ( *((_BYTE *)this + 89) )
      {
        v9 = *((_QWORD *)this + 137);
        v21 = 0;
        *((_BYTE *)this + 89) = 0;
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x101,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
            (const char *)(unsigned int)v10);
          JUMPOUT(0x1800EE671LL);
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v7 = *((_QWORD *)this + 137);
      v21 = 3;
      *((_BYTE *)this + 89) = 1;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 166666LL);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
    }
    *((_DWORD *)a3 + 397) = 4;
    if ( v5 )
    {
      if ( !*((_BYTE *)this + 1088) )
      {
        v11 = -2147418113;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
          (const char *)(unsigned int)v11);
        return (unsigned int)v11;
      }
      v12 = *((_QWORD *)this + 12);
      v16[1] = *((_DWORD *)this + 26);
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, v16);
      if ( v11 < 0 )
        goto LABEL_13;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 24LL))(
            *((_QWORD *)this + 9),
            *((unsigned int *)a3 + 16),
            *((unsigned int *)a3 + 17));
    if ( v14 < 0 )
    {
      v15 = 274LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
  }
  else if ( *((_DWORD *)a3 + 397) )
  {
    if ( *((_BYTE *)a3 + 1593) )
    {
      *((_DWORD *)a3 + 397) = 1;
    }
    else
    {
      *((_DWORD *)a3 + 397) = 2;
      *((_DWORD *)a3 + 133) = *((_DWORD *)a3 + 16);
      *((_DWORD *)a3 + 134) = *((_DWORD *)a3 + 17);
    }
  }
  else
  {
    v14 = MouseProcessor::SynthesizeMouseInput(a3);
    if ( v14 < 0 )
    {
      v15 = 293LL;
      goto LABEL_16;
    }
  }
  return 0LL;
}
