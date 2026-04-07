/*
 * XREFs of ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x18008D3E4
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18007DE7C (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800374E0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCornerRadius(CTopLevelWindow *this, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  struct CTopLevelWindow::WindowFrame *v4; // rax

  v2 = *((_QWORD *)this + 90);
  v3 = 0;
  if ( *(int *)(v2 + 100) >= 0 )
  {
    LOBYTE(a2) = 1;
    v4 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
           *((unsigned int *)this + 146),
           a2,
           (*(_BYTE *)(v2 + 607) & 0x10) != 0);
    if ( v4 )
      return *((unsigned int *)v4 + 471);
  }
  return v3;
}
