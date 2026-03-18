/*
 * XREFs of ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z @ 0x1C01FD52C
 * Callers:
 *     _lambda_4190402a2c2f59325fec7fff7b4602b2_::operator() @ 0x1C01FC2B0 (_lambda_4190402a2c2f59325fec7fff7b4602b2_--operator().c)
 *     _lambda_5263f2b98af0f98a991993afa5dd0415_::operator() @ 0x1C01FC328 (_lambda_5263f2b98af0f98a991993afa5dd0415_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z @ 0x1C01FD274 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z.c)
 */

char __fastcall CWindowGroup::_TemplateWindow(CWindowGroup *this, struct CWindow *a2, struct CWindow *a3, char a4)
{
  char v6; // bl
  unsigned __int64 v7; // rcx
  struct tagWND *v8; // rsi
  CWindowGroup *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v6 = a2 == a3;
  if ( a2 != a3 )
  {
    v7 = *((_QWORD *)a2 + 2);
    LOBYTE(a2) = 1;
    v8 = (struct tagWND *)HMValidateHandleNoSecure(v7, (__int64)a2);
    if ( v8 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
      v6 = CWindow::TemplateWindow(a3, v8, a4);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
    }
  }
  return v6;
}
