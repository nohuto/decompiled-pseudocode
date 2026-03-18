/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ @ 0x180183D0C
 * Callers:
 *     ?Scribble@CSuperWetInkScribble@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z @ 0x180184040 (-Scribble@CSuperWetInkScribble@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAW4D3D.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180063B14 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800AD4A8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180199454 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(CSuperWetInkScribble *this)
{
  __int64 v2; // rdx
  unsigned int v3; // r15d
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-30h] BYREF
  gsl::details *v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+88h] [rbp+28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = *(_DWORD *)(v2 + 8);
  LODWORD(v2) = *(_DWORD *)(v2 + 12);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    (const void **)&v11,
    v3 * (unsigned int)v2);
  v10[0] = (int)v12 - (int)v11;
  if ( (int)v12 - (int)v11 < 0 || (v10[1] = v11) == 0LL && (_DWORD)v12 )
  {
    gsl::details::terminate(v11);
    JUMPOUT(0x180183E1DLL);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = *((_DWORD *)this + 22);
  v15 = 0;
  CSharedCircularQueue::PopAll(*(_QWORD *)(v4 + 24), (unsigned int)v10, v5, (unsigned int)&v15, (__int64)&v16);
  v6 = 0;
  if ( v15 )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 32LL))(
             *((_QWORD *)this + 2),
             (char *)v11 + v3 * (v15 - v6 - 1),
             v3);
      v8 = v7;
      if ( v7 < 0 )
        break;
      if ( ++v6 >= v15 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
LABEL_7:
    v8 = 0;
  }
  std::vector<unsigned char>::_Tidy((__int64)&v11);
  return v8;
}
