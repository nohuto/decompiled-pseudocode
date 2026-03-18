/*
 * XREFs of ?ConsumeTipPoints@CRemoteSuperWetInkScribble@@MEAAJXZ @ 0x1801BCC20
 * Callers:
 *     <none>
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180077C08 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ @ 0x1801BC6F8 (-GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ.c)
 *     ?PopAllSameSize@CSuperWetInkDataCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI11@Z @ 0x1801BC8B4 (-PopAllSameSize@CSuperWetInkDataCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI11@Z.c)
 */

__int64 __fastcall CRemoteSuperWetInkScribble::ConsumeTipPoints(CRemoteSuperWetInkScribble *this)
{
  struct CSuperWetInkDataCircularQueue *TipPointQueue; // rax
  struct CSuperWetInkDataCircularQueue *v3; // rbx
  int v4; // edi
  unsigned int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF

  TipPointQueue = CRemoteSuperWetSharedSection::GetTipPointQueue(*((CRemoteSuperWetSharedSection **)this + 4));
  v10 = 0LL;
  v11 = 0LL;
  v3 = TipPointQueue;
  v12 = 0LL;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    (__int64)&v10,
    *((unsigned int *)TipPointQueue + 2));
  v9[0] = (int)v11 - (int)v10;
  if ( (int)v11 - (int)v10 < 0 || (v9[1] = v10) == 0LL && (_DWORD)v11 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CSuperWetInkDataCircularQueue::PopAllSameSize(v3, (unsigned int *)v9, *((_DWORD *)this + 6), &v14, &v15, &v16);
  if ( v14 && (v4 = 1, (v5 = v14 / v15) != 0) )
  {
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 2) + 32LL))(
             *((_QWORD *)this + 2),
             v10 + v14 - v15 * v4,
             (unsigned int)v15);
      v7 = v6;
      if ( v6 < 0 )
        break;
      if ( ++v4 > v5 )
        goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
LABEL_8:
    v7 = 0;
  }
  std::vector<unsigned char>::_Tidy(&v10);
  return v7;
}
