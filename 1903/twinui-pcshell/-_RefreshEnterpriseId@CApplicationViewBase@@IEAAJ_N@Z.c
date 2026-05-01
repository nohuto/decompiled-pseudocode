/*
 * XREFs of ?_RefreshEnterpriseId@CApplicationViewBase@@IEAAJ_N@Z @ 0x18015EF60
 * Callers:
 *     ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x18015E9F0 (-ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::_RefreshEnterpriseId(CApplicationViewBase *this, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    *((_BYTE *)this + 56) = 1;
  v2 = (*(__int64 (__fastcall **)(CApplicationViewBase *))(*(_QWORD *)this + 512LL))(this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
