/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002AB70
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x18002A930 (std--_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOA_ea_18002A930.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x180089840 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18008C014 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18000F68C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  wil::details::in1diag3 *v4; // rcx
  char *v5; // r14
  char *v6; // rdi
  int v7; // ebx
  _QWORD *v8; // rsi
  _QWORD *v9; // r12
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  char *v12; // rax
  void *v13; // [rsp+28h] [rbp-18h] BYREF
  char *v14; // [rsp+30h] [rbp-10h]
  char *v15; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  if ( *(_QWORD *)this != *((_QWORD *)this + 1) && a2 )
  {
    (*(void (__fastcall **)(_QWORD, void **, _QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3), &v13, a2);
    if ( v15 == v14 )
    {
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        &v13,
        v14,
        &v17);
      v5 = v14;
    }
    else
    {
      *(_DWORD *)v14 = a2;
      v5 = v14 + 4;
      v14 += 4;
    }
    v6 = (char *)v13;
    if ( v13 != v5 )
    {
      do
      {
        v7 = *(_DWORD *)v6;
        v8 = *(_QWORD **)this;
        v9 = (_QWORD *)*((_QWORD *)this + 1);
        while ( v8 != v9 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*v8 + 8LL) + 32LL))(*v8 + 8LL) != v7 )
          ++v8;
        if ( v8 != *((_QWORD **)this + 1) )
        {
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*v8 + 8LL) + 24LL))(*v8 + 8LL);
          v4 = retaddr;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3B,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
              (const char *)(unsigned int)v10);
            JUMPOUT(0x18002ACC4LL);
          }
        }
        v6 += 4;
      }
      while ( v6 != v5 );
      v6 = (char *)v13;
    }
    if ( v6 )
    {
      v11 = (const struct std::nothrow_t *)((v15 - v6) & 0xFFFFFFFFFFFFFFFCuLL);
      v12 = v6;
      if ( (unsigned __int64)v11 >= 0x1000 )
      {
        v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
        v6 = (char *)*((_QWORD *)v6 - 1);
        if ( (unsigned __int64)(v12 - v6 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v4, v11);
          __debugbreak();
        }
      }
      operator delete(v6, v11);
    }
  }
}
