/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180070BEC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x180070AE0 (std--_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOA_ea_180070AE0.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x1800C4B20 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1800C4BE0 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180058C70 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  int *v4; // r14
  int *v5; // rdi
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  int *v10; // [rsp+28h] [rbp-18h] BYREF
  int *v11; // [rsp+30h] [rbp-10h]
  int *v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  if ( *((_QWORD *)this + 2) != *((_QWORD *)this + 3) && a2 )
  {
    (*(void (__fastcall **)(_QWORD, int **, _QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, &v10, a2);
    if ( v12 == v11 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v10, v11, &v14);
      v4 = v11;
    }
    else
    {
      *v11 = a2;
      v4 = ++v11;
    }
    v5 = v10;
    if ( v10 != v4 )
    {
      do
      {
        v6 = *v5;
        v7 = *((_QWORD *)this + 2);
        v8 = *((_QWORD *)this + 3);
        while ( v7 != v8
             && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 32LL))(*(_QWORD *)v7 + 8LL) != v6 )
          v7 += 8LL;
        if ( v7 != *((_QWORD *)this + 3) )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 24LL))(*(_QWORD *)v7 + 8LL);
          if ( v9 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              68LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
              (const char *)(unsigned int)v9);
            __debugbreak();
          }
        }
        ++v5;
      }
      while ( v5 != v4 );
      v5 = v10;
    }
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(((char *)v12 - (char *)v5) & 0xFFFFFFFFFFFFFFFCuLL));
  }
}
