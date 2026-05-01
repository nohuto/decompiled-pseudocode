/*
 * XREFs of ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x18024CB5C
 * Callers:
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18024CE20 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyWindowWrapper@@EEAAX_N0@Z @ 0x18024D0C0 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyWindowWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyWindowWrapper::SendViewStateToWindow(LegacyWindowWrapper *this, unsigned __int8 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 200LL))(*((_QWORD *)this + 36));
  v4 = *((int *)this + 76);
  if ( *((_DWORD *)this + 76) )
  {
    if ( (*((_BYTE *)this + 364) & 0x10) == 0 )
    {
      v5 = *((unsigned __int16 *)this + 256) | ((unsigned __int64)*((unsigned __int16 *)this + 258) << 16);
      v6 = *((unsigned __int16 *)this + 260) | (unsigned __int64)(a2 << 17);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 152LL))(
                       *((_QWORD *)this + 36),
                       &v8);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)*v7 + 24LL))(
        *v7,
        v4,
        1LL,
        v5,
        v6);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
    }
  }
}
