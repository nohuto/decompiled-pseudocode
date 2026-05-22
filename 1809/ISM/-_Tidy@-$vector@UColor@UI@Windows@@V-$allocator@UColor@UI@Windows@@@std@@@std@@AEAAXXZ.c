/*
 * XREFs of ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180008808
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     _MPCInputRouter::Update3DFocusWNF_::_1_::dtor$0 @ 0x18012E0D2 (_MPCInputRouter--Update3DFocusWNF_--_1_--dtor$0.c)
 *     _ViewHierarchy::GetAllAncestors_::_1_::dtor$0 @ 0x18012E4DA (_ViewHierarchy--GetAllAncestors_--_1_--dtor$0.c)
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x18012F099 (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _std::vector_std::pair_unsigned_short_bool__std::allocator_std::pair_unsigned_short_bool_____::_Range_construct_or_tidy_std::pair_unsigned_short_bool__const_____ptr64__::_1_::catch$0 @ 0x18012F410 (_std--vector_std--pair_unsigned_short_bool__std--allocator_std--pair_unsigned_short_bool_____--_.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1801319A7 (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x180133E9C (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 *     _std::vector_enum__Button_std::allocator_enum__Button___::vector_enum__Button_std::allocator_enum__Button____::_1_::catch$0 @ 0x180133EC0 (_std--vector_enum__Button_std--allocator_enum__Button___--vector_enum__Button_std--allocator_enu.c)
 *     _std::vector_enum__Button_std::allocator_enum__Button___::_Range_construct_or_tidy_enum__Button_const_____ptr64__::_1_::catch$0 @ 0x180133F0C (_std--vector_enum__Button_std--allocator_enum__Button___--_Range_construct_or_tidy_enum__Button_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<Windows::UI::Color>::_Tidy(__int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x180008864LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
