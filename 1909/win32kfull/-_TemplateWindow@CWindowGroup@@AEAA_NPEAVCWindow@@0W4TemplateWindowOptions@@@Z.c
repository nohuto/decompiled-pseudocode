/*
 * XREFs of ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C023DE60
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023CC98 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023CD34 (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023DEE0 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C023DB60 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 */

char __fastcall CWindowGroup::_TemplateWindow(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v6; // bl
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  if ( a2 == a3 )
    return 1;
  v7 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  LOBYTE(a2) = 1;
  v8 = HMValidateHandleNoSecure(v7, a2, a3);
  if ( v8 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
    v6 = CWindow::TemplateWindow(a3, v8, a4);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  }
  return v6;
}
