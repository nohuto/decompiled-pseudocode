/*
 * XREFs of ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016CA74
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016EF00 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18016C1C0 (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18016C880 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016C8C8 (--4-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType.c)
 */

__int64 __fastcall JumpViewProvider::ShowJumpViewActivity::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    a1,
    *(_DWORD *)(a1 + 32) != 0);
  v5[0] = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (_QWORD *)a1,
    a2);
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v5);
  return a1;
}
