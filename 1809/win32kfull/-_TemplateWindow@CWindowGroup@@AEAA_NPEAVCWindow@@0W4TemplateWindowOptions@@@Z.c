/*
 * XREFs of ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0225FFC
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C0224E40 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C0224EE8 (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0225CD8 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 */

char __fastcall CWindowGroup::_TemplateWindow(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // bl
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v6 = a2 == a3;
  if ( a2 != a3 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    LOBYTE(a2) = 1;
    v8 = HMValidateHandleNoSecure(v7, a2);
    if ( v8 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
      v6 = CWindow::TemplateWindow(a3, v8, a4);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
    }
  }
  return v6;
}
