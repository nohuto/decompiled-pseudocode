/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     pow @ 0x18002C528 (pow.c)
 *     sqrt @ 0x18002C540 (sqrt.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A6D8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013BFCC (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int v7; // ecx
  int v8; // eax
  const struct MouseProcessorState *v9; // rdx
  struct InputInfo *v10; // r8
  __int64 v11; // rcx
  int v12; // ebp
  double v13; // xmm0_8
  double v14; // xmm7_8
  double v15; // xmm0_8
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_BYTE *)a3 + 98) & 1) != 0 )
  {
    *((_DWORD *)a3 + 31) = 1;
    return 0LL;
  }
  *((_DWORD *)this + 1570) = *((_DWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 1565) = v7;
  v8 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 1593) += v7;
  *((_DWORD *)this + 1594) += v8;
  ++*((_DWORD *)this + 1595);
  *((_DWORD *)this + 1566) = v8;
  if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2364)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 293) )
  {
    MPCMouseProcessor::ProcessPoints((MPCMouseProcessor *)((char *)this - 8), v9, v10);
    if ( !*((_BYTE *)this + 6249) )
    {
      *((_DWORD *)this + 1563) = *(_DWORD *)a2;
      *((_DWORD *)this + 1564) = *((_DWORD *)a2 + 1);
      *((_BYTE *)this + 6249) = 1;
    }
    v11 = *((_QWORD *)a3 + 2);
    if ( (unsigned __int64)(v11 - *((_QWORD *)this + 790)) <= *((_QWORD *)this + 801) )
    {
      v12 = *((_DWORD *)this + 1567);
    }
    else
    {
      *((_DWORD *)this + 1567) = 0;
      v11 = *((_QWORD *)a3 + 2);
      v12 = 0;
    }
    v13 = (double)*((int *)this + 1565);
    *((_QWORD *)this + 790) = v11;
    v14 = pow(v13, 2.0);
    v15 = pow((double)*((int *)this + 1566), 2.0);
    *((_DWORD *)this + 1567) = v12 + (int)sqrt(v14 + v15);
    v16 = MPCMouseProcessor::ForwardInputReportInternal((MPCMouseProcessor *)((char *)this - 8), a2, a3);
    v17 = v16;
    if ( v16 >= 0 )
    {
      *((_DWORD *)this + 1563) = *(_DWORD *)a2;
      *((_DWORD *)this + 1564) = *((_DWORD *)a2 + 1);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v16);
    return v17;
  }
  else
  {
    if ( *((_DWORD *)a3 + 31) )
    {
      *((_DWORD *)a3 + 31) = 1;
      return 0LL;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 584) + 24LL))(
            *((_QWORD *)this + 584),
            a2,
            a3);
    v19 = v18;
    if ( v18 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v18);
    return v19;
  }
}
