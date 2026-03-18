/*
 * XREFs of ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BAF84
 * Callers:
 *     ?CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801B0F30 (-CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@P.c)
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18003D8E8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1180 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800D1A08 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PopAllSameSize@CSuperWetInkDataCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI11@Z @ 0x1801BB114 (-PopAllSameSize@CSuperWetInkDataCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI11@Z.c)
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 *     memcpy_s_1 @ 0x1801BB3F0 (memcpy_s_1.c)
 */

__int64 __fastcall CRemoteSuperWetSharedSection::LookupPerFrameData(__int64 a1, int a2, __int64 a3)
{
  gsl::details **v3; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  gsl::details *v8; // rcx
  void *v9; // rsi
  rsize_t v10; // r15
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  void *Source; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  rsize_t SourceSize; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v17 = a2;
  v3 = (gsl::details **)(a1 + 32);
  result = anonymous_namespace_::TryOpenVmConsumerQueue(
             a1 + 32,
             a1 + 40,
             &CVmSharedSection::sc_perFrameDataVmSharedSectionGuid);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    std::vector<unsigned char>::vector<unsigned char>((__int64)&Source, *((unsigned int *)*v3 + 2));
    v8 = *v3;
    v9 = Source;
    v13[0] = v15 - (_QWORD)Source;
    if ( v15 - (__int64)Source < 0 || (v13[1] = Source) == 0LL && v15 )
    {
      `gsl::details::get_terminate_handler'::`2'::handler(v8);
      __debugbreak();
    }
    CSuperWetInkDataCircularQueue::PopAllSameSize(
      (_DWORD)v8,
      (unsigned int)v13,
      *(_DWORD *)(a1 + 48),
      (unsigned int)&v17,
      (__int64)&SourceSize,
      a1 + 48);
    if ( v17 )
    {
      v10 = (unsigned int)SourceSize;
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        a3,
        (unsigned int)SourceSize);
      memcpy_s_1(*(void *const *)a3, *(_QWORD *)(a3 + 8) - *(_QWORD *)a3, v9, (unsigned int)v10);
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 - *(_QWORD *)(a1 + 56) != v10 )
      {
        std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
          a1 + 56,
          (unsigned int)v10);
        v11 = *(_QWORD *)(a1 + 64);
      }
      memcpy_s_1(*(void *const *)(a1 + 56), v11 - *(_QWORD *)(a1 + 56), v9, v10);
      *(_DWORD *)(a1 + 80) = 5;
    }
    else if ( *(_DWORD *)(a1 + 48) && (v12 = *(_DWORD *)(a1 + 80)) != 0 )
    {
      *(_DWORD *)(a1 + 80) = v12 - 1;
      std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        a3,
        *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56));
      memcpy_s_1(
        *(void *const *)a3,
        *(_QWORD *)(a3 + 8) - *(_QWORD *)a3,
        *(const void *const *)(a1 + 56),
        *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56));
    }
    else
    {
      v7 = -2147467259;
    }
    std::vector<unsigned char>::_Tidy((__int64 *)&Source);
    return v7;
  }
  return result;
}
