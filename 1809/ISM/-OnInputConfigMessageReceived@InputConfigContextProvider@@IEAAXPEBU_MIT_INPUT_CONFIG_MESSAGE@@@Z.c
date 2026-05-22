/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18009DFF0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x18009E930 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_18009E930.c)
 * Callees:
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18009E1B0 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x18009E4D8 (--$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x18009E6F0 (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  __int64 v3; // rcx
  char *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  bool v7; // zf
  _QWORD *v8; // rbx
  char *v9; // rbx
  __m128i v10; // xmm1
  char *v11; // xmm2_8
  unsigned __int64 v12; // xmm0_8
  char *v13; // rax
  __m128i *v14; // rdx
  __m128i v15; // [rsp+20h] [rbp-30h] BYREF
  char *v16; // [rsp+30h] [rbp-20h]
  __m128i v17; // [rsp+38h] [rbp-18h] BYREF
  char *v18; // [rsp+48h] [rbp-8h]

  v3 = *(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (char *)this + 248);
      if ( (char *)this + 248 != (char *)this + 224 )
        std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
          (char *)this + 248,
          *((_QWORD *)this + 28),
          *((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
      v4 = (char *)*((_QWORD *)this + 31);
      v5 = *((_QWORD *)this + 32) - (_QWORD)v4;
      v15 = (__m128i)1uLL;
      v6 = (_QWORD *)*((_QWORD *)this + 4);
      v7 = v4 == *((char **)this + 32);
      v15.m128i_i64[1] = (unsigned int)(v5 / 24);
      if ( v7 )
        v4 = 0LL;
      v16 = v4;
      v8 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 != v6 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)v8[2] + 24LL))(v8[2], &v15);
          v8 = (_QWORD *)*v8;
        }
        while ( v8 != *((_QWORD **)this + 4) );
      }
    }
  }
  else
  {
    v9 = (char *)a2 + 20;
    v15 = (__m128i)*(unsigned __int64 *)((char *)a2 + 4);
    v15.m128i_i64[1] = *(_QWORD *)((char *)a2 + 12);
    v10 = v15;
    v16 = (char *)a2 + 20;
    v11 = (char *)a2 + 20;
    v18 = (char *)a2 + 20;
    v12 = _mm_srli_si128(v15, 8).m128i_u64[0];
    v17 = v15;
    if ( HIDWORD(v12) )
    {
      v13 = (char *)operator new[](saturated_mul(HIDWORD(v12), 0x54uLL));
      v18 = v13;
      if ( !v13 )
        return;
      memcpy_0(v13, v9, 84LL * (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 12)));
      v11 = v18;
      v10 = v15;
    }
    v14 = (__m128i *)*((_QWORD *)this + 29);
    if ( *((__m128i **)this + 30) == v14 )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>((char *)this + 224, v14, &v17);
    }
    else
    {
      *v14 = v10;
      v14[1].m128i_i64[0] = (__int64)v11;
      *((_QWORD *)this + 29) += 24LL;
    }
  }
}
