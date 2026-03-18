/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJXZ @ 0x1801BCD50
 * Callers:
 *     <none>
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180077C08 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x1801BCF28 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(CSuperWetInkScribble *this)
{
  __int64 v2; // rbx
  int v3; // edx
  unsigned int v4; // r15d
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v3 = *(_DWORD *)(v2 + 12);
  v4 = *(_DWORD *)(v2 + 8);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    (__int64)&v10,
    v4 * v3);
  v9[0] = (int)v11 - (int)v10;
  if ( (int)v11 - (int)v10 < 0 || (v9[1] = v10) == 0LL && (_DWORD)v11 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CSharedCircularQueue::PopAll(v2, (unsigned int)v9, *((_DWORD *)this + 6), (unsigned int)&v14, (__int64)&v15);
  v5 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 2) + 32LL))(
             *((_QWORD *)this + 2),
             v10 + v4 * (v14 - v5 - 1),
             v4);
      v7 = v6;
      if ( v6 < 0 )
        break;
      if ( ++v5 >= v14 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
LABEL_7:
    v7 = 0;
  }
  std::vector<unsigned char>::_Tidy(&v10);
  return v7;
}
