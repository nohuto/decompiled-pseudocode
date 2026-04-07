/*
 * XREFs of ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180081CFC
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003FCAC (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18007F428 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CIconicBitmapRegistry::OnLivePreviewDismissed(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  if ( *((_BYTE *)this + 89) )
    CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
  *(_WORD *)((char *)this + 89) = 0;
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  *((_BYTE *)this + 88) = 0;
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
