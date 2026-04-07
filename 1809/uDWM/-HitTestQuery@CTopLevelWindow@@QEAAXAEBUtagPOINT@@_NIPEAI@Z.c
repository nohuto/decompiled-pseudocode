/*
 * XREFs of ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180004224
 * Callers:
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x180004158 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180004300 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180004638 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x1800275FC (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180027674 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::HitTestQuery(
        struct CVisual **this,
        const struct tagPOINT *a2,
        char a3,
        unsigned int a4,
        unsigned int *a5)
{
  CTopLevelWindow *v6; // rdi
  bool v9; // al
  unsigned int *v10; // rsi
  struct CVisual *v11; // rdx
  __int64 v12; // rdx
  struct CVisual *v13; // rcx
  struct tagPOINT v14; // [rsp+20h] [rbp-28h] BYREF
  struct CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v6 = 0LL;
  v9 = CVisual::TransformFromParent((CVisual *)this, a2, &v14);
  v10 = a5;
  if ( v9 )
  {
    CTopLevelWindow::DoHitTest((CTopLevelWindow *)this, &v14, &v15, a5);
    v6 = v15;
  }
  else
  {
    *a5 = 0;
  }
  CTopLevelWindow::UpdateCapturedButton((CTopLevelWindow *)this, a4);
  if ( this[92] )
  {
    v11 = 0LL;
    if ( a4 == *v10 )
      v11 = this[92];
  }
  else
  {
    if ( v6 == (CTopLevelWindow *)this )
      v6 = 0LL;
    v11 = v6;
  }
  CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)this, v11);
  v13 = this[91];
  if ( v13 )
  {
    LOBYTE(v12) = a3;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v13 + 128LL))(v13, v12);
  }
}
