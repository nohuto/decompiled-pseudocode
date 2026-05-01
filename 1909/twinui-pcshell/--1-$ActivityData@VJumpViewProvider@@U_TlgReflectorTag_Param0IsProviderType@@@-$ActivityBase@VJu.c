/*
 * XREFs of ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B9FBC
 * Callers:
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1801BA1E0 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801BDB7C (-reset@-$shared_object@V-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014C2A4 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1801BD9D0 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<JumpViewProvider,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((LPVOID *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = wil::details::static_lazy<JumpViewProvider>::get(
           v2,
           lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<70368744177664,5>(*(const struct _TlgProvider_t **)(v3 + 8));
  }
  *(_DWORD *)a1 = 3;
}
